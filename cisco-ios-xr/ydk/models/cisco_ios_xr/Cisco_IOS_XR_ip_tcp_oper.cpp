
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_tcp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_tcp_oper {

Tcp::Tcp()
    :
    nodes(std::make_shared<Tcp::Nodes>())
{
    nodes->parent = this;

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Tcp::~Tcp()
{
}

bool Tcp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Tcp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Tcp::clone_ptr() const
{
    return std::make_shared<Tcp>();
}

std::string Tcp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Tcp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Tcp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Tcp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Tcp::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false;
}

Tcp::Nodes::~Nodes()
{
}

bool Tcp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Tcp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tcp::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Tcp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tcp::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tcp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tcp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tcp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tcp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tcp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tcp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Tcp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    statistics(std::make_shared<Tcp::Nodes::Node::Statistics>())
{
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Tcp::Nodes::Node::~Node()
{
}

bool Tcp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Tcp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Tcp::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Tcp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tcp::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tcp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Tcp::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tcp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Tcp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Tcp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Tcp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "node-name")
        return true;
    return false;
}

Tcp::Nodes::Node::Statistics::Statistics()
    :
    ipv4_traffic(std::make_shared<Tcp::Nodes::Node::Statistics::Ipv4Traffic>())
	,ipv6_traffic(std::make_shared<Tcp::Nodes::Node::Statistics::Ipv6Traffic>())
{
    ipv4_traffic->parent = this;
    ipv6_traffic->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Tcp::Nodes::Node::Statistics::~Statistics()
{
}

bool Tcp::Nodes::Node::Statistics::has_data() const
{
    return (ipv4_traffic !=  nullptr && ipv4_traffic->has_data())
	|| (ipv6_traffic !=  nullptr && ipv6_traffic->has_data());
}

bool Tcp::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_traffic !=  nullptr && ipv4_traffic->has_operation())
	|| (ipv6_traffic !=  nullptr && ipv6_traffic->has_operation());
}

std::string Tcp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tcp::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tcp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-traffic")
    {
        if(ipv4_traffic == nullptr)
        {
            ipv4_traffic = std::make_shared<Tcp::Nodes::Node::Statistics::Ipv4Traffic>();
        }
        return ipv4_traffic;
    }

    if(child_yang_name == "ipv6-traffic")
    {
        if(ipv6_traffic == nullptr)
        {
            ipv6_traffic = std::make_shared<Tcp::Nodes::Node::Statistics::Ipv6Traffic>();
        }
        return ipv6_traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tcp::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_traffic != nullptr)
    {
        children["ipv4-traffic"] = ipv4_traffic;
    }

    if(ipv6_traffic != nullptr)
    {
        children["ipv6-traffic"] = ipv6_traffic;
    }

    return children;
}

void Tcp::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tcp::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tcp::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-traffic" || name == "ipv6-traffic")
        return true;
    return false;
}

Tcp::Nodes::Node::Statistics::Ipv4Traffic::Ipv4Traffic()
    :
    tcp_checksum_error_packets{YType::uint32, "tcp-checksum-error-packets"},
    tcp_dropped_packets{YType::uint32, "tcp-dropped-packets"},
    tcp_input_packets{YType::uint32, "tcp-input-packets"},
    tcp_output_packets{YType::uint32, "tcp-output-packets"},
    tcp_retransmitted_packets{YType::uint32, "tcp-retransmitted-packets"}
{

    yang_name = "ipv4-traffic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tcp::Nodes::Node::Statistics::Ipv4Traffic::~Ipv4Traffic()
{
}

bool Tcp::Nodes::Node::Statistics::Ipv4Traffic::has_data() const
{
    return tcp_checksum_error_packets.is_set
	|| tcp_dropped_packets.is_set
	|| tcp_input_packets.is_set
	|| tcp_output_packets.is_set
	|| tcp_retransmitted_packets.is_set;
}

bool Tcp::Nodes::Node::Statistics::Ipv4Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_checksum_error_packets.yfilter)
	|| ydk::is_set(tcp_dropped_packets.yfilter)
	|| ydk::is_set(tcp_input_packets.yfilter)
	|| ydk::is_set(tcp_output_packets.yfilter)
	|| ydk::is_set(tcp_retransmitted_packets.yfilter);
}

std::string Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_checksum_error_packets.is_set || is_set(tcp_checksum_error_packets.yfilter)) leaf_name_data.push_back(tcp_checksum_error_packets.get_name_leafdata());
    if (tcp_dropped_packets.is_set || is_set(tcp_dropped_packets.yfilter)) leaf_name_data.push_back(tcp_dropped_packets.get_name_leafdata());
    if (tcp_input_packets.is_set || is_set(tcp_input_packets.yfilter)) leaf_name_data.push_back(tcp_input_packets.get_name_leafdata());
    if (tcp_output_packets.is_set || is_set(tcp_output_packets.yfilter)) leaf_name_data.push_back(tcp_output_packets.get_name_leafdata());
    if (tcp_retransmitted_packets.is_set || is_set(tcp_retransmitted_packets.yfilter)) leaf_name_data.push_back(tcp_retransmitted_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tcp::Nodes::Node::Statistics::Ipv4Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-checksum-error-packets")
    {
        tcp_checksum_error_packets = value;
        tcp_checksum_error_packets.value_namespace = name_space;
        tcp_checksum_error_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-dropped-packets")
    {
        tcp_dropped_packets = value;
        tcp_dropped_packets.value_namespace = name_space;
        tcp_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-input-packets")
    {
        tcp_input_packets = value;
        tcp_input_packets.value_namespace = name_space;
        tcp_input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-output-packets")
    {
        tcp_output_packets = value;
        tcp_output_packets.value_namespace = name_space;
        tcp_output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-retransmitted-packets")
    {
        tcp_retransmitted_packets = value;
        tcp_retransmitted_packets.value_namespace = name_space;
        tcp_retransmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Tcp::Nodes::Node::Statistics::Ipv4Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-checksum-error-packets")
    {
        tcp_checksum_error_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-dropped-packets")
    {
        tcp_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-input-packets")
    {
        tcp_input_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-output-packets")
    {
        tcp_output_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-retransmitted-packets")
    {
        tcp_retransmitted_packets.yfilter = yfilter;
    }
}

bool Tcp::Nodes::Node::Statistics::Ipv4Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-checksum-error-packets" || name == "tcp-dropped-packets" || name == "tcp-input-packets" || name == "tcp-output-packets" || name == "tcp-retransmitted-packets")
        return true;
    return false;
}

Tcp::Nodes::Node::Statistics::Ipv6Traffic::Ipv6Traffic()
    :
    tcp_checksum_error_packets{YType::uint32, "tcp-checksum-error-packets"},
    tcp_dropped_packets{YType::uint32, "tcp-dropped-packets"},
    tcp_input_packets{YType::uint32, "tcp-input-packets"},
    tcp_output_packets{YType::uint32, "tcp-output-packets"},
    tcp_retransmitted_packets{YType::uint32, "tcp-retransmitted-packets"}
{

    yang_name = "ipv6-traffic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Tcp::Nodes::Node::Statistics::Ipv6Traffic::~Ipv6Traffic()
{
}

bool Tcp::Nodes::Node::Statistics::Ipv6Traffic::has_data() const
{
    return tcp_checksum_error_packets.is_set
	|| tcp_dropped_packets.is_set
	|| tcp_input_packets.is_set
	|| tcp_output_packets.is_set
	|| tcp_retransmitted_packets.is_set;
}

bool Tcp::Nodes::Node::Statistics::Ipv6Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_checksum_error_packets.yfilter)
	|| ydk::is_set(tcp_dropped_packets.yfilter)
	|| ydk::is_set(tcp_input_packets.yfilter)
	|| ydk::is_set(tcp_output_packets.yfilter)
	|| ydk::is_set(tcp_retransmitted_packets.yfilter);
}

std::string Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_checksum_error_packets.is_set || is_set(tcp_checksum_error_packets.yfilter)) leaf_name_data.push_back(tcp_checksum_error_packets.get_name_leafdata());
    if (tcp_dropped_packets.is_set || is_set(tcp_dropped_packets.yfilter)) leaf_name_data.push_back(tcp_dropped_packets.get_name_leafdata());
    if (tcp_input_packets.is_set || is_set(tcp_input_packets.yfilter)) leaf_name_data.push_back(tcp_input_packets.get_name_leafdata());
    if (tcp_output_packets.is_set || is_set(tcp_output_packets.yfilter)) leaf_name_data.push_back(tcp_output_packets.get_name_leafdata());
    if (tcp_retransmitted_packets.is_set || is_set(tcp_retransmitted_packets.yfilter)) leaf_name_data.push_back(tcp_retransmitted_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tcp::Nodes::Node::Statistics::Ipv6Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-checksum-error-packets")
    {
        tcp_checksum_error_packets = value;
        tcp_checksum_error_packets.value_namespace = name_space;
        tcp_checksum_error_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-dropped-packets")
    {
        tcp_dropped_packets = value;
        tcp_dropped_packets.value_namespace = name_space;
        tcp_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-input-packets")
    {
        tcp_input_packets = value;
        tcp_input_packets.value_namespace = name_space;
        tcp_input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-output-packets")
    {
        tcp_output_packets = value;
        tcp_output_packets.value_namespace = name_space;
        tcp_output_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-retransmitted-packets")
    {
        tcp_retransmitted_packets = value;
        tcp_retransmitted_packets.value_namespace = name_space;
        tcp_retransmitted_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Tcp::Nodes::Node::Statistics::Ipv6Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-checksum-error-packets")
    {
        tcp_checksum_error_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-dropped-packets")
    {
        tcp_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-input-packets")
    {
        tcp_input_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-output-packets")
    {
        tcp_output_packets.yfilter = yfilter;
    }
    if(value_path == "tcp-retransmitted-packets")
    {
        tcp_retransmitted_packets.yfilter = yfilter;
    }
}

bool Tcp::Nodes::Node::Statistics::Ipv6Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-checksum-error-packets" || name == "tcp-dropped-packets" || name == "tcp-input-packets" || name == "tcp-output-packets" || name == "tcp-retransmitted-packets")
        return true;
    return false;
}

TcpConnection::TcpConnection()
    :
    nodes(std::make_shared<TcpConnection::Nodes>())
{
    nodes->parent = this;

    yang_name = "tcp-connection"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

TcpConnection::~TcpConnection()
{
}

bool TcpConnection::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool TcpConnection::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string TcpConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<TcpConnection::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void TcpConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TcpConnection::clone_ptr() const
{
    return std::make_shared<TcpConnection>();
}

std::string TcpConnection::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TcpConnection::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TcpConnection::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TcpConnection::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TcpConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

TcpConnection::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "tcp-connection"; is_top_level_class = false; has_list_ancestor = false;
}

TcpConnection::Nodes::~Nodes()
{
}

bool TcpConnection::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpConnection::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-connection/" << get_segment_path();
    return path_buffer.str();
}

std::string TcpConnection::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Node()
    :
    id{YType::str, "id"}
    	,
    brief_informations(std::make_shared<TcpConnection::Nodes::Node::BriefInformations>())
	,detail_informations(std::make_shared<TcpConnection::Nodes::Node::DetailInformations>())
	,extended_information(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation>())
	,statistics(std::make_shared<TcpConnection::Nodes::Node::Statistics>())
{
    brief_informations->parent = this;
    detail_informations->parent = this;
    extended_information->parent = this;
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

TcpConnection::Nodes::Node::~Node()
{
}

bool TcpConnection::Nodes::Node::has_data() const
{
    return id.is_set
	|| (brief_informations !=  nullptr && brief_informations->has_data())
	|| (detail_informations !=  nullptr && detail_informations->has_data())
	|| (extended_information !=  nullptr && extended_information->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool TcpConnection::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (brief_informations !=  nullptr && brief_informations->has_operation())
	|| (detail_informations !=  nullptr && detail_informations->has_operation())
	|| (extended_information !=  nullptr && extended_information->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string TcpConnection::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-connection/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string TcpConnection::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-informations")
    {
        if(brief_informations == nullptr)
        {
            brief_informations = std::make_shared<TcpConnection::Nodes::Node::BriefInformations>();
        }
        return brief_informations;
    }

    if(child_yang_name == "detail-informations")
    {
        if(detail_informations == nullptr)
        {
            detail_informations = std::make_shared<TcpConnection::Nodes::Node::DetailInformations>();
        }
        return detail_informations;
    }

    if(child_yang_name == "extended-information")
    {
        if(extended_information == nullptr)
        {
            extended_information = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation>();
        }
        return extended_information;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<TcpConnection::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_informations != nullptr)
    {
        children["brief-informations"] = brief_informations;
    }

    if(detail_informations != nullptr)
    {
        children["detail-informations"] = detail_informations;
    }

    if(extended_information != nullptr)
    {
        children["extended-information"] = extended_information;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void TcpConnection::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-informations" || name == "detail-informations" || name == "extended-information" || name == "statistics" || name == "id")
        return true;
    return false;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformations()
{

    yang_name = "brief-informations"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::BriefInformations::~BriefInformations()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::has_data() const
{
    for (std::size_t index=0; index<brief_information.size(); index++)
    {
        if(brief_information[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::BriefInformations::has_operation() const
{
    for (std::size_t index=0; index<brief_information.size(); index++)
    {
        if(brief_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpConnection::Nodes::Node::BriefInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::BriefInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::BriefInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        for(auto const & c : brief_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::BriefInformations::BriefInformation>();
        c->parent = this;
        brief_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::BriefInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::BriefInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::BriefInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information")
        return true;
    return false;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::BriefInformation()
    :
    pcb_id{YType::uint32, "pcb-id"},
    af_name{YType::enumeration, "af-name"},
    connection_state{YType::enumeration, "connection-state"},
    current_receive_queue_size{YType::uint32, "current-receive-queue-size"},
    current_send_queue_size{YType::uint32, "current-send-queue-size"},
    foreign_port{YType::uint16, "foreign-port"},
    local_pid{YType::uint32, "local-pid"},
    local_port{YType::uint16, "local-port"},
    pcb{YType::uint64, "pcb"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    foreign_address(std::make_shared<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress>())
	,local_address(std::make_shared<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress>())
{
    foreign_address->parent = this;
    local_address->parent = this;

    yang_name = "brief-information"; yang_parent_name = "brief-informations"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::~BriefInformation()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::has_data() const
{
    return pcb_id.is_set
	|| af_name.is_set
	|| connection_state.is_set
	|| current_receive_queue_size.is_set
	|| current_send_queue_size.is_set
	|| foreign_port.is_set
	|| local_pid.is_set
	|| local_port.is_set
	|| pcb.is_set
	|| vrf_id.is_set
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcb_id.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(connection_state.yfilter)
	|| ydk::is_set(current_receive_queue_size.yfilter)
	|| ydk::is_set(current_send_queue_size.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(local_pid.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(pcb.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information" <<"[pcb-id='" <<pcb_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_id.is_set || is_set(pcb_id.yfilter)) leaf_name_data.push_back(pcb_id.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.yfilter)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (current_receive_queue_size.is_set || is_set(current_receive_queue_size.yfilter)) leaf_name_data.push_back(current_receive_queue_size.get_name_leafdata());
    if (current_send_queue_size.is_set || is_set(current_send_queue_size.yfilter)) leaf_name_data.push_back(current_send_queue_size.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_pid.is_set || is_set(local_pid.yfilter)) leaf_name_data.push_back(local_pid.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.yfilter)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-address")
    {
        if(foreign_address == nullptr)
        {
            foreign_address = std::make_shared<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress>();
        }
        return foreign_address;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress>();
        }
        return local_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(foreign_address != nullptr)
    {
        children["foreign-address"] = foreign_address;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-id")
    {
        pcb_id = value;
        pcb_id.value_namespace = name_space;
        pcb_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
        connection_state.value_namespace = name_space;
        connection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-receive-queue-size")
    {
        current_receive_queue_size = value;
        current_receive_queue_size.value_namespace = name_space;
        current_receive_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-send-queue-size")
    {
        current_send_queue_size = value;
        current_send_queue_size.value_namespace = name_space;
        current_send_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pid")
    {
        local_pid = value;
        local_pid.value_namespace = name_space;
        local_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb")
    {
        pcb = value;
        pcb.value_namespace = name_space;
        pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-id")
    {
        pcb_id.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "connection-state")
    {
        connection_state.yfilter = yfilter;
    }
    if(value_path == "current-receive-queue-size")
    {
        current_receive_queue_size.yfilter = yfilter;
    }
    if(value_path == "current-send-queue-size")
    {
        current_send_queue_size.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "local-pid")
    {
        local_pid.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "pcb")
    {
        pcb.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-address" || name == "local-address" || name == "pcb-id" || name == "af-name" || name == "connection-state" || name == "current-receive-queue-size" || name == "current-send-queue-size" || name == "foreign-port" || name == "local-pid" || name == "local-port" || name == "pcb" || name == "vrf-id")
        return true;
    return false;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::ForeignAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "foreign-address"; yang_parent_name = "brief-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::~ForeignAddress()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "local-address"; yang_parent_name = "brief-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformations()
{

    yang_name = "detail-informations"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::~DetailInformations()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::has_data() const
{
    for (std::size_t index=0; index<detail_information.size(); index++)
    {
        if(detail_information[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::DetailInformations::has_operation() const
{
    for (std::size_t index=0; index<detail_information.size(); index++)
    {
        if(detail_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-information")
    {
        for(auto const & c : detail_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation>();
        c->parent = this;
        detail_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::DetailInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::DetailInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-information")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::DetailInformation()
    :
    pcb_id{YType::uint32, "pcb-id"},
    ack_hold_time{YType::uint32, "ack-hold-time"},
    address_family{YType::enumeration, "address-family"},
    auto_rearm{YType::uint32, "auto-rearm"},
    connect_retries{YType::uint16, "connect-retries"},
    connect_retry_interval{YType::uint16, "connect-retry-interval"},
    connection_state{YType::enumeration, "connection-state"},
    current_receive_queue_packet_size{YType::uint32, "current-receive-queue-packet-size"},
    current_receive_queue_size{YType::uint32, "current-receive-queue-size"},
    current_send_queue_size{YType::uint32, "current-send-queue-size"},
    established_time{YType::uint32, "established-time"},
    fib_label_output{YType::uint32, "fib-label-output"},
    fib_pd_ctx{YType::uint32, "fib-pd-ctx"},
    fib_pd_ctx_size{YType::uint32, "fib-pd-ctx-size"},
    foreign_port{YType::uint16, "foreign-port"},
    giveup_time{YType::uint32, "giveup-time"},
    hash_index{YType::uint32, "hash-index"},
    is_retrans_forever{YType::boolean, "is-retrans-forever"},
    keep_alive_time{YType::uint32, "keep-alive-time"},
    krtt{YType::uint32, "krtt"},
    last_ack_sent{YType::uint32, "last-ack-sent"},
    local_app_instance{YType::uint32, "local-app-instance"},
    local_pid{YType::uint32, "local-pid"},
    local_port{YType::uint16, "local-port"},
    max_mss{YType::uint32, "max-mss"},
    max_receive_queue_packet_size{YType::uint32, "max-receive-queue-packet-size"},
    max_receive_queue_size{YType::uint32, "max-receive-queue-size"},
    max_rtt{YType::uint32, "max-rtt"},
    max_send_queue_size{YType::uint32, "max-send-queue-size"},
    min_mss{YType::uint32, "min-mss"},
    min_rtt{YType::uint32, "min-rtt"},
    mss{YType::uint32, "mss"},
    num_labels{YType::uint32, "num-labels"},
    output_ifhandle{YType::uint32, "output-ifhandle"},
    packet_priority{YType::enumeration, "packet-priority"},
    packet_tos{YType::uint16, "packet-tos"},
    packet_ttl{YType::uint16, "packet-ttl"},
    pcb{YType::uint64, "pcb"},
    peer_mss{YType::uint32, "peer-mss"},
    queue_length{YType::uint32, "queue-length"},
    queue_limit{YType::uint32, "queue-limit"},
    queue_zero_length{YType::uint32, "queue-zero-length"},
    receive_adv_window_size{YType::uint32, "receive-adv-window-size"},
    receive_initial_sequence_num{YType::uint32, "receive-initial-sequence-num"},
    receive_next_sequence_num{YType::uint32, "receive-next-sequence-num"},
    receive_window_scale{YType::uint32, "receive-window-scale"},
    receive_window_size{YType::uint32, "receive-window-size"},
    recvbuf_datasize{YType::uint32, "recvbuf-datasize"},
    recvbuf_hiwat{YType::uint32, "recvbuf-hiwat"},
    recvbuf_lowwat{YType::uint32, "recvbuf-lowwat"},
    request_receive_window_scale{YType::uint32, "request-receive-window-scale"},
    retries{YType::uint32, "retries"},
    rqst_send_wnd_scale{YType::uint32, "rqst-send-wnd-scale"},
    rtto{YType::uint32, "rtto"},
    rxsy_naclname{YType::str, "rxsy-naclname"},
    save_queue_size{YType::uint32, "save-queue-size"},
    send_congestion_window_size{YType::uint32, "send-congestion-window-size"},
    send_initial_sequence_num{YType::uint32, "send-initial-sequence-num"},
    send_max_sequence_num{YType::uint32, "send-max-sequence-num"},
    send_next_sequence_num{YType::uint32, "send-next-sequence-num"},
    send_pdu_count{YType::uint32, "send-pdu-count"},
    send_unack_sequence_num{YType::uint32, "send-unack-sequence-num"},
    send_window_scale{YType::uint32, "send-window-scale"},
    send_window_size{YType::uint32, "send-window-size"},
    sendbuf_hiwat{YType::uint32, "sendbuf-hiwat"},
    sendbuf_lowwat{YType::uint32, "sendbuf-lowwat"},
    sendbuf_notify_thresh{YType::uint32, "sendbuf-notify-thresh"},
    so{YType::uint64, "so"},
    sock_error{YType::int32, "sock-error"},
    socket_error{YType::uint32, "socket-error"},
    soft_error{YType::int32, "soft-error"},
    srtt{YType::uint32, "srtt"},
    srtv{YType::uint32, "srtv"},
    syn_wait_time{YType::uint32, "syn-wait-time"},
    tcpcb{YType::uint64, "tcpcb"},
    time_stamp_recent{YType::uint32, "time-stamp-recent"},
    time_stamp_recent_age{YType::uint32, "time-stamp-recent-age"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    feature_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags>())
	,foreign_address(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress>())
	,local_address(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress>())
	,receive_buf_state_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags>())
	,request_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags>())
	,send_buf_state_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags>())
	,socket_option_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags>())
	,socket_state_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags>())
	,state_flags(std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags>())
{
    feature_flags->parent = this;
    foreign_address->parent = this;
    local_address->parent = this;
    receive_buf_state_flags->parent = this;
    request_flags->parent = this;
    send_buf_state_flags->parent = this;
    socket_option_flags->parent = this;
    socket_state_flags->parent = this;
    state_flags->parent = this;

    yang_name = "detail-information"; yang_parent_name = "detail-informations"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::~DetailInformation()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::has_data() const
{
    for (std::size_t index=0; index<sack_blk.size(); index++)
    {
        if(sack_blk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<send_sack_hole.size(); index++)
    {
        if(send_sack_hole[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<timer.size(); index++)
    {
        if(timer[index]->has_data())
            return true;
    }
    for (auto const & leaf : fib_label_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fib_pd_ctx.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return pcb_id.is_set
	|| ack_hold_time.is_set
	|| address_family.is_set
	|| auto_rearm.is_set
	|| connect_retries.is_set
	|| connect_retry_interval.is_set
	|| connection_state.is_set
	|| current_receive_queue_packet_size.is_set
	|| current_receive_queue_size.is_set
	|| current_send_queue_size.is_set
	|| established_time.is_set
	|| fib_pd_ctx_size.is_set
	|| foreign_port.is_set
	|| giveup_time.is_set
	|| hash_index.is_set
	|| is_retrans_forever.is_set
	|| keep_alive_time.is_set
	|| krtt.is_set
	|| last_ack_sent.is_set
	|| local_app_instance.is_set
	|| local_pid.is_set
	|| local_port.is_set
	|| max_mss.is_set
	|| max_receive_queue_packet_size.is_set
	|| max_receive_queue_size.is_set
	|| max_rtt.is_set
	|| max_send_queue_size.is_set
	|| min_mss.is_set
	|| min_rtt.is_set
	|| mss.is_set
	|| num_labels.is_set
	|| output_ifhandle.is_set
	|| packet_priority.is_set
	|| packet_tos.is_set
	|| packet_ttl.is_set
	|| pcb.is_set
	|| peer_mss.is_set
	|| queue_length.is_set
	|| queue_limit.is_set
	|| queue_zero_length.is_set
	|| receive_adv_window_size.is_set
	|| receive_initial_sequence_num.is_set
	|| receive_next_sequence_num.is_set
	|| receive_window_scale.is_set
	|| receive_window_size.is_set
	|| recvbuf_datasize.is_set
	|| recvbuf_hiwat.is_set
	|| recvbuf_lowwat.is_set
	|| request_receive_window_scale.is_set
	|| retries.is_set
	|| rqst_send_wnd_scale.is_set
	|| rtto.is_set
	|| rxsy_naclname.is_set
	|| save_queue_size.is_set
	|| send_congestion_window_size.is_set
	|| send_initial_sequence_num.is_set
	|| send_max_sequence_num.is_set
	|| send_next_sequence_num.is_set
	|| send_pdu_count.is_set
	|| send_unack_sequence_num.is_set
	|| send_window_scale.is_set
	|| send_window_size.is_set
	|| sendbuf_hiwat.is_set
	|| sendbuf_lowwat.is_set
	|| sendbuf_notify_thresh.is_set
	|| so.is_set
	|| sock_error.is_set
	|| socket_error.is_set
	|| soft_error.is_set
	|| srtt.is_set
	|| srtv.is_set
	|| syn_wait_time.is_set
	|| tcpcb.is_set
	|| time_stamp_recent.is_set
	|| time_stamp_recent_age.is_set
	|| vrf_id.is_set
	|| (feature_flags !=  nullptr && feature_flags->has_data())
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (receive_buf_state_flags !=  nullptr && receive_buf_state_flags->has_data())
	|| (request_flags !=  nullptr && request_flags->has_data())
	|| (send_buf_state_flags !=  nullptr && send_buf_state_flags->has_data())
	|| (socket_option_flags !=  nullptr && socket_option_flags->has_data())
	|| (socket_state_flags !=  nullptr && socket_state_flags->has_data())
	|| (state_flags !=  nullptr && state_flags->has_data());
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::has_operation() const
{
    for (std::size_t index=0; index<sack_blk.size(); index++)
    {
        if(sack_blk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<send_sack_hole.size(); index++)
    {
        if(send_sack_hole[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<timer.size(); index++)
    {
        if(timer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : fib_label_output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fib_pd_ctx.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pcb_id.yfilter)
	|| ydk::is_set(ack_hold_time.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(auto_rearm.yfilter)
	|| ydk::is_set(connect_retries.yfilter)
	|| ydk::is_set(connect_retry_interval.yfilter)
	|| ydk::is_set(connection_state.yfilter)
	|| ydk::is_set(current_receive_queue_packet_size.yfilter)
	|| ydk::is_set(current_receive_queue_size.yfilter)
	|| ydk::is_set(current_send_queue_size.yfilter)
	|| ydk::is_set(established_time.yfilter)
	|| ydk::is_set(fib_label_output.yfilter)
	|| ydk::is_set(fib_pd_ctx.yfilter)
	|| ydk::is_set(fib_pd_ctx_size.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(giveup_time.yfilter)
	|| ydk::is_set(hash_index.yfilter)
	|| ydk::is_set(is_retrans_forever.yfilter)
	|| ydk::is_set(keep_alive_time.yfilter)
	|| ydk::is_set(krtt.yfilter)
	|| ydk::is_set(last_ack_sent.yfilter)
	|| ydk::is_set(local_app_instance.yfilter)
	|| ydk::is_set(local_pid.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(max_mss.yfilter)
	|| ydk::is_set(max_receive_queue_packet_size.yfilter)
	|| ydk::is_set(max_receive_queue_size.yfilter)
	|| ydk::is_set(max_rtt.yfilter)
	|| ydk::is_set(max_send_queue_size.yfilter)
	|| ydk::is_set(min_mss.yfilter)
	|| ydk::is_set(min_rtt.yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(num_labels.yfilter)
	|| ydk::is_set(output_ifhandle.yfilter)
	|| ydk::is_set(packet_priority.yfilter)
	|| ydk::is_set(packet_tos.yfilter)
	|| ydk::is_set(packet_ttl.yfilter)
	|| ydk::is_set(pcb.yfilter)
	|| ydk::is_set(peer_mss.yfilter)
	|| ydk::is_set(queue_length.yfilter)
	|| ydk::is_set(queue_limit.yfilter)
	|| ydk::is_set(queue_zero_length.yfilter)
	|| ydk::is_set(receive_adv_window_size.yfilter)
	|| ydk::is_set(receive_initial_sequence_num.yfilter)
	|| ydk::is_set(receive_next_sequence_num.yfilter)
	|| ydk::is_set(receive_window_scale.yfilter)
	|| ydk::is_set(receive_window_size.yfilter)
	|| ydk::is_set(recvbuf_datasize.yfilter)
	|| ydk::is_set(recvbuf_hiwat.yfilter)
	|| ydk::is_set(recvbuf_lowwat.yfilter)
	|| ydk::is_set(request_receive_window_scale.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(rqst_send_wnd_scale.yfilter)
	|| ydk::is_set(rtto.yfilter)
	|| ydk::is_set(rxsy_naclname.yfilter)
	|| ydk::is_set(save_queue_size.yfilter)
	|| ydk::is_set(send_congestion_window_size.yfilter)
	|| ydk::is_set(send_initial_sequence_num.yfilter)
	|| ydk::is_set(send_max_sequence_num.yfilter)
	|| ydk::is_set(send_next_sequence_num.yfilter)
	|| ydk::is_set(send_pdu_count.yfilter)
	|| ydk::is_set(send_unack_sequence_num.yfilter)
	|| ydk::is_set(send_window_scale.yfilter)
	|| ydk::is_set(send_window_size.yfilter)
	|| ydk::is_set(sendbuf_hiwat.yfilter)
	|| ydk::is_set(sendbuf_lowwat.yfilter)
	|| ydk::is_set(sendbuf_notify_thresh.yfilter)
	|| ydk::is_set(so.yfilter)
	|| ydk::is_set(sock_error.yfilter)
	|| ydk::is_set(socket_error.yfilter)
	|| ydk::is_set(soft_error.yfilter)
	|| ydk::is_set(srtt.yfilter)
	|| ydk::is_set(srtv.yfilter)
	|| ydk::is_set(syn_wait_time.yfilter)
	|| ydk::is_set(tcpcb.yfilter)
	|| ydk::is_set(time_stamp_recent.yfilter)
	|| ydk::is_set(time_stamp_recent_age.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (feature_flags !=  nullptr && feature_flags->has_operation())
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (receive_buf_state_flags !=  nullptr && receive_buf_state_flags->has_operation())
	|| (request_flags !=  nullptr && request_flags->has_operation())
	|| (send_buf_state_flags !=  nullptr && send_buf_state_flags->has_operation())
	|| (socket_option_flags !=  nullptr && socket_option_flags->has_operation())
	|| (socket_state_flags !=  nullptr && socket_state_flags->has_operation())
	|| (state_flags !=  nullptr && state_flags->has_operation());
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-information" <<"[pcb-id='" <<pcb_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_id.is_set || is_set(pcb_id.yfilter)) leaf_name_data.push_back(pcb_id.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.yfilter)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (auto_rearm.is_set || is_set(auto_rearm.yfilter)) leaf_name_data.push_back(auto_rearm.get_name_leafdata());
    if (connect_retries.is_set || is_set(connect_retries.yfilter)) leaf_name_data.push_back(connect_retries.get_name_leafdata());
    if (connect_retry_interval.is_set || is_set(connect_retry_interval.yfilter)) leaf_name_data.push_back(connect_retry_interval.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.yfilter)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (current_receive_queue_packet_size.is_set || is_set(current_receive_queue_packet_size.yfilter)) leaf_name_data.push_back(current_receive_queue_packet_size.get_name_leafdata());
    if (current_receive_queue_size.is_set || is_set(current_receive_queue_size.yfilter)) leaf_name_data.push_back(current_receive_queue_size.get_name_leafdata());
    if (current_send_queue_size.is_set || is_set(current_send_queue_size.yfilter)) leaf_name_data.push_back(current_send_queue_size.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.yfilter)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (fib_pd_ctx_size.is_set || is_set(fib_pd_ctx_size.yfilter)) leaf_name_data.push_back(fib_pd_ctx_size.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (giveup_time.is_set || is_set(giveup_time.yfilter)) leaf_name_data.push_back(giveup_time.get_name_leafdata());
    if (hash_index.is_set || is_set(hash_index.yfilter)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (is_retrans_forever.is_set || is_set(is_retrans_forever.yfilter)) leaf_name_data.push_back(is_retrans_forever.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.yfilter)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (krtt.is_set || is_set(krtt.yfilter)) leaf_name_data.push_back(krtt.get_name_leafdata());
    if (last_ack_sent.is_set || is_set(last_ack_sent.yfilter)) leaf_name_data.push_back(last_ack_sent.get_name_leafdata());
    if (local_app_instance.is_set || is_set(local_app_instance.yfilter)) leaf_name_data.push_back(local_app_instance.get_name_leafdata());
    if (local_pid.is_set || is_set(local_pid.yfilter)) leaf_name_data.push_back(local_pid.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (max_mss.is_set || is_set(max_mss.yfilter)) leaf_name_data.push_back(max_mss.get_name_leafdata());
    if (max_receive_queue_packet_size.is_set || is_set(max_receive_queue_packet_size.yfilter)) leaf_name_data.push_back(max_receive_queue_packet_size.get_name_leafdata());
    if (max_receive_queue_size.is_set || is_set(max_receive_queue_size.yfilter)) leaf_name_data.push_back(max_receive_queue_size.get_name_leafdata());
    if (max_rtt.is_set || is_set(max_rtt.yfilter)) leaf_name_data.push_back(max_rtt.get_name_leafdata());
    if (max_send_queue_size.is_set || is_set(max_send_queue_size.yfilter)) leaf_name_data.push_back(max_send_queue_size.get_name_leafdata());
    if (min_mss.is_set || is_set(min_mss.yfilter)) leaf_name_data.push_back(min_mss.get_name_leafdata());
    if (min_rtt.is_set || is_set(min_rtt.yfilter)) leaf_name_data.push_back(min_rtt.get_name_leafdata());
    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.yfilter)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (output_ifhandle.is_set || is_set(output_ifhandle.yfilter)) leaf_name_data.push_back(output_ifhandle.get_name_leafdata());
    if (packet_priority.is_set || is_set(packet_priority.yfilter)) leaf_name_data.push_back(packet_priority.get_name_leafdata());
    if (packet_tos.is_set || is_set(packet_tos.yfilter)) leaf_name_data.push_back(packet_tos.get_name_leafdata());
    if (packet_ttl.is_set || is_set(packet_ttl.yfilter)) leaf_name_data.push_back(packet_ttl.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.yfilter)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (peer_mss.is_set || is_set(peer_mss.yfilter)) leaf_name_data.push_back(peer_mss.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.yfilter)) leaf_name_data.push_back(queue_limit.get_name_leafdata());
    if (queue_zero_length.is_set || is_set(queue_zero_length.yfilter)) leaf_name_data.push_back(queue_zero_length.get_name_leafdata());
    if (receive_adv_window_size.is_set || is_set(receive_adv_window_size.yfilter)) leaf_name_data.push_back(receive_adv_window_size.get_name_leafdata());
    if (receive_initial_sequence_num.is_set || is_set(receive_initial_sequence_num.yfilter)) leaf_name_data.push_back(receive_initial_sequence_num.get_name_leafdata());
    if (receive_next_sequence_num.is_set || is_set(receive_next_sequence_num.yfilter)) leaf_name_data.push_back(receive_next_sequence_num.get_name_leafdata());
    if (receive_window_scale.is_set || is_set(receive_window_scale.yfilter)) leaf_name_data.push_back(receive_window_scale.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.yfilter)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (recvbuf_datasize.is_set || is_set(recvbuf_datasize.yfilter)) leaf_name_data.push_back(recvbuf_datasize.get_name_leafdata());
    if (recvbuf_hiwat.is_set || is_set(recvbuf_hiwat.yfilter)) leaf_name_data.push_back(recvbuf_hiwat.get_name_leafdata());
    if (recvbuf_lowwat.is_set || is_set(recvbuf_lowwat.yfilter)) leaf_name_data.push_back(recvbuf_lowwat.get_name_leafdata());
    if (request_receive_window_scale.is_set || is_set(request_receive_window_scale.yfilter)) leaf_name_data.push_back(request_receive_window_scale.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (rqst_send_wnd_scale.is_set || is_set(rqst_send_wnd_scale.yfilter)) leaf_name_data.push_back(rqst_send_wnd_scale.get_name_leafdata());
    if (rtto.is_set || is_set(rtto.yfilter)) leaf_name_data.push_back(rtto.get_name_leafdata());
    if (rxsy_naclname.is_set || is_set(rxsy_naclname.yfilter)) leaf_name_data.push_back(rxsy_naclname.get_name_leafdata());
    if (save_queue_size.is_set || is_set(save_queue_size.yfilter)) leaf_name_data.push_back(save_queue_size.get_name_leafdata());
    if (send_congestion_window_size.is_set || is_set(send_congestion_window_size.yfilter)) leaf_name_data.push_back(send_congestion_window_size.get_name_leafdata());
    if (send_initial_sequence_num.is_set || is_set(send_initial_sequence_num.yfilter)) leaf_name_data.push_back(send_initial_sequence_num.get_name_leafdata());
    if (send_max_sequence_num.is_set || is_set(send_max_sequence_num.yfilter)) leaf_name_data.push_back(send_max_sequence_num.get_name_leafdata());
    if (send_next_sequence_num.is_set || is_set(send_next_sequence_num.yfilter)) leaf_name_data.push_back(send_next_sequence_num.get_name_leafdata());
    if (send_pdu_count.is_set || is_set(send_pdu_count.yfilter)) leaf_name_data.push_back(send_pdu_count.get_name_leafdata());
    if (send_unack_sequence_num.is_set || is_set(send_unack_sequence_num.yfilter)) leaf_name_data.push_back(send_unack_sequence_num.get_name_leafdata());
    if (send_window_scale.is_set || is_set(send_window_scale.yfilter)) leaf_name_data.push_back(send_window_scale.get_name_leafdata());
    if (send_window_size.is_set || is_set(send_window_size.yfilter)) leaf_name_data.push_back(send_window_size.get_name_leafdata());
    if (sendbuf_hiwat.is_set || is_set(sendbuf_hiwat.yfilter)) leaf_name_data.push_back(sendbuf_hiwat.get_name_leafdata());
    if (sendbuf_lowwat.is_set || is_set(sendbuf_lowwat.yfilter)) leaf_name_data.push_back(sendbuf_lowwat.get_name_leafdata());
    if (sendbuf_notify_thresh.is_set || is_set(sendbuf_notify_thresh.yfilter)) leaf_name_data.push_back(sendbuf_notify_thresh.get_name_leafdata());
    if (so.is_set || is_set(so.yfilter)) leaf_name_data.push_back(so.get_name_leafdata());
    if (sock_error.is_set || is_set(sock_error.yfilter)) leaf_name_data.push_back(sock_error.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.yfilter)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (soft_error.is_set || is_set(soft_error.yfilter)) leaf_name_data.push_back(soft_error.get_name_leafdata());
    if (srtt.is_set || is_set(srtt.yfilter)) leaf_name_data.push_back(srtt.get_name_leafdata());
    if (srtv.is_set || is_set(srtv.yfilter)) leaf_name_data.push_back(srtv.get_name_leafdata());
    if (syn_wait_time.is_set || is_set(syn_wait_time.yfilter)) leaf_name_data.push_back(syn_wait_time.get_name_leafdata());
    if (tcpcb.is_set || is_set(tcpcb.yfilter)) leaf_name_data.push_back(tcpcb.get_name_leafdata());
    if (time_stamp_recent.is_set || is_set(time_stamp_recent.yfilter)) leaf_name_data.push_back(time_stamp_recent.get_name_leafdata());
    if (time_stamp_recent_age.is_set || is_set(time_stamp_recent_age.yfilter)) leaf_name_data.push_back(time_stamp_recent_age.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto fib_label_output_name_datas = fib_label_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fib_label_output_name_datas.begin(), fib_label_output_name_datas.end());
    auto fib_pd_ctx_name_datas = fib_pd_ctx.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fib_pd_ctx_name_datas.begin(), fib_pd_ctx_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature-flags")
    {
        if(feature_flags == nullptr)
        {
            feature_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags>();
        }
        return feature_flags;
    }

    if(child_yang_name == "foreign-address")
    {
        if(foreign_address == nullptr)
        {
            foreign_address = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress>();
        }
        return foreign_address;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "receive-buf-state-flags")
    {
        if(receive_buf_state_flags == nullptr)
        {
            receive_buf_state_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags>();
        }
        return receive_buf_state_flags;
    }

    if(child_yang_name == "request-flags")
    {
        if(request_flags == nullptr)
        {
            request_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags>();
        }
        return request_flags;
    }

    if(child_yang_name == "sack-blk")
    {
        for(auto const & c : sack_blk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk>();
        c->parent = this;
        sack_blk.push_back(c);
        return c;
    }

    if(child_yang_name == "send-buf-state-flags")
    {
        if(send_buf_state_flags == nullptr)
        {
            send_buf_state_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags>();
        }
        return send_buf_state_flags;
    }

    if(child_yang_name == "send-sack-hole")
    {
        for(auto const & c : send_sack_hole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole>();
        c->parent = this;
        send_sack_hole.push_back(c);
        return c;
    }

    if(child_yang_name == "socket-option-flags")
    {
        if(socket_option_flags == nullptr)
        {
            socket_option_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags>();
        }
        return socket_option_flags;
    }

    if(child_yang_name == "socket-state-flags")
    {
        if(socket_state_flags == nullptr)
        {
            socket_state_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags>();
        }
        return socket_state_flags;
    }

    if(child_yang_name == "state-flags")
    {
        if(state_flags == nullptr)
        {
            state_flags = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags>();
        }
        return state_flags;
    }

    if(child_yang_name == "timer")
    {
        for(auto const & c : timer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer>();
        c->parent = this;
        timer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(feature_flags != nullptr)
    {
        children["feature-flags"] = feature_flags;
    }

    if(foreign_address != nullptr)
    {
        children["foreign-address"] = foreign_address;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(receive_buf_state_flags != nullptr)
    {
        children["receive-buf-state-flags"] = receive_buf_state_flags;
    }

    if(request_flags != nullptr)
    {
        children["request-flags"] = request_flags;
    }

    for (auto const & c : sack_blk)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_buf_state_flags != nullptr)
    {
        children["send-buf-state-flags"] = send_buf_state_flags;
    }

    for (auto const & c : send_sack_hole)
    {
        children[c->get_segment_path()] = c;
    }

    if(socket_option_flags != nullptr)
    {
        children["socket-option-flags"] = socket_option_flags;
    }

    if(socket_state_flags != nullptr)
    {
        children["socket-state-flags"] = socket_state_flags;
    }

    if(state_flags != nullptr)
    {
        children["state-flags"] = state_flags;
    }

    for (auto const & c : timer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-id")
    {
        pcb_id = value;
        pcb_id.value_namespace = name_space;
        pcb_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
        ack_hold_time.value_namespace = name_space;
        ack_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rearm")
    {
        auto_rearm = value;
        auto_rearm.value_namespace = name_space;
        auto_rearm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-retries")
    {
        connect_retries = value;
        connect_retries.value_namespace = name_space;
        connect_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval = value;
        connect_retry_interval.value_namespace = name_space;
        connect_retry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
        connection_state.value_namespace = name_space;
        connection_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-receive-queue-packet-size")
    {
        current_receive_queue_packet_size = value;
        current_receive_queue_packet_size.value_namespace = name_space;
        current_receive_queue_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-receive-queue-size")
    {
        current_receive_queue_size = value;
        current_receive_queue_size.value_namespace = name_space;
        current_receive_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-send-queue-size")
    {
        current_send_queue_size = value;
        current_send_queue_size.value_namespace = name_space;
        current_send_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-time")
    {
        established_time = value;
        established_time.value_namespace = name_space;
        established_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-label-output")
    {
        fib_label_output.append(value);
    }
    if(value_path == "fib-pd-ctx")
    {
        fib_pd_ctx.append(value);
    }
    if(value_path == "fib-pd-ctx-size")
    {
        fib_pd_ctx_size = value;
        fib_pd_ctx_size.value_namespace = name_space;
        fib_pd_ctx_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giveup-time")
    {
        giveup_time = value;
        giveup_time.value_namespace = name_space;
        giveup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-index")
    {
        hash_index = value;
        hash_index.value_namespace = name_space;
        hash_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-retrans-forever")
    {
        is_retrans_forever = value;
        is_retrans_forever.value_namespace = name_space;
        is_retrans_forever.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
        keep_alive_time.value_namespace = name_space;
        keep_alive_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krtt")
    {
        krtt = value;
        krtt.value_namespace = name_space;
        krtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-ack-sent")
    {
        last_ack_sent = value;
        last_ack_sent.value_namespace = name_space;
        last_ack_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-app-instance")
    {
        local_app_instance = value;
        local_app_instance.value_namespace = name_space;
        local_app_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pid")
    {
        local_pid = value;
        local_pid.value_namespace = name_space;
        local_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-mss")
    {
        max_mss = value;
        max_mss.value_namespace = name_space;
        max_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-receive-queue-packet-size")
    {
        max_receive_queue_packet_size = value;
        max_receive_queue_packet_size.value_namespace = name_space;
        max_receive_queue_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-receive-queue-size")
    {
        max_receive_queue_size = value;
        max_receive_queue_size.value_namespace = name_space;
        max_receive_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-rtt")
    {
        max_rtt = value;
        max_rtt.value_namespace = name_space;
        max_rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-send-queue-size")
    {
        max_send_queue_size = value;
        max_send_queue_size.value_namespace = name_space;
        max_send_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-mss")
    {
        min_mss = value;
        min_mss.value_namespace = name_space;
        min_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rtt")
    {
        min_rtt = value;
        min_rtt.value_namespace = name_space;
        min_rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
        num_labels.value_namespace = name_space;
        num_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ifhandle")
    {
        output_ifhandle = value;
        output_ifhandle.value_namespace = name_space;
        output_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-priority")
    {
        packet_priority = value;
        packet_priority.value_namespace = name_space;
        packet_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-tos")
    {
        packet_tos = value;
        packet_tos.value_namespace = name_space;
        packet_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-ttl")
    {
        packet_ttl = value;
        packet_ttl.value_namespace = name_space;
        packet_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb")
    {
        pcb = value;
        pcb.value_namespace = name_space;
        pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mss")
    {
        peer_mss = value;
        peer_mss.value_namespace = name_space;
        peer_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
        queue_limit.value_namespace = name_space;
        queue_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-zero-length")
    {
        queue_zero_length = value;
        queue_zero_length.value_namespace = name_space;
        queue_zero_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-adv-window-size")
    {
        receive_adv_window_size = value;
        receive_adv_window_size.value_namespace = name_space;
        receive_adv_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-initial-sequence-num")
    {
        receive_initial_sequence_num = value;
        receive_initial_sequence_num.value_namespace = name_space;
        receive_initial_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-next-sequence-num")
    {
        receive_next_sequence_num = value;
        receive_next_sequence_num.value_namespace = name_space;
        receive_next_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window-scale")
    {
        receive_window_scale = value;
        receive_window_scale.value_namespace = name_space;
        receive_window_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
        receive_window_size.value_namespace = name_space;
        receive_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvbuf-datasize")
    {
        recvbuf_datasize = value;
        recvbuf_datasize.value_namespace = name_space;
        recvbuf_datasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvbuf-hiwat")
    {
        recvbuf_hiwat = value;
        recvbuf_hiwat.value_namespace = name_space;
        recvbuf_hiwat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvbuf-lowwat")
    {
        recvbuf_lowwat = value;
        recvbuf_lowwat.value_namespace = name_space;
        recvbuf_lowwat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-receive-window-scale")
    {
        request_receive_window_scale = value;
        request_receive_window_scale.value_namespace = name_space;
        request_receive_window_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rqst-send-wnd-scale")
    {
        rqst_send_wnd_scale = value;
        rqst_send_wnd_scale.value_namespace = name_space;
        rqst_send_wnd_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtto")
    {
        rtto = value;
        rtto.value_namespace = name_space;
        rtto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxsy-naclname")
    {
        rxsy_naclname = value;
        rxsy_naclname.value_namespace = name_space;
        rxsy_naclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "save-queue-size")
    {
        save_queue_size = value;
        save_queue_size.value_namespace = name_space;
        save_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-congestion-window-size")
    {
        send_congestion_window_size = value;
        send_congestion_window_size.value_namespace = name_space;
        send_congestion_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-initial-sequence-num")
    {
        send_initial_sequence_num = value;
        send_initial_sequence_num.value_namespace = name_space;
        send_initial_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max-sequence-num")
    {
        send_max_sequence_num = value;
        send_max_sequence_num.value_namespace = name_space;
        send_max_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-next-sequence-num")
    {
        send_next_sequence_num = value;
        send_next_sequence_num.value_namespace = name_space;
        send_next_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-pdu-count")
    {
        send_pdu_count = value;
        send_pdu_count.value_namespace = name_space;
        send_pdu_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-unack-sequence-num")
    {
        send_unack_sequence_num = value;
        send_unack_sequence_num.value_namespace = name_space;
        send_unack_sequence_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-window-scale")
    {
        send_window_scale = value;
        send_window_scale.value_namespace = name_space;
        send_window_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-window-size")
    {
        send_window_size = value;
        send_window_size.value_namespace = name_space;
        send_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendbuf-hiwat")
    {
        sendbuf_hiwat = value;
        sendbuf_hiwat.value_namespace = name_space;
        sendbuf_hiwat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendbuf-lowwat")
    {
        sendbuf_lowwat = value;
        sendbuf_lowwat.value_namespace = name_space;
        sendbuf_lowwat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendbuf-notify-thresh")
    {
        sendbuf_notify_thresh = value;
        sendbuf_notify_thresh.value_namespace = name_space;
        sendbuf_notify_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "so")
    {
        so = value;
        so.value_namespace = name_space;
        so.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock-error")
    {
        sock_error = value;
        sock_error.value_namespace = name_space;
        sock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
        socket_error.value_namespace = name_space;
        socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-error")
    {
        soft_error = value;
        soft_error.value_namespace = name_space;
        soft_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srtt")
    {
        srtt = value;
        srtt.value_namespace = name_space;
        srtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srtv")
    {
        srtv = value;
        srtv.value_namespace = name_space;
        srtv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-wait-time")
    {
        syn_wait_time = value;
        syn_wait_time.value_namespace = name_space;
        syn_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpcb")
    {
        tcpcb = value;
        tcpcb.value_namespace = name_space;
        tcpcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp-recent")
    {
        time_stamp_recent = value;
        time_stamp_recent.value_namespace = name_space;
        time_stamp_recent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp-recent-age")
    {
        time_stamp_recent_age = value;
        time_stamp_recent_age.value_namespace = name_space;
        time_stamp_recent_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-id")
    {
        pcb_id.yfilter = yfilter;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "auto-rearm")
    {
        auto_rearm.yfilter = yfilter;
    }
    if(value_path == "connect-retries")
    {
        connect_retries.yfilter = yfilter;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval.yfilter = yfilter;
    }
    if(value_path == "connection-state")
    {
        connection_state.yfilter = yfilter;
    }
    if(value_path == "current-receive-queue-packet-size")
    {
        current_receive_queue_packet_size.yfilter = yfilter;
    }
    if(value_path == "current-receive-queue-size")
    {
        current_receive_queue_size.yfilter = yfilter;
    }
    if(value_path == "current-send-queue-size")
    {
        current_send_queue_size.yfilter = yfilter;
    }
    if(value_path == "established-time")
    {
        established_time.yfilter = yfilter;
    }
    if(value_path == "fib-label-output")
    {
        fib_label_output.yfilter = yfilter;
    }
    if(value_path == "fib-pd-ctx")
    {
        fib_pd_ctx.yfilter = yfilter;
    }
    if(value_path == "fib-pd-ctx-size")
    {
        fib_pd_ctx_size.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "giveup-time")
    {
        giveup_time.yfilter = yfilter;
    }
    if(value_path == "hash-index")
    {
        hash_index.yfilter = yfilter;
    }
    if(value_path == "is-retrans-forever")
    {
        is_retrans_forever.yfilter = yfilter;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time.yfilter = yfilter;
    }
    if(value_path == "krtt")
    {
        krtt.yfilter = yfilter;
    }
    if(value_path == "last-ack-sent")
    {
        last_ack_sent.yfilter = yfilter;
    }
    if(value_path == "local-app-instance")
    {
        local_app_instance.yfilter = yfilter;
    }
    if(value_path == "local-pid")
    {
        local_pid.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "max-mss")
    {
        max_mss.yfilter = yfilter;
    }
    if(value_path == "max-receive-queue-packet-size")
    {
        max_receive_queue_packet_size.yfilter = yfilter;
    }
    if(value_path == "max-receive-queue-size")
    {
        max_receive_queue_size.yfilter = yfilter;
    }
    if(value_path == "max-rtt")
    {
        max_rtt.yfilter = yfilter;
    }
    if(value_path == "max-send-queue-size")
    {
        max_send_queue_size.yfilter = yfilter;
    }
    if(value_path == "min-mss")
    {
        min_mss.yfilter = yfilter;
    }
    if(value_path == "min-rtt")
    {
        min_rtt.yfilter = yfilter;
    }
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "num-labels")
    {
        num_labels.yfilter = yfilter;
    }
    if(value_path == "output-ifhandle")
    {
        output_ifhandle.yfilter = yfilter;
    }
    if(value_path == "packet-priority")
    {
        packet_priority.yfilter = yfilter;
    }
    if(value_path == "packet-tos")
    {
        packet_tos.yfilter = yfilter;
    }
    if(value_path == "packet-ttl")
    {
        packet_ttl.yfilter = yfilter;
    }
    if(value_path == "pcb")
    {
        pcb.yfilter = yfilter;
    }
    if(value_path == "peer-mss")
    {
        peer_mss.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
    if(value_path == "queue-limit")
    {
        queue_limit.yfilter = yfilter;
    }
    if(value_path == "queue-zero-length")
    {
        queue_zero_length.yfilter = yfilter;
    }
    if(value_path == "receive-adv-window-size")
    {
        receive_adv_window_size.yfilter = yfilter;
    }
    if(value_path == "receive-initial-sequence-num")
    {
        receive_initial_sequence_num.yfilter = yfilter;
    }
    if(value_path == "receive-next-sequence-num")
    {
        receive_next_sequence_num.yfilter = yfilter;
    }
    if(value_path == "receive-window-scale")
    {
        receive_window_scale.yfilter = yfilter;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size.yfilter = yfilter;
    }
    if(value_path == "recvbuf-datasize")
    {
        recvbuf_datasize.yfilter = yfilter;
    }
    if(value_path == "recvbuf-hiwat")
    {
        recvbuf_hiwat.yfilter = yfilter;
    }
    if(value_path == "recvbuf-lowwat")
    {
        recvbuf_lowwat.yfilter = yfilter;
    }
    if(value_path == "request-receive-window-scale")
    {
        request_receive_window_scale.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "rqst-send-wnd-scale")
    {
        rqst_send_wnd_scale.yfilter = yfilter;
    }
    if(value_path == "rtto")
    {
        rtto.yfilter = yfilter;
    }
    if(value_path == "rxsy-naclname")
    {
        rxsy_naclname.yfilter = yfilter;
    }
    if(value_path == "save-queue-size")
    {
        save_queue_size.yfilter = yfilter;
    }
    if(value_path == "send-congestion-window-size")
    {
        send_congestion_window_size.yfilter = yfilter;
    }
    if(value_path == "send-initial-sequence-num")
    {
        send_initial_sequence_num.yfilter = yfilter;
    }
    if(value_path == "send-max-sequence-num")
    {
        send_max_sequence_num.yfilter = yfilter;
    }
    if(value_path == "send-next-sequence-num")
    {
        send_next_sequence_num.yfilter = yfilter;
    }
    if(value_path == "send-pdu-count")
    {
        send_pdu_count.yfilter = yfilter;
    }
    if(value_path == "send-unack-sequence-num")
    {
        send_unack_sequence_num.yfilter = yfilter;
    }
    if(value_path == "send-window-scale")
    {
        send_window_scale.yfilter = yfilter;
    }
    if(value_path == "send-window-size")
    {
        send_window_size.yfilter = yfilter;
    }
    if(value_path == "sendbuf-hiwat")
    {
        sendbuf_hiwat.yfilter = yfilter;
    }
    if(value_path == "sendbuf-lowwat")
    {
        sendbuf_lowwat.yfilter = yfilter;
    }
    if(value_path == "sendbuf-notify-thresh")
    {
        sendbuf_notify_thresh.yfilter = yfilter;
    }
    if(value_path == "so")
    {
        so.yfilter = yfilter;
    }
    if(value_path == "sock-error")
    {
        sock_error.yfilter = yfilter;
    }
    if(value_path == "socket-error")
    {
        socket_error.yfilter = yfilter;
    }
    if(value_path == "soft-error")
    {
        soft_error.yfilter = yfilter;
    }
    if(value_path == "srtt")
    {
        srtt.yfilter = yfilter;
    }
    if(value_path == "srtv")
    {
        srtv.yfilter = yfilter;
    }
    if(value_path == "syn-wait-time")
    {
        syn_wait_time.yfilter = yfilter;
    }
    if(value_path == "tcpcb")
    {
        tcpcb.yfilter = yfilter;
    }
    if(value_path == "time-stamp-recent")
    {
        time_stamp_recent.yfilter = yfilter;
    }
    if(value_path == "time-stamp-recent-age")
    {
        time_stamp_recent_age.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature-flags" || name == "foreign-address" || name == "local-address" || name == "receive-buf-state-flags" || name == "request-flags" || name == "sack-blk" || name == "send-buf-state-flags" || name == "send-sack-hole" || name == "socket-option-flags" || name == "socket-state-flags" || name == "state-flags" || name == "timer" || name == "pcb-id" || name == "ack-hold-time" || name == "address-family" || name == "auto-rearm" || name == "connect-retries" || name == "connect-retry-interval" || name == "connection-state" || name == "current-receive-queue-packet-size" || name == "current-receive-queue-size" || name == "current-send-queue-size" || name == "established-time" || name == "fib-label-output" || name == "fib-pd-ctx" || name == "fib-pd-ctx-size" || name == "foreign-port" || name == "giveup-time" || name == "hash-index" || name == "is-retrans-forever" || name == "keep-alive-time" || name == "krtt" || name == "last-ack-sent" || name == "local-app-instance" || name == "local-pid" || name == "local-port" || name == "max-mss" || name == "max-receive-queue-packet-size" || name == "max-receive-queue-size" || name == "max-rtt" || name == "max-send-queue-size" || name == "min-mss" || name == "min-rtt" || name == "mss" || name == "num-labels" || name == "output-ifhandle" || name == "packet-priority" || name == "packet-tos" || name == "packet-ttl" || name == "pcb" || name == "peer-mss" || name == "queue-length" || name == "queue-limit" || name == "queue-zero-length" || name == "receive-adv-window-size" || name == "receive-initial-sequence-num" || name == "receive-next-sequence-num" || name == "receive-window-scale" || name == "receive-window-size" || name == "recvbuf-datasize" || name == "recvbuf-hiwat" || name == "recvbuf-lowwat" || name == "request-receive-window-scale" || name == "retries" || name == "rqst-send-wnd-scale" || name == "rtto" || name == "rxsy-naclname" || name == "save-queue-size" || name == "send-congestion-window-size" || name == "send-initial-sequence-num" || name == "send-max-sequence-num" || name == "send-next-sequence-num" || name == "send-pdu-count" || name == "send-unack-sequence-num" || name == "send-window-scale" || name == "send-window-size" || name == "sendbuf-hiwat" || name == "sendbuf-lowwat" || name == "sendbuf-notify-thresh" || name == "so" || name == "sock-error" || name == "socket-error" || name == "soft-error" || name == "srtt" || name == "srtv" || name == "syn-wait-time" || name == "tcpcb" || name == "time-stamp-recent" || name == "time-stamp-recent-age" || name == "vrf-id")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::FeatureFlags()
    :
    connection_keep_alive_timer{YType::boolean, "connection-keep-alive-timer"},
    giveup_timer{YType::boolean, "giveup-timer"},
    md5{YType::boolean, "md5"},
    mss_cisco{YType::boolean, "mss-cisco"},
    nagle{YType::boolean, "nagle"},
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"},
    selective_ack{YType::boolean, "selective-ack"},
    timestamps{YType::boolean, "timestamps"},
    window_scaling{YType::boolean, "window-scaling"}
{

    yang_name = "feature-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::~FeatureFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::has_data() const
{
    return connection_keep_alive_timer.is_set
	|| giveup_timer.is_set
	|| md5.is_set
	|| mss_cisco.is_set
	|| nagle.is_set
	|| path_mtu_discovery.is_set
	|| selective_ack.is_set
	|| timestamps.is_set
	|| window_scaling.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_keep_alive_timer.yfilter)
	|| ydk::is_set(giveup_timer.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(mss_cisco.yfilter)
	|| ydk::is_set(nagle.yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter)
	|| ydk::is_set(selective_ack.yfilter)
	|| ydk::is_set(timestamps.yfilter)
	|| ydk::is_set(window_scaling.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_keep_alive_timer.is_set || is_set(connection_keep_alive_timer.yfilter)) leaf_name_data.push_back(connection_keep_alive_timer.get_name_leafdata());
    if (giveup_timer.is_set || is_set(giveup_timer.yfilter)) leaf_name_data.push_back(giveup_timer.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (mss_cisco.is_set || is_set(mss_cisco.yfilter)) leaf_name_data.push_back(mss_cisco.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.yfilter)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());
    if (selective_ack.is_set || is_set(selective_ack.yfilter)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (timestamps.is_set || is_set(timestamps.yfilter)) leaf_name_data.push_back(timestamps.get_name_leafdata());
    if (window_scaling.is_set || is_set(window_scaling.yfilter)) leaf_name_data.push_back(window_scaling.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-keep-alive-timer")
    {
        connection_keep_alive_timer = value;
        connection_keep_alive_timer.value_namespace = name_space;
        connection_keep_alive_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giveup-timer")
    {
        giveup_timer = value;
        giveup_timer.value_namespace = name_space;
        giveup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss-cisco")
    {
        mss_cisco = value;
        mss_cisco.value_namespace = name_space;
        mss_cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nagle")
    {
        nagle = value;
        nagle.value_namespace = name_space;
        nagle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective-ack")
    {
        selective_ack = value;
        selective_ack.value_namespace = name_space;
        selective_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamps")
    {
        timestamps = value;
        timestamps.value_namespace = name_space;
        timestamps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-scaling")
    {
        window_scaling = value;
        window_scaling.value_namespace = name_space;
        window_scaling.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-keep-alive-timer")
    {
        connection_keep_alive_timer.yfilter = yfilter;
    }
    if(value_path == "giveup-timer")
    {
        giveup_timer.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "mss-cisco")
    {
        mss_cisco.yfilter = yfilter;
    }
    if(value_path == "nagle")
    {
        nagle.yfilter = yfilter;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "selective-ack")
    {
        selective_ack.yfilter = yfilter;
    }
    if(value_path == "timestamps")
    {
        timestamps.yfilter = yfilter;
    }
    if(value_path == "window-scaling")
    {
        window_scaling.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-keep-alive-timer" || name == "giveup-timer" || name == "md5" || name == "mss-cisco" || name == "nagle" || name == "path-mtu-discovery" || name == "selective-ack" || name == "timestamps" || name == "window-scaling")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::ForeignAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "foreign-address"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::~ForeignAddress()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "local-address"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::ReceiveBufStateFlags()
    :
    async_io{YType::boolean, "async-io"},
    connect_wakeup{YType::boolean, "connect-wakeup"},
    delayed_wakeup{YType::boolean, "delayed-wakeup"},
    input_select{YType::boolean, "input-select"},
    io_timer_set{YType::boolean, "io-timer-set"},
    locked{YType::boolean, "locked"},
    not_interruptible{YType::boolean, "not-interruptible"},
    out_of_band_select{YType::boolean, "out-of-band-select"},
    output_select{YType::boolean, "output-select"},
    waiting_for_data{YType::boolean, "waiting-for-data"},
    waiting_for_lock{YType::boolean, "waiting-for-lock"},
    wakeup{YType::boolean, "wakeup"}
{

    yang_name = "receive-buf-state-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::~ReceiveBufStateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::has_data() const
{
    return async_io.is_set
	|| connect_wakeup.is_set
	|| delayed_wakeup.is_set
	|| input_select.is_set
	|| io_timer_set.is_set
	|| locked.is_set
	|| not_interruptible.is_set
	|| out_of_band_select.is_set
	|| output_select.is_set
	|| waiting_for_data.is_set
	|| waiting_for_lock.is_set
	|| wakeup.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(async_io.yfilter)
	|| ydk::is_set(connect_wakeup.yfilter)
	|| ydk::is_set(delayed_wakeup.yfilter)
	|| ydk::is_set(input_select.yfilter)
	|| ydk::is_set(io_timer_set.yfilter)
	|| ydk::is_set(locked.yfilter)
	|| ydk::is_set(not_interruptible.yfilter)
	|| ydk::is_set(out_of_band_select.yfilter)
	|| ydk::is_set(output_select.yfilter)
	|| ydk::is_set(waiting_for_data.yfilter)
	|| ydk::is_set(waiting_for_lock.yfilter)
	|| ydk::is_set(wakeup.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buf-state-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (async_io.is_set || is_set(async_io.yfilter)) leaf_name_data.push_back(async_io.get_name_leafdata());
    if (connect_wakeup.is_set || is_set(connect_wakeup.yfilter)) leaf_name_data.push_back(connect_wakeup.get_name_leafdata());
    if (delayed_wakeup.is_set || is_set(delayed_wakeup.yfilter)) leaf_name_data.push_back(delayed_wakeup.get_name_leafdata());
    if (input_select.is_set || is_set(input_select.yfilter)) leaf_name_data.push_back(input_select.get_name_leafdata());
    if (io_timer_set.is_set || is_set(io_timer_set.yfilter)) leaf_name_data.push_back(io_timer_set.get_name_leafdata());
    if (locked.is_set || is_set(locked.yfilter)) leaf_name_data.push_back(locked.get_name_leafdata());
    if (not_interruptible.is_set || is_set(not_interruptible.yfilter)) leaf_name_data.push_back(not_interruptible.get_name_leafdata());
    if (out_of_band_select.is_set || is_set(out_of_band_select.yfilter)) leaf_name_data.push_back(out_of_band_select.get_name_leafdata());
    if (output_select.is_set || is_set(output_select.yfilter)) leaf_name_data.push_back(output_select.get_name_leafdata());
    if (waiting_for_data.is_set || is_set(waiting_for_data.yfilter)) leaf_name_data.push_back(waiting_for_data.get_name_leafdata());
    if (waiting_for_lock.is_set || is_set(waiting_for_lock.yfilter)) leaf_name_data.push_back(waiting_for_lock.get_name_leafdata());
    if (wakeup.is_set || is_set(wakeup.yfilter)) leaf_name_data.push_back(wakeup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "async-io")
    {
        async_io = value;
        async_io.value_namespace = name_space;
        async_io.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-wakeup")
    {
        connect_wakeup = value;
        connect_wakeup.value_namespace = name_space;
        connect_wakeup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayed-wakeup")
    {
        delayed_wakeup = value;
        delayed_wakeup.value_namespace = name_space;
        delayed_wakeup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-select")
    {
        input_select = value;
        input_select.value_namespace = name_space;
        input_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-timer-set")
    {
        io_timer_set = value;
        io_timer_set.value_namespace = name_space;
        io_timer_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked")
    {
        locked = value;
        locked.value_namespace = name_space;
        locked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interruptible")
    {
        not_interruptible = value;
        not_interruptible.value_namespace = name_space;
        not_interruptible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-select")
    {
        out_of_band_select = value;
        out_of_band_select.value_namespace = name_space;
        out_of_band_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-select")
    {
        output_select = value;
        output_select.value_namespace = name_space;
        output_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-data")
    {
        waiting_for_data = value;
        waiting_for_data.value_namespace = name_space;
        waiting_for_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-lock")
    {
        waiting_for_lock = value;
        waiting_for_lock.value_namespace = name_space;
        waiting_for_lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wakeup")
    {
        wakeup = value;
        wakeup.value_namespace = name_space;
        wakeup.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "async-io")
    {
        async_io.yfilter = yfilter;
    }
    if(value_path == "connect-wakeup")
    {
        connect_wakeup.yfilter = yfilter;
    }
    if(value_path == "delayed-wakeup")
    {
        delayed_wakeup.yfilter = yfilter;
    }
    if(value_path == "input-select")
    {
        input_select.yfilter = yfilter;
    }
    if(value_path == "io-timer-set")
    {
        io_timer_set.yfilter = yfilter;
    }
    if(value_path == "locked")
    {
        locked.yfilter = yfilter;
    }
    if(value_path == "not-interruptible")
    {
        not_interruptible.yfilter = yfilter;
    }
    if(value_path == "out-of-band-select")
    {
        out_of_band_select.yfilter = yfilter;
    }
    if(value_path == "output-select")
    {
        output_select.yfilter = yfilter;
    }
    if(value_path == "waiting-for-data")
    {
        waiting_for_data.yfilter = yfilter;
    }
    if(value_path == "waiting-for-lock")
    {
        waiting_for_lock.yfilter = yfilter;
    }
    if(value_path == "wakeup")
    {
        wakeup.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-io" || name == "connect-wakeup" || name == "delayed-wakeup" || name == "input-select" || name == "io-timer-set" || name == "locked" || name == "not-interruptible" || name == "out-of-band-select" || name == "output-select" || name == "waiting-for-data" || name == "waiting-for-lock" || name == "wakeup")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::RequestFlags()
    :
    connection_keep_alive_timer{YType::boolean, "connection-keep-alive-timer"},
    giveup_timer{YType::boolean, "giveup-timer"},
    md5{YType::boolean, "md5"},
    mss_cisco{YType::boolean, "mss-cisco"},
    nagle{YType::boolean, "nagle"},
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"},
    selective_ack{YType::boolean, "selective-ack"},
    timestamps{YType::boolean, "timestamps"},
    window_scaling{YType::boolean, "window-scaling"}
{

    yang_name = "request-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::~RequestFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::has_data() const
{
    return connection_keep_alive_timer.is_set
	|| giveup_timer.is_set
	|| md5.is_set
	|| mss_cisco.is_set
	|| nagle.is_set
	|| path_mtu_discovery.is_set
	|| selective_ack.is_set
	|| timestamps.is_set
	|| window_scaling.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_keep_alive_timer.yfilter)
	|| ydk::is_set(giveup_timer.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(mss_cisco.yfilter)
	|| ydk::is_set(nagle.yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter)
	|| ydk::is_set(selective_ack.yfilter)
	|| ydk::is_set(timestamps.yfilter)
	|| ydk::is_set(window_scaling.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_keep_alive_timer.is_set || is_set(connection_keep_alive_timer.yfilter)) leaf_name_data.push_back(connection_keep_alive_timer.get_name_leafdata());
    if (giveup_timer.is_set || is_set(giveup_timer.yfilter)) leaf_name_data.push_back(giveup_timer.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (mss_cisco.is_set || is_set(mss_cisco.yfilter)) leaf_name_data.push_back(mss_cisco.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.yfilter)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());
    if (selective_ack.is_set || is_set(selective_ack.yfilter)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (timestamps.is_set || is_set(timestamps.yfilter)) leaf_name_data.push_back(timestamps.get_name_leafdata());
    if (window_scaling.is_set || is_set(window_scaling.yfilter)) leaf_name_data.push_back(window_scaling.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-keep-alive-timer")
    {
        connection_keep_alive_timer = value;
        connection_keep_alive_timer.value_namespace = name_space;
        connection_keep_alive_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giveup-timer")
    {
        giveup_timer = value;
        giveup_timer.value_namespace = name_space;
        giveup_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss-cisco")
    {
        mss_cisco = value;
        mss_cisco.value_namespace = name_space;
        mss_cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nagle")
    {
        nagle = value;
        nagle.value_namespace = name_space;
        nagle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective-ack")
    {
        selective_ack = value;
        selective_ack.value_namespace = name_space;
        selective_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamps")
    {
        timestamps = value;
        timestamps.value_namespace = name_space;
        timestamps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-scaling")
    {
        window_scaling = value;
        window_scaling.value_namespace = name_space;
        window_scaling.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-keep-alive-timer")
    {
        connection_keep_alive_timer.yfilter = yfilter;
    }
    if(value_path == "giveup-timer")
    {
        giveup_timer.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "mss-cisco")
    {
        mss_cisco.yfilter = yfilter;
    }
    if(value_path == "nagle")
    {
        nagle.yfilter = yfilter;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "selective-ack")
    {
        selective_ack.yfilter = yfilter;
    }
    if(value_path == "timestamps")
    {
        timestamps.yfilter = yfilter;
    }
    if(value_path == "window-scaling")
    {
        window_scaling.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-keep-alive-timer" || name == "giveup-timer" || name == "md5" || name == "mss-cisco" || name == "nagle" || name == "path-mtu-discovery" || name == "selective-ack" || name == "timestamps" || name == "window-scaling")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::SackBlk()
    :
    end{YType::uint32, "end"},
    start{YType::uint32, "start"}
{

    yang_name = "sack-blk"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::~SackBlk()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::has_data() const
{
    return end.is_set
	|| start.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sack-blk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end" || name == "start")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::SendBufStateFlags()
    :
    async_io{YType::boolean, "async-io"},
    connect_wakeup{YType::boolean, "connect-wakeup"},
    delayed_wakeup{YType::boolean, "delayed-wakeup"},
    input_select{YType::boolean, "input-select"},
    io_timer_set{YType::boolean, "io-timer-set"},
    locked{YType::boolean, "locked"},
    not_interruptible{YType::boolean, "not-interruptible"},
    out_of_band_select{YType::boolean, "out-of-band-select"},
    output_select{YType::boolean, "output-select"},
    waiting_for_data{YType::boolean, "waiting-for-data"},
    waiting_for_lock{YType::boolean, "waiting-for-lock"},
    wakeup{YType::boolean, "wakeup"}
{

    yang_name = "send-buf-state-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::~SendBufStateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::has_data() const
{
    return async_io.is_set
	|| connect_wakeup.is_set
	|| delayed_wakeup.is_set
	|| input_select.is_set
	|| io_timer_set.is_set
	|| locked.is_set
	|| not_interruptible.is_set
	|| out_of_band_select.is_set
	|| output_select.is_set
	|| waiting_for_data.is_set
	|| waiting_for_lock.is_set
	|| wakeup.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(async_io.yfilter)
	|| ydk::is_set(connect_wakeup.yfilter)
	|| ydk::is_set(delayed_wakeup.yfilter)
	|| ydk::is_set(input_select.yfilter)
	|| ydk::is_set(io_timer_set.yfilter)
	|| ydk::is_set(locked.yfilter)
	|| ydk::is_set(not_interruptible.yfilter)
	|| ydk::is_set(out_of_band_select.yfilter)
	|| ydk::is_set(output_select.yfilter)
	|| ydk::is_set(waiting_for_data.yfilter)
	|| ydk::is_set(waiting_for_lock.yfilter)
	|| ydk::is_set(wakeup.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buf-state-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (async_io.is_set || is_set(async_io.yfilter)) leaf_name_data.push_back(async_io.get_name_leafdata());
    if (connect_wakeup.is_set || is_set(connect_wakeup.yfilter)) leaf_name_data.push_back(connect_wakeup.get_name_leafdata());
    if (delayed_wakeup.is_set || is_set(delayed_wakeup.yfilter)) leaf_name_data.push_back(delayed_wakeup.get_name_leafdata());
    if (input_select.is_set || is_set(input_select.yfilter)) leaf_name_data.push_back(input_select.get_name_leafdata());
    if (io_timer_set.is_set || is_set(io_timer_set.yfilter)) leaf_name_data.push_back(io_timer_set.get_name_leafdata());
    if (locked.is_set || is_set(locked.yfilter)) leaf_name_data.push_back(locked.get_name_leafdata());
    if (not_interruptible.is_set || is_set(not_interruptible.yfilter)) leaf_name_data.push_back(not_interruptible.get_name_leafdata());
    if (out_of_band_select.is_set || is_set(out_of_band_select.yfilter)) leaf_name_data.push_back(out_of_band_select.get_name_leafdata());
    if (output_select.is_set || is_set(output_select.yfilter)) leaf_name_data.push_back(output_select.get_name_leafdata());
    if (waiting_for_data.is_set || is_set(waiting_for_data.yfilter)) leaf_name_data.push_back(waiting_for_data.get_name_leafdata());
    if (waiting_for_lock.is_set || is_set(waiting_for_lock.yfilter)) leaf_name_data.push_back(waiting_for_lock.get_name_leafdata());
    if (wakeup.is_set || is_set(wakeup.yfilter)) leaf_name_data.push_back(wakeup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "async-io")
    {
        async_io = value;
        async_io.value_namespace = name_space;
        async_io.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-wakeup")
    {
        connect_wakeup = value;
        connect_wakeup.value_namespace = name_space;
        connect_wakeup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayed-wakeup")
    {
        delayed_wakeup = value;
        delayed_wakeup.value_namespace = name_space;
        delayed_wakeup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-select")
    {
        input_select = value;
        input_select.value_namespace = name_space;
        input_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-timer-set")
    {
        io_timer_set = value;
        io_timer_set.value_namespace = name_space;
        io_timer_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked")
    {
        locked = value;
        locked.value_namespace = name_space;
        locked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interruptible")
    {
        not_interruptible = value;
        not_interruptible.value_namespace = name_space;
        not_interruptible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-select")
    {
        out_of_band_select = value;
        out_of_band_select.value_namespace = name_space;
        out_of_band_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-select")
    {
        output_select = value;
        output_select.value_namespace = name_space;
        output_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-data")
    {
        waiting_for_data = value;
        waiting_for_data.value_namespace = name_space;
        waiting_for_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-lock")
    {
        waiting_for_lock = value;
        waiting_for_lock.value_namespace = name_space;
        waiting_for_lock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wakeup")
    {
        wakeup = value;
        wakeup.value_namespace = name_space;
        wakeup.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "async-io")
    {
        async_io.yfilter = yfilter;
    }
    if(value_path == "connect-wakeup")
    {
        connect_wakeup.yfilter = yfilter;
    }
    if(value_path == "delayed-wakeup")
    {
        delayed_wakeup.yfilter = yfilter;
    }
    if(value_path == "input-select")
    {
        input_select.yfilter = yfilter;
    }
    if(value_path == "io-timer-set")
    {
        io_timer_set.yfilter = yfilter;
    }
    if(value_path == "locked")
    {
        locked.yfilter = yfilter;
    }
    if(value_path == "not-interruptible")
    {
        not_interruptible.yfilter = yfilter;
    }
    if(value_path == "out-of-band-select")
    {
        out_of_band_select.yfilter = yfilter;
    }
    if(value_path == "output-select")
    {
        output_select.yfilter = yfilter;
    }
    if(value_path == "waiting-for-data")
    {
        waiting_for_data.yfilter = yfilter;
    }
    if(value_path == "waiting-for-lock")
    {
        waiting_for_lock.yfilter = yfilter;
    }
    if(value_path == "wakeup")
    {
        wakeup.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-io" || name == "connect-wakeup" || name == "delayed-wakeup" || name == "input-select" || name == "io-timer-set" || name == "locked" || name == "not-interruptible" || name == "out-of-band-select" || name == "output-select" || name == "waiting-for-data" || name == "waiting-for-lock" || name == "wakeup")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::SendSackHole()
    :
    duplicated_ack{YType::uint32, "duplicated-ack"},
    end{YType::uint32, "end"},
    retransmitted{YType::uint32, "retransmitted"},
    start{YType::uint32, "start"}
{

    yang_name = "send-sack-hole"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::~SendSackHole()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::has_data() const
{
    return duplicated_ack.is_set
	|| end.is_set
	|| retransmitted.is_set
	|| start.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicated_ack.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-sack-hole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicated_ack.is_set || is_set(duplicated_ack.yfilter)) leaf_name_data.push_back(duplicated_ack.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicated-ack")
    {
        duplicated_ack = value;
        duplicated_ack.value_namespace = name_space;
        duplicated_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicated-ack")
    {
        duplicated_ack.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicated-ack" || name == "end" || name == "retransmitted" || name == "start")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::SocketOptionFlags()
    :
    accept_connection{YType::boolean, "accept-connection"},
    broadcast{YType::boolean, "broadcast"},
    debug{YType::boolean, "debug"},
    dont_route{YType::boolean, "dont-route"},
    keep_alive{YType::boolean, "keep-alive"},
    linger{YType::boolean, "linger"},
    nonblocking_io{YType::boolean, "nonblocking-io"},
    out_of_band_inline{YType::boolean, "out-of-band-inline"},
    reuse_address{YType::boolean, "reuse-address"},
    reuse_port{YType::boolean, "reuse-port"},
    use_loopback{YType::boolean, "use-loopback"}
{

    yang_name = "socket-option-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::~SocketOptionFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::has_data() const
{
    return accept_connection.is_set
	|| broadcast.is_set
	|| debug.is_set
	|| dont_route.is_set
	|| keep_alive.is_set
	|| linger.is_set
	|| nonblocking_io.is_set
	|| out_of_band_inline.is_set
	|| reuse_address.is_set
	|| reuse_port.is_set
	|| use_loopback.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_connection.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(debug.yfilter)
	|| ydk::is_set(dont_route.yfilter)
	|| ydk::is_set(keep_alive.yfilter)
	|| ydk::is_set(linger.yfilter)
	|| ydk::is_set(nonblocking_io.yfilter)
	|| ydk::is_set(out_of_band_inline.yfilter)
	|| ydk::is_set(reuse_address.yfilter)
	|| ydk::is_set(reuse_port.yfilter)
	|| ydk::is_set(use_loopback.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "socket-option-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_connection.is_set || is_set(accept_connection.yfilter)) leaf_name_data.push_back(accept_connection.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (debug.is_set || is_set(debug.yfilter)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (dont_route.is_set || is_set(dont_route.yfilter)) leaf_name_data.push_back(dont_route.get_name_leafdata());
    if (keep_alive.is_set || is_set(keep_alive.yfilter)) leaf_name_data.push_back(keep_alive.get_name_leafdata());
    if (linger.is_set || is_set(linger.yfilter)) leaf_name_data.push_back(linger.get_name_leafdata());
    if (nonblocking_io.is_set || is_set(nonblocking_io.yfilter)) leaf_name_data.push_back(nonblocking_io.get_name_leafdata());
    if (out_of_band_inline.is_set || is_set(out_of_band_inline.yfilter)) leaf_name_data.push_back(out_of_band_inline.get_name_leafdata());
    if (reuse_address.is_set || is_set(reuse_address.yfilter)) leaf_name_data.push_back(reuse_address.get_name_leafdata());
    if (reuse_port.is_set || is_set(reuse_port.yfilter)) leaf_name_data.push_back(reuse_port.get_name_leafdata());
    if (use_loopback.is_set || is_set(use_loopback.yfilter)) leaf_name_data.push_back(use_loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-connection")
    {
        accept_connection = value;
        accept_connection.value_namespace = name_space;
        accept_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debug")
    {
        debug = value;
        debug.value_namespace = name_space;
        debug.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-route")
    {
        dont_route = value;
        dont_route.value_namespace = name_space;
        dont_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive")
    {
        keep_alive = value;
        keep_alive.value_namespace = name_space;
        keep_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linger")
    {
        linger = value;
        linger.value_namespace = name_space;
        linger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonblocking-io")
    {
        nonblocking_io = value;
        nonblocking_io.value_namespace = name_space;
        nonblocking_io.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-inline")
    {
        out_of_band_inline = value;
        out_of_band_inline.value_namespace = name_space;
        out_of_band_inline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-address")
    {
        reuse_address = value;
        reuse_address.value_namespace = name_space;
        reuse_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-port")
    {
        reuse_port = value;
        reuse_port.value_namespace = name_space;
        reuse_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-loopback")
    {
        use_loopback = value;
        use_loopback.value_namespace = name_space;
        use_loopback.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-connection")
    {
        accept_connection.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "debug")
    {
        debug.yfilter = yfilter;
    }
    if(value_path == "dont-route")
    {
        dont_route.yfilter = yfilter;
    }
    if(value_path == "keep-alive")
    {
        keep_alive.yfilter = yfilter;
    }
    if(value_path == "linger")
    {
        linger.yfilter = yfilter;
    }
    if(value_path == "nonblocking-io")
    {
        nonblocking_io.yfilter = yfilter;
    }
    if(value_path == "out-of-band-inline")
    {
        out_of_band_inline.yfilter = yfilter;
    }
    if(value_path == "reuse-address")
    {
        reuse_address.yfilter = yfilter;
    }
    if(value_path == "reuse-port")
    {
        reuse_port.yfilter = yfilter;
    }
    if(value_path == "use-loopback")
    {
        use_loopback.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-connection" || name == "broadcast" || name == "debug" || name == "dont-route" || name == "keep-alive" || name == "linger" || name == "nonblocking-io" || name == "out-of-band-inline" || name == "reuse-address" || name == "reuse-port" || name == "use-loopback")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::SocketStateFlags()
    :
    async_io_notify{YType::boolean, "async-io-notify"},
    block_close{YType::boolean, "block-close"},
    block_receive{YType::boolean, "block-receive"},
    block_send{YType::boolean, "block-send"},
    cant_receive_more{YType::boolean, "cant-receive-more"},
    cant_send_more{YType::boolean, "cant-send-more"},
    is_confirming{YType::boolean, "is-confirming"},
    is_connected{YType::boolean, "is-connected"},
    is_connecting{YType::boolean, "is-connecting"},
    is_detached{YType::boolean, "is-detached"},
    is_disconnecting{YType::boolean, "is-disconnecting"},
    is_solock{YType::boolean, "is-solock"},
    no_file_descriptor_reference{YType::boolean, "no-file-descriptor-reference"},
    privileged{YType::boolean, "privileged"},
    received_at_mark{YType::boolean, "received-at-mark"}
{

    yang_name = "socket-state-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::~SocketStateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::has_data() const
{
    return async_io_notify.is_set
	|| block_close.is_set
	|| block_receive.is_set
	|| block_send.is_set
	|| cant_receive_more.is_set
	|| cant_send_more.is_set
	|| is_confirming.is_set
	|| is_connected.is_set
	|| is_connecting.is_set
	|| is_detached.is_set
	|| is_disconnecting.is_set
	|| is_solock.is_set
	|| no_file_descriptor_reference.is_set
	|| privileged.is_set
	|| received_at_mark.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(async_io_notify.yfilter)
	|| ydk::is_set(block_close.yfilter)
	|| ydk::is_set(block_receive.yfilter)
	|| ydk::is_set(block_send.yfilter)
	|| ydk::is_set(cant_receive_more.yfilter)
	|| ydk::is_set(cant_send_more.yfilter)
	|| ydk::is_set(is_confirming.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_connecting.yfilter)
	|| ydk::is_set(is_detached.yfilter)
	|| ydk::is_set(is_disconnecting.yfilter)
	|| ydk::is_set(is_solock.yfilter)
	|| ydk::is_set(no_file_descriptor_reference.yfilter)
	|| ydk::is_set(privileged.yfilter)
	|| ydk::is_set(received_at_mark.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "socket-state-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (async_io_notify.is_set || is_set(async_io_notify.yfilter)) leaf_name_data.push_back(async_io_notify.get_name_leafdata());
    if (block_close.is_set || is_set(block_close.yfilter)) leaf_name_data.push_back(block_close.get_name_leafdata());
    if (block_receive.is_set || is_set(block_receive.yfilter)) leaf_name_data.push_back(block_receive.get_name_leafdata());
    if (block_send.is_set || is_set(block_send.yfilter)) leaf_name_data.push_back(block_send.get_name_leafdata());
    if (cant_receive_more.is_set || is_set(cant_receive_more.yfilter)) leaf_name_data.push_back(cant_receive_more.get_name_leafdata());
    if (cant_send_more.is_set || is_set(cant_send_more.yfilter)) leaf_name_data.push_back(cant_send_more.get_name_leafdata());
    if (is_confirming.is_set || is_set(is_confirming.yfilter)) leaf_name_data.push_back(is_confirming.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_connecting.is_set || is_set(is_connecting.yfilter)) leaf_name_data.push_back(is_connecting.get_name_leafdata());
    if (is_detached.is_set || is_set(is_detached.yfilter)) leaf_name_data.push_back(is_detached.get_name_leafdata());
    if (is_disconnecting.is_set || is_set(is_disconnecting.yfilter)) leaf_name_data.push_back(is_disconnecting.get_name_leafdata());
    if (is_solock.is_set || is_set(is_solock.yfilter)) leaf_name_data.push_back(is_solock.get_name_leafdata());
    if (no_file_descriptor_reference.is_set || is_set(no_file_descriptor_reference.yfilter)) leaf_name_data.push_back(no_file_descriptor_reference.get_name_leafdata());
    if (privileged.is_set || is_set(privileged.yfilter)) leaf_name_data.push_back(privileged.get_name_leafdata());
    if (received_at_mark.is_set || is_set(received_at_mark.yfilter)) leaf_name_data.push_back(received_at_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "async-io-notify")
    {
        async_io_notify = value;
        async_io_notify.value_namespace = name_space;
        async_io_notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-close")
    {
        block_close = value;
        block_close.value_namespace = name_space;
        block_close.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-receive")
    {
        block_receive = value;
        block_receive.value_namespace = name_space;
        block_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-send")
    {
        block_send = value;
        block_send.value_namespace = name_space;
        block_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cant-receive-more")
    {
        cant_receive_more = value;
        cant_receive_more.value_namespace = name_space;
        cant_receive_more.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cant-send-more")
    {
        cant_send_more = value;
        cant_send_more.value_namespace = name_space;
        cant_send_more.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-confirming")
    {
        is_confirming = value;
        is_confirming.value_namespace = name_space;
        is_confirming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connecting")
    {
        is_connecting = value;
        is_connecting.value_namespace = name_space;
        is_connecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-detached")
    {
        is_detached = value;
        is_detached.value_namespace = name_space;
        is_detached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disconnecting")
    {
        is_disconnecting = value;
        is_disconnecting.value_namespace = name_space;
        is_disconnecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-solock")
    {
        is_solock = value;
        is_solock.value_namespace = name_space;
        is_solock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-file-descriptor-reference")
    {
        no_file_descriptor_reference = value;
        no_file_descriptor_reference.value_namespace = name_space;
        no_file_descriptor_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privileged")
    {
        privileged = value;
        privileged.value_namespace = name_space;
        privileged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-at-mark")
    {
        received_at_mark = value;
        received_at_mark.value_namespace = name_space;
        received_at_mark.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "async-io-notify")
    {
        async_io_notify.yfilter = yfilter;
    }
    if(value_path == "block-close")
    {
        block_close.yfilter = yfilter;
    }
    if(value_path == "block-receive")
    {
        block_receive.yfilter = yfilter;
    }
    if(value_path == "block-send")
    {
        block_send.yfilter = yfilter;
    }
    if(value_path == "cant-receive-more")
    {
        cant_receive_more.yfilter = yfilter;
    }
    if(value_path == "cant-send-more")
    {
        cant_send_more.yfilter = yfilter;
    }
    if(value_path == "is-confirming")
    {
        is_confirming.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-connecting")
    {
        is_connecting.yfilter = yfilter;
    }
    if(value_path == "is-detached")
    {
        is_detached.yfilter = yfilter;
    }
    if(value_path == "is-disconnecting")
    {
        is_disconnecting.yfilter = yfilter;
    }
    if(value_path == "is-solock")
    {
        is_solock.yfilter = yfilter;
    }
    if(value_path == "no-file-descriptor-reference")
    {
        no_file_descriptor_reference.yfilter = yfilter;
    }
    if(value_path == "privileged")
    {
        privileged.yfilter = yfilter;
    }
    if(value_path == "received-at-mark")
    {
        received_at_mark.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-io-notify" || name == "block-close" || name == "block-receive" || name == "block-send" || name == "cant-receive-more" || name == "cant-send-more" || name == "is-confirming" || name == "is-connected" || name == "is-connecting" || name == "is-detached" || name == "is-disconnecting" || name == "is-solock" || name == "no-file-descriptor-reference" || name == "privileged" || name == "received-at-mark")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::StateFlags()
    :
    ack_needed{YType::boolean, "ack-needed"},
    fin_sent{YType::boolean, "fin-sent"},
    in_syn_cache{YType::boolean, "in-syn-cache"},
    nagle_wait{YType::boolean, "nagle-wait"},
    need_push{YType::boolean, "need-push"},
    path_mtu_ager{YType::boolean, "path-mtu-ager"},
    probing{YType::boolean, "probing"},
    pushed{YType::boolean, "pushed"}
{

    yang_name = "state-flags"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::~StateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::has_data() const
{
    return ack_needed.is_set
	|| fin_sent.is_set
	|| in_syn_cache.is_set
	|| nagle_wait.is_set
	|| need_push.is_set
	|| path_mtu_ager.is_set
	|| probing.is_set
	|| pushed.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_needed.yfilter)
	|| ydk::is_set(fin_sent.yfilter)
	|| ydk::is_set(in_syn_cache.yfilter)
	|| ydk::is_set(nagle_wait.yfilter)
	|| ydk::is_set(need_push.yfilter)
	|| ydk::is_set(path_mtu_ager.yfilter)
	|| ydk::is_set(probing.yfilter)
	|| ydk::is_set(pushed.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_needed.is_set || is_set(ack_needed.yfilter)) leaf_name_data.push_back(ack_needed.get_name_leafdata());
    if (fin_sent.is_set || is_set(fin_sent.yfilter)) leaf_name_data.push_back(fin_sent.get_name_leafdata());
    if (in_syn_cache.is_set || is_set(in_syn_cache.yfilter)) leaf_name_data.push_back(in_syn_cache.get_name_leafdata());
    if (nagle_wait.is_set || is_set(nagle_wait.yfilter)) leaf_name_data.push_back(nagle_wait.get_name_leafdata());
    if (need_push.is_set || is_set(need_push.yfilter)) leaf_name_data.push_back(need_push.get_name_leafdata());
    if (path_mtu_ager.is_set || is_set(path_mtu_ager.yfilter)) leaf_name_data.push_back(path_mtu_ager.get_name_leafdata());
    if (probing.is_set || is_set(probing.yfilter)) leaf_name_data.push_back(probing.get_name_leafdata());
    if (pushed.is_set || is_set(pushed.yfilter)) leaf_name_data.push_back(pushed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-needed")
    {
        ack_needed = value;
        ack_needed.value_namespace = name_space;
        ack_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin-sent")
    {
        fin_sent = value;
        fin_sent.value_namespace = name_space;
        fin_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-syn-cache")
    {
        in_syn_cache = value;
        in_syn_cache.value_namespace = name_space;
        in_syn_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nagle-wait")
    {
        nagle_wait = value;
        nagle_wait.value_namespace = name_space;
        nagle_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "need-push")
    {
        need_push = value;
        need_push.value_namespace = name_space;
        need_push.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-ager")
    {
        path_mtu_ager = value;
        path_mtu_ager.value_namespace = name_space;
        path_mtu_ager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probing")
    {
        probing = value;
        probing.value_namespace = name_space;
        probing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pushed")
    {
        pushed = value;
        pushed.value_namespace = name_space;
        pushed.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-needed")
    {
        ack_needed.yfilter = yfilter;
    }
    if(value_path == "fin-sent")
    {
        fin_sent.yfilter = yfilter;
    }
    if(value_path == "in-syn-cache")
    {
        in_syn_cache.yfilter = yfilter;
    }
    if(value_path == "nagle-wait")
    {
        nagle_wait.yfilter = yfilter;
    }
    if(value_path == "need-push")
    {
        need_push.yfilter = yfilter;
    }
    if(value_path == "path-mtu-ager")
    {
        path_mtu_ager.yfilter = yfilter;
    }
    if(value_path == "probing")
    {
        probing.yfilter = yfilter;
    }
    if(value_path == "pushed")
    {
        pushed.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-needed" || name == "fin-sent" || name == "in-syn-cache" || name == "nagle-wait" || name == "need-push" || name == "path-mtu-ager" || name == "probing" || name == "pushed")
        return true;
    return false;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::Timer()
    :
    timer_activations{YType::uint32, "timer-activations"},
    timer_expirations{YType::uint32, "timer-expirations"},
    timer_next_activation{YType::uint32, "timer-next-activation"},
    timer_type{YType::enumeration, "timer-type"}
{

    yang_name = "timer"; yang_parent_name = "detail-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::~Timer()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::has_data() const
{
    return timer_activations.is_set
	|| timer_expirations.is_set
	|| timer_next_activation.is_set
	|| timer_type.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_activations.yfilter)
	|| ydk::is_set(timer_expirations.yfilter)
	|| ydk::is_set(timer_next_activation.yfilter)
	|| ydk::is_set(timer_type.yfilter);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_activations.is_set || is_set(timer_activations.yfilter)) leaf_name_data.push_back(timer_activations.get_name_leafdata());
    if (timer_expirations.is_set || is_set(timer_expirations.yfilter)) leaf_name_data.push_back(timer_expirations.get_name_leafdata());
    if (timer_next_activation.is_set || is_set(timer_next_activation.yfilter)) leaf_name_data.push_back(timer_next_activation.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-activations")
    {
        timer_activations = value;
        timer_activations.value_namespace = name_space;
        timer_activations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-expirations")
    {
        timer_expirations = value;
        timer_expirations.value_namespace = name_space;
        timer_expirations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-next-activation")
    {
        timer_next_activation = value;
        timer_next_activation.value_namespace = name_space;
        timer_next_activation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-activations")
    {
        timer_activations.yfilter = yfilter;
    }
    if(value_path == "timer-expirations")
    {
        timer_expirations.yfilter = yfilter;
    }
    if(value_path == "timer-next-activation")
    {
        timer_next_activation.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-activations" || name == "timer-expirations" || name == "timer-next-activation" || name == "timer-type")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::ExtendedInformation()
    :
    display_types(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes>())
{
    display_types->parent = this;

    yang_name = "extended-information"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::~ExtendedInformation()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::has_data() const
{
    return (display_types !=  nullptr && display_types->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::has_operation() const
{
    return is_set(yfilter)
	|| (display_types !=  nullptr && display_types->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "display-types")
    {
        if(display_types == nullptr)
        {
            display_types = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes>();
        }
        return display_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(display_types != nullptr)
    {
        children["display-types"] = display_types;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::ExtendedInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display-types")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayTypes()
{

    yang_name = "display-types"; yang_parent_name = "extended-information"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::~DisplayTypes()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::has_data() const
{
    for (std::size_t index=0; index<display_type.size(); index++)
    {
        if(display_type[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::has_operation() const
{
    for (std::size_t index=0; index<display_type.size(); index++)
    {
        if(display_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "display-type")
    {
        for(auto const & c : display_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType>();
        c->parent = this;
        display_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : display_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display-type")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::DisplayType()
    :
    disp_type{YType::enumeration, "disp-type"}
{

    yang_name = "display-type"; yang_parent_name = "display-types"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::~DisplayType()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::has_data() const
{
    for (std::size_t index=0; index<connection_id.size(); index++)
    {
        if(connection_id[index]->has_data())
            return true;
    }
    return disp_type.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::has_operation() const
{
    for (std::size_t index=0; index<connection_id.size(); index++)
    {
        if(connection_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disp_type.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-type" <<"[disp-type='" <<disp_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disp_type.is_set || is_set(disp_type.yfilter)) leaf_name_data.push_back(disp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-id")
    {
        for(auto const & c : connection_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId>();
        c->parent = this;
        connection_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connection_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disp-type")
    {
        disp_type = value;
        disp_type.value_namespace = name_space;
        disp_type.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disp-type")
    {
        disp_type.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-id" || name == "disp-type")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ConnectionId()
    :
    pcb_id{YType::uint32, "pcb-id"},
    foreign_port{YType::uint16, "foreign-port"},
    l4_protocol{YType::uint32, "l4-protocol"},
    local_port{YType::uint16, "local-port"}
    	,
    common(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common>())
	,foreign_address(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress>())
	,local_address(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress>())
{
    common->parent = this;
    foreign_address->parent = this;
    local_address->parent = this;

    yang_name = "connection-id"; yang_parent_name = "display-type"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::~ConnectionId()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::has_data() const
{
    return pcb_id.is_set
	|| foreign_port.is_set
	|| l4_protocol.is_set
	|| local_port.is_set
	|| (common !=  nullptr && common->has_data())
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcb_id.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(l4_protocol.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-id" <<"[pcb-id='" <<pcb_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_id.is_set || is_set(pcb_id.yfilter)) leaf_name_data.push_back(pcb_id.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (l4_protocol.is_set || is_set(l4_protocol.yfilter)) leaf_name_data.push_back(l4_protocol.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common>();
        }
        return common;
    }

    if(child_yang_name == "foreign-address")
    {
        if(foreign_address == nullptr)
        {
            foreign_address = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress>();
        }
        return foreign_address;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress>();
        }
        return local_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(foreign_address != nullptr)
    {
        children["foreign-address"] = foreign_address;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-id")
    {
        pcb_id = value;
        pcb_id.value_namespace = name_space;
        pcb_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-protocol")
    {
        l4_protocol = value;
        l4_protocol.value_namespace = name_space;
        l4_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-id")
    {
        pcb_id.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "l4-protocol")
    {
        l4_protocol.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "foreign-address" || name == "local-address" || name == "pcb-id" || name == "foreign-port" || name == "l4-protocol" || name == "local-port")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::Common()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    lpts_pcb(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb>())
{
    lpts_pcb->parent = this;

    yang_name = "common"; yang_parent_name = "connection-id"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::~Common()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::has_data() const
{
    return af_name.is_set
	|| (lpts_pcb !=  nullptr && lpts_pcb->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (lpts_pcb !=  nullptr && lpts_pcb->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts-pcb")
    {
        if(lpts_pcb == nullptr)
        {
            lpts_pcb = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb>();
        }
        return lpts_pcb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lpts_pcb != nullptr)
    {
        children["lpts-pcb"] = lpts_pcb;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts-pcb" || name == "af-name")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsPcb()
    :
    flow_types_info{YType::uint32, "flow-types-info"},
    ttl{YType::uint8, "ttl"}
    	,
    accept_mask(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask>())
	,lpts_flags(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags>())
	,options(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options>())
{
    accept_mask->parent = this;
    lpts_flags->parent = this;
    options->parent = this;

    yang_name = "lpts-pcb"; yang_parent_name = "common"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::~LptsPcb()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return flow_types_info.is_set
	|| ttl.is_set
	|| (accept_mask !=  nullptr && accept_mask->has_data())
	|| (lpts_flags !=  nullptr && lpts_flags->has_data())
	|| (options !=  nullptr && options->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flow_types_info.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (accept_mask !=  nullptr && accept_mask->has_operation())
	|| (lpts_flags !=  nullptr && lpts_flags->has_operation())
	|| (options !=  nullptr && options->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-pcb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_types_info.is_set || is_set(flow_types_info.yfilter)) leaf_name_data.push_back(flow_types_info.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-mask")
    {
        if(accept_mask == nullptr)
        {
            accept_mask = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask>();
        }
        return accept_mask;
    }

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
        auto c = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "lpts-flags")
    {
        if(lpts_flags == nullptr)
        {
            lpts_flags = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags>();
        }
        return lpts_flags;
    }

    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_mask != nullptr)
    {
        children["accept-mask"] = accept_mask;
    }

    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    if(lpts_flags != nullptr)
    {
        children["lpts-flags"] = lpts_flags;
    }

    if(options != nullptr)
    {
        children["options"] = options;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-types-info")
    {
        flow_types_info = value;
        flow_types_info.value_namespace = name_space;
        flow_types_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-types-info")
    {
        flow_types_info.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mask" || name == "filter" || name == "lpts-flags" || name == "options" || name == "flow-types-info" || name == "ttl")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::AcceptMask()
    :
    is_interface{YType::boolean, "is-interface"},
    is_local_address{YType::boolean, "is-local-address"},
    is_local_port{YType::boolean, "is-local-port"},
    is_packet_type{YType::boolean, "is-packet-type"},
    is_remote_address{YType::boolean, "is-remote-address"},
    is_remote_port{YType::boolean, "is-remote-port"}
{

    yang_name = "accept-mask"; yang_parent_name = "lpts-pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::~AcceptMask()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::has_data() const
{
    return is_interface.is_set
	|| is_local_address.is_set
	|| is_local_port.is_set
	|| is_packet_type.is_set
	|| is_remote_address.is_set
	|| is_remote_port.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(is_local_address.yfilter)
	|| ydk::is_set(is_local_port.yfilter)
	|| ydk::is_set(is_packet_type.yfilter)
	|| ydk::is_set(is_remote_address.yfilter)
	|| ydk::is_set(is_remote_port.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_local_address.is_set || is_set(is_local_address.yfilter)) leaf_name_data.push_back(is_local_address.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.yfilter)) leaf_name_data.push_back(is_local_port.get_name_leafdata());
    if (is_packet_type.is_set || is_set(is_packet_type.yfilter)) leaf_name_data.push_back(is_packet_type.get_name_leafdata());
    if (is_remote_address.is_set || is_set(is_remote_address.yfilter)) leaf_name_data.push_back(is_remote_address.get_name_leafdata());
    if (is_remote_port.is_set || is_set(is_remote_port.yfilter)) leaf_name_data.push_back(is_remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-interface")
    {
        is_interface = value;
        is_interface.value_namespace = name_space;
        is_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-address")
    {
        is_local_address = value;
        is_local_address.value_namespace = name_space;
        is_local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
        is_local_port.value_namespace = name_space;
        is_local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-packet-type")
    {
        is_packet_type = value;
        is_packet_type.value_namespace = name_space;
        is_packet_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-address")
    {
        is_remote_address = value;
        is_remote_address.value_namespace = name_space;
        is_remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-port")
    {
        is_remote_port = value;
        is_remote_port.value_namespace = name_space;
        is_remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-interface")
    {
        is_interface.yfilter = yfilter;
    }
    if(value_path == "is-local-address")
    {
        is_local_address.yfilter = yfilter;
    }
    if(value_path == "is-local-port")
    {
        is_local_port.yfilter = yfilter;
    }
    if(value_path == "is-packet-type")
    {
        is_packet_type.yfilter = yfilter;
    }
    if(value_path == "is-remote-address")
    {
        is_remote_address.yfilter = yfilter;
    }
    if(value_path == "is-remote-port")
    {
        is_remote_port.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-interface" || name == "is-local-address" || name == "is-local-port" || name == "is-packet-type" || name == "is-remote-address" || name == "is-remote-port")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::Filter()
    :
    flow_types_info{YType::uint32, "flow-types-info"},
    interface_name{YType::str, "interface-name"},
    local_length{YType::uint16, "local-length"},
    priority{YType::uint8, "priority"},
    receive_local_port{YType::uint16, "receive-local-port"},
    receive_remote_port{YType::uint16, "receive-remote-port"},
    remote_length{YType::uint16, "remote-length"},
    ttl{YType::uint8, "ttl"}
    	,
    local_address(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress>())
	,packet_type(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType>())
	,remote_address(std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress>())
{
    local_address->parent = this;
    packet_type->parent = this;
    remote_address->parent = this;

    yang_name = "filter"; yang_parent_name = "lpts-pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::~Filter()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::has_data() const
{
    return flow_types_info.is_set
	|| interface_name.is_set
	|| local_length.is_set
	|| priority.is_set
	|| receive_local_port.is_set
	|| receive_remote_port.is_set
	|| remote_length.is_set
	|| ttl.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (packet_type !=  nullptr && packet_type->has_data())
	|| (remote_address !=  nullptr && remote_address->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_types_info.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(receive_local_port.yfilter)
	|| ydk::is_set(receive_remote_port.yfilter)
	|| ydk::is_set(remote_length.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (packet_type !=  nullptr && packet_type->has_operation())
	|| (remote_address !=  nullptr && remote_address->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_types_info.is_set || is_set(flow_types_info.yfilter)) leaf_name_data.push_back(flow_types_info.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_length.is_set || is_set(local_length.yfilter)) leaf_name_data.push_back(local_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (receive_local_port.is_set || is_set(receive_local_port.yfilter)) leaf_name_data.push_back(receive_local_port.get_name_leafdata());
    if (receive_remote_port.is_set || is_set(receive_remote_port.yfilter)) leaf_name_data.push_back(receive_remote_port.get_name_leafdata());
    if (remote_length.is_set || is_set(remote_length.yfilter)) leaf_name_data.push_back(remote_length.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "packet-type")
    {
        if(packet_type == nullptr)
        {
            packet_type = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType>();
        }
        return packet_type;
    }

    if(child_yang_name == "remote-address")
    {
        if(remote_address == nullptr)
        {
            remote_address = std::make_shared<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress>();
        }
        return remote_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(packet_type != nullptr)
    {
        children["packet-type"] = packet_type;
    }

    if(remote_address != nullptr)
    {
        children["remote-address"] = remote_address;
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-types-info")
    {
        flow_types_info = value;
        flow_types_info.value_namespace = name_space;
        flow_types_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-length")
    {
        local_length = value;
        local_length.value_namespace = name_space;
        local_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-local-port")
    {
        receive_local_port = value;
        receive_local_port.value_namespace = name_space;
        receive_local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-remote-port")
    {
        receive_remote_port = value;
        receive_remote_port.value_namespace = name_space;
        receive_remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-length")
    {
        remote_length = value;
        remote_length.value_namespace = name_space;
        remote_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-types-info")
    {
        flow_types_info.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-length")
    {
        local_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "receive-local-port")
    {
        receive_local_port.yfilter = yfilter;
    }
    if(value_path == "receive-remote-port")
    {
        receive_remote_port.yfilter = yfilter;
    }
    if(value_path == "remote-length")
    {
        remote_length.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "packet-type" || name == "remote-address" || name == "flow-types-info" || name == "interface-name" || name == "local-length" || name == "priority" || name == "receive-local-port" || name == "receive-remote-port" || name == "remote-length" || name == "ttl")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "local-address"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::PacketType()
    :
    icm_pv6_message_type{YType::enumeration, "icm-pv6-message-type"},
    icmp_message_type{YType::enumeration, "icmp-message-type"},
    igmp_message_type{YType::enumeration, "igmp-message-type"},
    message_id{YType::uint32, "message-id"},
    type{YType::enumeration, "type"}
{

    yang_name = "packet-type"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::~PacketType()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::has_data() const
{
    return icm_pv6_message_type.is_set
	|| icmp_message_type.is_set
	|| igmp_message_type.is_set
	|| message_id.is_set
	|| type.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icm_pv6_message_type.yfilter)
	|| ydk::is_set(icmp_message_type.yfilter)
	|| ydk::is_set(igmp_message_type.yfilter)
	|| ydk::is_set(message_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icm_pv6_message_type.is_set || is_set(icm_pv6_message_type.yfilter)) leaf_name_data.push_back(icm_pv6_message_type.get_name_leafdata());
    if (icmp_message_type.is_set || is_set(icmp_message_type.yfilter)) leaf_name_data.push_back(icmp_message_type.get_name_leafdata());
    if (igmp_message_type.is_set || is_set(igmp_message_type.yfilter)) leaf_name_data.push_back(igmp_message_type.get_name_leafdata());
    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icm-pv6-message-type")
    {
        icm_pv6_message_type = value;
        icm_pv6_message_type.value_namespace = name_space;
        icm_pv6_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-message-type")
    {
        icmp_message_type = value;
        icmp_message_type.value_namespace = name_space;
        icmp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-message-type")
    {
        igmp_message_type = value;
        igmp_message_type.value_namespace = name_space;
        igmp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icm-pv6-message-type")
    {
        icm_pv6_message_type.yfilter = yfilter;
    }
    if(value_path == "icmp-message-type")
    {
        icmp_message_type.yfilter = yfilter;
    }
    if(value_path == "igmp-message-type")
    {
        igmp_message_type.yfilter = yfilter;
    }
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icm-pv6-message-type" || name == "icmp-message-type" || name == "igmp-message-type" || name == "message-id" || name == "type")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::RemoteAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "remote-address"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::~RemoteAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::LptsFlags()
    :
    is_ignore_vrf_filter{YType::boolean, "is-ignore-vrf-filter"},
    is_local_address_ignore{YType::boolean, "is-local-address-ignore"},
    is_pcb_bound{YType::boolean, "is-pcb-bound"}
{

    yang_name = "lpts-flags"; yang_parent_name = "lpts-pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::~LptsFlags()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::has_data() const
{
    return is_ignore_vrf_filter.is_set
	|| is_local_address_ignore.is_set
	|| is_pcb_bound.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ignore_vrf_filter.yfilter)
	|| ydk::is_set(is_local_address_ignore.yfilter)
	|| ydk::is_set(is_pcb_bound.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ignore_vrf_filter.is_set || is_set(is_ignore_vrf_filter.yfilter)) leaf_name_data.push_back(is_ignore_vrf_filter.get_name_leafdata());
    if (is_local_address_ignore.is_set || is_set(is_local_address_ignore.yfilter)) leaf_name_data.push_back(is_local_address_ignore.get_name_leafdata());
    if (is_pcb_bound.is_set || is_set(is_pcb_bound.yfilter)) leaf_name_data.push_back(is_pcb_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ignore-vrf-filter")
    {
        is_ignore_vrf_filter = value;
        is_ignore_vrf_filter.value_namespace = name_space;
        is_ignore_vrf_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-address-ignore")
    {
        is_local_address_ignore = value;
        is_local_address_ignore.value_namespace = name_space;
        is_local_address_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcb-bound")
    {
        is_pcb_bound = value;
        is_pcb_bound.value_namespace = name_space;
        is_pcb_bound.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ignore-vrf-filter")
    {
        is_ignore_vrf_filter.yfilter = yfilter;
    }
    if(value_path == "is-local-address-ignore")
    {
        is_local_address_ignore.yfilter = yfilter;
    }
    if(value_path == "is-pcb-bound")
    {
        is_pcb_bound.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ignore-vrf-filter" || name == "is-local-address-ignore" || name == "is-pcb-bound")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::Options()
    :
    is_ip_sla{YType::boolean, "is-ip-sla"},
    is_receive_filter{YType::boolean, "is-receive-filter"}
{

    yang_name = "options"; yang_parent_name = "lpts-pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::~Options()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::has_data() const
{
    return is_ip_sla.is_set
	|| is_receive_filter.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ip_sla.yfilter)
	|| ydk::is_set(is_receive_filter.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ip_sla.is_set || is_set(is_ip_sla.yfilter)) leaf_name_data.push_back(is_ip_sla.get_name_leafdata());
    if (is_receive_filter.is_set || is_set(is_receive_filter.yfilter)) leaf_name_data.push_back(is_receive_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ip-sla")
    {
        is_ip_sla = value;
        is_ip_sla.value_namespace = name_space;
        is_ip_sla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-receive-filter")
    {
        is_receive_filter = value;
        is_receive_filter.value_namespace = name_space;
        is_receive_filter.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ip-sla")
    {
        is_ip_sla.yfilter = yfilter;
    }
    if(value_path == "is-receive-filter")
    {
        is_receive_filter.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ip-sla" || name == "is-receive-filter")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::ForeignAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "foreign-address"; yang_parent_name = "connection-id"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::~ForeignAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "local-address"; yang_parent_name = "connection-id"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Statistics()
    :
    clients(std::make_shared<TcpConnection::Nodes::Node::Statistics::Clients>())
	,pcbs(std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs>())
	,summary(std::make_shared<TcpConnection::Nodes::Node::Statistics::Summary>())
{
    clients->parent = this;
    pcbs->parent = this;
    summary->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::~Statistics()
{
}

bool TcpConnection::Nodes::Node::Statistics::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (pcbs !=  nullptr && pcbs->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool TcpConnection::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (clients !=  nullptr && clients->has_operation())
	|| (pcbs !=  nullptr && pcbs->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string TcpConnection::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<TcpConnection::Nodes::Node::Statistics::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "pcbs")
    {
        if(pcbs == nullptr)
        {
            pcbs = std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs>();
        }
        return pcbs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<TcpConnection::Nodes::Node::Statistics::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(pcbs != nullptr)
    {
        children["pcbs"] = pcbs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "pcbs" || name == "summary")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Clients::Clients()
{

    yang_name = "clients"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Clients::~Clients()
{
}

bool TcpConnection::Nodes::Node::Statistics::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::Statistics::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::Statistics::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::Statistics::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::Statistics::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Clients::Client::Client()
    :
    client_id{YType::uint32, "client-id"},
    client_jid{YType::int32, "client-jid"},
    client_name{YType::str, "client-name"},
    ipv4_received_packets{YType::uint32, "ipv4-received-packets"},
    ipv4_sent_packets{YType::uint32, "ipv4-sent-packets"},
    ipv6_received_packets{YType::uint32, "ipv6-received-packets"},
    ipv6_sent_packets{YType::uint32, "ipv6-sent-packets"}
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Clients::Client::~Client()
{
}

bool TcpConnection::Nodes::Node::Statistics::Clients::Client::has_data() const
{
    return client_id.is_set
	|| client_jid.is_set
	|| client_name.is_set
	|| ipv4_received_packets.is_set
	|| ipv4_sent_packets.is_set
	|| ipv6_received_packets.is_set
	|| ipv6_sent_packets.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(client_jid.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(ipv4_received_packets.yfilter)
	|| ydk::is_set(ipv4_sent_packets.yfilter)
	|| ydk::is_set(ipv6_received_packets.yfilter)
	|| ydk::is_set(ipv6_sent_packets.yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_jid.is_set || is_set(client_jid.yfilter)) leaf_name_data.push_back(client_jid.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (ipv4_received_packets.is_set || is_set(ipv4_received_packets.yfilter)) leaf_name_data.push_back(ipv4_received_packets.get_name_leafdata());
    if (ipv4_sent_packets.is_set || is_set(ipv4_sent_packets.yfilter)) leaf_name_data.push_back(ipv4_sent_packets.get_name_leafdata());
    if (ipv6_received_packets.is_set || is_set(ipv6_received_packets.yfilter)) leaf_name_data.push_back(ipv6_received_packets.get_name_leafdata());
    if (ipv6_sent_packets.is_set || is_set(ipv6_sent_packets.yfilter)) leaf_name_data.push_back(ipv6_sent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-jid")
    {
        client_jid = value;
        client_jid.value_namespace = name_space;
        client_jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-received-packets")
    {
        ipv4_received_packets = value;
        ipv4_received_packets.value_namespace = name_space;
        ipv4_received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sent-packets")
    {
        ipv4_sent_packets = value;
        ipv4_sent_packets.value_namespace = name_space;
        ipv4_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-received-packets")
    {
        ipv6_received_packets = value;
        ipv6_received_packets.value_namespace = name_space;
        ipv6_received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sent-packets")
    {
        ipv6_sent_packets = value;
        ipv6_sent_packets.value_namespace = name_space;
        ipv6_sent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::Statistics::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "client-jid")
    {
        client_jid.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-received-packets")
    {
        ipv4_received_packets.yfilter = yfilter;
    }
    if(value_path == "ipv4-sent-packets")
    {
        ipv4_sent_packets.yfilter = yfilter;
    }
    if(value_path == "ipv6-received-packets")
    {
        ipv6_received_packets.yfilter = yfilter;
    }
    if(value_path == "ipv6-sent-packets")
    {
        ipv6_sent_packets.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::Statistics::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "client-jid" || name == "client-name" || name == "ipv4-received-packets" || name == "ipv4-sent-packets" || name == "ipv6-received-packets" || name == "ipv6-sent-packets")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcbs()
{

    yang_name = "pcbs"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::~Pcbs()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::has_data() const
{
    for (std::size_t index=0; index<pcb.size(); index++)
    {
        if(pcb[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::has_operation() const
{
    for (std::size_t index=0; index<pcb.size(); index++)
    {
        if(pcb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Pcbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Pcbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcb")
    {
        for(auto const & c : pcb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb>();
        c->parent = this;
        pcb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Pcbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pcb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcb")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::Pcb()
    :
    id{YType::uint32, "id"},
    is_paw_socket{YType::boolean, "is-paw-socket"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    pcb{YType::uint64, "pcb"},
    read_io_time{YType::uint32, "read-io-time"},
    receive_queue_failed{YType::uint32, "receive-queue-failed"},
    received_packets_queued{YType::uint64, "received-packets-queued"},
    segment_instruction_received{YType::uint32, "segment-instruction-received"},
    send_packets_queued{YType::uint64, "send-packets-queued"},
    send_packets_queued_net_io{YType::uint64, "send-packets-queued-net-io"},
    send_queue_failed{YType::uint32, "send-queue-failed"},
    send_queue_net_io_failed{YType::uint32, "send-queue-net-io-failed"},
    send_window_shrink_ignored{YType::uint32, "send-window-shrink-ignored"},
    vrf_id{YType::uint32, "vrf-id"},
    write_io_time{YType::uint32, "write-io-time"},
    xipc_pulse_received{YType::uint64, "xipc-pulse-received"}
    	,
    async_session_stats(std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats>())
	,read_io_counts(std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts>())
	,write_io_counts(std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts>())
{
    async_session_stats->parent = this;
    read_io_counts->parent = this;
    write_io_counts->parent = this;

    yang_name = "pcb"; yang_parent_name = "pcbs"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::~Pcb()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::has_data() const
{
    return id.is_set
	|| is_paw_socket.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| pcb.is_set
	|| read_io_time.is_set
	|| receive_queue_failed.is_set
	|| received_packets_queued.is_set
	|| segment_instruction_received.is_set
	|| send_packets_queued.is_set
	|| send_packets_queued_net_io.is_set
	|| send_queue_failed.is_set
	|| send_queue_net_io_failed.is_set
	|| send_window_shrink_ignored.is_set
	|| vrf_id.is_set
	|| write_io_time.is_set
	|| xipc_pulse_received.is_set
	|| (async_session_stats !=  nullptr && async_session_stats->has_data())
	|| (read_io_counts !=  nullptr && read_io_counts->has_data())
	|| (write_io_counts !=  nullptr && write_io_counts->has_data());
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(is_paw_socket.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(pcb.yfilter)
	|| ydk::is_set(read_io_time.yfilter)
	|| ydk::is_set(receive_queue_failed.yfilter)
	|| ydk::is_set(received_packets_queued.yfilter)
	|| ydk::is_set(segment_instruction_received.yfilter)
	|| ydk::is_set(send_packets_queued.yfilter)
	|| ydk::is_set(send_packets_queued_net_io.yfilter)
	|| ydk::is_set(send_queue_failed.yfilter)
	|| ydk::is_set(send_queue_net_io_failed.yfilter)
	|| ydk::is_set(send_window_shrink_ignored.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(write_io_time.yfilter)
	|| ydk::is_set(xipc_pulse_received.yfilter)
	|| (async_session_stats !=  nullptr && async_session_stats->has_operation())
	|| (read_io_counts !=  nullptr && read_io_counts->has_operation())
	|| (write_io_counts !=  nullptr && write_io_counts->has_operation());
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (is_paw_socket.is_set || is_set(is_paw_socket.yfilter)) leaf_name_data.push_back(is_paw_socket.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.yfilter)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (read_io_time.is_set || is_set(read_io_time.yfilter)) leaf_name_data.push_back(read_io_time.get_name_leafdata());
    if (receive_queue_failed.is_set || is_set(receive_queue_failed.yfilter)) leaf_name_data.push_back(receive_queue_failed.get_name_leafdata());
    if (received_packets_queued.is_set || is_set(received_packets_queued.yfilter)) leaf_name_data.push_back(received_packets_queued.get_name_leafdata());
    if (segment_instruction_received.is_set || is_set(segment_instruction_received.yfilter)) leaf_name_data.push_back(segment_instruction_received.get_name_leafdata());
    if (send_packets_queued.is_set || is_set(send_packets_queued.yfilter)) leaf_name_data.push_back(send_packets_queued.get_name_leafdata());
    if (send_packets_queued_net_io.is_set || is_set(send_packets_queued_net_io.yfilter)) leaf_name_data.push_back(send_packets_queued_net_io.get_name_leafdata());
    if (send_queue_failed.is_set || is_set(send_queue_failed.yfilter)) leaf_name_data.push_back(send_queue_failed.get_name_leafdata());
    if (send_queue_net_io_failed.is_set || is_set(send_queue_net_io_failed.yfilter)) leaf_name_data.push_back(send_queue_net_io_failed.get_name_leafdata());
    if (send_window_shrink_ignored.is_set || is_set(send_window_shrink_ignored.yfilter)) leaf_name_data.push_back(send_window_shrink_ignored.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (write_io_time.is_set || is_set(write_io_time.yfilter)) leaf_name_data.push_back(write_io_time.get_name_leafdata());
    if (xipc_pulse_received.is_set || is_set(xipc_pulse_received.yfilter)) leaf_name_data.push_back(xipc_pulse_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-session-stats")
    {
        if(async_session_stats == nullptr)
        {
            async_session_stats = std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats>();
        }
        return async_session_stats;
    }

    if(child_yang_name == "read-io-counts")
    {
        if(read_io_counts == nullptr)
        {
            read_io_counts = std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts>();
        }
        return read_io_counts;
    }

    if(child_yang_name == "write-io-counts")
    {
        if(write_io_counts == nullptr)
        {
            write_io_counts = std::make_shared<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts>();
        }
        return write_io_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_session_stats != nullptr)
    {
        children["async-session-stats"] = async_session_stats;
    }

    if(read_io_counts != nullptr)
    {
        children["read-io-counts"] = read_io_counts;
    }

    if(write_io_counts != nullptr)
    {
        children["write-io-counts"] = write_io_counts;
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-paw-socket")
    {
        is_paw_socket = value;
        is_paw_socket.value_namespace = name_space;
        is_paw_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb")
    {
        pcb = value;
        pcb.value_namespace = name_space;
        pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-io-time")
    {
        read_io_time = value;
        read_io_time.value_namespace = name_space;
        read_io_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-queue-failed")
    {
        receive_queue_failed = value;
        receive_queue_failed.value_namespace = name_space;
        receive_queue_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets-queued")
    {
        received_packets_queued = value;
        received_packets_queued.value_namespace = name_space;
        received_packets_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-instruction-received")
    {
        segment_instruction_received = value;
        segment_instruction_received.value_namespace = name_space;
        segment_instruction_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-packets-queued")
    {
        send_packets_queued = value;
        send_packets_queued.value_namespace = name_space;
        send_packets_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-packets-queued-net-io")
    {
        send_packets_queued_net_io = value;
        send_packets_queued_net_io.value_namespace = name_space;
        send_packets_queued_net_io.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue-failed")
    {
        send_queue_failed = value;
        send_queue_failed.value_namespace = name_space;
        send_queue_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue-net-io-failed")
    {
        send_queue_net_io_failed = value;
        send_queue_net_io_failed.value_namespace = name_space;
        send_queue_net_io_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-window-shrink-ignored")
    {
        send_window_shrink_ignored = value;
        send_window_shrink_ignored.value_namespace = name_space;
        send_window_shrink_ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-io-time")
    {
        write_io_time = value;
        write_io_time.value_namespace = name_space;
        write_io_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xipc-pulse-received")
    {
        xipc_pulse_received = value;
        xipc_pulse_received.value_namespace = name_space;
        xipc_pulse_received.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "is-paw-socket")
    {
        is_paw_socket.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "pcb")
    {
        pcb.yfilter = yfilter;
    }
    if(value_path == "read-io-time")
    {
        read_io_time.yfilter = yfilter;
    }
    if(value_path == "receive-queue-failed")
    {
        receive_queue_failed.yfilter = yfilter;
    }
    if(value_path == "received-packets-queued")
    {
        received_packets_queued.yfilter = yfilter;
    }
    if(value_path == "segment-instruction-received")
    {
        segment_instruction_received.yfilter = yfilter;
    }
    if(value_path == "send-packets-queued")
    {
        send_packets_queued.yfilter = yfilter;
    }
    if(value_path == "send-packets-queued-net-io")
    {
        send_packets_queued_net_io.yfilter = yfilter;
    }
    if(value_path == "send-queue-failed")
    {
        send_queue_failed.yfilter = yfilter;
    }
    if(value_path == "send-queue-net-io-failed")
    {
        send_queue_net_io_failed.yfilter = yfilter;
    }
    if(value_path == "send-window-shrink-ignored")
    {
        send_window_shrink_ignored.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "write-io-time")
    {
        write_io_time.yfilter = yfilter;
    }
    if(value_path == "xipc-pulse-received")
    {
        xipc_pulse_received.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-session-stats" || name == "read-io-counts" || name == "write-io-counts" || name == "id" || name == "is-paw-socket" || name == "packets-received" || name == "packets-sent" || name == "pcb" || name == "read-io-time" || name == "receive-queue-failed" || name == "received-packets-queued" || name == "segment-instruction-received" || name == "send-packets-queued" || name == "send-packets-queued-net-io" || name == "send-queue-failed" || name == "send-queue-net-io-failed" || name == "send-window-shrink-ignored" || name == "vrf-id" || name == "write-io-time" || name == "xipc-pulse-received")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::AsyncSessionStats()
    :
    async_session{YType::boolean, "async-session"},
    control_read_error_num{YType::uint32, "control-read-error-num"},
    control_read_success_num{YType::uint32, "control-read-success-num"},
    control_write_error_num{YType::uint32, "control-write-error-num"},
    control_write_success_num{YType::uint32, "control-write-success-num"},
    data_read_byte{YType::uint64, "data-read-byte"},
    data_read_error_num{YType::uint32, "data-read-error-num"},
    data_read_success_num{YType::uint32, "data-read-success-num"},
    data_write_byte{YType::uint64, "data-write-byte"},
    data_write_error_num{YType::uint32, "data-write-error-num"},
    data_write_success_num{YType::uint32, "data-write-success-num"}
{

    yang_name = "async-session-stats"; yang_parent_name = "pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::~AsyncSessionStats()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::has_data() const
{
    for (auto const & leaf : control_read_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : control_read_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : control_write_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : control_write_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_read_byte.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_read_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_read_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_write_byte.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_write_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_write_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return async_session.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::has_operation() const
{
    for (auto const & leaf : control_read_error_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : control_read_success_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : control_write_error_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : control_write_success_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : data_read_byte.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : data_read_error_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : data_read_success_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : data_write_byte.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : data_write_error_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : data_write_success_num.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(async_session.yfilter)
	|| ydk::is_set(control_read_error_num.yfilter)
	|| ydk::is_set(control_read_success_num.yfilter)
	|| ydk::is_set(control_write_error_num.yfilter)
	|| ydk::is_set(control_write_success_num.yfilter)
	|| ydk::is_set(data_read_byte.yfilter)
	|| ydk::is_set(data_read_error_num.yfilter)
	|| ydk::is_set(data_read_success_num.yfilter)
	|| ydk::is_set(data_write_byte.yfilter)
	|| ydk::is_set(data_write_error_num.yfilter)
	|| ydk::is_set(data_write_success_num.yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-session-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (async_session.is_set || is_set(async_session.yfilter)) leaf_name_data.push_back(async_session.get_name_leafdata());

    auto control_read_error_num_name_datas = control_read_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_read_error_num_name_datas.begin(), control_read_error_num_name_datas.end());
    auto control_read_success_num_name_datas = control_read_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_read_success_num_name_datas.begin(), control_read_success_num_name_datas.end());
    auto control_write_error_num_name_datas = control_write_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_write_error_num_name_datas.begin(), control_write_error_num_name_datas.end());
    auto control_write_success_num_name_datas = control_write_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_write_success_num_name_datas.begin(), control_write_success_num_name_datas.end());
    auto data_read_byte_name_datas = data_read_byte.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_read_byte_name_datas.begin(), data_read_byte_name_datas.end());
    auto data_read_error_num_name_datas = data_read_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_read_error_num_name_datas.begin(), data_read_error_num_name_datas.end());
    auto data_read_success_num_name_datas = data_read_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_read_success_num_name_datas.begin(), data_read_success_num_name_datas.end());
    auto data_write_byte_name_datas = data_write_byte.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_write_byte_name_datas.begin(), data_write_byte_name_datas.end());
    auto data_write_error_num_name_datas = data_write_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_write_error_num_name_datas.begin(), data_write_error_num_name_datas.end());
    auto data_write_success_num_name_datas = data_write_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_write_success_num_name_datas.begin(), data_write_success_num_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "async-session")
    {
        async_session = value;
        async_session.value_namespace = name_space;
        async_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-read-error-num")
    {
        control_read_error_num.append(value);
    }
    if(value_path == "control-read-success-num")
    {
        control_read_success_num.append(value);
    }
    if(value_path == "control-write-error-num")
    {
        control_write_error_num.append(value);
    }
    if(value_path == "control-write-success-num")
    {
        control_write_success_num.append(value);
    }
    if(value_path == "data-read-byte")
    {
        data_read_byte.append(value);
    }
    if(value_path == "data-read-error-num")
    {
        data_read_error_num.append(value);
    }
    if(value_path == "data-read-success-num")
    {
        data_read_success_num.append(value);
    }
    if(value_path == "data-write-byte")
    {
        data_write_byte.append(value);
    }
    if(value_path == "data-write-error-num")
    {
        data_write_error_num.append(value);
    }
    if(value_path == "data-write-success-num")
    {
        data_write_success_num.append(value);
    }
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "async-session")
    {
        async_session.yfilter = yfilter;
    }
    if(value_path == "control-read-error-num")
    {
        control_read_error_num.yfilter = yfilter;
    }
    if(value_path == "control-read-success-num")
    {
        control_read_success_num.yfilter = yfilter;
    }
    if(value_path == "control-write-error-num")
    {
        control_write_error_num.yfilter = yfilter;
    }
    if(value_path == "control-write-success-num")
    {
        control_write_success_num.yfilter = yfilter;
    }
    if(value_path == "data-read-byte")
    {
        data_read_byte.yfilter = yfilter;
    }
    if(value_path == "data-read-error-num")
    {
        data_read_error_num.yfilter = yfilter;
    }
    if(value_path == "data-read-success-num")
    {
        data_read_success_num.yfilter = yfilter;
    }
    if(value_path == "data-write-byte")
    {
        data_write_byte.yfilter = yfilter;
    }
    if(value_path == "data-write-error-num")
    {
        data_write_error_num.yfilter = yfilter;
    }
    if(value_path == "data-write-success-num")
    {
        data_write_success_num.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-session" || name == "control-read-error-num" || name == "control-read-success-num" || name == "control-write-error-num" || name == "control-write-success-num" || name == "data-read-byte" || name == "data-read-error-num" || name == "data-read-success-num" || name == "data-write-byte" || name == "data-write-error-num" || name == "data-write-success-num")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::ReadIoCounts()
    :
    arm_count{YType::uint32, "arm-count"},
    autoarm_count{YType::uint32, "autoarm-count"},
    io_count{YType::uint32, "io-count"},
    unarm_count{YType::uint32, "unarm-count"}
{

    yang_name = "read-io-counts"; yang_parent_name = "pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::~ReadIoCounts()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::has_data() const
{
    return arm_count.is_set
	|| autoarm_count.is_set
	|| io_count.is_set
	|| unarm_count.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arm_count.yfilter)
	|| ydk::is_set(autoarm_count.yfilter)
	|| ydk::is_set(io_count.yfilter)
	|| ydk::is_set(unarm_count.yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "read-io-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arm_count.is_set || is_set(arm_count.yfilter)) leaf_name_data.push_back(arm_count.get_name_leafdata());
    if (autoarm_count.is_set || is_set(autoarm_count.yfilter)) leaf_name_data.push_back(autoarm_count.get_name_leafdata());
    if (io_count.is_set || is_set(io_count.yfilter)) leaf_name_data.push_back(io_count.get_name_leafdata());
    if (unarm_count.is_set || is_set(unarm_count.yfilter)) leaf_name_data.push_back(unarm_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arm-count")
    {
        arm_count = value;
        arm_count.value_namespace = name_space;
        arm_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoarm-count")
    {
        autoarm_count = value;
        autoarm_count.value_namespace = name_space;
        autoarm_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-count")
    {
        io_count = value;
        io_count.value_namespace = name_space;
        io_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unarm-count")
    {
        unarm_count = value;
        unarm_count.value_namespace = name_space;
        unarm_count.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arm-count")
    {
        arm_count.yfilter = yfilter;
    }
    if(value_path == "autoarm-count")
    {
        autoarm_count.yfilter = yfilter;
    }
    if(value_path == "io-count")
    {
        io_count.yfilter = yfilter;
    }
    if(value_path == "unarm-count")
    {
        unarm_count.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arm-count" || name == "autoarm-count" || name == "io-count" || name == "unarm-count")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::WriteIoCounts()
    :
    arm_count{YType::uint32, "arm-count"},
    autoarm_count{YType::uint32, "autoarm-count"},
    io_count{YType::uint32, "io-count"},
    unarm_count{YType::uint32, "unarm-count"}
{

    yang_name = "write-io-counts"; yang_parent_name = "pcb"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::~WriteIoCounts()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::has_data() const
{
    return arm_count.is_set
	|| autoarm_count.is_set
	|| io_count.is_set
	|| unarm_count.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arm_count.yfilter)
	|| ydk::is_set(autoarm_count.yfilter)
	|| ydk::is_set(io_count.yfilter)
	|| ydk::is_set(unarm_count.yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write-io-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arm_count.is_set || is_set(arm_count.yfilter)) leaf_name_data.push_back(arm_count.get_name_leafdata());
    if (autoarm_count.is_set || is_set(autoarm_count.yfilter)) leaf_name_data.push_back(autoarm_count.get_name_leafdata());
    if (io_count.is_set || is_set(io_count.yfilter)) leaf_name_data.push_back(io_count.get_name_leafdata());
    if (unarm_count.is_set || is_set(unarm_count.yfilter)) leaf_name_data.push_back(unarm_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arm-count")
    {
        arm_count = value;
        arm_count.value_namespace = name_space;
        arm_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoarm-count")
    {
        autoarm_count = value;
        autoarm_count.value_namespace = name_space;
        autoarm_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-count")
    {
        io_count = value;
        io_count.value_namespace = name_space;
        io_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unarm-count")
    {
        unarm_count = value;
        unarm_count.value_namespace = name_space;
        unarm_count.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arm-count")
    {
        arm_count.yfilter = yfilter;
    }
    if(value_path == "autoarm-count")
    {
        autoarm_count.yfilter = yfilter;
    }
    if(value_path == "io-count")
    {
        io_count.yfilter = yfilter;
    }
    if(value_path == "unarm-count")
    {
        unarm_count.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arm-count" || name == "autoarm-count" || name == "io-count" || name == "unarm-count")
        return true;
    return false;
}

TcpConnection::Nodes::Node::Statistics::Summary::Summary()
    :
    ack_only_packets_sent{YType::uint32, "ack-only-packets-sent"},
    ack_packets_for_unsent_received{YType::uint32, "ack-packets-for-unsent-received"},
    ack_packets_received{YType::uint32, "ack-packets-received"},
    ackbytes_received{YType::uint32, "ackbytes-received"},
    after_window_bytes_received{YType::uint32, "after-window-bytes-received"},
    after_window_packets_received{YType::uint32, "after-window-packets-received"},
    bad_checksum_packets_received{YType::uint32, "bad-checksum-packets-received"},
    bytes_retransmitted{YType::uint32, "bytes-retransmitted"},
    connection_rate_limited{YType::uint32, "connection-rate-limited"},
    connections_accepted{YType::uint32, "connections-accepted"},
    connections_closed{YType::uint32, "connections-closed"},
    connections_dropped{YType::uint32, "connections-dropped"},
    connections_established{YType::uint32, "connections-established"},
    connections_failed{YType::uint32, "connections-failed"},
    connections_forcibly_closed{YType::uint32, "connections-forcibly-closed"},
    connections_requested{YType::uint32, "connections-requested"},
    control_packets_sent{YType::uint32, "control-packets-sent"},
    data_bytes_received_in_sequence{YType::uint32, "data-bytes-received-in-sequence"},
    data_bytes_sent{YType::uint32, "data-bytes-sent"},
    data_packets_received_in_sequence{YType::uint32, "data-packets-received-in-sequence"},
    data_pakets_sent{YType::uint32, "data-pakets-sent"},
    delay_ack_packets_sent{YType::uint32, "delay-ack-packets-sent"},
    duplicate_bytes_received{YType::uint32, "duplicate-bytes-received"},
    duplicate_packets_received{YType::uint32, "duplicate-packets-received"},
    duplicated_ack_packets_received{YType::uint32, "duplicated-ack-packets-received"},
    embryonic_connection_dropped{YType::uint32, "embryonic-connection-dropped"},
    established_connections_reset{YType::uint32, "established-connections-reset"},
    high_water_mark_throttle{YType::uint32, "high-water-mark-throttle"},
    iq_ingress_drops{YType::uint32, "iq-ingress-drops"},
    iq_sock_aborts{YType::uint32, "iq-sock-aborts"},
    iq_sock_retries{YType::uint32, "iq-sock-retries"},
    iq_sock_writes{YType::uint32, "iq-sock-writes"},
    keep_alive_dropped{YType::uint32, "keep-alive-dropped"},
    keep_alive_probes{YType::uint32, "keep-alive-probes"},
    keep_alive_timeouts{YType::uint32, "keep-alive-timeouts"},
    low_water_mark_throttle{YType::uint32, "low-water-mark-throttle"},
    malformed_packets_received{YType::uint32, "malformed-packets-received"},
    mss_down{YType::uint32, "mss-down"},
    mss_up{YType::uint32, "mss-up"},
    no_port_packets_received{YType::uint32, "no-port-packets-received"},
    no_throttle{YType::uint32, "no-throttle"},
    num_open_sockets{YType::uint32, "num-open-sockets"},
    out_of_order_bytes_received{YType::uint32, "out-of-order-bytes-received"},
    out_of_order_packets_received{YType::uint32, "out-of-order-packets-received"},
    packet_failures{YType::uint32, "packet-failures"},
    packets_received_after_close_packet{YType::uint32, "packets-received-after-close-packet"},
    packets_retransmitted{YType::uint32, "packets-retransmitted"},
    partial_duplicate_ack_received{YType::uint32, "partial-duplicate-ack-received"},
    partial_duplicate_bytes_received{YType::uint32, "partial-duplicate-bytes-received"},
    paws_dropped{YType::uint32, "paws-dropped"},
    persist_dropped{YType::uint32, "persist-dropped"},
    pulse_errors{YType::uint32, "pulse-errors"},
    reassembly_packets{YType::uint32, "reassembly-packets"},
    received_auth_packets_dropped{YType::uint32, "received-auth-packets-dropped"},
    received_packets_dropped{YType::uint32, "received-packets-dropped"},
    received_packets_dropped_stale_c_hdr{YType::uint32, "received-packets-dropped-stale-c-hdr"},
    recovered_packets{YType::uint32, "recovered-packets"},
    retransmit_dropped{YType::uint32, "retransmit-dropped"},
    retransmit_timeouts{YType::uint32, "retransmit-timeouts"},
    rst_packets_sent{YType::uint32, "rst-packets-sent"},
    send_auth_packets_dropped{YType::uint32, "send-auth-packets-dropped"},
    send_packets_dropped{YType::uint32, "send-packets-dropped"},
    socket_layer_packets{YType::uint32, "socket-layer-packets"},
    stalled_timer_tickle_count{YType::uint32, "stalled-timer-tickle-count"},
    stalled_timer_tickle_time{YType::uint32, "stalled-timer-tickle-time"},
    syn_cache_aborted{YType::uint32, "syn-cache-aborted"},
    syn_cache_added{YType::uint32, "syn-cache-added"},
    syn_cache_bucket_oflow{YType::uint32, "syn-cache-bucket-oflow"},
    syn_cache_completed{YType::uint32, "syn-cache-completed"},
    syn_cache_count{YType::uint32, "syn-cache-count"},
    syn_cache_dropped{YType::uint32, "syn-cache-dropped"},
    syn_cache_duplicate_sy_ns{YType::uint32, "syn-cache-duplicate-sy-ns"},
    syn_cache_overflow{YType::uint32, "syn-cache-overflow"},
    syn_cache_reset{YType::uint32, "syn-cache-reset"},
    syn_cache_timed_out{YType::uint32, "syn-cache-timed-out"},
    syn_cache_unreach{YType::uint32, "syn-cache-unreach"},
    synacl_match_pkts_dropped{YType::uint32, "synacl-match-pkts-dropped"},
    too_short_packets_received{YType::uint32, "too-short-packets-received"},
    total_i_qs{YType::uint32, "total-i-qs"},
    total_packets_received{YType::uint32, "total-packets-received"},
    total_pakets_sent{YType::uint32, "total-pakets-sent"},
    truncated_write_iov{YType::uint32, "truncated-write-iov"},
    try_lock_dropped{YType::uint32, "try-lock-dropped"},
    urgent_only_packets_sent{YType::uint32, "urgent-only-packets-sent"},
    window_probe_packets_received{YType::uint32, "window-probe-packets-received"},
    window_probe_packets_sent{YType::uint32, "window-probe-packets-sent"},
    window_update_packets_received{YType::uint32, "window-update-packets-received"},
    window_update_packets_sent{YType::uint32, "window-update-packets-sent"}
{

    yang_name = "summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpConnection::Nodes::Node::Statistics::Summary::~Summary()
{
}

bool TcpConnection::Nodes::Node::Statistics::Summary::has_data() const
{
    return ack_only_packets_sent.is_set
	|| ack_packets_for_unsent_received.is_set
	|| ack_packets_received.is_set
	|| ackbytes_received.is_set
	|| after_window_bytes_received.is_set
	|| after_window_packets_received.is_set
	|| bad_checksum_packets_received.is_set
	|| bytes_retransmitted.is_set
	|| connection_rate_limited.is_set
	|| connections_accepted.is_set
	|| connections_closed.is_set
	|| connections_dropped.is_set
	|| connections_established.is_set
	|| connections_failed.is_set
	|| connections_forcibly_closed.is_set
	|| connections_requested.is_set
	|| control_packets_sent.is_set
	|| data_bytes_received_in_sequence.is_set
	|| data_bytes_sent.is_set
	|| data_packets_received_in_sequence.is_set
	|| data_pakets_sent.is_set
	|| delay_ack_packets_sent.is_set
	|| duplicate_bytes_received.is_set
	|| duplicate_packets_received.is_set
	|| duplicated_ack_packets_received.is_set
	|| embryonic_connection_dropped.is_set
	|| established_connections_reset.is_set
	|| high_water_mark_throttle.is_set
	|| iq_ingress_drops.is_set
	|| iq_sock_aborts.is_set
	|| iq_sock_retries.is_set
	|| iq_sock_writes.is_set
	|| keep_alive_dropped.is_set
	|| keep_alive_probes.is_set
	|| keep_alive_timeouts.is_set
	|| low_water_mark_throttle.is_set
	|| malformed_packets_received.is_set
	|| mss_down.is_set
	|| mss_up.is_set
	|| no_port_packets_received.is_set
	|| no_throttle.is_set
	|| num_open_sockets.is_set
	|| out_of_order_bytes_received.is_set
	|| out_of_order_packets_received.is_set
	|| packet_failures.is_set
	|| packets_received_after_close_packet.is_set
	|| packets_retransmitted.is_set
	|| partial_duplicate_ack_received.is_set
	|| partial_duplicate_bytes_received.is_set
	|| paws_dropped.is_set
	|| persist_dropped.is_set
	|| pulse_errors.is_set
	|| reassembly_packets.is_set
	|| received_auth_packets_dropped.is_set
	|| received_packets_dropped.is_set
	|| received_packets_dropped_stale_c_hdr.is_set
	|| recovered_packets.is_set
	|| retransmit_dropped.is_set
	|| retransmit_timeouts.is_set
	|| rst_packets_sent.is_set
	|| send_auth_packets_dropped.is_set
	|| send_packets_dropped.is_set
	|| socket_layer_packets.is_set
	|| stalled_timer_tickle_count.is_set
	|| stalled_timer_tickle_time.is_set
	|| syn_cache_aborted.is_set
	|| syn_cache_added.is_set
	|| syn_cache_bucket_oflow.is_set
	|| syn_cache_completed.is_set
	|| syn_cache_count.is_set
	|| syn_cache_dropped.is_set
	|| syn_cache_duplicate_sy_ns.is_set
	|| syn_cache_overflow.is_set
	|| syn_cache_reset.is_set
	|| syn_cache_timed_out.is_set
	|| syn_cache_unreach.is_set
	|| synacl_match_pkts_dropped.is_set
	|| too_short_packets_received.is_set
	|| total_i_qs.is_set
	|| total_packets_received.is_set
	|| total_pakets_sent.is_set
	|| truncated_write_iov.is_set
	|| try_lock_dropped.is_set
	|| urgent_only_packets_sent.is_set
	|| window_probe_packets_received.is_set
	|| window_probe_packets_sent.is_set
	|| window_update_packets_received.is_set
	|| window_update_packets_sent.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_only_packets_sent.yfilter)
	|| ydk::is_set(ack_packets_for_unsent_received.yfilter)
	|| ydk::is_set(ack_packets_received.yfilter)
	|| ydk::is_set(ackbytes_received.yfilter)
	|| ydk::is_set(after_window_bytes_received.yfilter)
	|| ydk::is_set(after_window_packets_received.yfilter)
	|| ydk::is_set(bad_checksum_packets_received.yfilter)
	|| ydk::is_set(bytes_retransmitted.yfilter)
	|| ydk::is_set(connection_rate_limited.yfilter)
	|| ydk::is_set(connections_accepted.yfilter)
	|| ydk::is_set(connections_closed.yfilter)
	|| ydk::is_set(connections_dropped.yfilter)
	|| ydk::is_set(connections_established.yfilter)
	|| ydk::is_set(connections_failed.yfilter)
	|| ydk::is_set(connections_forcibly_closed.yfilter)
	|| ydk::is_set(connections_requested.yfilter)
	|| ydk::is_set(control_packets_sent.yfilter)
	|| ydk::is_set(data_bytes_received_in_sequence.yfilter)
	|| ydk::is_set(data_bytes_sent.yfilter)
	|| ydk::is_set(data_packets_received_in_sequence.yfilter)
	|| ydk::is_set(data_pakets_sent.yfilter)
	|| ydk::is_set(delay_ack_packets_sent.yfilter)
	|| ydk::is_set(duplicate_bytes_received.yfilter)
	|| ydk::is_set(duplicate_packets_received.yfilter)
	|| ydk::is_set(duplicated_ack_packets_received.yfilter)
	|| ydk::is_set(embryonic_connection_dropped.yfilter)
	|| ydk::is_set(established_connections_reset.yfilter)
	|| ydk::is_set(high_water_mark_throttle.yfilter)
	|| ydk::is_set(iq_ingress_drops.yfilter)
	|| ydk::is_set(iq_sock_aborts.yfilter)
	|| ydk::is_set(iq_sock_retries.yfilter)
	|| ydk::is_set(iq_sock_writes.yfilter)
	|| ydk::is_set(keep_alive_dropped.yfilter)
	|| ydk::is_set(keep_alive_probes.yfilter)
	|| ydk::is_set(keep_alive_timeouts.yfilter)
	|| ydk::is_set(low_water_mark_throttle.yfilter)
	|| ydk::is_set(malformed_packets_received.yfilter)
	|| ydk::is_set(mss_down.yfilter)
	|| ydk::is_set(mss_up.yfilter)
	|| ydk::is_set(no_port_packets_received.yfilter)
	|| ydk::is_set(no_throttle.yfilter)
	|| ydk::is_set(num_open_sockets.yfilter)
	|| ydk::is_set(out_of_order_bytes_received.yfilter)
	|| ydk::is_set(out_of_order_packets_received.yfilter)
	|| ydk::is_set(packet_failures.yfilter)
	|| ydk::is_set(packets_received_after_close_packet.yfilter)
	|| ydk::is_set(packets_retransmitted.yfilter)
	|| ydk::is_set(partial_duplicate_ack_received.yfilter)
	|| ydk::is_set(partial_duplicate_bytes_received.yfilter)
	|| ydk::is_set(paws_dropped.yfilter)
	|| ydk::is_set(persist_dropped.yfilter)
	|| ydk::is_set(pulse_errors.yfilter)
	|| ydk::is_set(reassembly_packets.yfilter)
	|| ydk::is_set(received_auth_packets_dropped.yfilter)
	|| ydk::is_set(received_packets_dropped.yfilter)
	|| ydk::is_set(received_packets_dropped_stale_c_hdr.yfilter)
	|| ydk::is_set(recovered_packets.yfilter)
	|| ydk::is_set(retransmit_dropped.yfilter)
	|| ydk::is_set(retransmit_timeouts.yfilter)
	|| ydk::is_set(rst_packets_sent.yfilter)
	|| ydk::is_set(send_auth_packets_dropped.yfilter)
	|| ydk::is_set(send_packets_dropped.yfilter)
	|| ydk::is_set(socket_layer_packets.yfilter)
	|| ydk::is_set(stalled_timer_tickle_count.yfilter)
	|| ydk::is_set(stalled_timer_tickle_time.yfilter)
	|| ydk::is_set(syn_cache_aborted.yfilter)
	|| ydk::is_set(syn_cache_added.yfilter)
	|| ydk::is_set(syn_cache_bucket_oflow.yfilter)
	|| ydk::is_set(syn_cache_completed.yfilter)
	|| ydk::is_set(syn_cache_count.yfilter)
	|| ydk::is_set(syn_cache_dropped.yfilter)
	|| ydk::is_set(syn_cache_duplicate_sy_ns.yfilter)
	|| ydk::is_set(syn_cache_overflow.yfilter)
	|| ydk::is_set(syn_cache_reset.yfilter)
	|| ydk::is_set(syn_cache_timed_out.yfilter)
	|| ydk::is_set(syn_cache_unreach.yfilter)
	|| ydk::is_set(synacl_match_pkts_dropped.yfilter)
	|| ydk::is_set(too_short_packets_received.yfilter)
	|| ydk::is_set(total_i_qs.yfilter)
	|| ydk::is_set(total_packets_received.yfilter)
	|| ydk::is_set(total_pakets_sent.yfilter)
	|| ydk::is_set(truncated_write_iov.yfilter)
	|| ydk::is_set(try_lock_dropped.yfilter)
	|| ydk::is_set(urgent_only_packets_sent.yfilter)
	|| ydk::is_set(window_probe_packets_received.yfilter)
	|| ydk::is_set(window_probe_packets_sent.yfilter)
	|| ydk::is_set(window_update_packets_received.yfilter)
	|| ydk::is_set(window_update_packets_sent.yfilter);
}

std::string TcpConnection::Nodes::Node::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpConnection::Nodes::Node::Statistics::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_only_packets_sent.is_set || is_set(ack_only_packets_sent.yfilter)) leaf_name_data.push_back(ack_only_packets_sent.get_name_leafdata());
    if (ack_packets_for_unsent_received.is_set || is_set(ack_packets_for_unsent_received.yfilter)) leaf_name_data.push_back(ack_packets_for_unsent_received.get_name_leafdata());
    if (ack_packets_received.is_set || is_set(ack_packets_received.yfilter)) leaf_name_data.push_back(ack_packets_received.get_name_leafdata());
    if (ackbytes_received.is_set || is_set(ackbytes_received.yfilter)) leaf_name_data.push_back(ackbytes_received.get_name_leafdata());
    if (after_window_bytes_received.is_set || is_set(after_window_bytes_received.yfilter)) leaf_name_data.push_back(after_window_bytes_received.get_name_leafdata());
    if (after_window_packets_received.is_set || is_set(after_window_packets_received.yfilter)) leaf_name_data.push_back(after_window_packets_received.get_name_leafdata());
    if (bad_checksum_packets_received.is_set || is_set(bad_checksum_packets_received.yfilter)) leaf_name_data.push_back(bad_checksum_packets_received.get_name_leafdata());
    if (bytes_retransmitted.is_set || is_set(bytes_retransmitted.yfilter)) leaf_name_data.push_back(bytes_retransmitted.get_name_leafdata());
    if (connection_rate_limited.is_set || is_set(connection_rate_limited.yfilter)) leaf_name_data.push_back(connection_rate_limited.get_name_leafdata());
    if (connections_accepted.is_set || is_set(connections_accepted.yfilter)) leaf_name_data.push_back(connections_accepted.get_name_leafdata());
    if (connections_closed.is_set || is_set(connections_closed.yfilter)) leaf_name_data.push_back(connections_closed.get_name_leafdata());
    if (connections_dropped.is_set || is_set(connections_dropped.yfilter)) leaf_name_data.push_back(connections_dropped.get_name_leafdata());
    if (connections_established.is_set || is_set(connections_established.yfilter)) leaf_name_data.push_back(connections_established.get_name_leafdata());
    if (connections_failed.is_set || is_set(connections_failed.yfilter)) leaf_name_data.push_back(connections_failed.get_name_leafdata());
    if (connections_forcibly_closed.is_set || is_set(connections_forcibly_closed.yfilter)) leaf_name_data.push_back(connections_forcibly_closed.get_name_leafdata());
    if (connections_requested.is_set || is_set(connections_requested.yfilter)) leaf_name_data.push_back(connections_requested.get_name_leafdata());
    if (control_packets_sent.is_set || is_set(control_packets_sent.yfilter)) leaf_name_data.push_back(control_packets_sent.get_name_leafdata());
    if (data_bytes_received_in_sequence.is_set || is_set(data_bytes_received_in_sequence.yfilter)) leaf_name_data.push_back(data_bytes_received_in_sequence.get_name_leafdata());
    if (data_bytes_sent.is_set || is_set(data_bytes_sent.yfilter)) leaf_name_data.push_back(data_bytes_sent.get_name_leafdata());
    if (data_packets_received_in_sequence.is_set || is_set(data_packets_received_in_sequence.yfilter)) leaf_name_data.push_back(data_packets_received_in_sequence.get_name_leafdata());
    if (data_pakets_sent.is_set || is_set(data_pakets_sent.yfilter)) leaf_name_data.push_back(data_pakets_sent.get_name_leafdata());
    if (delay_ack_packets_sent.is_set || is_set(delay_ack_packets_sent.yfilter)) leaf_name_data.push_back(delay_ack_packets_sent.get_name_leafdata());
    if (duplicate_bytes_received.is_set || is_set(duplicate_bytes_received.yfilter)) leaf_name_data.push_back(duplicate_bytes_received.get_name_leafdata());
    if (duplicate_packets_received.is_set || is_set(duplicate_packets_received.yfilter)) leaf_name_data.push_back(duplicate_packets_received.get_name_leafdata());
    if (duplicated_ack_packets_received.is_set || is_set(duplicated_ack_packets_received.yfilter)) leaf_name_data.push_back(duplicated_ack_packets_received.get_name_leafdata());
    if (embryonic_connection_dropped.is_set || is_set(embryonic_connection_dropped.yfilter)) leaf_name_data.push_back(embryonic_connection_dropped.get_name_leafdata());
    if (established_connections_reset.is_set || is_set(established_connections_reset.yfilter)) leaf_name_data.push_back(established_connections_reset.get_name_leafdata());
    if (high_water_mark_throttle.is_set || is_set(high_water_mark_throttle.yfilter)) leaf_name_data.push_back(high_water_mark_throttle.get_name_leafdata());
    if (iq_ingress_drops.is_set || is_set(iq_ingress_drops.yfilter)) leaf_name_data.push_back(iq_ingress_drops.get_name_leafdata());
    if (iq_sock_aborts.is_set || is_set(iq_sock_aborts.yfilter)) leaf_name_data.push_back(iq_sock_aborts.get_name_leafdata());
    if (iq_sock_retries.is_set || is_set(iq_sock_retries.yfilter)) leaf_name_data.push_back(iq_sock_retries.get_name_leafdata());
    if (iq_sock_writes.is_set || is_set(iq_sock_writes.yfilter)) leaf_name_data.push_back(iq_sock_writes.get_name_leafdata());
    if (keep_alive_dropped.is_set || is_set(keep_alive_dropped.yfilter)) leaf_name_data.push_back(keep_alive_dropped.get_name_leafdata());
    if (keep_alive_probes.is_set || is_set(keep_alive_probes.yfilter)) leaf_name_data.push_back(keep_alive_probes.get_name_leafdata());
    if (keep_alive_timeouts.is_set || is_set(keep_alive_timeouts.yfilter)) leaf_name_data.push_back(keep_alive_timeouts.get_name_leafdata());
    if (low_water_mark_throttle.is_set || is_set(low_water_mark_throttle.yfilter)) leaf_name_data.push_back(low_water_mark_throttle.get_name_leafdata());
    if (malformed_packets_received.is_set || is_set(malformed_packets_received.yfilter)) leaf_name_data.push_back(malformed_packets_received.get_name_leafdata());
    if (mss_down.is_set || is_set(mss_down.yfilter)) leaf_name_data.push_back(mss_down.get_name_leafdata());
    if (mss_up.is_set || is_set(mss_up.yfilter)) leaf_name_data.push_back(mss_up.get_name_leafdata());
    if (no_port_packets_received.is_set || is_set(no_port_packets_received.yfilter)) leaf_name_data.push_back(no_port_packets_received.get_name_leafdata());
    if (no_throttle.is_set || is_set(no_throttle.yfilter)) leaf_name_data.push_back(no_throttle.get_name_leafdata());
    if (num_open_sockets.is_set || is_set(num_open_sockets.yfilter)) leaf_name_data.push_back(num_open_sockets.get_name_leafdata());
    if (out_of_order_bytes_received.is_set || is_set(out_of_order_bytes_received.yfilter)) leaf_name_data.push_back(out_of_order_bytes_received.get_name_leafdata());
    if (out_of_order_packets_received.is_set || is_set(out_of_order_packets_received.yfilter)) leaf_name_data.push_back(out_of_order_packets_received.get_name_leafdata());
    if (packet_failures.is_set || is_set(packet_failures.yfilter)) leaf_name_data.push_back(packet_failures.get_name_leafdata());
    if (packets_received_after_close_packet.is_set || is_set(packets_received_after_close_packet.yfilter)) leaf_name_data.push_back(packets_received_after_close_packet.get_name_leafdata());
    if (packets_retransmitted.is_set || is_set(packets_retransmitted.yfilter)) leaf_name_data.push_back(packets_retransmitted.get_name_leafdata());
    if (partial_duplicate_ack_received.is_set || is_set(partial_duplicate_ack_received.yfilter)) leaf_name_data.push_back(partial_duplicate_ack_received.get_name_leafdata());
    if (partial_duplicate_bytes_received.is_set || is_set(partial_duplicate_bytes_received.yfilter)) leaf_name_data.push_back(partial_duplicate_bytes_received.get_name_leafdata());
    if (paws_dropped.is_set || is_set(paws_dropped.yfilter)) leaf_name_data.push_back(paws_dropped.get_name_leafdata());
    if (persist_dropped.is_set || is_set(persist_dropped.yfilter)) leaf_name_data.push_back(persist_dropped.get_name_leafdata());
    if (pulse_errors.is_set || is_set(pulse_errors.yfilter)) leaf_name_data.push_back(pulse_errors.get_name_leafdata());
    if (reassembly_packets.is_set || is_set(reassembly_packets.yfilter)) leaf_name_data.push_back(reassembly_packets.get_name_leafdata());
    if (received_auth_packets_dropped.is_set || is_set(received_auth_packets_dropped.yfilter)) leaf_name_data.push_back(received_auth_packets_dropped.get_name_leafdata());
    if (received_packets_dropped.is_set || is_set(received_packets_dropped.yfilter)) leaf_name_data.push_back(received_packets_dropped.get_name_leafdata());
    if (received_packets_dropped_stale_c_hdr.is_set || is_set(received_packets_dropped_stale_c_hdr.yfilter)) leaf_name_data.push_back(received_packets_dropped_stale_c_hdr.get_name_leafdata());
    if (recovered_packets.is_set || is_set(recovered_packets.yfilter)) leaf_name_data.push_back(recovered_packets.get_name_leafdata());
    if (retransmit_dropped.is_set || is_set(retransmit_dropped.yfilter)) leaf_name_data.push_back(retransmit_dropped.get_name_leafdata());
    if (retransmit_timeouts.is_set || is_set(retransmit_timeouts.yfilter)) leaf_name_data.push_back(retransmit_timeouts.get_name_leafdata());
    if (rst_packets_sent.is_set || is_set(rst_packets_sent.yfilter)) leaf_name_data.push_back(rst_packets_sent.get_name_leafdata());
    if (send_auth_packets_dropped.is_set || is_set(send_auth_packets_dropped.yfilter)) leaf_name_data.push_back(send_auth_packets_dropped.get_name_leafdata());
    if (send_packets_dropped.is_set || is_set(send_packets_dropped.yfilter)) leaf_name_data.push_back(send_packets_dropped.get_name_leafdata());
    if (socket_layer_packets.is_set || is_set(socket_layer_packets.yfilter)) leaf_name_data.push_back(socket_layer_packets.get_name_leafdata());
    if (stalled_timer_tickle_count.is_set || is_set(stalled_timer_tickle_count.yfilter)) leaf_name_data.push_back(stalled_timer_tickle_count.get_name_leafdata());
    if (stalled_timer_tickle_time.is_set || is_set(stalled_timer_tickle_time.yfilter)) leaf_name_data.push_back(stalled_timer_tickle_time.get_name_leafdata());
    if (syn_cache_aborted.is_set || is_set(syn_cache_aborted.yfilter)) leaf_name_data.push_back(syn_cache_aborted.get_name_leafdata());
    if (syn_cache_added.is_set || is_set(syn_cache_added.yfilter)) leaf_name_data.push_back(syn_cache_added.get_name_leafdata());
    if (syn_cache_bucket_oflow.is_set || is_set(syn_cache_bucket_oflow.yfilter)) leaf_name_data.push_back(syn_cache_bucket_oflow.get_name_leafdata());
    if (syn_cache_completed.is_set || is_set(syn_cache_completed.yfilter)) leaf_name_data.push_back(syn_cache_completed.get_name_leafdata());
    if (syn_cache_count.is_set || is_set(syn_cache_count.yfilter)) leaf_name_data.push_back(syn_cache_count.get_name_leafdata());
    if (syn_cache_dropped.is_set || is_set(syn_cache_dropped.yfilter)) leaf_name_data.push_back(syn_cache_dropped.get_name_leafdata());
    if (syn_cache_duplicate_sy_ns.is_set || is_set(syn_cache_duplicate_sy_ns.yfilter)) leaf_name_data.push_back(syn_cache_duplicate_sy_ns.get_name_leafdata());
    if (syn_cache_overflow.is_set || is_set(syn_cache_overflow.yfilter)) leaf_name_data.push_back(syn_cache_overflow.get_name_leafdata());
    if (syn_cache_reset.is_set || is_set(syn_cache_reset.yfilter)) leaf_name_data.push_back(syn_cache_reset.get_name_leafdata());
    if (syn_cache_timed_out.is_set || is_set(syn_cache_timed_out.yfilter)) leaf_name_data.push_back(syn_cache_timed_out.get_name_leafdata());
    if (syn_cache_unreach.is_set || is_set(syn_cache_unreach.yfilter)) leaf_name_data.push_back(syn_cache_unreach.get_name_leafdata());
    if (synacl_match_pkts_dropped.is_set || is_set(synacl_match_pkts_dropped.yfilter)) leaf_name_data.push_back(synacl_match_pkts_dropped.get_name_leafdata());
    if (too_short_packets_received.is_set || is_set(too_short_packets_received.yfilter)) leaf_name_data.push_back(too_short_packets_received.get_name_leafdata());
    if (total_i_qs.is_set || is_set(total_i_qs.yfilter)) leaf_name_data.push_back(total_i_qs.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.yfilter)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_pakets_sent.is_set || is_set(total_pakets_sent.yfilter)) leaf_name_data.push_back(total_pakets_sent.get_name_leafdata());
    if (truncated_write_iov.is_set || is_set(truncated_write_iov.yfilter)) leaf_name_data.push_back(truncated_write_iov.get_name_leafdata());
    if (try_lock_dropped.is_set || is_set(try_lock_dropped.yfilter)) leaf_name_data.push_back(try_lock_dropped.get_name_leafdata());
    if (urgent_only_packets_sent.is_set || is_set(urgent_only_packets_sent.yfilter)) leaf_name_data.push_back(urgent_only_packets_sent.get_name_leafdata());
    if (window_probe_packets_received.is_set || is_set(window_probe_packets_received.yfilter)) leaf_name_data.push_back(window_probe_packets_received.get_name_leafdata());
    if (window_probe_packets_sent.is_set || is_set(window_probe_packets_sent.yfilter)) leaf_name_data.push_back(window_probe_packets_sent.get_name_leafdata());
    if (window_update_packets_received.is_set || is_set(window_update_packets_received.yfilter)) leaf_name_data.push_back(window_update_packets_received.get_name_leafdata());
    if (window_update_packets_sent.is_set || is_set(window_update_packets_sent.yfilter)) leaf_name_data.push_back(window_update_packets_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpConnection::Nodes::Node::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpConnection::Nodes::Node::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-only-packets-sent")
    {
        ack_only_packets_sent = value;
        ack_only_packets_sent.value_namespace = name_space;
        ack_only_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-packets-for-unsent-received")
    {
        ack_packets_for_unsent_received = value;
        ack_packets_for_unsent_received.value_namespace = name_space;
        ack_packets_for_unsent_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-packets-received")
    {
        ack_packets_received = value;
        ack_packets_received.value_namespace = name_space;
        ack_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ackbytes-received")
    {
        ackbytes_received = value;
        ackbytes_received.value_namespace = name_space;
        ackbytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "after-window-bytes-received")
    {
        after_window_bytes_received = value;
        after_window_bytes_received.value_namespace = name_space;
        after_window_bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "after-window-packets-received")
    {
        after_window_packets_received = value;
        after_window_packets_received.value_namespace = name_space;
        after_window_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-checksum-packets-received")
    {
        bad_checksum_packets_received = value;
        bad_checksum_packets_received.value_namespace = name_space;
        bad_checksum_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-retransmitted")
    {
        bytes_retransmitted = value;
        bytes_retransmitted.value_namespace = name_space;
        bytes_retransmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-rate-limited")
    {
        connection_rate_limited = value;
        connection_rate_limited.value_namespace = name_space;
        connection_rate_limited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-accepted")
    {
        connections_accepted = value;
        connections_accepted.value_namespace = name_space;
        connections_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-closed")
    {
        connections_closed = value;
        connections_closed.value_namespace = name_space;
        connections_closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-dropped")
    {
        connections_dropped = value;
        connections_dropped.value_namespace = name_space;
        connections_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-established")
    {
        connections_established = value;
        connections_established.value_namespace = name_space;
        connections_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-failed")
    {
        connections_failed = value;
        connections_failed.value_namespace = name_space;
        connections_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-forcibly-closed")
    {
        connections_forcibly_closed = value;
        connections_forcibly_closed.value_namespace = name_space;
        connections_forcibly_closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections-requested")
    {
        connections_requested = value;
        connections_requested.value_namespace = name_space;
        connections_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-packets-sent")
    {
        control_packets_sent = value;
        control_packets_sent.value_namespace = name_space;
        control_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-bytes-received-in-sequence")
    {
        data_bytes_received_in_sequence = value;
        data_bytes_received_in_sequence.value_namespace = name_space;
        data_bytes_received_in_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-bytes-sent")
    {
        data_bytes_sent = value;
        data_bytes_sent.value_namespace = name_space;
        data_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-packets-received-in-sequence")
    {
        data_packets_received_in_sequence = value;
        data_packets_received_in_sequence.value_namespace = name_space;
        data_packets_received_in_sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-pakets-sent")
    {
        data_pakets_sent = value;
        data_pakets_sent.value_namespace = name_space;
        data_pakets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-ack-packets-sent")
    {
        delay_ack_packets_sent = value;
        delay_ack_packets_sent.value_namespace = name_space;
        delay_ack_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-bytes-received")
    {
        duplicate_bytes_received = value;
        duplicate_bytes_received.value_namespace = name_space;
        duplicate_bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-packets-received")
    {
        duplicate_packets_received = value;
        duplicate_packets_received.value_namespace = name_space;
        duplicate_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicated-ack-packets-received")
    {
        duplicated_ack_packets_received = value;
        duplicated_ack_packets_received.value_namespace = name_space;
        duplicated_ack_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "embryonic-connection-dropped")
    {
        embryonic_connection_dropped = value;
        embryonic_connection_dropped.value_namespace = name_space;
        embryonic_connection_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-connections-reset")
    {
        established_connections_reset = value;
        established_connections_reset.value_namespace = name_space;
        established_connections_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-throttle")
    {
        high_water_mark_throttle = value;
        high_water_mark_throttle.value_namespace = name_space;
        high_water_mark_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iq-ingress-drops")
    {
        iq_ingress_drops = value;
        iq_ingress_drops.value_namespace = name_space;
        iq_ingress_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iq-sock-aborts")
    {
        iq_sock_aborts = value;
        iq_sock_aborts.value_namespace = name_space;
        iq_sock_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iq-sock-retries")
    {
        iq_sock_retries = value;
        iq_sock_retries.value_namespace = name_space;
        iq_sock_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iq-sock-writes")
    {
        iq_sock_writes = value;
        iq_sock_writes.value_namespace = name_space;
        iq_sock_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-dropped")
    {
        keep_alive_dropped = value;
        keep_alive_dropped.value_namespace = name_space;
        keep_alive_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-probes")
    {
        keep_alive_probes = value;
        keep_alive_probes.value_namespace = name_space;
        keep_alive_probes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-timeouts")
    {
        keep_alive_timeouts = value;
        keep_alive_timeouts.value_namespace = name_space;
        keep_alive_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-water-mark-throttle")
    {
        low_water_mark_throttle = value;
        low_water_mark_throttle.value_namespace = name_space;
        low_water_mark_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-packets-received")
    {
        malformed_packets_received = value;
        malformed_packets_received.value_namespace = name_space;
        malformed_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss-down")
    {
        mss_down = value;
        mss_down.value_namespace = name_space;
        mss_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss-up")
    {
        mss_up = value;
        mss_up.value_namespace = name_space;
        mss_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-port-packets-received")
    {
        no_port_packets_received = value;
        no_port_packets_received.value_namespace = name_space;
        no_port_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-throttle")
    {
        no_throttle = value;
        no_throttle.value_namespace = name_space;
        no_throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-open-sockets")
    {
        num_open_sockets = value;
        num_open_sockets.value_namespace = name_space;
        num_open_sockets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-bytes-received")
    {
        out_of_order_bytes_received = value;
        out_of_order_bytes_received.value_namespace = name_space;
        out_of_order_bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-packets-received")
    {
        out_of_order_packets_received = value;
        out_of_order_packets_received.value_namespace = name_space;
        out_of_order_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-failures")
    {
        packet_failures = value;
        packet_failures.value_namespace = name_space;
        packet_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received-after-close-packet")
    {
        packets_received_after_close_packet = value;
        packets_received_after_close_packet.value_namespace = name_space;
        packets_received_after_close_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-retransmitted")
    {
        packets_retransmitted = value;
        packets_retransmitted.value_namespace = name_space;
        packets_retransmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-duplicate-ack-received")
    {
        partial_duplicate_ack_received = value;
        partial_duplicate_ack_received.value_namespace = name_space;
        partial_duplicate_ack_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-duplicate-bytes-received")
    {
        partial_duplicate_bytes_received = value;
        partial_duplicate_bytes_received.value_namespace = name_space;
        partial_duplicate_bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paws-dropped")
    {
        paws_dropped = value;
        paws_dropped.value_namespace = name_space;
        paws_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist-dropped")
    {
        persist_dropped = value;
        persist_dropped.value_namespace = name_space;
        persist_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pulse-errors")
    {
        pulse_errors = value;
        pulse_errors.value_namespace = name_space;
        pulse_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassembly-packets")
    {
        reassembly_packets = value;
        reassembly_packets.value_namespace = name_space;
        reassembly_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-auth-packets-dropped")
    {
        received_auth_packets_dropped = value;
        received_auth_packets_dropped.value_namespace = name_space;
        received_auth_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets-dropped")
    {
        received_packets_dropped = value;
        received_packets_dropped.value_namespace = name_space;
        received_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets-dropped-stale-c-hdr")
    {
        received_packets_dropped_stale_c_hdr = value;
        received_packets_dropped_stale_c_hdr.value_namespace = name_space;
        received_packets_dropped_stale_c_hdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovered-packets")
    {
        recovered_packets = value;
        recovered_packets.value_namespace = name_space;
        recovered_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-dropped")
    {
        retransmit_dropped = value;
        retransmit_dropped.value_namespace = name_space;
        retransmit_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-timeouts")
    {
        retransmit_timeouts = value;
        retransmit_timeouts.value_namespace = name_space;
        retransmit_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst-packets-sent")
    {
        rst_packets_sent = value;
        rst_packets_sent.value_namespace = name_space;
        rst_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-auth-packets-dropped")
    {
        send_auth_packets_dropped = value;
        send_auth_packets_dropped.value_namespace = name_space;
        send_auth_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-packets-dropped")
    {
        send_packets_dropped = value;
        send_packets_dropped.value_namespace = name_space;
        send_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-layer-packets")
    {
        socket_layer_packets = value;
        socket_layer_packets.value_namespace = name_space;
        socket_layer_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stalled-timer-tickle-count")
    {
        stalled_timer_tickle_count = value;
        stalled_timer_tickle_count.value_namespace = name_space;
        stalled_timer_tickle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stalled-timer-tickle-time")
    {
        stalled_timer_tickle_time = value;
        stalled_timer_tickle_time.value_namespace = name_space;
        stalled_timer_tickle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-aborted")
    {
        syn_cache_aborted = value;
        syn_cache_aborted.value_namespace = name_space;
        syn_cache_aborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-added")
    {
        syn_cache_added = value;
        syn_cache_added.value_namespace = name_space;
        syn_cache_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-bucket-oflow")
    {
        syn_cache_bucket_oflow = value;
        syn_cache_bucket_oflow.value_namespace = name_space;
        syn_cache_bucket_oflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-completed")
    {
        syn_cache_completed = value;
        syn_cache_completed.value_namespace = name_space;
        syn_cache_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-count")
    {
        syn_cache_count = value;
        syn_cache_count.value_namespace = name_space;
        syn_cache_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-dropped")
    {
        syn_cache_dropped = value;
        syn_cache_dropped.value_namespace = name_space;
        syn_cache_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-duplicate-sy-ns")
    {
        syn_cache_duplicate_sy_ns = value;
        syn_cache_duplicate_sy_ns.value_namespace = name_space;
        syn_cache_duplicate_sy_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-overflow")
    {
        syn_cache_overflow = value;
        syn_cache_overflow.value_namespace = name_space;
        syn_cache_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-reset")
    {
        syn_cache_reset = value;
        syn_cache_reset.value_namespace = name_space;
        syn_cache_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-timed-out")
    {
        syn_cache_timed_out = value;
        syn_cache_timed_out.value_namespace = name_space;
        syn_cache_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn-cache-unreach")
    {
        syn_cache_unreach = value;
        syn_cache_unreach.value_namespace = name_space;
        syn_cache_unreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synacl-match-pkts-dropped")
    {
        synacl_match_pkts_dropped = value;
        synacl_match_pkts_dropped.value_namespace = name_space;
        synacl_match_pkts_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "too-short-packets-received")
    {
        too_short_packets_received = value;
        too_short_packets_received.value_namespace = name_space;
        too_short_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-i-qs")
    {
        total_i_qs = value;
        total_i_qs.value_namespace = name_space;
        total_i_qs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
        total_packets_received.value_namespace = name_space;
        total_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pakets-sent")
    {
        total_pakets_sent = value;
        total_pakets_sent.value_namespace = name_space;
        total_pakets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-write-iov")
    {
        truncated_write_iov = value;
        truncated_write_iov.value_namespace = name_space;
        truncated_write_iov.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "try-lock-dropped")
    {
        try_lock_dropped = value;
        try_lock_dropped.value_namespace = name_space;
        try_lock_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent-only-packets-sent")
    {
        urgent_only_packets_sent = value;
        urgent_only_packets_sent.value_namespace = name_space;
        urgent_only_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-probe-packets-received")
    {
        window_probe_packets_received = value;
        window_probe_packets_received.value_namespace = name_space;
        window_probe_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-probe-packets-sent")
    {
        window_probe_packets_sent = value;
        window_probe_packets_sent.value_namespace = name_space;
        window_probe_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-update-packets-received")
    {
        window_update_packets_received = value;
        window_update_packets_received.value_namespace = name_space;
        window_update_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-update-packets-sent")
    {
        window_update_packets_sent = value;
        window_update_packets_sent.value_namespace = name_space;
        window_update_packets_sent.value_namespace_prefix = name_space_prefix;
    }
}

void TcpConnection::Nodes::Node::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-only-packets-sent")
    {
        ack_only_packets_sent.yfilter = yfilter;
    }
    if(value_path == "ack-packets-for-unsent-received")
    {
        ack_packets_for_unsent_received.yfilter = yfilter;
    }
    if(value_path == "ack-packets-received")
    {
        ack_packets_received.yfilter = yfilter;
    }
    if(value_path == "ackbytes-received")
    {
        ackbytes_received.yfilter = yfilter;
    }
    if(value_path == "after-window-bytes-received")
    {
        after_window_bytes_received.yfilter = yfilter;
    }
    if(value_path == "after-window-packets-received")
    {
        after_window_packets_received.yfilter = yfilter;
    }
    if(value_path == "bad-checksum-packets-received")
    {
        bad_checksum_packets_received.yfilter = yfilter;
    }
    if(value_path == "bytes-retransmitted")
    {
        bytes_retransmitted.yfilter = yfilter;
    }
    if(value_path == "connection-rate-limited")
    {
        connection_rate_limited.yfilter = yfilter;
    }
    if(value_path == "connections-accepted")
    {
        connections_accepted.yfilter = yfilter;
    }
    if(value_path == "connections-closed")
    {
        connections_closed.yfilter = yfilter;
    }
    if(value_path == "connections-dropped")
    {
        connections_dropped.yfilter = yfilter;
    }
    if(value_path == "connections-established")
    {
        connections_established.yfilter = yfilter;
    }
    if(value_path == "connections-failed")
    {
        connections_failed.yfilter = yfilter;
    }
    if(value_path == "connections-forcibly-closed")
    {
        connections_forcibly_closed.yfilter = yfilter;
    }
    if(value_path == "connections-requested")
    {
        connections_requested.yfilter = yfilter;
    }
    if(value_path == "control-packets-sent")
    {
        control_packets_sent.yfilter = yfilter;
    }
    if(value_path == "data-bytes-received-in-sequence")
    {
        data_bytes_received_in_sequence.yfilter = yfilter;
    }
    if(value_path == "data-bytes-sent")
    {
        data_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "data-packets-received-in-sequence")
    {
        data_packets_received_in_sequence.yfilter = yfilter;
    }
    if(value_path == "data-pakets-sent")
    {
        data_pakets_sent.yfilter = yfilter;
    }
    if(value_path == "delay-ack-packets-sent")
    {
        delay_ack_packets_sent.yfilter = yfilter;
    }
    if(value_path == "duplicate-bytes-received")
    {
        duplicate_bytes_received.yfilter = yfilter;
    }
    if(value_path == "duplicate-packets-received")
    {
        duplicate_packets_received.yfilter = yfilter;
    }
    if(value_path == "duplicated-ack-packets-received")
    {
        duplicated_ack_packets_received.yfilter = yfilter;
    }
    if(value_path == "embryonic-connection-dropped")
    {
        embryonic_connection_dropped.yfilter = yfilter;
    }
    if(value_path == "established-connections-reset")
    {
        established_connections_reset.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-throttle")
    {
        high_water_mark_throttle.yfilter = yfilter;
    }
    if(value_path == "iq-ingress-drops")
    {
        iq_ingress_drops.yfilter = yfilter;
    }
    if(value_path == "iq-sock-aborts")
    {
        iq_sock_aborts.yfilter = yfilter;
    }
    if(value_path == "iq-sock-retries")
    {
        iq_sock_retries.yfilter = yfilter;
    }
    if(value_path == "iq-sock-writes")
    {
        iq_sock_writes.yfilter = yfilter;
    }
    if(value_path == "keep-alive-dropped")
    {
        keep_alive_dropped.yfilter = yfilter;
    }
    if(value_path == "keep-alive-probes")
    {
        keep_alive_probes.yfilter = yfilter;
    }
    if(value_path == "keep-alive-timeouts")
    {
        keep_alive_timeouts.yfilter = yfilter;
    }
    if(value_path == "low-water-mark-throttle")
    {
        low_water_mark_throttle.yfilter = yfilter;
    }
    if(value_path == "malformed-packets-received")
    {
        malformed_packets_received.yfilter = yfilter;
    }
    if(value_path == "mss-down")
    {
        mss_down.yfilter = yfilter;
    }
    if(value_path == "mss-up")
    {
        mss_up.yfilter = yfilter;
    }
    if(value_path == "no-port-packets-received")
    {
        no_port_packets_received.yfilter = yfilter;
    }
    if(value_path == "no-throttle")
    {
        no_throttle.yfilter = yfilter;
    }
    if(value_path == "num-open-sockets")
    {
        num_open_sockets.yfilter = yfilter;
    }
    if(value_path == "out-of-order-bytes-received")
    {
        out_of_order_bytes_received.yfilter = yfilter;
    }
    if(value_path == "out-of-order-packets-received")
    {
        out_of_order_packets_received.yfilter = yfilter;
    }
    if(value_path == "packet-failures")
    {
        packet_failures.yfilter = yfilter;
    }
    if(value_path == "packets-received-after-close-packet")
    {
        packets_received_after_close_packet.yfilter = yfilter;
    }
    if(value_path == "packets-retransmitted")
    {
        packets_retransmitted.yfilter = yfilter;
    }
    if(value_path == "partial-duplicate-ack-received")
    {
        partial_duplicate_ack_received.yfilter = yfilter;
    }
    if(value_path == "partial-duplicate-bytes-received")
    {
        partial_duplicate_bytes_received.yfilter = yfilter;
    }
    if(value_path == "paws-dropped")
    {
        paws_dropped.yfilter = yfilter;
    }
    if(value_path == "persist-dropped")
    {
        persist_dropped.yfilter = yfilter;
    }
    if(value_path == "pulse-errors")
    {
        pulse_errors.yfilter = yfilter;
    }
    if(value_path == "reassembly-packets")
    {
        reassembly_packets.yfilter = yfilter;
    }
    if(value_path == "received-auth-packets-dropped")
    {
        received_auth_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "received-packets-dropped")
    {
        received_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "received-packets-dropped-stale-c-hdr")
    {
        received_packets_dropped_stale_c_hdr.yfilter = yfilter;
    }
    if(value_path == "recovered-packets")
    {
        recovered_packets.yfilter = yfilter;
    }
    if(value_path == "retransmit-dropped")
    {
        retransmit_dropped.yfilter = yfilter;
    }
    if(value_path == "retransmit-timeouts")
    {
        retransmit_timeouts.yfilter = yfilter;
    }
    if(value_path == "rst-packets-sent")
    {
        rst_packets_sent.yfilter = yfilter;
    }
    if(value_path == "send-auth-packets-dropped")
    {
        send_auth_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "send-packets-dropped")
    {
        send_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "socket-layer-packets")
    {
        socket_layer_packets.yfilter = yfilter;
    }
    if(value_path == "stalled-timer-tickle-count")
    {
        stalled_timer_tickle_count.yfilter = yfilter;
    }
    if(value_path == "stalled-timer-tickle-time")
    {
        stalled_timer_tickle_time.yfilter = yfilter;
    }
    if(value_path == "syn-cache-aborted")
    {
        syn_cache_aborted.yfilter = yfilter;
    }
    if(value_path == "syn-cache-added")
    {
        syn_cache_added.yfilter = yfilter;
    }
    if(value_path == "syn-cache-bucket-oflow")
    {
        syn_cache_bucket_oflow.yfilter = yfilter;
    }
    if(value_path == "syn-cache-completed")
    {
        syn_cache_completed.yfilter = yfilter;
    }
    if(value_path == "syn-cache-count")
    {
        syn_cache_count.yfilter = yfilter;
    }
    if(value_path == "syn-cache-dropped")
    {
        syn_cache_dropped.yfilter = yfilter;
    }
    if(value_path == "syn-cache-duplicate-sy-ns")
    {
        syn_cache_duplicate_sy_ns.yfilter = yfilter;
    }
    if(value_path == "syn-cache-overflow")
    {
        syn_cache_overflow.yfilter = yfilter;
    }
    if(value_path == "syn-cache-reset")
    {
        syn_cache_reset.yfilter = yfilter;
    }
    if(value_path == "syn-cache-timed-out")
    {
        syn_cache_timed_out.yfilter = yfilter;
    }
    if(value_path == "syn-cache-unreach")
    {
        syn_cache_unreach.yfilter = yfilter;
    }
    if(value_path == "synacl-match-pkts-dropped")
    {
        synacl_match_pkts_dropped.yfilter = yfilter;
    }
    if(value_path == "too-short-packets-received")
    {
        too_short_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-i-qs")
    {
        total_i_qs.yfilter = yfilter;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received.yfilter = yfilter;
    }
    if(value_path == "total-pakets-sent")
    {
        total_pakets_sent.yfilter = yfilter;
    }
    if(value_path == "truncated-write-iov")
    {
        truncated_write_iov.yfilter = yfilter;
    }
    if(value_path == "try-lock-dropped")
    {
        try_lock_dropped.yfilter = yfilter;
    }
    if(value_path == "urgent-only-packets-sent")
    {
        urgent_only_packets_sent.yfilter = yfilter;
    }
    if(value_path == "window-probe-packets-received")
    {
        window_probe_packets_received.yfilter = yfilter;
    }
    if(value_path == "window-probe-packets-sent")
    {
        window_probe_packets_sent.yfilter = yfilter;
    }
    if(value_path == "window-update-packets-received")
    {
        window_update_packets_received.yfilter = yfilter;
    }
    if(value_path == "window-update-packets-sent")
    {
        window_update_packets_sent.yfilter = yfilter;
    }
}

bool TcpConnection::Nodes::Node::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-only-packets-sent" || name == "ack-packets-for-unsent-received" || name == "ack-packets-received" || name == "ackbytes-received" || name == "after-window-bytes-received" || name == "after-window-packets-received" || name == "bad-checksum-packets-received" || name == "bytes-retransmitted" || name == "connection-rate-limited" || name == "connections-accepted" || name == "connections-closed" || name == "connections-dropped" || name == "connections-established" || name == "connections-failed" || name == "connections-forcibly-closed" || name == "connections-requested" || name == "control-packets-sent" || name == "data-bytes-received-in-sequence" || name == "data-bytes-sent" || name == "data-packets-received-in-sequence" || name == "data-pakets-sent" || name == "delay-ack-packets-sent" || name == "duplicate-bytes-received" || name == "duplicate-packets-received" || name == "duplicated-ack-packets-received" || name == "embryonic-connection-dropped" || name == "established-connections-reset" || name == "high-water-mark-throttle" || name == "iq-ingress-drops" || name == "iq-sock-aborts" || name == "iq-sock-retries" || name == "iq-sock-writes" || name == "keep-alive-dropped" || name == "keep-alive-probes" || name == "keep-alive-timeouts" || name == "low-water-mark-throttle" || name == "malformed-packets-received" || name == "mss-down" || name == "mss-up" || name == "no-port-packets-received" || name == "no-throttle" || name == "num-open-sockets" || name == "out-of-order-bytes-received" || name == "out-of-order-packets-received" || name == "packet-failures" || name == "packets-received-after-close-packet" || name == "packets-retransmitted" || name == "partial-duplicate-ack-received" || name == "partial-duplicate-bytes-received" || name == "paws-dropped" || name == "persist-dropped" || name == "pulse-errors" || name == "reassembly-packets" || name == "received-auth-packets-dropped" || name == "received-packets-dropped" || name == "received-packets-dropped-stale-c-hdr" || name == "recovered-packets" || name == "retransmit-dropped" || name == "retransmit-timeouts" || name == "rst-packets-sent" || name == "send-auth-packets-dropped" || name == "send-packets-dropped" || name == "socket-layer-packets" || name == "stalled-timer-tickle-count" || name == "stalled-timer-tickle-time" || name == "syn-cache-aborted" || name == "syn-cache-added" || name == "syn-cache-bucket-oflow" || name == "syn-cache-completed" || name == "syn-cache-count" || name == "syn-cache-dropped" || name == "syn-cache-duplicate-sy-ns" || name == "syn-cache-overflow" || name == "syn-cache-reset" || name == "syn-cache-timed-out" || name == "syn-cache-unreach" || name == "synacl-match-pkts-dropped" || name == "too-short-packets-received" || name == "total-i-qs" || name == "total-packets-received" || name == "total-pakets-sent" || name == "truncated-write-iov" || name == "try-lock-dropped" || name == "urgent-only-packets-sent" || name == "window-probe-packets-received" || name == "window-probe-packets-sent" || name == "window-update-packets-received" || name == "window-update-packets-sent")
        return true;
    return false;
}

TcpNsr::TcpNsr()
    :
    nodes(std::make_shared<TcpNsr::Nodes>())
{
    nodes->parent = this;

    yang_name = "tcp-nsr"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

TcpNsr::~TcpNsr()
{
}

bool TcpNsr::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool TcpNsr::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string TcpNsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<TcpNsr::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void TcpNsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TcpNsr::clone_ptr() const
{
    return std::make_shared<TcpNsr>();
}

std::string TcpNsr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TcpNsr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TcpNsr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TcpNsr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool TcpNsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

TcpNsr::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "tcp-nsr"; is_top_level_class = false; has_list_ancestor = false;
}

TcpNsr::Nodes::~Nodes()
{
}

bool TcpNsr::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string TcpNsr::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Node()
    :
    id{YType::str, "id"}
    	,
    client(std::make_shared<TcpNsr::Nodes::Node::Client>())
	,session(std::make_shared<TcpNsr::Nodes::Node::Session>())
	,session_set(std::make_shared<TcpNsr::Nodes::Node::SessionSet>())
	,statistics(std::make_shared<TcpNsr::Nodes::Node::Statistics>())
{
    client->parent = this;
    session->parent = this;
    session_set->parent = this;
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

TcpNsr::Nodes::Node::~Node()
{
}

bool TcpNsr::Nodes::Node::has_data() const
{
    return id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (session_set !=  nullptr && session_set->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool TcpNsr::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (session_set !=  nullptr && session_set->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string TcpNsr::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-nsr/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string TcpNsr::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<TcpNsr::Nodes::Node::Client>();
        }
        return client;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<TcpNsr::Nodes::Node::Session>();
        }
        return session;
    }

    if(child_yang_name == "session-set")
    {
        if(session_set == nullptr)
        {
            session_set = std::make_shared<TcpNsr::Nodes::Node::SessionSet>();
        }
        return session_set;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<TcpNsr::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(session_set != nullptr)
    {
        children["session-set"] = session_set;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void TcpNsr::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "session" || name == "session-set" || name == "statistics" || name == "id")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Client::Client()
    :
    brief_clients(std::make_shared<TcpNsr::Nodes::Node::Client::BriefClients>())
	,detail_clients(std::make_shared<TcpNsr::Nodes::Node::Client::DetailClients>())
{
    brief_clients->parent = this;
    detail_clients->parent = this;

    yang_name = "client"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Client::~Client()
{
}

bool TcpNsr::Nodes::Node::Client::has_data() const
{
    return (brief_clients !=  nullptr && brief_clients->has_data())
	|| (detail_clients !=  nullptr && detail_clients->has_data());
}

bool TcpNsr::Nodes::Node::Client::has_operation() const
{
    return is_set(yfilter)
	|| (brief_clients !=  nullptr && brief_clients->has_operation())
	|| (detail_clients !=  nullptr && detail_clients->has_operation());
}

std::string TcpNsr::Nodes::Node::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-clients")
    {
        if(brief_clients == nullptr)
        {
            brief_clients = std::make_shared<TcpNsr::Nodes::Node::Client::BriefClients>();
        }
        return brief_clients;
    }

    if(child_yang_name == "detail-clients")
    {
        if(detail_clients == nullptr)
        {
            detail_clients = std::make_shared<TcpNsr::Nodes::Node::Client::DetailClients>();
        }
        return detail_clients;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_clients != nullptr)
    {
        children["brief-clients"] = brief_clients;
    }

    if(detail_clients != nullptr)
    {
        children["detail-clients"] = detail_clients;
    }

    return children;
}

void TcpNsr::Nodes::Node::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-clients" || name == "detail-clients")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Client::BriefClients::BriefClients()
{

    yang_name = "brief-clients"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Client::BriefClients::~BriefClients()
{
}

bool TcpNsr::Nodes::Node::Client::BriefClients::has_data() const
{
    for (std::size_t index=0; index<brief_client.size(); index++)
    {
        if(brief_client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Client::BriefClients::has_operation() const
{
    for (std::size_t index=0; index<brief_client.size(); index++)
    {
        if(brief_client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Client::BriefClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Client::BriefClients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Client::BriefClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-client")
    {
        for(auto const & c : brief_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Client::BriefClients::BriefClient>();
        c->parent = this;
        brief_client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Client::BriefClients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief_client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Client::BriefClients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Client::BriefClients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Client::BriefClients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-client")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::BriefClient()
    :
    id{YType::str, "id"},
    ccb{YType::uint64, "ccb"},
    instance{YType::uint32, "instance"},
    job_id{YType::int32, "job-id"},
    number_of_sessions{YType::uint32, "number-of-sessions"},
    number_of_up_sessions{YType::uint32, "number-of-up-sessions"},
    numberof_sets{YType::uint32, "numberof-sets"},
    pid{YType::uint32, "pid"},
    process_name{YType::str, "process-name"}
{

    yang_name = "brief-client"; yang_parent_name = "brief-clients"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::~BriefClient()
{
}

bool TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::has_data() const
{
    return id.is_set
	|| ccb.is_set
	|| instance.is_set
	|| job_id.is_set
	|| number_of_sessions.is_set
	|| number_of_up_sessions.is_set
	|| numberof_sets.is_set
	|| pid.is_set
	|| process_name.is_set;
}

bool TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ccb.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(number_of_sessions.yfilter)
	|| ydk::is_set(number_of_up_sessions.yfilter)
	|| ydk::is_set(numberof_sets.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-client" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ccb.is_set || is_set(ccb.yfilter)) leaf_name_data.push_back(ccb.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.yfilter)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_up_sessions.is_set || is_set(number_of_up_sessions.yfilter)) leaf_name_data.push_back(number_of_up_sessions.get_name_leafdata());
    if (numberof_sets.is_set || is_set(numberof_sets.yfilter)) leaf_name_data.push_back(numberof_sets.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccb")
    {
        ccb = value;
        ccb.value_namespace = name_space;
        ccb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
        number_of_sessions.value_namespace = name_space;
        number_of_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-up-sessions")
    {
        number_of_up_sessions = value;
        number_of_up_sessions.value_namespace = name_space;
        number_of_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberof-sets")
    {
        numberof_sets = value;
        numberof_sets.value_namespace = name_space;
        numberof_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ccb")
    {
        ccb.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-up-sessions")
    {
        number_of_up_sessions.yfilter = yfilter;
    }
    if(value_path == "numberof-sets")
    {
        numberof_sets.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ccb" || name == "instance" || name == "job-id" || name == "number-of-sessions" || name == "number-of-up-sessions" || name == "numberof-sets" || name == "pid" || name == "process-name")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Client::DetailClients::DetailClients()
{

    yang_name = "detail-clients"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Client::DetailClients::~DetailClients()
{
}

bool TcpNsr::Nodes::Node::Client::DetailClients::has_data() const
{
    for (std::size_t index=0; index<detail_client.size(); index++)
    {
        if(detail_client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Client::DetailClients::has_operation() const
{
    for (std::size_t index=0; index<detail_client.size(); index++)
    {
        if(detail_client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Client::DetailClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Client::DetailClients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Client::DetailClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-client")
    {
        for(auto const & c : detail_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Client::DetailClients::DetailClient>();
        c->parent = this;
        detail_client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Client::DetailClients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Client::DetailClients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Client::DetailClients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Client::DetailClients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-client")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::DetailClient()
    :
    id{YType::str, "id"},
    ccb{YType::uint64, "ccb"},
    connected_at{YType::uint32, "connected-at"},
    instance{YType::uint32, "instance"},
    is_notification_registered{YType::boolean, "is-notification-registered"},
    job_id{YType::int32, "job-id"},
    number_of_sessions{YType::uint32, "number-of-sessions"},
    number_of_up_sessions{YType::uint32, "number-of-up-sessions"},
    numberof_sets{YType::uint32, "numberof-sets"},
    pid{YType::uint32, "pid"},
    process_name{YType::str, "process-name"}
{

    yang_name = "detail-client"; yang_parent_name = "detail-clients"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::~DetailClient()
{
}

bool TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::has_data() const
{
    return id.is_set
	|| ccb.is_set
	|| connected_at.is_set
	|| instance.is_set
	|| is_notification_registered.is_set
	|| job_id.is_set
	|| number_of_sessions.is_set
	|| number_of_up_sessions.is_set
	|| numberof_sets.is_set
	|| pid.is_set
	|| process_name.is_set;
}

bool TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ccb.yfilter)
	|| ydk::is_set(connected_at.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(is_notification_registered.yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(number_of_sessions.yfilter)
	|| ydk::is_set(number_of_up_sessions.yfilter)
	|| ydk::is_set(numberof_sets.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-client" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ccb.is_set || is_set(ccb.yfilter)) leaf_name_data.push_back(ccb.get_name_leafdata());
    if (connected_at.is_set || is_set(connected_at.yfilter)) leaf_name_data.push_back(connected_at.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (is_notification_registered.is_set || is_set(is_notification_registered.yfilter)) leaf_name_data.push_back(is_notification_registered.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.yfilter)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_up_sessions.is_set || is_set(number_of_up_sessions.yfilter)) leaf_name_data.push_back(number_of_up_sessions.get_name_leafdata());
    if (numberof_sets.is_set || is_set(numberof_sets.yfilter)) leaf_name_data.push_back(numberof_sets.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccb")
    {
        ccb = value;
        ccb.value_namespace = name_space;
        ccb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-at")
    {
        connected_at = value;
        connected_at.value_namespace = name_space;
        connected_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-notification-registered")
    {
        is_notification_registered = value;
        is_notification_registered.value_namespace = name_space;
        is_notification_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
        number_of_sessions.value_namespace = name_space;
        number_of_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-up-sessions")
    {
        number_of_up_sessions = value;
        number_of_up_sessions.value_namespace = name_space;
        number_of_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberof-sets")
    {
        numberof_sets = value;
        numberof_sets.value_namespace = name_space;
        numberof_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ccb")
    {
        ccb.yfilter = yfilter;
    }
    if(value_path == "connected-at")
    {
        connected_at.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "is-notification-registered")
    {
        is_notification_registered.yfilter = yfilter;
    }
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-up-sessions")
    {
        number_of_up_sessions.yfilter = yfilter;
    }
    if(value_path == "numberof-sets")
    {
        numberof_sets.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ccb" || name == "connected-at" || name == "instance" || name == "is-notification-registered" || name == "job-id" || name == "number-of-sessions" || name == "number-of-up-sessions" || name == "numberof-sets" || name == "pid" || name == "process-name")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::Session()
    :
    brief_sessions(std::make_shared<TcpNsr::Nodes::Node::Session::BriefSessions>())
	,detail_sessions(std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions>())
{
    brief_sessions->parent = this;
    detail_sessions->parent = this;

    yang_name = "session"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::~Session()
{
}

bool TcpNsr::Nodes::Node::Session::has_data() const
{
    return (brief_sessions !=  nullptr && brief_sessions->has_data())
	|| (detail_sessions !=  nullptr && detail_sessions->has_data());
}

bool TcpNsr::Nodes::Node::Session::has_operation() const
{
    return is_set(yfilter)
	|| (brief_sessions !=  nullptr && brief_sessions->has_operation())
	|| (detail_sessions !=  nullptr && detail_sessions->has_operation());
}

std::string TcpNsr::Nodes::Node::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-sessions")
    {
        if(brief_sessions == nullptr)
        {
            brief_sessions = std::make_shared<TcpNsr::Nodes::Node::Session::BriefSessions>();
        }
        return brief_sessions;
    }

    if(child_yang_name == "detail-sessions")
    {
        if(detail_sessions == nullptr)
        {
            detail_sessions = std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions>();
        }
        return detail_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_sessions != nullptr)
    {
        children["brief-sessions"] = brief_sessions;
    }

    if(detail_sessions != nullptr)
    {
        children["detail-sessions"] = detail_sessions;
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-sessions" || name == "detail-sessions")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::BriefSessions::BriefSessions()
{

    yang_name = "brief-sessions"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::BriefSessions::~BriefSessions()
{
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::has_data() const
{
    for (std::size_t index=0; index<brief_session.size(); index++)
    {
        if(brief_session[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::has_operation() const
{
    for (std::size_t index=0; index<brief_session.size(); index++)
    {
        if(brief_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Session::BriefSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::BriefSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::BriefSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-session")
    {
        for(auto const & c : brief_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession>();
        c->parent = this;
        brief_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::BriefSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::BriefSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Session::BriefSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-session")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::BriefSession()
    :
    id{YType::str, "id"},
    address_family{YType::enumeration, "address-family"},
    foreign_address{YType::str, "foreign-address"},
    foreign_port{YType::uint16, "foreign-port"},
    is_admin_configured_up{YType::boolean, "is-admin-configured-up"},
    is_ds_operational_up{YType::enumeration, "is-ds-operational-up"},
    is_only_receive_path_replication{YType::boolean, "is-only-receive-path-replication"},
    is_us_operational_up{YType::enumeration, "is-us-operational-up"},
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    pcb{YType::uint64, "pcb"},
    sscb{YType::uint64, "sscb"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "brief-session"; yang_parent_name = "brief-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::~BriefSession()
{
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::has_data() const
{
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| address_family.is_set
	|| foreign_port.is_set
	|| is_admin_configured_up.is_set
	|| is_ds_operational_up.is_set
	|| is_only_receive_path_replication.is_set
	|| is_us_operational_up.is_set
	|| local_port.is_set
	|| pcb.is_set
	|| sscb.is_set
	|| vrf_id.is_set;
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::has_operation() const
{
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(foreign_address.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(is_admin_configured_up.yfilter)
	|| ydk::is_set(is_ds_operational_up.yfilter)
	|| ydk::is_set(is_only_receive_path_replication.yfilter)
	|| ydk::is_set(is_us_operational_up.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(pcb.yfilter)
	|| ydk::is_set(sscb.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-session" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (is_admin_configured_up.is_set || is_set(is_admin_configured_up.yfilter)) leaf_name_data.push_back(is_admin_configured_up.get_name_leafdata());
    if (is_ds_operational_up.is_set || is_set(is_ds_operational_up.yfilter)) leaf_name_data.push_back(is_ds_operational_up.get_name_leafdata());
    if (is_only_receive_path_replication.is_set || is_set(is_only_receive_path_replication.yfilter)) leaf_name_data.push_back(is_only_receive_path_replication.get_name_leafdata());
    if (is_us_operational_up.is_set || is_set(is_us_operational_up.yfilter)) leaf_name_data.push_back(is_us_operational_up.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.yfilter)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.yfilter)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto foreign_address_name_datas = foreign_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), foreign_address_name_datas.begin(), foreign_address_name_datas.end());
    auto local_address_name_datas = local_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_address_name_datas.begin(), local_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-address")
    {
        foreign_address.append(value);
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-configured-up")
    {
        is_admin_configured_up = value;
        is_admin_configured_up.value_namespace = name_space;
        is_admin_configured_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ds-operational-up")
    {
        is_ds_operational_up = value;
        is_ds_operational_up.value_namespace = name_space;
        is_ds_operational_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-only-receive-path-replication")
    {
        is_only_receive_path_replication = value;
        is_only_receive_path_replication.value_namespace = name_space;
        is_only_receive_path_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-us-operational-up")
    {
        is_us_operational_up = value;
        is_us_operational_up.value_namespace = name_space;
        is_us_operational_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address.append(value);
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb")
    {
        pcb = value;
        pcb.value_namespace = name_space;
        pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sscb")
    {
        sscb = value;
        sscb.value_namespace = name_space;
        sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "foreign-address")
    {
        foreign_address.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "is-admin-configured-up")
    {
        is_admin_configured_up.yfilter = yfilter;
    }
    if(value_path == "is-ds-operational-up")
    {
        is_ds_operational_up.yfilter = yfilter;
    }
    if(value_path == "is-only-receive-path-replication")
    {
        is_only_receive_path_replication.yfilter = yfilter;
    }
    if(value_path == "is-us-operational-up")
    {
        is_us_operational_up.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "pcb")
    {
        pcb.yfilter = yfilter;
    }
    if(value_path == "sscb")
    {
        sscb.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "address-family" || name == "foreign-address" || name == "foreign-port" || name == "is-admin-configured-up" || name == "is-ds-operational-up" || name == "is-only-receive-path-replication" || name == "is-us-operational-up" || name == "local-address" || name == "local-port" || name == "pcb" || name == "sscb" || name == "vrf-id")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSessions()
{

    yang_name = "detail-sessions"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::DetailSessions::~DetailSessions()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::has_data() const
{
    for (std::size_t index=0; index<detail_session.size(); index++)
    {
        if(detail_session[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::has_operation() const
{
    for (std::size_t index=0; index<detail_session.size(); index++)
    {
        if(detail_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::DetailSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::DetailSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-session")
    {
        for(auto const & c : detail_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession>();
        c->parent = this;
        detail_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::DetailSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Session::DetailSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-session")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::DetailSession()
    :
    id{YType::str, "id"},
    address_family{YType::enumeration, "address-family"},
    cookie{YType::uint64, "cookie"},
    fist_standby_sequence_number{YType::uint32, "fist-standby-sequence-number"},
    fist_standby_sequence_number_down_stream{YType::uint32, "fist-standby-sequence-number-down-stream"},
    fist_standby_sequence_number_up_stream{YType::uint32, "fist-standby-sequence-number-up-stream"},
    foreign_address{YType::str, "foreign-address"},
    foreign_port{YType::uint16, "foreign-port"},
    fssn_offset{YType::uint32, "fssn-offset"},
    init_sync_end_time{YType::uint32, "init-sync-end-time"},
    init_sync_end_time_down_stream{YType::uint32, "init-sync-end-time-down-stream"},
    init_sync_end_time_up_stream{YType::uint32, "init-sync-end-time-up-stream"},
    init_sync_error{YType::str, "init-sync-error"},
    init_sync_flags{YType::uint32, "init-sync-flags"},
    init_sync_start_time{YType::uint32, "init-sync-start-time"},
    init_sync_start_time_down_stream{YType::uint32, "init-sync-start-time-down-stream"},
    init_sync_start_time_up_stream{YType::uint32, "init-sync-start-time-up-stream"},
    is_admin_configured_up{YType::boolean, "is-admin-configured-up"},
    is_ds_operational_up{YType::enumeration, "is-ds-operational-up"},
    is_init_sync_error_local{YType::boolean, "is-init-sync-error-local"},
    is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
    is_init_sync_second_phase{YType::boolean, "is-init-sync-second-phase"},
    is_only_receive_path_replication{YType::boolean, "is-only-receive-path-replication"},
    is_session_replicated{YType::boolean, "is-session-replicated"},
    is_session_synced{YType::boolean, "is-session-synced"},
    is_us_operational_up{YType::enumeration, "is-us-operational-up"},
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    max_number_of_held_internal_ack{YType::int32, "max-number-of-held-internal-ack"},
    max_number_of_held_internal_ack_reach_time{YType::uint32, "max-number-of-held-internal-ack-reach-time"},
    max_number_of_held_packet{YType::int32, "max-number-of-held-packet"},
    max_number_of_held_packet_reach_time{YType::uint32, "max-number-of-held-packet-reach-time"},
    nsr_down_reason{YType::enumeration, "nsr-down-reason"},
    nsr_down_reason_down_stream{YType::enumeration, "nsr-down-reason-down-stream"},
    nsr_down_reason_up_stream{YType::enumeration, "nsr-down-reason-up-stream"},
    nsr_down_time{YType::uint32, "nsr-down-time"},
    nsr_down_time_down_stream{YType::uint32, "nsr-down-time-down-stream"},
    nsr_down_time_up_stream{YType::uint32, "nsr-down-time-up-stream"},
    pcb{YType::uint64, "pcb"},
    peer_endp_hdl_down_stream{YType::uint64, "peer-endp-hdl-down-stream"},
    peer_endp_hdl_up_stream{YType::uint64, "peer-endp-hdl-up-stream"},
    sequence_number_of_init_sync{YType::uint32, "sequence-number-of-init-sync"},
    sequence_number_of_init_sync_down_stream{YType::uint32, "sequence-number-of-init-sync-down-stream"},
    sequence_number_of_init_sync_up_stream{YType::uint32, "sequence-number-of-init-sync-up-stream"},
    sscb{YType::uint64, "sscb"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    set_information(std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation>())
{
    set_information->parent = this;

    yang_name = "detail-session"; yang_parent_name = "detail-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::~DetailSession()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::has_data() const
{
    for (std::size_t index=0; index<internal_ack_hold_queue.size(); index++)
    {
        if(internal_ack_hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<packet_hold_queue.size(); index++)
    {
        if(packet_hold_queue[index]->has_data())
            return true;
    }
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| address_family.is_set
	|| cookie.is_set
	|| fist_standby_sequence_number.is_set
	|| fist_standby_sequence_number_down_stream.is_set
	|| fist_standby_sequence_number_up_stream.is_set
	|| foreign_port.is_set
	|| fssn_offset.is_set
	|| init_sync_end_time.is_set
	|| init_sync_end_time_down_stream.is_set
	|| init_sync_end_time_up_stream.is_set
	|| init_sync_error.is_set
	|| init_sync_flags.is_set
	|| init_sync_start_time.is_set
	|| init_sync_start_time_down_stream.is_set
	|| init_sync_start_time_up_stream.is_set
	|| is_admin_configured_up.is_set
	|| is_ds_operational_up.is_set
	|| is_init_sync_error_local.is_set
	|| is_init_sync_in_progress.is_set
	|| is_init_sync_second_phase.is_set
	|| is_only_receive_path_replication.is_set
	|| is_session_replicated.is_set
	|| is_session_synced.is_set
	|| is_us_operational_up.is_set
	|| local_port.is_set
	|| max_number_of_held_internal_ack.is_set
	|| max_number_of_held_internal_ack_reach_time.is_set
	|| max_number_of_held_packet.is_set
	|| max_number_of_held_packet_reach_time.is_set
	|| nsr_down_reason.is_set
	|| nsr_down_reason_down_stream.is_set
	|| nsr_down_reason_up_stream.is_set
	|| nsr_down_time.is_set
	|| nsr_down_time_down_stream.is_set
	|| nsr_down_time_up_stream.is_set
	|| pcb.is_set
	|| peer_endp_hdl_down_stream.is_set
	|| peer_endp_hdl_up_stream.is_set
	|| sequence_number_of_init_sync.is_set
	|| sequence_number_of_init_sync_down_stream.is_set
	|| sequence_number_of_init_sync_up_stream.is_set
	|| sscb.is_set
	|| vrf_id.is_set
	|| (set_information !=  nullptr && set_information->has_data());
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::has_operation() const
{
    for (std::size_t index=0; index<internal_ack_hold_queue.size(); index++)
    {
        if(internal_ack_hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<packet_hold_queue.size(); index++)
    {
        if(packet_hold_queue[index]->has_operation())
            return true;
    }
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(fist_standby_sequence_number.yfilter)
	|| ydk::is_set(fist_standby_sequence_number_down_stream.yfilter)
	|| ydk::is_set(fist_standby_sequence_number_up_stream.yfilter)
	|| ydk::is_set(foreign_address.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(fssn_offset.yfilter)
	|| ydk::is_set(init_sync_end_time.yfilter)
	|| ydk::is_set(init_sync_end_time_down_stream.yfilter)
	|| ydk::is_set(init_sync_end_time_up_stream.yfilter)
	|| ydk::is_set(init_sync_error.yfilter)
	|| ydk::is_set(init_sync_flags.yfilter)
	|| ydk::is_set(init_sync_start_time.yfilter)
	|| ydk::is_set(init_sync_start_time_down_stream.yfilter)
	|| ydk::is_set(init_sync_start_time_up_stream.yfilter)
	|| ydk::is_set(is_admin_configured_up.yfilter)
	|| ydk::is_set(is_ds_operational_up.yfilter)
	|| ydk::is_set(is_init_sync_error_local.yfilter)
	|| ydk::is_set(is_init_sync_in_progress.yfilter)
	|| ydk::is_set(is_init_sync_second_phase.yfilter)
	|| ydk::is_set(is_only_receive_path_replication.yfilter)
	|| ydk::is_set(is_session_replicated.yfilter)
	|| ydk::is_set(is_session_synced.yfilter)
	|| ydk::is_set(is_us_operational_up.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(max_number_of_held_internal_ack.yfilter)
	|| ydk::is_set(max_number_of_held_internal_ack_reach_time.yfilter)
	|| ydk::is_set(max_number_of_held_packet.yfilter)
	|| ydk::is_set(max_number_of_held_packet_reach_time.yfilter)
	|| ydk::is_set(nsr_down_reason.yfilter)
	|| ydk::is_set(nsr_down_reason_down_stream.yfilter)
	|| ydk::is_set(nsr_down_reason_up_stream.yfilter)
	|| ydk::is_set(nsr_down_time.yfilter)
	|| ydk::is_set(nsr_down_time_down_stream.yfilter)
	|| ydk::is_set(nsr_down_time_up_stream.yfilter)
	|| ydk::is_set(pcb.yfilter)
	|| ydk::is_set(peer_endp_hdl_down_stream.yfilter)
	|| ydk::is_set(peer_endp_hdl_up_stream.yfilter)
	|| ydk::is_set(sequence_number_of_init_sync.yfilter)
	|| ydk::is_set(sequence_number_of_init_sync_down_stream.yfilter)
	|| ydk::is_set(sequence_number_of_init_sync_up_stream.yfilter)
	|| ydk::is_set(sscb.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (set_information !=  nullptr && set_information->has_operation());
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-session" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (fist_standby_sequence_number.is_set || is_set(fist_standby_sequence_number.yfilter)) leaf_name_data.push_back(fist_standby_sequence_number.get_name_leafdata());
    if (fist_standby_sequence_number_down_stream.is_set || is_set(fist_standby_sequence_number_down_stream.yfilter)) leaf_name_data.push_back(fist_standby_sequence_number_down_stream.get_name_leafdata());
    if (fist_standby_sequence_number_up_stream.is_set || is_set(fist_standby_sequence_number_up_stream.yfilter)) leaf_name_data.push_back(fist_standby_sequence_number_up_stream.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (fssn_offset.is_set || is_set(fssn_offset.yfilter)) leaf_name_data.push_back(fssn_offset.get_name_leafdata());
    if (init_sync_end_time.is_set || is_set(init_sync_end_time.yfilter)) leaf_name_data.push_back(init_sync_end_time.get_name_leafdata());
    if (init_sync_end_time_down_stream.is_set || is_set(init_sync_end_time_down_stream.yfilter)) leaf_name_data.push_back(init_sync_end_time_down_stream.get_name_leafdata());
    if (init_sync_end_time_up_stream.is_set || is_set(init_sync_end_time_up_stream.yfilter)) leaf_name_data.push_back(init_sync_end_time_up_stream.get_name_leafdata());
    if (init_sync_error.is_set || is_set(init_sync_error.yfilter)) leaf_name_data.push_back(init_sync_error.get_name_leafdata());
    if (init_sync_flags.is_set || is_set(init_sync_flags.yfilter)) leaf_name_data.push_back(init_sync_flags.get_name_leafdata());
    if (init_sync_start_time.is_set || is_set(init_sync_start_time.yfilter)) leaf_name_data.push_back(init_sync_start_time.get_name_leafdata());
    if (init_sync_start_time_down_stream.is_set || is_set(init_sync_start_time_down_stream.yfilter)) leaf_name_data.push_back(init_sync_start_time_down_stream.get_name_leafdata());
    if (init_sync_start_time_up_stream.is_set || is_set(init_sync_start_time_up_stream.yfilter)) leaf_name_data.push_back(init_sync_start_time_up_stream.get_name_leafdata());
    if (is_admin_configured_up.is_set || is_set(is_admin_configured_up.yfilter)) leaf_name_data.push_back(is_admin_configured_up.get_name_leafdata());
    if (is_ds_operational_up.is_set || is_set(is_ds_operational_up.yfilter)) leaf_name_data.push_back(is_ds_operational_up.get_name_leafdata());
    if (is_init_sync_error_local.is_set || is_set(is_init_sync_error_local.yfilter)) leaf_name_data.push_back(is_init_sync_error_local.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.yfilter)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_init_sync_second_phase.is_set || is_set(is_init_sync_second_phase.yfilter)) leaf_name_data.push_back(is_init_sync_second_phase.get_name_leafdata());
    if (is_only_receive_path_replication.is_set || is_set(is_only_receive_path_replication.yfilter)) leaf_name_data.push_back(is_only_receive_path_replication.get_name_leafdata());
    if (is_session_replicated.is_set || is_set(is_session_replicated.yfilter)) leaf_name_data.push_back(is_session_replicated.get_name_leafdata());
    if (is_session_synced.is_set || is_set(is_session_synced.yfilter)) leaf_name_data.push_back(is_session_synced.get_name_leafdata());
    if (is_us_operational_up.is_set || is_set(is_us_operational_up.yfilter)) leaf_name_data.push_back(is_us_operational_up.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (max_number_of_held_internal_ack.is_set || is_set(max_number_of_held_internal_ack.yfilter)) leaf_name_data.push_back(max_number_of_held_internal_ack.get_name_leafdata());
    if (max_number_of_held_internal_ack_reach_time.is_set || is_set(max_number_of_held_internal_ack_reach_time.yfilter)) leaf_name_data.push_back(max_number_of_held_internal_ack_reach_time.get_name_leafdata());
    if (max_number_of_held_packet.is_set || is_set(max_number_of_held_packet.yfilter)) leaf_name_data.push_back(max_number_of_held_packet.get_name_leafdata());
    if (max_number_of_held_packet_reach_time.is_set || is_set(max_number_of_held_packet_reach_time.yfilter)) leaf_name_data.push_back(max_number_of_held_packet_reach_time.get_name_leafdata());
    if (nsr_down_reason.is_set || is_set(nsr_down_reason.yfilter)) leaf_name_data.push_back(nsr_down_reason.get_name_leafdata());
    if (nsr_down_reason_down_stream.is_set || is_set(nsr_down_reason_down_stream.yfilter)) leaf_name_data.push_back(nsr_down_reason_down_stream.get_name_leafdata());
    if (nsr_down_reason_up_stream.is_set || is_set(nsr_down_reason_up_stream.yfilter)) leaf_name_data.push_back(nsr_down_reason_up_stream.get_name_leafdata());
    if (nsr_down_time.is_set || is_set(nsr_down_time.yfilter)) leaf_name_data.push_back(nsr_down_time.get_name_leafdata());
    if (nsr_down_time_down_stream.is_set || is_set(nsr_down_time_down_stream.yfilter)) leaf_name_data.push_back(nsr_down_time_down_stream.get_name_leafdata());
    if (nsr_down_time_up_stream.is_set || is_set(nsr_down_time_up_stream.yfilter)) leaf_name_data.push_back(nsr_down_time_up_stream.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.yfilter)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (peer_endp_hdl_down_stream.is_set || is_set(peer_endp_hdl_down_stream.yfilter)) leaf_name_data.push_back(peer_endp_hdl_down_stream.get_name_leafdata());
    if (peer_endp_hdl_up_stream.is_set || is_set(peer_endp_hdl_up_stream.yfilter)) leaf_name_data.push_back(peer_endp_hdl_up_stream.get_name_leafdata());
    if (sequence_number_of_init_sync.is_set || is_set(sequence_number_of_init_sync.yfilter)) leaf_name_data.push_back(sequence_number_of_init_sync.get_name_leafdata());
    if (sequence_number_of_init_sync_down_stream.is_set || is_set(sequence_number_of_init_sync_down_stream.yfilter)) leaf_name_data.push_back(sequence_number_of_init_sync_down_stream.get_name_leafdata());
    if (sequence_number_of_init_sync_up_stream.is_set || is_set(sequence_number_of_init_sync_up_stream.yfilter)) leaf_name_data.push_back(sequence_number_of_init_sync_up_stream.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.yfilter)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto foreign_address_name_datas = foreign_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), foreign_address_name_datas.begin(), foreign_address_name_datas.end());
    auto local_address_name_datas = local_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_address_name_datas.begin(), local_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-ack-hold-queue")
    {
        for(auto const & c : internal_ack_hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue>();
        c->parent = this;
        internal_ack_hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "packet-hold-queue")
    {
        for(auto const & c : packet_hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue>();
        c->parent = this;
        packet_hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "set-information")
    {
        if(set_information == nullptr)
        {
            set_information = std::make_shared<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation>();
        }
        return set_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : internal_ack_hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : packet_hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(set_information != nullptr)
    {
        children["set-information"] = set_information;
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie")
    {
        cookie = value;
        cookie.value_namespace = name_space;
        cookie.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fist-standby-sequence-number")
    {
        fist_standby_sequence_number = value;
        fist_standby_sequence_number.value_namespace = name_space;
        fist_standby_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fist-standby-sequence-number-down-stream")
    {
        fist_standby_sequence_number_down_stream = value;
        fist_standby_sequence_number_down_stream.value_namespace = name_space;
        fist_standby_sequence_number_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fist-standby-sequence-number-up-stream")
    {
        fist_standby_sequence_number_up_stream = value;
        fist_standby_sequence_number_up_stream.value_namespace = name_space;
        fist_standby_sequence_number_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-address")
    {
        foreign_address.append(value);
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset = value;
        fssn_offset.value_namespace = name_space;
        fssn_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end-time")
    {
        init_sync_end_time = value;
        init_sync_end_time.value_namespace = name_space;
        init_sync_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end-time-down-stream")
    {
        init_sync_end_time_down_stream = value;
        init_sync_end_time_down_stream.value_namespace = name_space;
        init_sync_end_time_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end-time-up-stream")
    {
        init_sync_end_time_up_stream = value;
        init_sync_end_time_up_stream.value_namespace = name_space;
        init_sync_end_time_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-error")
    {
        init_sync_error = value;
        init_sync_error.value_namespace = name_space;
        init_sync_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-flags")
    {
        init_sync_flags = value;
        init_sync_flags.value_namespace = name_space;
        init_sync_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start-time")
    {
        init_sync_start_time = value;
        init_sync_start_time.value_namespace = name_space;
        init_sync_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start-time-down-stream")
    {
        init_sync_start_time_down_stream = value;
        init_sync_start_time_down_stream.value_namespace = name_space;
        init_sync_start_time_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start-time-up-stream")
    {
        init_sync_start_time_up_stream = value;
        init_sync_start_time_up_stream.value_namespace = name_space;
        init_sync_start_time_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-configured-up")
    {
        is_admin_configured_up = value;
        is_admin_configured_up.value_namespace = name_space;
        is_admin_configured_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ds-operational-up")
    {
        is_ds_operational_up = value;
        is_ds_operational_up.value_namespace = name_space;
        is_ds_operational_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-error-local")
    {
        is_init_sync_error_local = value;
        is_init_sync_error_local.value_namespace = name_space;
        is_init_sync_error_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
        is_init_sync_in_progress.value_namespace = name_space;
        is_init_sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-second-phase")
    {
        is_init_sync_second_phase = value;
        is_init_sync_second_phase.value_namespace = name_space;
        is_init_sync_second_phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-only-receive-path-replication")
    {
        is_only_receive_path_replication = value;
        is_only_receive_path_replication.value_namespace = name_space;
        is_only_receive_path_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-replicated")
    {
        is_session_replicated = value;
        is_session_replicated.value_namespace = name_space;
        is_session_replicated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-synced")
    {
        is_session_synced = value;
        is_session_synced.value_namespace = name_space;
        is_session_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-us-operational-up")
    {
        is_us_operational_up = value;
        is_us_operational_up.value_namespace = name_space;
        is_us_operational_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address.append(value);
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-number-of-held-internal-ack")
    {
        max_number_of_held_internal_ack = value;
        max_number_of_held_internal_ack.value_namespace = name_space;
        max_number_of_held_internal_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-number-of-held-internal-ack-reach-time")
    {
        max_number_of_held_internal_ack_reach_time = value;
        max_number_of_held_internal_ack_reach_time.value_namespace = name_space;
        max_number_of_held_internal_ack_reach_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-number-of-held-packet")
    {
        max_number_of_held_packet = value;
        max_number_of_held_packet.value_namespace = name_space;
        max_number_of_held_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-number-of-held-packet-reach-time")
    {
        max_number_of_held_packet_reach_time = value;
        max_number_of_held_packet_reach_time.value_namespace = name_space;
        max_number_of_held_packet_reach_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down-reason")
    {
        nsr_down_reason = value;
        nsr_down_reason.value_namespace = name_space;
        nsr_down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down-reason-down-stream")
    {
        nsr_down_reason_down_stream = value;
        nsr_down_reason_down_stream.value_namespace = name_space;
        nsr_down_reason_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down-reason-up-stream")
    {
        nsr_down_reason_up_stream = value;
        nsr_down_reason_up_stream.value_namespace = name_space;
        nsr_down_reason_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down-time")
    {
        nsr_down_time = value;
        nsr_down_time.value_namespace = name_space;
        nsr_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down-time-down-stream")
    {
        nsr_down_time_down_stream = value;
        nsr_down_time_down_stream.value_namespace = name_space;
        nsr_down_time_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-down-time-up-stream")
    {
        nsr_down_time_up_stream = value;
        nsr_down_time_up_stream.value_namespace = name_space;
        nsr_down_time_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb")
    {
        pcb = value;
        pcb.value_namespace = name_space;
        pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-endp-hdl-down-stream")
    {
        peer_endp_hdl_down_stream = value;
        peer_endp_hdl_down_stream.value_namespace = name_space;
        peer_endp_hdl_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-endp-hdl-up-stream")
    {
        peer_endp_hdl_up_stream = value;
        peer_endp_hdl_up_stream.value_namespace = name_space;
        peer_endp_hdl_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-of-init-sync")
    {
        sequence_number_of_init_sync = value;
        sequence_number_of_init_sync.value_namespace = name_space;
        sequence_number_of_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-of-init-sync-down-stream")
    {
        sequence_number_of_init_sync_down_stream = value;
        sequence_number_of_init_sync_down_stream.value_namespace = name_space;
        sequence_number_of_init_sync_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-of-init-sync-up-stream")
    {
        sequence_number_of_init_sync_up_stream = value;
        sequence_number_of_init_sync_up_stream.value_namespace = name_space;
        sequence_number_of_init_sync_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sscb")
    {
        sscb = value;
        sscb.value_namespace = name_space;
        sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "cookie")
    {
        cookie.yfilter = yfilter;
    }
    if(value_path == "fist-standby-sequence-number")
    {
        fist_standby_sequence_number.yfilter = yfilter;
    }
    if(value_path == "fist-standby-sequence-number-down-stream")
    {
        fist_standby_sequence_number_down_stream.yfilter = yfilter;
    }
    if(value_path == "fist-standby-sequence-number-up-stream")
    {
        fist_standby_sequence_number_up_stream.yfilter = yfilter;
    }
    if(value_path == "foreign-address")
    {
        foreign_address.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset.yfilter = yfilter;
    }
    if(value_path == "init-sync-end-time")
    {
        init_sync_end_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-end-time-down-stream")
    {
        init_sync_end_time_down_stream.yfilter = yfilter;
    }
    if(value_path == "init-sync-end-time-up-stream")
    {
        init_sync_end_time_up_stream.yfilter = yfilter;
    }
    if(value_path == "init-sync-error")
    {
        init_sync_error.yfilter = yfilter;
    }
    if(value_path == "init-sync-flags")
    {
        init_sync_flags.yfilter = yfilter;
    }
    if(value_path == "init-sync-start-time")
    {
        init_sync_start_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-start-time-down-stream")
    {
        init_sync_start_time_down_stream.yfilter = yfilter;
    }
    if(value_path == "init-sync-start-time-up-stream")
    {
        init_sync_start_time_up_stream.yfilter = yfilter;
    }
    if(value_path == "is-admin-configured-up")
    {
        is_admin_configured_up.yfilter = yfilter;
    }
    if(value_path == "is-ds-operational-up")
    {
        is_ds_operational_up.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-error-local")
    {
        is_init_sync_error_local.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-second-phase")
    {
        is_init_sync_second_phase.yfilter = yfilter;
    }
    if(value_path == "is-only-receive-path-replication")
    {
        is_only_receive_path_replication.yfilter = yfilter;
    }
    if(value_path == "is-session-replicated")
    {
        is_session_replicated.yfilter = yfilter;
    }
    if(value_path == "is-session-synced")
    {
        is_session_synced.yfilter = yfilter;
    }
    if(value_path == "is-us-operational-up")
    {
        is_us_operational_up.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "max-number-of-held-internal-ack")
    {
        max_number_of_held_internal_ack.yfilter = yfilter;
    }
    if(value_path == "max-number-of-held-internal-ack-reach-time")
    {
        max_number_of_held_internal_ack_reach_time.yfilter = yfilter;
    }
    if(value_path == "max-number-of-held-packet")
    {
        max_number_of_held_packet.yfilter = yfilter;
    }
    if(value_path == "max-number-of-held-packet-reach-time")
    {
        max_number_of_held_packet_reach_time.yfilter = yfilter;
    }
    if(value_path == "nsr-down-reason")
    {
        nsr_down_reason.yfilter = yfilter;
    }
    if(value_path == "nsr-down-reason-down-stream")
    {
        nsr_down_reason_down_stream.yfilter = yfilter;
    }
    if(value_path == "nsr-down-reason-up-stream")
    {
        nsr_down_reason_up_stream.yfilter = yfilter;
    }
    if(value_path == "nsr-down-time")
    {
        nsr_down_time.yfilter = yfilter;
    }
    if(value_path == "nsr-down-time-down-stream")
    {
        nsr_down_time_down_stream.yfilter = yfilter;
    }
    if(value_path == "nsr-down-time-up-stream")
    {
        nsr_down_time_up_stream.yfilter = yfilter;
    }
    if(value_path == "pcb")
    {
        pcb.yfilter = yfilter;
    }
    if(value_path == "peer-endp-hdl-down-stream")
    {
        peer_endp_hdl_down_stream.yfilter = yfilter;
    }
    if(value_path == "peer-endp-hdl-up-stream")
    {
        peer_endp_hdl_up_stream.yfilter = yfilter;
    }
    if(value_path == "sequence-number-of-init-sync")
    {
        sequence_number_of_init_sync.yfilter = yfilter;
    }
    if(value_path == "sequence-number-of-init-sync-down-stream")
    {
        sequence_number_of_init_sync_down_stream.yfilter = yfilter;
    }
    if(value_path == "sequence-number-of-init-sync-up-stream")
    {
        sequence_number_of_init_sync_up_stream.yfilter = yfilter;
    }
    if(value_path == "sscb")
    {
        sscb.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-ack-hold-queue" || name == "packet-hold-queue" || name == "set-information" || name == "id" || name == "address-family" || name == "cookie" || name == "fist-standby-sequence-number" || name == "fist-standby-sequence-number-down-stream" || name == "fist-standby-sequence-number-up-stream" || name == "foreign-address" || name == "foreign-port" || name == "fssn-offset" || name == "init-sync-end-time" || name == "init-sync-end-time-down-stream" || name == "init-sync-end-time-up-stream" || name == "init-sync-error" || name == "init-sync-flags" || name == "init-sync-start-time" || name == "init-sync-start-time-down-stream" || name == "init-sync-start-time-up-stream" || name == "is-admin-configured-up" || name == "is-ds-operational-up" || name == "is-init-sync-error-local" || name == "is-init-sync-in-progress" || name == "is-init-sync-second-phase" || name == "is-only-receive-path-replication" || name == "is-session-replicated" || name == "is-session-synced" || name == "is-us-operational-up" || name == "local-address" || name == "local-port" || name == "max-number-of-held-internal-ack" || name == "max-number-of-held-internal-ack-reach-time" || name == "max-number-of-held-packet" || name == "max-number-of-held-packet-reach-time" || name == "nsr-down-reason" || name == "nsr-down-reason-down-stream" || name == "nsr-down-reason-up-stream" || name == "nsr-down-time" || name == "nsr-down-time-down-stream" || name == "nsr-down-time-up-stream" || name == "pcb" || name == "peer-endp-hdl-down-stream" || name == "peer-endp-hdl-up-stream" || name == "sequence-number-of-init-sync" || name == "sequence-number-of-init-sync-down-stream" || name == "sequence-number-of-init-sync-up-stream" || name == "sscb" || name == "vrf-id")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::InternalAckHoldQueue()
    :
    acknoledgement_number{YType::uint32, "acknoledgement-number"},
    data_length{YType::uint32, "data-length"},
    sequence_number{YType::uint32, "sequence-number"}
{

    yang_name = "internal-ack-hold-queue"; yang_parent_name = "detail-session"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::~InternalAckHoldQueue()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::has_data() const
{
    return acknoledgement_number.is_set
	|| data_length.is_set
	|| sequence_number.is_set;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknoledgement_number.yfilter)
	|| ydk::is_set(data_length.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-ack-hold-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknoledgement_number.is_set || is_set(acknoledgement_number.yfilter)) leaf_name_data.push_back(acknoledgement_number.get_name_leafdata());
    if (data_length.is_set || is_set(data_length.yfilter)) leaf_name_data.push_back(data_length.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknoledgement-number")
    {
        acknoledgement_number = value;
        acknoledgement_number.value_namespace = name_space;
        acknoledgement_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-length")
    {
        data_length = value;
        data_length.value_namespace = name_space;
        data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknoledgement-number")
    {
        acknoledgement_number.yfilter = yfilter;
    }
    if(value_path == "data-length")
    {
        data_length.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknoledgement-number" || name == "data-length" || name == "sequence-number")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::PacketHoldQueue()
    :
    acknoledgement_number{YType::uint32, "acknoledgement-number"},
    data_length{YType::uint32, "data-length"},
    sequence_number{YType::uint32, "sequence-number"}
{

    yang_name = "packet-hold-queue"; yang_parent_name = "detail-session"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::~PacketHoldQueue()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::has_data() const
{
    return acknoledgement_number.is_set
	|| data_length.is_set
	|| sequence_number.is_set;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknoledgement_number.yfilter)
	|| ydk::is_set(data_length.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-hold-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknoledgement_number.is_set || is_set(acknoledgement_number.yfilter)) leaf_name_data.push_back(acknoledgement_number.get_name_leafdata());
    if (data_length.is_set || is_set(data_length.yfilter)) leaf_name_data.push_back(data_length.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknoledgement-number")
    {
        acknoledgement_number = value;
        acknoledgement_number.value_namespace = name_space;
        acknoledgement_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-length")
    {
        data_length = value;
        data_length.value_namespace = name_space;
        data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknoledgement-number")
    {
        acknoledgement_number.yfilter = yfilter;
    }
    if(value_path == "data-length")
    {
        data_length.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknoledgement-number" || name == "data-length" || name == "sequence-number")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::SetInformation()
    :
    address_family{YType::enumeration, "address-family"},
    client_instance{YType::uint32, "client-instance"},
    client_name{YType::str, "client-name"},
    is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
    is_sscb_init_sync_ready{YType::boolean, "is-sscb-init-sync-ready"},
    local_instance{YType::uint32, "local-instance"},
    local_node{YType::str, "local-node"},
    mode{YType::uint32, "mode"},
    number_of_sessions{YType::uint32, "number-of-sessions"},
    number_of_synced_sessions_down_stream{YType::uint32, "number-of-synced-sessions-down-stream"},
    number_of_synced_sessions_up_stream{YType::uint32, "number-of-synced-sessions-up-stream"},
    pid{YType::uint32, "pid"},
    protect_instance{YType::uint32, "protect-instance"},
    protect_node{YType::str, "protect-node"},
    set_id{YType::uint32, "set-id"},
    sscb{YType::uint64, "sscb"},
    sso_role{YType::uint32, "sso-role"},
    well_known_port{YType::uint16, "well-known-port"}
{

    yang_name = "set-information"; yang_parent_name = "detail-session"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::~SetInformation()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::has_data() const
{
    return address_family.is_set
	|| client_instance.is_set
	|| client_name.is_set
	|| is_init_sync_in_progress.is_set
	|| is_sscb_init_sync_ready.is_set
	|| local_instance.is_set
	|| local_node.is_set
	|| mode.is_set
	|| number_of_sessions.is_set
	|| number_of_synced_sessions_down_stream.is_set
	|| number_of_synced_sessions_up_stream.is_set
	|| pid.is_set
	|| protect_instance.is_set
	|| protect_node.is_set
	|| set_id.is_set
	|| sscb.is_set
	|| sso_role.is_set
	|| well_known_port.is_set;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(client_instance.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(is_init_sync_in_progress.yfilter)
	|| ydk::is_set(is_sscb_init_sync_ready.yfilter)
	|| ydk::is_set(local_instance.yfilter)
	|| ydk::is_set(local_node.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(number_of_sessions.yfilter)
	|| ydk::is_set(number_of_synced_sessions_down_stream.yfilter)
	|| ydk::is_set(number_of_synced_sessions_up_stream.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(protect_instance.yfilter)
	|| ydk::is_set(protect_node.yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(sscb.yfilter)
	|| ydk::is_set(sso_role.yfilter)
	|| ydk::is_set(well_known_port.yfilter);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (client_instance.is_set || is_set(client_instance.yfilter)) leaf_name_data.push_back(client_instance.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.yfilter)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_sscb_init_sync_ready.is_set || is_set(is_sscb_init_sync_ready.yfilter)) leaf_name_data.push_back(is_sscb_init_sync_ready.get_name_leafdata());
    if (local_instance.is_set || is_set(local_instance.yfilter)) leaf_name_data.push_back(local_instance.get_name_leafdata());
    if (local_node.is_set || is_set(local_node.yfilter)) leaf_name_data.push_back(local_node.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.yfilter)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_synced_sessions_down_stream.is_set || is_set(number_of_synced_sessions_down_stream.yfilter)) leaf_name_data.push_back(number_of_synced_sessions_down_stream.get_name_leafdata());
    if (number_of_synced_sessions_up_stream.is_set || is_set(number_of_synced_sessions_up_stream.yfilter)) leaf_name_data.push_back(number_of_synced_sessions_up_stream.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (protect_instance.is_set || is_set(protect_instance.yfilter)) leaf_name_data.push_back(protect_instance.get_name_leafdata());
    if (protect_node.is_set || is_set(protect_node.yfilter)) leaf_name_data.push_back(protect_node.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.yfilter)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (sso_role.is_set || is_set(sso_role.yfilter)) leaf_name_data.push_back(sso_role.get_name_leafdata());
    if (well_known_port.is_set || is_set(well_known_port.yfilter)) leaf_name_data.push_back(well_known_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-instance")
    {
        client_instance = value;
        client_instance.value_namespace = name_space;
        client_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
        is_init_sync_in_progress.value_namespace = name_space;
        is_init_sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready = value;
        is_sscb_init_sync_ready.value_namespace = name_space;
        is_sscb_init_sync_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-instance")
    {
        local_instance = value;
        local_instance.value_namespace = name_space;
        local_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node")
    {
        local_node = value;
        local_node.value_namespace = name_space;
        local_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
        number_of_sessions.value_namespace = name_space;
        number_of_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream = value;
        number_of_synced_sessions_down_stream.value_namespace = name_space;
        number_of_synced_sessions_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream = value;
        number_of_synced_sessions_up_stream.value_namespace = name_space;
        number_of_synced_sessions_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-instance")
    {
        protect_instance = value;
        protect_instance.value_namespace = name_space;
        protect_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-node")
    {
        protect_node = value;
        protect_node.value_namespace = name_space;
        protect_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sscb")
    {
        sscb = value;
        sscb.value_namespace = name_space;
        sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sso-role")
    {
        sso_role = value;
        sso_role.value_namespace = name_space;
        sso_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "well-known-port")
    {
        well_known_port = value;
        well_known_port.value_namespace = name_space;
        well_known_port.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "client-instance")
    {
        client_instance.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready.yfilter = yfilter;
    }
    if(value_path == "local-instance")
    {
        local_instance.yfilter = yfilter;
    }
    if(value_path == "local-node")
    {
        local_node.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream.yfilter = yfilter;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "protect-instance")
    {
        protect_instance.yfilter = yfilter;
    }
    if(value_path == "protect-node")
    {
        protect_node.yfilter = yfilter;
    }
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "sscb")
    {
        sscb.yfilter = yfilter;
    }
    if(value_path == "sso-role")
    {
        sso_role.yfilter = yfilter;
    }
    if(value_path == "well-known-port")
    {
        well_known_port.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "client-instance" || name == "client-name" || name == "is-init-sync-in-progress" || name == "is-sscb-init-sync-ready" || name == "local-instance" || name == "local-node" || name == "mode" || name == "number-of-sessions" || name == "number-of-synced-sessions-down-stream" || name == "number-of-synced-sessions-up-stream" || name == "pid" || name == "protect-instance" || name == "protect-node" || name == "set-id" || name == "sscb" || name == "sso-role" || name == "well-known-port")
        return true;
    return false;
}

TcpNsr::Nodes::Node::SessionSet::SessionSet()
    :
    brief_sets(std::make_shared<TcpNsr::Nodes::Node::SessionSet::BriefSets>())
	,detail_sets(std::make_shared<TcpNsr::Nodes::Node::SessionSet::DetailSets>())
{
    brief_sets->parent = this;
    detail_sets->parent = this;

    yang_name = "session-set"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::SessionSet::~SessionSet()
{
}

bool TcpNsr::Nodes::Node::SessionSet::has_data() const
{
    return (brief_sets !=  nullptr && brief_sets->has_data())
	|| (detail_sets !=  nullptr && detail_sets->has_data());
}

bool TcpNsr::Nodes::Node::SessionSet::has_operation() const
{
    return is_set(yfilter)
	|| (brief_sets !=  nullptr && brief_sets->has_operation())
	|| (detail_sets !=  nullptr && detail_sets->has_operation());
}

std::string TcpNsr::Nodes::Node::SessionSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::SessionSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::SessionSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-sets")
    {
        if(brief_sets == nullptr)
        {
            brief_sets = std::make_shared<TcpNsr::Nodes::Node::SessionSet::BriefSets>();
        }
        return brief_sets;
    }

    if(child_yang_name == "detail-sets")
    {
        if(detail_sets == nullptr)
        {
            detail_sets = std::make_shared<TcpNsr::Nodes::Node::SessionSet::DetailSets>();
        }
        return detail_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::SessionSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_sets != nullptr)
    {
        children["brief-sets"] = brief_sets;
    }

    if(detail_sets != nullptr)
    {
        children["detail-sets"] = detail_sets;
    }

    return children;
}

void TcpNsr::Nodes::Node::SessionSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::SessionSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::SessionSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-sets" || name == "detail-sets")
        return true;
    return false;
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSets()
{

    yang_name = "brief-sets"; yang_parent_name = "session-set"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::~BriefSets()
{
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::has_data() const
{
    for (std::size_t index=0; index<brief_set.size(); index++)
    {
        if(brief_set[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::has_operation() const
{
    for (std::size_t index=0; index<brief_set.size(); index++)
    {
        if(brief_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::SessionSet::BriefSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::SessionSet::BriefSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::SessionSet::BriefSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-set")
    {
        for(auto const & c : brief_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet>();
        c->parent = this;
        brief_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::SessionSet::BriefSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::SessionSet::BriefSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::SessionSet::BriefSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-set")
        return true;
    return false;
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::BriefSet()
    :
    id{YType::str, "id"},
    address_family{YType::enumeration, "address-family"},
    client_instance{YType::uint32, "client-instance"},
    client_name{YType::str, "client-name"},
    is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
    is_sscb_init_sync_ready{YType::boolean, "is-sscb-init-sync-ready"},
    local_instance{YType::uint32, "local-instance"},
    local_node{YType::str, "local-node"},
    mode{YType::uint32, "mode"},
    number_of_sessions{YType::uint32, "number-of-sessions"},
    number_of_synced_sessions_down_stream{YType::uint32, "number-of-synced-sessions-down-stream"},
    number_of_synced_sessions_up_stream{YType::uint32, "number-of-synced-sessions-up-stream"},
    pid{YType::uint32, "pid"},
    protect_instance{YType::uint32, "protect-instance"},
    protect_node{YType::str, "protect-node"},
    set_id{YType::uint32, "set-id"},
    sscb{YType::uint64, "sscb"},
    sso_role{YType::uint32, "sso-role"},
    well_known_port{YType::uint16, "well-known-port"}
{

    yang_name = "brief-set"; yang_parent_name = "brief-sets"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::~BriefSet()
{
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::has_data() const
{
    return id.is_set
	|| address_family.is_set
	|| client_instance.is_set
	|| client_name.is_set
	|| is_init_sync_in_progress.is_set
	|| is_sscb_init_sync_ready.is_set
	|| local_instance.is_set
	|| local_node.is_set
	|| mode.is_set
	|| number_of_sessions.is_set
	|| number_of_synced_sessions_down_stream.is_set
	|| number_of_synced_sessions_up_stream.is_set
	|| pid.is_set
	|| protect_instance.is_set
	|| protect_node.is_set
	|| set_id.is_set
	|| sscb.is_set
	|| sso_role.is_set
	|| well_known_port.is_set;
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(client_instance.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(is_init_sync_in_progress.yfilter)
	|| ydk::is_set(is_sscb_init_sync_ready.yfilter)
	|| ydk::is_set(local_instance.yfilter)
	|| ydk::is_set(local_node.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(number_of_sessions.yfilter)
	|| ydk::is_set(number_of_synced_sessions_down_stream.yfilter)
	|| ydk::is_set(number_of_synced_sessions_up_stream.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(protect_instance.yfilter)
	|| ydk::is_set(protect_node.yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(sscb.yfilter)
	|| ydk::is_set(sso_role.yfilter)
	|| ydk::is_set(well_known_port.yfilter);
}

std::string TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-set" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (client_instance.is_set || is_set(client_instance.yfilter)) leaf_name_data.push_back(client_instance.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.yfilter)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_sscb_init_sync_ready.is_set || is_set(is_sscb_init_sync_ready.yfilter)) leaf_name_data.push_back(is_sscb_init_sync_ready.get_name_leafdata());
    if (local_instance.is_set || is_set(local_instance.yfilter)) leaf_name_data.push_back(local_instance.get_name_leafdata());
    if (local_node.is_set || is_set(local_node.yfilter)) leaf_name_data.push_back(local_node.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.yfilter)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_synced_sessions_down_stream.is_set || is_set(number_of_synced_sessions_down_stream.yfilter)) leaf_name_data.push_back(number_of_synced_sessions_down_stream.get_name_leafdata());
    if (number_of_synced_sessions_up_stream.is_set || is_set(number_of_synced_sessions_up_stream.yfilter)) leaf_name_data.push_back(number_of_synced_sessions_up_stream.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (protect_instance.is_set || is_set(protect_instance.yfilter)) leaf_name_data.push_back(protect_instance.get_name_leafdata());
    if (protect_node.is_set || is_set(protect_node.yfilter)) leaf_name_data.push_back(protect_node.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.yfilter)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (sso_role.is_set || is_set(sso_role.yfilter)) leaf_name_data.push_back(sso_role.get_name_leafdata());
    if (well_known_port.is_set || is_set(well_known_port.yfilter)) leaf_name_data.push_back(well_known_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-instance")
    {
        client_instance = value;
        client_instance.value_namespace = name_space;
        client_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
        is_init_sync_in_progress.value_namespace = name_space;
        is_init_sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready = value;
        is_sscb_init_sync_ready.value_namespace = name_space;
        is_sscb_init_sync_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-instance")
    {
        local_instance = value;
        local_instance.value_namespace = name_space;
        local_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node")
    {
        local_node = value;
        local_node.value_namespace = name_space;
        local_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
        number_of_sessions.value_namespace = name_space;
        number_of_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream = value;
        number_of_synced_sessions_down_stream.value_namespace = name_space;
        number_of_synced_sessions_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream = value;
        number_of_synced_sessions_up_stream.value_namespace = name_space;
        number_of_synced_sessions_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-instance")
    {
        protect_instance = value;
        protect_instance.value_namespace = name_space;
        protect_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-node")
    {
        protect_node = value;
        protect_node.value_namespace = name_space;
        protect_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sscb")
    {
        sscb = value;
        sscb.value_namespace = name_space;
        sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sso-role")
    {
        sso_role = value;
        sso_role.value_namespace = name_space;
        sso_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "well-known-port")
    {
        well_known_port = value;
        well_known_port.value_namespace = name_space;
        well_known_port.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "client-instance")
    {
        client_instance.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready.yfilter = yfilter;
    }
    if(value_path == "local-instance")
    {
        local_instance.yfilter = yfilter;
    }
    if(value_path == "local-node")
    {
        local_node.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream.yfilter = yfilter;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "protect-instance")
    {
        protect_instance.yfilter = yfilter;
    }
    if(value_path == "protect-node")
    {
        protect_node.yfilter = yfilter;
    }
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "sscb")
    {
        sscb.yfilter = yfilter;
    }
    if(value_path == "sso-role")
    {
        sso_role.yfilter = yfilter;
    }
    if(value_path == "well-known-port")
    {
        well_known_port.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "address-family" || name == "client-instance" || name == "client-name" || name == "is-init-sync-in-progress" || name == "is-sscb-init-sync-ready" || name == "local-instance" || name == "local-node" || name == "mode" || name == "number-of-sessions" || name == "number-of-synced-sessions-down-stream" || name == "number-of-synced-sessions-up-stream" || name == "pid" || name == "protect-instance" || name == "protect-node" || name == "set-id" || name == "sscb" || name == "sso-role" || name == "well-known-port")
        return true;
    return false;
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSets()
{

    yang_name = "detail-sets"; yang_parent_name = "session-set"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::~DetailSets()
{
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::has_data() const
{
    for (std::size_t index=0; index<detail_set.size(); index++)
    {
        if(detail_set[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::has_operation() const
{
    for (std::size_t index=0; index<detail_set.size(); index++)
    {
        if(detail_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::SessionSet::DetailSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::SessionSet::DetailSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::SessionSet::DetailSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-set")
    {
        for(auto const & c : detail_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet>();
        c->parent = this;
        detail_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::SessionSet::DetailSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::SessionSet::DetailSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::SessionSet::DetailSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-set")
        return true;
    return false;
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::DetailSet()
    :
    id{YType::str, "id"},
    address_family{YType::enumeration, "address-family"},
    audit_end_time{YType::uint32, "audit-end-time"},
    audit_seq_number{YType::uint32, "audit-seq-number"},
    audit_start_time{YType::uint32, "audit-start-time"},
    init_sync_end_time{YType::uint32, "init-sync-end-time"},
    init_sync_error{YType::str, "init-sync-error"},
    init_sync_ready_end_time{YType::uint32, "init-sync-ready-end-time"},
    init_sync_ready_start_time{YType::uint32, "init-sync-ready-start-time"},
    init_sync_start_time{YType::uint32, "init-sync-start-time"},
    init_sync_timer{YType::uint32, "init-sync-timer"},
    is_audit_in_progress{YType::boolean, "is-audit-in-progress"},
    is_init_sync_error_local{YType::boolean, "is-init-sync-error-local"},
    is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
    is_init_sync_second_phase{YType::boolean, "is-init-sync-second-phase"},
    is_sscb_init_sync_ready{YType::boolean, "is-sscb-init-sync-ready"},
    local_instance{YType::uint32, "local-instance"},
    local_node{YType::str, "local-node"},
    mode{YType::uint32, "mode"},
    nsr_reset_time{YType::uint32, "nsr-reset-time"},
    number_of_init_synced_sessions{YType::uint32, "number-of-init-synced-sessions"},
    number_of_sessions{YType::uint32, "number-of-sessions"},
    number_of_sessions_init_sync_failed{YType::uint32, "number-of-sessions-init-sync-failed"},
    number_of_synced_sessions_down_stream{YType::uint32, "number-of-synced-sessions-down-stream"},
    number_of_synced_sessions_up_stream{YType::uint32, "number-of-synced-sessions-up-stream"},
    pid{YType::uint32, "pid"},
    protect_instance{YType::uint32, "protect-instance"},
    protect_node{YType::str, "protect-node"},
    sequence_number_of_init_sync{YType::uint32, "sequence-number-of-init-sync"},
    set_id{YType::uint32, "set-id"},
    sscb{YType::uint64, "sscb"},
    sso_role{YType::uint32, "sso-role"},
    total_number_of_init_sync_sessions{YType::uint32, "total-number-of-init-sync-sessions"},
    well_known_port{YType::uint16, "well-known-port"}
{

    yang_name = "detail-set"; yang_parent_name = "detail-sets"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::~DetailSet()
{
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::has_data() const
{
    return id.is_set
	|| address_family.is_set
	|| audit_end_time.is_set
	|| audit_seq_number.is_set
	|| audit_start_time.is_set
	|| init_sync_end_time.is_set
	|| init_sync_error.is_set
	|| init_sync_ready_end_time.is_set
	|| init_sync_ready_start_time.is_set
	|| init_sync_start_time.is_set
	|| init_sync_timer.is_set
	|| is_audit_in_progress.is_set
	|| is_init_sync_error_local.is_set
	|| is_init_sync_in_progress.is_set
	|| is_init_sync_second_phase.is_set
	|| is_sscb_init_sync_ready.is_set
	|| local_instance.is_set
	|| local_node.is_set
	|| mode.is_set
	|| nsr_reset_time.is_set
	|| number_of_init_synced_sessions.is_set
	|| number_of_sessions.is_set
	|| number_of_sessions_init_sync_failed.is_set
	|| number_of_synced_sessions_down_stream.is_set
	|| number_of_synced_sessions_up_stream.is_set
	|| pid.is_set
	|| protect_instance.is_set
	|| protect_node.is_set
	|| sequence_number_of_init_sync.is_set
	|| set_id.is_set
	|| sscb.is_set
	|| sso_role.is_set
	|| total_number_of_init_sync_sessions.is_set
	|| well_known_port.is_set;
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(audit_end_time.yfilter)
	|| ydk::is_set(audit_seq_number.yfilter)
	|| ydk::is_set(audit_start_time.yfilter)
	|| ydk::is_set(init_sync_end_time.yfilter)
	|| ydk::is_set(init_sync_error.yfilter)
	|| ydk::is_set(init_sync_ready_end_time.yfilter)
	|| ydk::is_set(init_sync_ready_start_time.yfilter)
	|| ydk::is_set(init_sync_start_time.yfilter)
	|| ydk::is_set(init_sync_timer.yfilter)
	|| ydk::is_set(is_audit_in_progress.yfilter)
	|| ydk::is_set(is_init_sync_error_local.yfilter)
	|| ydk::is_set(is_init_sync_in_progress.yfilter)
	|| ydk::is_set(is_init_sync_second_phase.yfilter)
	|| ydk::is_set(is_sscb_init_sync_ready.yfilter)
	|| ydk::is_set(local_instance.yfilter)
	|| ydk::is_set(local_node.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(nsr_reset_time.yfilter)
	|| ydk::is_set(number_of_init_synced_sessions.yfilter)
	|| ydk::is_set(number_of_sessions.yfilter)
	|| ydk::is_set(number_of_sessions_init_sync_failed.yfilter)
	|| ydk::is_set(number_of_synced_sessions_down_stream.yfilter)
	|| ydk::is_set(number_of_synced_sessions_up_stream.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(protect_instance.yfilter)
	|| ydk::is_set(protect_node.yfilter)
	|| ydk::is_set(sequence_number_of_init_sync.yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(sscb.yfilter)
	|| ydk::is_set(sso_role.yfilter)
	|| ydk::is_set(total_number_of_init_sync_sessions.yfilter)
	|| ydk::is_set(well_known_port.yfilter);
}

std::string TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-set" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (audit_end_time.is_set || is_set(audit_end_time.yfilter)) leaf_name_data.push_back(audit_end_time.get_name_leafdata());
    if (audit_seq_number.is_set || is_set(audit_seq_number.yfilter)) leaf_name_data.push_back(audit_seq_number.get_name_leafdata());
    if (audit_start_time.is_set || is_set(audit_start_time.yfilter)) leaf_name_data.push_back(audit_start_time.get_name_leafdata());
    if (init_sync_end_time.is_set || is_set(init_sync_end_time.yfilter)) leaf_name_data.push_back(init_sync_end_time.get_name_leafdata());
    if (init_sync_error.is_set || is_set(init_sync_error.yfilter)) leaf_name_data.push_back(init_sync_error.get_name_leafdata());
    if (init_sync_ready_end_time.is_set || is_set(init_sync_ready_end_time.yfilter)) leaf_name_data.push_back(init_sync_ready_end_time.get_name_leafdata());
    if (init_sync_ready_start_time.is_set || is_set(init_sync_ready_start_time.yfilter)) leaf_name_data.push_back(init_sync_ready_start_time.get_name_leafdata());
    if (init_sync_start_time.is_set || is_set(init_sync_start_time.yfilter)) leaf_name_data.push_back(init_sync_start_time.get_name_leafdata());
    if (init_sync_timer.is_set || is_set(init_sync_timer.yfilter)) leaf_name_data.push_back(init_sync_timer.get_name_leafdata());
    if (is_audit_in_progress.is_set || is_set(is_audit_in_progress.yfilter)) leaf_name_data.push_back(is_audit_in_progress.get_name_leafdata());
    if (is_init_sync_error_local.is_set || is_set(is_init_sync_error_local.yfilter)) leaf_name_data.push_back(is_init_sync_error_local.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.yfilter)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_init_sync_second_phase.is_set || is_set(is_init_sync_second_phase.yfilter)) leaf_name_data.push_back(is_init_sync_second_phase.get_name_leafdata());
    if (is_sscb_init_sync_ready.is_set || is_set(is_sscb_init_sync_ready.yfilter)) leaf_name_data.push_back(is_sscb_init_sync_ready.get_name_leafdata());
    if (local_instance.is_set || is_set(local_instance.yfilter)) leaf_name_data.push_back(local_instance.get_name_leafdata());
    if (local_node.is_set || is_set(local_node.yfilter)) leaf_name_data.push_back(local_node.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (nsr_reset_time.is_set || is_set(nsr_reset_time.yfilter)) leaf_name_data.push_back(nsr_reset_time.get_name_leafdata());
    if (number_of_init_synced_sessions.is_set || is_set(number_of_init_synced_sessions.yfilter)) leaf_name_data.push_back(number_of_init_synced_sessions.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.yfilter)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_sessions_init_sync_failed.is_set || is_set(number_of_sessions_init_sync_failed.yfilter)) leaf_name_data.push_back(number_of_sessions_init_sync_failed.get_name_leafdata());
    if (number_of_synced_sessions_down_stream.is_set || is_set(number_of_synced_sessions_down_stream.yfilter)) leaf_name_data.push_back(number_of_synced_sessions_down_stream.get_name_leafdata());
    if (number_of_synced_sessions_up_stream.is_set || is_set(number_of_synced_sessions_up_stream.yfilter)) leaf_name_data.push_back(number_of_synced_sessions_up_stream.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (protect_instance.is_set || is_set(protect_instance.yfilter)) leaf_name_data.push_back(protect_instance.get_name_leafdata());
    if (protect_node.is_set || is_set(protect_node.yfilter)) leaf_name_data.push_back(protect_node.get_name_leafdata());
    if (sequence_number_of_init_sync.is_set || is_set(sequence_number_of_init_sync.yfilter)) leaf_name_data.push_back(sequence_number_of_init_sync.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.yfilter)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (sso_role.is_set || is_set(sso_role.yfilter)) leaf_name_data.push_back(sso_role.get_name_leafdata());
    if (total_number_of_init_sync_sessions.is_set || is_set(total_number_of_init_sync_sessions.yfilter)) leaf_name_data.push_back(total_number_of_init_sync_sessions.get_name_leafdata());
    if (well_known_port.is_set || is_set(well_known_port.yfilter)) leaf_name_data.push_back(well_known_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "audit-end-time")
    {
        audit_end_time = value;
        audit_end_time.value_namespace = name_space;
        audit_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "audit-seq-number")
    {
        audit_seq_number = value;
        audit_seq_number.value_namespace = name_space;
        audit_seq_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "audit-start-time")
    {
        audit_start_time = value;
        audit_start_time.value_namespace = name_space;
        audit_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-end-time")
    {
        init_sync_end_time = value;
        init_sync_end_time.value_namespace = name_space;
        init_sync_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-error")
    {
        init_sync_error = value;
        init_sync_error.value_namespace = name_space;
        init_sync_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-ready-end-time")
    {
        init_sync_ready_end_time = value;
        init_sync_ready_end_time.value_namespace = name_space;
        init_sync_ready_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-ready-start-time")
    {
        init_sync_ready_start_time = value;
        init_sync_ready_start_time.value_namespace = name_space;
        init_sync_ready_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-start-time")
    {
        init_sync_start_time = value;
        init_sync_start_time.value_namespace = name_space;
        init_sync_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-sync-timer")
    {
        init_sync_timer = value;
        init_sync_timer.value_namespace = name_space;
        init_sync_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-audit-in-progress")
    {
        is_audit_in_progress = value;
        is_audit_in_progress.value_namespace = name_space;
        is_audit_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-error-local")
    {
        is_init_sync_error_local = value;
        is_init_sync_error_local.value_namespace = name_space;
        is_init_sync_error_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
        is_init_sync_in_progress.value_namespace = name_space;
        is_init_sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-init-sync-second-phase")
    {
        is_init_sync_second_phase = value;
        is_init_sync_second_phase.value_namespace = name_space;
        is_init_sync_second_phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready = value;
        is_sscb_init_sync_ready.value_namespace = name_space;
        is_sscb_init_sync_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-instance")
    {
        local_instance = value;
        local_instance.value_namespace = name_space;
        local_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node")
    {
        local_node = value;
        local_node.value_namespace = name_space;
        local_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-reset-time")
    {
        nsr_reset_time = value;
        nsr_reset_time.value_namespace = name_space;
        nsr_reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-init-synced-sessions")
    {
        number_of_init_synced_sessions = value;
        number_of_init_synced_sessions.value_namespace = name_space;
        number_of_init_synced_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
        number_of_sessions.value_namespace = name_space;
        number_of_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sessions-init-sync-failed")
    {
        number_of_sessions_init_sync_failed = value;
        number_of_sessions_init_sync_failed.value_namespace = name_space;
        number_of_sessions_init_sync_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream = value;
        number_of_synced_sessions_down_stream.value_namespace = name_space;
        number_of_synced_sessions_down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream = value;
        number_of_synced_sessions_up_stream.value_namespace = name_space;
        number_of_synced_sessions_up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-instance")
    {
        protect_instance = value;
        protect_instance.value_namespace = name_space;
        protect_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-node")
    {
        protect_node = value;
        protect_node.value_namespace = name_space;
        protect_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-of-init-sync")
    {
        sequence_number_of_init_sync = value;
        sequence_number_of_init_sync.value_namespace = name_space;
        sequence_number_of_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sscb")
    {
        sscb = value;
        sscb.value_namespace = name_space;
        sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sso-role")
    {
        sso_role = value;
        sso_role.value_namespace = name_space;
        sso_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-init-sync-sessions")
    {
        total_number_of_init_sync_sessions = value;
        total_number_of_init_sync_sessions.value_namespace = name_space;
        total_number_of_init_sync_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "well-known-port")
    {
        well_known_port = value;
        well_known_port.value_namespace = name_space;
        well_known_port.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "audit-end-time")
    {
        audit_end_time.yfilter = yfilter;
    }
    if(value_path == "audit-seq-number")
    {
        audit_seq_number.yfilter = yfilter;
    }
    if(value_path == "audit-start-time")
    {
        audit_start_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-end-time")
    {
        init_sync_end_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-error")
    {
        init_sync_error.yfilter = yfilter;
    }
    if(value_path == "init-sync-ready-end-time")
    {
        init_sync_ready_end_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-ready-start-time")
    {
        init_sync_ready_start_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-start-time")
    {
        init_sync_start_time.yfilter = yfilter;
    }
    if(value_path == "init-sync-timer")
    {
        init_sync_timer.yfilter = yfilter;
    }
    if(value_path == "is-audit-in-progress")
    {
        is_audit_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-error-local")
    {
        is_init_sync_error_local.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "is-init-sync-second-phase")
    {
        is_init_sync_second_phase.yfilter = yfilter;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready.yfilter = yfilter;
    }
    if(value_path == "local-instance")
    {
        local_instance.yfilter = yfilter;
    }
    if(value_path == "local-node")
    {
        local_node.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "nsr-reset-time")
    {
        nsr_reset_time.yfilter = yfilter;
    }
    if(value_path == "number-of-init-synced-sessions")
    {
        number_of_init_synced_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-sessions-init-sync-failed")
    {
        number_of_sessions_init_sync_failed.yfilter = yfilter;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream.yfilter = yfilter;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "protect-instance")
    {
        protect_instance.yfilter = yfilter;
    }
    if(value_path == "protect-node")
    {
        protect_node.yfilter = yfilter;
    }
    if(value_path == "sequence-number-of-init-sync")
    {
        sequence_number_of_init_sync.yfilter = yfilter;
    }
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "sscb")
    {
        sscb.yfilter = yfilter;
    }
    if(value_path == "sso-role")
    {
        sso_role.yfilter = yfilter;
    }
    if(value_path == "total-number-of-init-sync-sessions")
    {
        total_number_of_init_sync_sessions.yfilter = yfilter;
    }
    if(value_path == "well-known-port")
    {
        well_known_port.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "address-family" || name == "audit-end-time" || name == "audit-seq-number" || name == "audit-start-time" || name == "init-sync-end-time" || name == "init-sync-error" || name == "init-sync-ready-end-time" || name == "init-sync-ready-start-time" || name == "init-sync-start-time" || name == "init-sync-timer" || name == "is-audit-in-progress" || name == "is-init-sync-error-local" || name == "is-init-sync-in-progress" || name == "is-init-sync-second-phase" || name == "is-sscb-init-sync-ready" || name == "local-instance" || name == "local-node" || name == "mode" || name == "nsr-reset-time" || name == "number-of-init-synced-sessions" || name == "number-of-sessions" || name == "number-of-sessions-init-sync-failed" || name == "number-of-synced-sessions-down-stream" || name == "number-of-synced-sessions-up-stream" || name == "pid" || name == "protect-instance" || name == "protect-node" || name == "sequence-number-of-init-sync" || name == "set-id" || name == "sscb" || name == "sso-role" || name == "total-number-of-init-sync-sessions" || name == "well-known-port")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Statistics()
    :
    statistic_clients(std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticClients>())
	,statistic_sessions(std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSessions>())
	,statistic_sets(std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSets>())
	,summary(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary>())
{
    statistic_clients->parent = this;
    statistic_sessions->parent = this;
    statistic_sets->parent = this;
    summary->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::~Statistics()
{
}

bool TcpNsr::Nodes::Node::Statistics::has_data() const
{
    return (statistic_clients !=  nullptr && statistic_clients->has_data())
	|| (statistic_sessions !=  nullptr && statistic_sessions->has_data())
	|| (statistic_sets !=  nullptr && statistic_sets->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (statistic_clients !=  nullptr && statistic_clients->has_operation())
	|| (statistic_sessions !=  nullptr && statistic_sessions->has_operation())
	|| (statistic_sets !=  nullptr && statistic_sets->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic-clients")
    {
        if(statistic_clients == nullptr)
        {
            statistic_clients = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticClients>();
        }
        return statistic_clients;
    }

    if(child_yang_name == "statistic-sessions")
    {
        if(statistic_sessions == nullptr)
        {
            statistic_sessions = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSessions>();
        }
        return statistic_sessions;
    }

    if(child_yang_name == "statistic-sets")
    {
        if(statistic_sets == nullptr)
        {
            statistic_sets = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSets>();
        }
        return statistic_sets;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistic_clients != nullptr)
    {
        children["statistic-clients"] = statistic_clients;
    }

    if(statistic_sessions != nullptr)
    {
        children["statistic-sessions"] = statistic_sessions;
    }

    if(statistic_sets != nullptr)
    {
        children["statistic-sets"] = statistic_sets;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic-clients" || name == "statistic-sessions" || name == "statistic-sets" || name == "summary")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClients()
{

    yang_name = "statistic-clients"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::~StatisticClients()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::has_data() const
{
    for (std::size_t index=0; index<statistic_client.size(); index++)
    {
        if(statistic_client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::has_operation() const
{
    for (std::size_t index=0; index<statistic_client.size(); index++)
    {
        if(statistic_client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticClients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic-client")
    {
        for(auto const & c : statistic_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient>();
        c->parent = this;
        statistic_client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticClients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic_client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic-client")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::StatisticClient()
    :
    id{YType::str, "id"},
    ccb{YType::uint64, "ccb"},
    connected_at{YType::uint32, "connected-at"},
    instance{YType::uint32, "instance"},
    job_id{YType::int32, "job-id"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    number_of_created_sscb{YType::uint32, "number-of-created-sscb"},
    number_of_deleted_sscb{YType::uint32, "number-of-deleted-sscb"},
    pid{YType::uint32, "pid"},
    process_name{YType::str, "process-name"}
{

    yang_name = "statistic-client"; yang_parent_name = "statistic-clients"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::~StatisticClient()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::has_data() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_data())
            return true;
    }
    return id.is_set
	|| ccb.is_set
	|| connected_at.is_set
	|| instance.is_set
	|| job_id.is_set
	|| last_cleared_time.is_set
	|| number_of_created_sscb.is_set
	|| number_of_deleted_sscb.is_set
	|| pid.is_set
	|| process_name.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::has_operation() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ccb.yfilter)
	|| ydk::is_set(connected_at.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(number_of_created_sscb.yfilter)
	|| ydk::is_set(number_of_deleted_sscb.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-client" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ccb.is_set || is_set(ccb.yfilter)) leaf_name_data.push_back(ccb.get_name_leafdata());
    if (connected_at.is_set || is_set(connected_at.yfilter)) leaf_name_data.push_back(connected_at.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_created_sscb.is_set || is_set(number_of_created_sscb.yfilter)) leaf_name_data.push_back(number_of_created_sscb.get_name_leafdata());
    if (number_of_deleted_sscb.is_set || is_set(number_of_deleted_sscb.yfilter)) leaf_name_data.push_back(number_of_deleted_sscb.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification-statistic")
    {
        for(auto const & c : notification_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic>();
        c->parent = this;
        notification_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : notification_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccb")
    {
        ccb = value;
        ccb.value_namespace = name_space;
        ccb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-at")
    {
        connected_at = value;
        connected_at.value_namespace = name_space;
        connected_at.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-created-sscb")
    {
        number_of_created_sscb = value;
        number_of_created_sscb.value_namespace = name_space;
        number_of_created_sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-deleted-sscb")
    {
        number_of_deleted_sscb = value;
        number_of_deleted_sscb.value_namespace = name_space;
        number_of_deleted_sscb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ccb")
    {
        ccb.yfilter = yfilter;
    }
    if(value_path == "connected-at")
    {
        connected_at.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "number-of-created-sscb")
    {
        number_of_created_sscb.yfilter = yfilter;
    }
    if(value_path == "number-of-deleted-sscb")
    {
        number_of_deleted_sscb.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-statistic" || name == "id" || name == "ccb" || name == "connected-at" || name == "instance" || name == "job-id" || name == "last-cleared-time" || name == "number-of-created-sscb" || name == "number-of-deleted-sscb" || name == "pid" || name == "process-name")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::NotificationStatistic()
    :
    delivered_count{YType::uint32, "delivered-count"},
    dropped_count{YType::uint32, "dropped-count"},
    failed_count{YType::uint32, "failed-count"},
    queued_count{YType::uint32, "queued-count"}
{

    yang_name = "notification-statistic"; yang_parent_name = "statistic-client"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::~NotificationStatistic()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::has_data() const
{
    return delivered_count.is_set
	|| dropped_count.is_set
	|| failed_count.is_set
	|| queued_count.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delivered_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(failed_count.yfilter)
	|| ydk::is_set(queued_count.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delivered_count.is_set || is_set(delivered_count.yfilter)) leaf_name_data.push_back(delivered_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (failed_count.is_set || is_set(failed_count.yfilter)) leaf_name_data.push_back(failed_count.get_name_leafdata());
    if (queued_count.is_set || is_set(queued_count.yfilter)) leaf_name_data.push_back(queued_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delivered-count")
    {
        delivered_count = value;
        delivered_count.value_namespace = name_space;
        delivered_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-count")
    {
        failed_count = value;
        failed_count.value_namespace = name_space;
        failed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queued-count")
    {
        queued_count = value;
        queued_count.value_namespace = name_space;
        queued_count.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delivered-count")
    {
        delivered_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "failed-count")
    {
        failed_count.yfilter = yfilter;
    }
    if(value_path == "queued-count")
    {
        queued_count.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delivered-count" || name == "dropped-count" || name == "failed-count" || name == "queued-count")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSessions()
{

    yang_name = "statistic-sessions"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::~StatisticSessions()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::has_data() const
{
    for (std::size_t index=0; index<statistic_session.size(); index++)
    {
        if(statistic_session[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::has_operation() const
{
    for (std::size_t index=0; index<statistic_session.size(); index++)
    {
        if(statistic_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic-session")
    {
        for(auto const & c : statistic_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession>();
        c->parent = this;
        statistic_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic-session")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::StatisticSession()
    :
    id{YType::str, "id"},
    internal_ack_drops_immediate_match{YType::uint64, "internal-ack-drops-immediate-match"},
    internal_ack_drops_initsync_first_phase{YType::uint64, "internal-ack-drops-initsync-first-phase"},
    internal_ack_drops_not_replicated{YType::uint64, "internal-ack-drops-not-replicated"},
    internal_ack_drops_stale{YType::uint64, "internal-ack-drops-stale"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    number_of_timers_nsr_down{YType::uint32, "number-of-timers-nsr-down"},
    number_of_times_nsr_disabled{YType::uint32, "number-of-times-nsr-disabled"},
    number_of_times_nsr_fail_over{YType::uint32, "number-of-times-nsr-fail-over"},
    number_of_times_nsr_up{YType::uint32, "number-of-times-nsr-up"},
    pcb{YType::uint64, "pcb"}
    	,
    snd_counters(std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters>())
{
    snd_counters->parent = this;

    yang_name = "statistic-session"; yang_parent_name = "statistic-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::~StatisticSession()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::has_data() const
{
    return id.is_set
	|| internal_ack_drops_immediate_match.is_set
	|| internal_ack_drops_initsync_first_phase.is_set
	|| internal_ack_drops_not_replicated.is_set
	|| internal_ack_drops_stale.is_set
	|| last_cleared_time.is_set
	|| number_of_timers_nsr_down.is_set
	|| number_of_times_nsr_disabled.is_set
	|| number_of_times_nsr_fail_over.is_set
	|| number_of_times_nsr_up.is_set
	|| pcb.is_set
	|| (snd_counters !=  nullptr && snd_counters->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(internal_ack_drops_immediate_match.yfilter)
	|| ydk::is_set(internal_ack_drops_initsync_first_phase.yfilter)
	|| ydk::is_set(internal_ack_drops_not_replicated.yfilter)
	|| ydk::is_set(internal_ack_drops_stale.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(number_of_timers_nsr_down.yfilter)
	|| ydk::is_set(number_of_times_nsr_disabled.yfilter)
	|| ydk::is_set(number_of_times_nsr_fail_over.yfilter)
	|| ydk::is_set(number_of_times_nsr_up.yfilter)
	|| ydk::is_set(pcb.yfilter)
	|| (snd_counters !=  nullptr && snd_counters->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-session" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (internal_ack_drops_immediate_match.is_set || is_set(internal_ack_drops_immediate_match.yfilter)) leaf_name_data.push_back(internal_ack_drops_immediate_match.get_name_leafdata());
    if (internal_ack_drops_initsync_first_phase.is_set || is_set(internal_ack_drops_initsync_first_phase.yfilter)) leaf_name_data.push_back(internal_ack_drops_initsync_first_phase.get_name_leafdata());
    if (internal_ack_drops_not_replicated.is_set || is_set(internal_ack_drops_not_replicated.yfilter)) leaf_name_data.push_back(internal_ack_drops_not_replicated.get_name_leafdata());
    if (internal_ack_drops_stale.is_set || is_set(internal_ack_drops_stale.yfilter)) leaf_name_data.push_back(internal_ack_drops_stale.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_timers_nsr_down.is_set || is_set(number_of_timers_nsr_down.yfilter)) leaf_name_data.push_back(number_of_timers_nsr_down.get_name_leafdata());
    if (number_of_times_nsr_disabled.is_set || is_set(number_of_times_nsr_disabled.yfilter)) leaf_name_data.push_back(number_of_times_nsr_disabled.get_name_leafdata());
    if (number_of_times_nsr_fail_over.is_set || is_set(number_of_times_nsr_fail_over.yfilter)) leaf_name_data.push_back(number_of_times_nsr_fail_over.get_name_leafdata());
    if (number_of_times_nsr_up.is_set || is_set(number_of_times_nsr_up.yfilter)) leaf_name_data.push_back(number_of_times_nsr_up.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.yfilter)) leaf_name_data.push_back(pcb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snd-counters")
    {
        if(snd_counters == nullptr)
        {
            snd_counters = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters>();
        }
        return snd_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snd_counters != nullptr)
    {
        children["snd-counters"] = snd_counters;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-immediate-match")
    {
        internal_ack_drops_immediate_match = value;
        internal_ack_drops_immediate_match.value_namespace = name_space;
        internal_ack_drops_immediate_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-initsync-first-phase")
    {
        internal_ack_drops_initsync_first_phase = value;
        internal_ack_drops_initsync_first_phase.value_namespace = name_space;
        internal_ack_drops_initsync_first_phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-not-replicated")
    {
        internal_ack_drops_not_replicated = value;
        internal_ack_drops_not_replicated.value_namespace = name_space;
        internal_ack_drops_not_replicated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-stale")
    {
        internal_ack_drops_stale = value;
        internal_ack_drops_stale.value_namespace = name_space;
        internal_ack_drops_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-timers-nsr-down")
    {
        number_of_timers_nsr_down = value;
        number_of_timers_nsr_down.value_namespace = name_space;
        number_of_timers_nsr_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-times-nsr-disabled")
    {
        number_of_times_nsr_disabled = value;
        number_of_times_nsr_disabled.value_namespace = name_space;
        number_of_times_nsr_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-times-nsr-fail-over")
    {
        number_of_times_nsr_fail_over = value;
        number_of_times_nsr_fail_over.value_namespace = name_space;
        number_of_times_nsr_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-times-nsr-up")
    {
        number_of_times_nsr_up = value;
        number_of_times_nsr_up.value_namespace = name_space;
        number_of_times_nsr_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcb")
    {
        pcb = value;
        pcb.value_namespace = name_space;
        pcb.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-immediate-match")
    {
        internal_ack_drops_immediate_match.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-initsync-first-phase")
    {
        internal_ack_drops_initsync_first_phase.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-not-replicated")
    {
        internal_ack_drops_not_replicated.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-stale")
    {
        internal_ack_drops_stale.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "number-of-timers-nsr-down")
    {
        number_of_timers_nsr_down.yfilter = yfilter;
    }
    if(value_path == "number-of-times-nsr-disabled")
    {
        number_of_times_nsr_disabled.yfilter = yfilter;
    }
    if(value_path == "number-of-times-nsr-fail-over")
    {
        number_of_times_nsr_fail_over.yfilter = yfilter;
    }
    if(value_path == "number-of-times-nsr-up")
    {
        number_of_times_nsr_up.yfilter = yfilter;
    }
    if(value_path == "pcb")
    {
        pcb.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snd-counters" || name == "id" || name == "internal-ack-drops-immediate-match" || name == "internal-ack-drops-initsync-first-phase" || name == "internal-ack-drops-not-replicated" || name == "internal-ack-drops-stale" || name == "last-cleared-time" || name == "number-of-timers-nsr-down" || name == "number-of-times-nsr-disabled" || name == "number-of-times-nsr-fail-over" || name == "number-of-times-nsr-up" || name == "pcb")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::SndCounters()
    :
    cleanup_rcv{YType::uint32, "cleanup-rcv"},
    cleanup_rcv_fail_buffer_trim{YType::uint32, "cleanup-rcv-fail-buffer-trim"},
    cleanup_rcv_success{YType::uint32, "cleanup-rcv-success"},
    cleanup_send{YType::uint32, "cleanup-send"},
    cleanup_send_drop{YType::uint32, "cleanup-send-drop"},
    data_xfer_rcv{YType::uint32, "data-xfer-rcv"},
    data_xfer_rcv_fail_buffer_trim{YType::uint32, "data-xfer-rcv-fail-buffer-trim"},
    data_xfer_rcv_fail_snd_una_out_of_sync{YType::uint32, "data-xfer-rcv-fail-snd-una-out-of-sync"},
    data_xfer_rcv_success{YType::uint32, "data-xfer-rcv-success"},
    data_xfer_send{YType::uint32, "data-xfer-send"},
    data_xfer_send_drop{YType::uint32, "data-xfer-send-drop"},
    data_xfer_send_iov_alloc{YType::uint32, "data-xfer-send-iov-alloc"},
    data_xfer_send_total{YType::uint64, "data-xfer-send-total"},
    nack_rcv{YType::uint32, "nack-rcv"},
    nack_rcv_fail_data_send{YType::uint32, "nack-rcv-fail-data-send"},
    nack_rcv_success{YType::uint32, "nack-rcv-success"},
    nack_send{YType::uint32, "nack-send"},
    nack_send_drop{YType::uint32, "nack-send-drop"},
    seg_instr_rcv{YType::uint32, "seg-instr-rcv"},
    seg_instr_rcv_fail_buffer_trim{YType::uint32, "seg-instr-rcv-fail-buffer-trim"},
    seg_instr_rcv_fail_tcp_process{YType::uint32, "seg-instr-rcv-fail-tcp-process"},
    seg_instr_rcv_success{YType::uint32, "seg-instr-rcv-success"},
    seg_instr_send{YType::uint32, "seg-instr-send"},
    seg_instr_send_drop{YType::uint32, "seg-instr-send-drop"},
    seg_instr_send_units{YType::uint32, "seg-instr-send-units"}
{

    yang_name = "snd-counters"; yang_parent_name = "statistic-session"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::~SndCounters()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::has_data() const
{
    return cleanup_rcv.is_set
	|| cleanup_rcv_fail_buffer_trim.is_set
	|| cleanup_rcv_success.is_set
	|| cleanup_send.is_set
	|| cleanup_send_drop.is_set
	|| data_xfer_rcv.is_set
	|| data_xfer_rcv_fail_buffer_trim.is_set
	|| data_xfer_rcv_fail_snd_una_out_of_sync.is_set
	|| data_xfer_rcv_success.is_set
	|| data_xfer_send.is_set
	|| data_xfer_send_drop.is_set
	|| data_xfer_send_iov_alloc.is_set
	|| data_xfer_send_total.is_set
	|| nack_rcv.is_set
	|| nack_rcv_fail_data_send.is_set
	|| nack_rcv_success.is_set
	|| nack_send.is_set
	|| nack_send_drop.is_set
	|| seg_instr_rcv.is_set
	|| seg_instr_rcv_fail_buffer_trim.is_set
	|| seg_instr_rcv_fail_tcp_process.is_set
	|| seg_instr_rcv_success.is_set
	|| seg_instr_send.is_set
	|| seg_instr_send_drop.is_set
	|| seg_instr_send_units.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanup_rcv.yfilter)
	|| ydk::is_set(cleanup_rcv_fail_buffer_trim.yfilter)
	|| ydk::is_set(cleanup_rcv_success.yfilter)
	|| ydk::is_set(cleanup_send.yfilter)
	|| ydk::is_set(cleanup_send_drop.yfilter)
	|| ydk::is_set(data_xfer_rcv.yfilter)
	|| ydk::is_set(data_xfer_rcv_fail_buffer_trim.yfilter)
	|| ydk::is_set(data_xfer_rcv_fail_snd_una_out_of_sync.yfilter)
	|| ydk::is_set(data_xfer_rcv_success.yfilter)
	|| ydk::is_set(data_xfer_send.yfilter)
	|| ydk::is_set(data_xfer_send_drop.yfilter)
	|| ydk::is_set(data_xfer_send_iov_alloc.yfilter)
	|| ydk::is_set(data_xfer_send_total.yfilter)
	|| ydk::is_set(nack_rcv.yfilter)
	|| ydk::is_set(nack_rcv_fail_data_send.yfilter)
	|| ydk::is_set(nack_rcv_success.yfilter)
	|| ydk::is_set(nack_send.yfilter)
	|| ydk::is_set(nack_send_drop.yfilter)
	|| ydk::is_set(seg_instr_rcv.yfilter)
	|| ydk::is_set(seg_instr_rcv_fail_buffer_trim.yfilter)
	|| ydk::is_set(seg_instr_rcv_fail_tcp_process.yfilter)
	|| ydk::is_set(seg_instr_rcv_success.yfilter)
	|| ydk::is_set(seg_instr_send.yfilter)
	|| ydk::is_set(seg_instr_send_drop.yfilter)
	|| ydk::is_set(seg_instr_send_units.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snd-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_rcv.is_set || is_set(cleanup_rcv.yfilter)) leaf_name_data.push_back(cleanup_rcv.get_name_leafdata());
    if (cleanup_rcv_fail_buffer_trim.is_set || is_set(cleanup_rcv_fail_buffer_trim.yfilter)) leaf_name_data.push_back(cleanup_rcv_fail_buffer_trim.get_name_leafdata());
    if (cleanup_rcv_success.is_set || is_set(cleanup_rcv_success.yfilter)) leaf_name_data.push_back(cleanup_rcv_success.get_name_leafdata());
    if (cleanup_send.is_set || is_set(cleanup_send.yfilter)) leaf_name_data.push_back(cleanup_send.get_name_leafdata());
    if (cleanup_send_drop.is_set || is_set(cleanup_send_drop.yfilter)) leaf_name_data.push_back(cleanup_send_drop.get_name_leafdata());
    if (data_xfer_rcv.is_set || is_set(data_xfer_rcv.yfilter)) leaf_name_data.push_back(data_xfer_rcv.get_name_leafdata());
    if (data_xfer_rcv_fail_buffer_trim.is_set || is_set(data_xfer_rcv_fail_buffer_trim.yfilter)) leaf_name_data.push_back(data_xfer_rcv_fail_buffer_trim.get_name_leafdata());
    if (data_xfer_rcv_fail_snd_una_out_of_sync.is_set || is_set(data_xfer_rcv_fail_snd_una_out_of_sync.yfilter)) leaf_name_data.push_back(data_xfer_rcv_fail_snd_una_out_of_sync.get_name_leafdata());
    if (data_xfer_rcv_success.is_set || is_set(data_xfer_rcv_success.yfilter)) leaf_name_data.push_back(data_xfer_rcv_success.get_name_leafdata());
    if (data_xfer_send.is_set || is_set(data_xfer_send.yfilter)) leaf_name_data.push_back(data_xfer_send.get_name_leafdata());
    if (data_xfer_send_drop.is_set || is_set(data_xfer_send_drop.yfilter)) leaf_name_data.push_back(data_xfer_send_drop.get_name_leafdata());
    if (data_xfer_send_iov_alloc.is_set || is_set(data_xfer_send_iov_alloc.yfilter)) leaf_name_data.push_back(data_xfer_send_iov_alloc.get_name_leafdata());
    if (data_xfer_send_total.is_set || is_set(data_xfer_send_total.yfilter)) leaf_name_data.push_back(data_xfer_send_total.get_name_leafdata());
    if (nack_rcv.is_set || is_set(nack_rcv.yfilter)) leaf_name_data.push_back(nack_rcv.get_name_leafdata());
    if (nack_rcv_fail_data_send.is_set || is_set(nack_rcv_fail_data_send.yfilter)) leaf_name_data.push_back(nack_rcv_fail_data_send.get_name_leafdata());
    if (nack_rcv_success.is_set || is_set(nack_rcv_success.yfilter)) leaf_name_data.push_back(nack_rcv_success.get_name_leafdata());
    if (nack_send.is_set || is_set(nack_send.yfilter)) leaf_name_data.push_back(nack_send.get_name_leafdata());
    if (nack_send_drop.is_set || is_set(nack_send_drop.yfilter)) leaf_name_data.push_back(nack_send_drop.get_name_leafdata());
    if (seg_instr_rcv.is_set || is_set(seg_instr_rcv.yfilter)) leaf_name_data.push_back(seg_instr_rcv.get_name_leafdata());
    if (seg_instr_rcv_fail_buffer_trim.is_set || is_set(seg_instr_rcv_fail_buffer_trim.yfilter)) leaf_name_data.push_back(seg_instr_rcv_fail_buffer_trim.get_name_leafdata());
    if (seg_instr_rcv_fail_tcp_process.is_set || is_set(seg_instr_rcv_fail_tcp_process.yfilter)) leaf_name_data.push_back(seg_instr_rcv_fail_tcp_process.get_name_leafdata());
    if (seg_instr_rcv_success.is_set || is_set(seg_instr_rcv_success.yfilter)) leaf_name_data.push_back(seg_instr_rcv_success.get_name_leafdata());
    if (seg_instr_send.is_set || is_set(seg_instr_send.yfilter)) leaf_name_data.push_back(seg_instr_send.get_name_leafdata());
    if (seg_instr_send_drop.is_set || is_set(seg_instr_send_drop.yfilter)) leaf_name_data.push_back(seg_instr_send_drop.get_name_leafdata());
    if (seg_instr_send_units.is_set || is_set(seg_instr_send_units.yfilter)) leaf_name_data.push_back(seg_instr_send_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanup-rcv")
    {
        cleanup_rcv = value;
        cleanup_rcv.value_namespace = name_space;
        cleanup_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-rcv-fail-buffer-trim")
    {
        cleanup_rcv_fail_buffer_trim = value;
        cleanup_rcv_fail_buffer_trim.value_namespace = name_space;
        cleanup_rcv_fail_buffer_trim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-rcv-success")
    {
        cleanup_rcv_success = value;
        cleanup_rcv_success.value_namespace = name_space;
        cleanup_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-send")
    {
        cleanup_send = value;
        cleanup_send.value_namespace = name_space;
        cleanup_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-send-drop")
    {
        cleanup_send_drop = value;
        cleanup_send_drop.value_namespace = name_space;
        cleanup_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv")
    {
        data_xfer_rcv = value;
        data_xfer_rcv.value_namespace = name_space;
        data_xfer_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-fail-buffer-trim")
    {
        data_xfer_rcv_fail_buffer_trim = value;
        data_xfer_rcv_fail_buffer_trim.value_namespace = name_space;
        data_xfer_rcv_fail_buffer_trim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-fail-snd-una-out-of-sync")
    {
        data_xfer_rcv_fail_snd_una_out_of_sync = value;
        data_xfer_rcv_fail_snd_una_out_of_sync.value_namespace = name_space;
        data_xfer_rcv_fail_snd_una_out_of_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-success")
    {
        data_xfer_rcv_success = value;
        data_xfer_rcv_success.value_namespace = name_space;
        data_xfer_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send")
    {
        data_xfer_send = value;
        data_xfer_send.value_namespace = name_space;
        data_xfer_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send-drop")
    {
        data_xfer_send_drop = value;
        data_xfer_send_drop.value_namespace = name_space;
        data_xfer_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send-iov-alloc")
    {
        data_xfer_send_iov_alloc = value;
        data_xfer_send_iov_alloc.value_namespace = name_space;
        data_xfer_send_iov_alloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send-total")
    {
        data_xfer_send_total = value;
        data_xfer_send_total.value_namespace = name_space;
        data_xfer_send_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv")
    {
        nack_rcv = value;
        nack_rcv.value_namespace = name_space;
        nack_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv-fail-data-send")
    {
        nack_rcv_fail_data_send = value;
        nack_rcv_fail_data_send.value_namespace = name_space;
        nack_rcv_fail_data_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv-success")
    {
        nack_rcv_success = value;
        nack_rcv_success.value_namespace = name_space;
        nack_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-send")
    {
        nack_send = value;
        nack_send.value_namespace = name_space;
        nack_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-send-drop")
    {
        nack_send_drop = value;
        nack_send_drop.value_namespace = name_space;
        nack_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv")
    {
        seg_instr_rcv = value;
        seg_instr_rcv.value_namespace = name_space;
        seg_instr_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-fail-buffer-trim")
    {
        seg_instr_rcv_fail_buffer_trim = value;
        seg_instr_rcv_fail_buffer_trim.value_namespace = name_space;
        seg_instr_rcv_fail_buffer_trim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-fail-tcp-process")
    {
        seg_instr_rcv_fail_tcp_process = value;
        seg_instr_rcv_fail_tcp_process.value_namespace = name_space;
        seg_instr_rcv_fail_tcp_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-success")
    {
        seg_instr_rcv_success = value;
        seg_instr_rcv_success.value_namespace = name_space;
        seg_instr_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-send")
    {
        seg_instr_send = value;
        seg_instr_send.value_namespace = name_space;
        seg_instr_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-send-drop")
    {
        seg_instr_send_drop = value;
        seg_instr_send_drop.value_namespace = name_space;
        seg_instr_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-send-units")
    {
        seg_instr_send_units = value;
        seg_instr_send_units.value_namespace = name_space;
        seg_instr_send_units.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanup-rcv")
    {
        cleanup_rcv.yfilter = yfilter;
    }
    if(value_path == "cleanup-rcv-fail-buffer-trim")
    {
        cleanup_rcv_fail_buffer_trim.yfilter = yfilter;
    }
    if(value_path == "cleanup-rcv-success")
    {
        cleanup_rcv_success.yfilter = yfilter;
    }
    if(value_path == "cleanup-send")
    {
        cleanup_send.yfilter = yfilter;
    }
    if(value_path == "cleanup-send-drop")
    {
        cleanup_send_drop.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv")
    {
        data_xfer_rcv.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-fail-buffer-trim")
    {
        data_xfer_rcv_fail_buffer_trim.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-fail-snd-una-out-of-sync")
    {
        data_xfer_rcv_fail_snd_una_out_of_sync.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-success")
    {
        data_xfer_rcv_success.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send")
    {
        data_xfer_send.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send-drop")
    {
        data_xfer_send_drop.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send-iov-alloc")
    {
        data_xfer_send_iov_alloc.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send-total")
    {
        data_xfer_send_total.yfilter = yfilter;
    }
    if(value_path == "nack-rcv")
    {
        nack_rcv.yfilter = yfilter;
    }
    if(value_path == "nack-rcv-fail-data-send")
    {
        nack_rcv_fail_data_send.yfilter = yfilter;
    }
    if(value_path == "nack-rcv-success")
    {
        nack_rcv_success.yfilter = yfilter;
    }
    if(value_path == "nack-send")
    {
        nack_send.yfilter = yfilter;
    }
    if(value_path == "nack-send-drop")
    {
        nack_send_drop.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv")
    {
        seg_instr_rcv.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-fail-buffer-trim")
    {
        seg_instr_rcv_fail_buffer_trim.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-fail-tcp-process")
    {
        seg_instr_rcv_fail_tcp_process.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-success")
    {
        seg_instr_rcv_success.yfilter = yfilter;
    }
    if(value_path == "seg-instr-send")
    {
        seg_instr_send.yfilter = yfilter;
    }
    if(value_path == "seg-instr-send-drop")
    {
        seg_instr_send_drop.yfilter = yfilter;
    }
    if(value_path == "seg-instr-send-units")
    {
        seg_instr_send_units.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup-rcv" || name == "cleanup-rcv-fail-buffer-trim" || name == "cleanup-rcv-success" || name == "cleanup-send" || name == "cleanup-send-drop" || name == "data-xfer-rcv" || name == "data-xfer-rcv-fail-buffer-trim" || name == "data-xfer-rcv-fail-snd-una-out-of-sync" || name == "data-xfer-rcv-success" || name == "data-xfer-send" || name == "data-xfer-send-drop" || name == "data-xfer-send-iov-alloc" || name == "data-xfer-send-total" || name == "nack-rcv" || name == "nack-rcv-fail-data-send" || name == "nack-rcv-success" || name == "nack-send" || name == "nack-send-drop" || name == "seg-instr-rcv" || name == "seg-instr-rcv-fail-buffer-trim" || name == "seg-instr-rcv-fail-tcp-process" || name == "seg-instr-rcv-success" || name == "seg-instr-send" || name == "seg-instr-send-drop" || name == "seg-instr-send-units")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSets()
{

    yang_name = "statistic-sets"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::~StatisticSets()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::has_data() const
{
    for (std::size_t index=0; index<statistic_set.size(); index++)
    {
        if(statistic_set[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::has_operation() const
{
    for (std::size_t index=0; index<statistic_set.size(); index++)
    {
        if(statistic_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic-set")
    {
        for(auto const & c : statistic_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet>();
        c->parent = this;
        statistic_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Statistics::StatisticSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic-set")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::StatisticSet()
    :
    id{YType::str, "id"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    number_of_attempted_init_sync{YType::uint32, "number-of-attempted-init-sync"},
    number_of_failed_init_sync{YType::uint32, "number-of-failed-init-sync"},
    number_of_failover{YType::uint32, "number-of-failover"},
    number_of_nsr_resets{YType::uint32, "number-of-nsr-resets"},
    number_of_succeeded_init_sync{YType::uint32, "number-of-succeeded-init-sync"},
    set_id{YType::uint32, "set-id"},
    sscb{YType::uint64, "sscb"}
{

    yang_name = "statistic-set"; yang_parent_name = "statistic-sets"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::~StatisticSet()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::has_data() const
{
    return id.is_set
	|| last_cleared_time.is_set
	|| number_of_attempted_init_sync.is_set
	|| number_of_failed_init_sync.is_set
	|| number_of_failover.is_set
	|| number_of_nsr_resets.is_set
	|| number_of_succeeded_init_sync.is_set
	|| set_id.is_set
	|| sscb.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(number_of_attempted_init_sync.yfilter)
	|| ydk::is_set(number_of_failed_init_sync.yfilter)
	|| ydk::is_set(number_of_failover.yfilter)
	|| ydk::is_set(number_of_nsr_resets.yfilter)
	|| ydk::is_set(number_of_succeeded_init_sync.yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(sscb.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-set" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_attempted_init_sync.is_set || is_set(number_of_attempted_init_sync.yfilter)) leaf_name_data.push_back(number_of_attempted_init_sync.get_name_leafdata());
    if (number_of_failed_init_sync.is_set || is_set(number_of_failed_init_sync.yfilter)) leaf_name_data.push_back(number_of_failed_init_sync.get_name_leafdata());
    if (number_of_failover.is_set || is_set(number_of_failover.yfilter)) leaf_name_data.push_back(number_of_failover.get_name_leafdata());
    if (number_of_nsr_resets.is_set || is_set(number_of_nsr_resets.yfilter)) leaf_name_data.push_back(number_of_nsr_resets.get_name_leafdata());
    if (number_of_succeeded_init_sync.is_set || is_set(number_of_succeeded_init_sync.yfilter)) leaf_name_data.push_back(number_of_succeeded_init_sync.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.yfilter)) leaf_name_data.push_back(sscb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-attempted-init-sync")
    {
        number_of_attempted_init_sync = value;
        number_of_attempted_init_sync.value_namespace = name_space;
        number_of_attempted_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-failed-init-sync")
    {
        number_of_failed_init_sync = value;
        number_of_failed_init_sync.value_namespace = name_space;
        number_of_failed_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-failover")
    {
        number_of_failover = value;
        number_of_failover.value_namespace = name_space;
        number_of_failover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nsr-resets")
    {
        number_of_nsr_resets = value;
        number_of_nsr_resets.value_namespace = name_space;
        number_of_nsr_resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-succeeded-init-sync")
    {
        number_of_succeeded_init_sync = value;
        number_of_succeeded_init_sync.value_namespace = name_space;
        number_of_succeeded_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sscb")
    {
        sscb = value;
        sscb.value_namespace = name_space;
        sscb.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "number-of-attempted-init-sync")
    {
        number_of_attempted_init_sync.yfilter = yfilter;
    }
    if(value_path == "number-of-failed-init-sync")
    {
        number_of_failed_init_sync.yfilter = yfilter;
    }
    if(value_path == "number-of-failover")
    {
        number_of_failover.yfilter = yfilter;
    }
    if(value_path == "number-of-nsr-resets")
    {
        number_of_nsr_resets.yfilter = yfilter;
    }
    if(value_path == "number-of-succeeded-init-sync")
    {
        number_of_succeeded_init_sync.yfilter = yfilter;
    }
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "sscb")
    {
        sscb.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "last-cleared-time" || name == "number-of-attempted-init-sync" || name == "number-of-failed-init-sync" || name == "number-of-failover" || name == "number-of-nsr-resets" || name == "number-of-succeeded-init-sync" || name == "set-id" || name == "sscb")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::Summary()
    :
    held_packet_drops{YType::uint32, "held-packet-drops"},
    internal_ack_drops_immediate_match{YType::uint32, "internal-ack-drops-immediate-match"},
    internal_ack_drops_initsync_first_phase{YType::uint32, "internal-ack-drops-initsync-first-phase"},
    internal_ack_drops_not_replicated{YType::uint32, "internal-ack-drops-not-replicated"},
    internal_ack_drops_stale{YType::uint32, "internal-ack-drops-stale"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    number_of_added_sessions{YType::uint32, "number-of-added-sessions"},
    number_of_attempted_init_sync{YType::uint32, "number-of-attempted-init-sync"},
    number_of_connected_clients{YType::uint32, "number-of-connected-clients"},
    number_of_created_session_sets{YType::uint32, "number-of-created-session-sets"},
    number_of_current_clients{YType::uint32, "number-of-current-clients"},
    number_of_current_session_sets{YType::uint32, "number-of-current-session-sets"},
    number_of_current_sessions{YType::uint32, "number-of-current-sessions"},
    number_of_deleted_sessions{YType::uint32, "number-of-deleted-sessions"},
    number_of_destroyed_session_sets{YType::uint32, "number-of-destroyed-session-sets"},
    number_of_disconnected_clients{YType::uint32, "number-of-disconnected-clients"},
    number_of_failed_init_sync{YType::uint32, "number-of-failed-init-sync"},
    number_of_held_but_dropped_internal_acks{YType::uint32, "number-of-held-but-dropped-internal-acks"},
    number_of_held_but_dropped_packets{YType::uint32, "number-of-held-but-dropped-packets"},
    number_of_held_internal_acks{YType::uint32, "number-of-held-internal-acks"},
    number_of_held_packets{YType::uint32, "number-of-held-packets"},
    number_of_internal_ack_drops_no_pcb{YType::uint32, "number-of-internal-ack-drops-no-pcb"},
    number_of_internal_ack_drops_no_scbdp{YType::uint32, "number-of-internal-ack-drops-no-scbdp"},
    number_of_partner_node{YType::uint32, "number-of-partner-node"},
    number_of_qad_receive_messages_accepts{YType::uint32, "number-of-qad-receive-messages-accepts"},
    number_of_qad_receive_messages_drops{YType::uint32, "number-of-qad-receive-messages-drops"},
    number_of_qad_receive_messages_unknowns{YType::uint32, "number-of-qad-receive-messages-unknowns"},
    number_of_qad_stale_receive_messages_drops{YType::uint32, "number-of-qad-stale-receive-messages-drops"},
    number_of_qad_transfer_message_drops{YType::uint32, "number-of-qad-transfer-message-drops"},
    number_of_qad_transfer_message_sent{YType::uint32, "number-of-qad-transfer-message-sent"},
    number_of_received_internal_acks{YType::uint32, "number-of-received-internal-acks"},
    number_of_sent_internal_acks{YType::uint32, "number-of-sent-internal-acks"},
    number_of_succeeded_init_sync{YType::uint32, "number-of-succeeded-init-sync"}
    	,
    audit_counters(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters>())
	,snd_counters(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters>())
{
    audit_counters->parent = this;
    snd_counters->parent = this;

    yang_name = "summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::~Summary()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::has_data() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_data())
            return true;
    }
    return held_packet_drops.is_set
	|| internal_ack_drops_immediate_match.is_set
	|| internal_ack_drops_initsync_first_phase.is_set
	|| internal_ack_drops_not_replicated.is_set
	|| internal_ack_drops_stale.is_set
	|| last_cleared_time.is_set
	|| number_of_added_sessions.is_set
	|| number_of_attempted_init_sync.is_set
	|| number_of_connected_clients.is_set
	|| number_of_created_session_sets.is_set
	|| number_of_current_clients.is_set
	|| number_of_current_session_sets.is_set
	|| number_of_current_sessions.is_set
	|| number_of_deleted_sessions.is_set
	|| number_of_destroyed_session_sets.is_set
	|| number_of_disconnected_clients.is_set
	|| number_of_failed_init_sync.is_set
	|| number_of_held_but_dropped_internal_acks.is_set
	|| number_of_held_but_dropped_packets.is_set
	|| number_of_held_internal_acks.is_set
	|| number_of_held_packets.is_set
	|| number_of_internal_ack_drops_no_pcb.is_set
	|| number_of_internal_ack_drops_no_scbdp.is_set
	|| number_of_partner_node.is_set
	|| number_of_qad_receive_messages_accepts.is_set
	|| number_of_qad_receive_messages_drops.is_set
	|| number_of_qad_receive_messages_unknowns.is_set
	|| number_of_qad_stale_receive_messages_drops.is_set
	|| number_of_qad_transfer_message_drops.is_set
	|| number_of_qad_transfer_message_sent.is_set
	|| number_of_received_internal_acks.is_set
	|| number_of_sent_internal_acks.is_set
	|| number_of_succeeded_init_sync.is_set
	|| (audit_counters !=  nullptr && audit_counters->has_data())
	|| (snd_counters !=  nullptr && snd_counters->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::Summary::has_operation() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(held_packet_drops.yfilter)
	|| ydk::is_set(internal_ack_drops_immediate_match.yfilter)
	|| ydk::is_set(internal_ack_drops_initsync_first_phase.yfilter)
	|| ydk::is_set(internal_ack_drops_not_replicated.yfilter)
	|| ydk::is_set(internal_ack_drops_stale.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(number_of_added_sessions.yfilter)
	|| ydk::is_set(number_of_attempted_init_sync.yfilter)
	|| ydk::is_set(number_of_connected_clients.yfilter)
	|| ydk::is_set(number_of_created_session_sets.yfilter)
	|| ydk::is_set(number_of_current_clients.yfilter)
	|| ydk::is_set(number_of_current_session_sets.yfilter)
	|| ydk::is_set(number_of_current_sessions.yfilter)
	|| ydk::is_set(number_of_deleted_sessions.yfilter)
	|| ydk::is_set(number_of_destroyed_session_sets.yfilter)
	|| ydk::is_set(number_of_disconnected_clients.yfilter)
	|| ydk::is_set(number_of_failed_init_sync.yfilter)
	|| ydk::is_set(number_of_held_but_dropped_internal_acks.yfilter)
	|| ydk::is_set(number_of_held_but_dropped_packets.yfilter)
	|| ydk::is_set(number_of_held_internal_acks.yfilter)
	|| ydk::is_set(number_of_held_packets.yfilter)
	|| ydk::is_set(number_of_internal_ack_drops_no_pcb.yfilter)
	|| ydk::is_set(number_of_internal_ack_drops_no_scbdp.yfilter)
	|| ydk::is_set(number_of_partner_node.yfilter)
	|| ydk::is_set(number_of_qad_receive_messages_accepts.yfilter)
	|| ydk::is_set(number_of_qad_receive_messages_drops.yfilter)
	|| ydk::is_set(number_of_qad_receive_messages_unknowns.yfilter)
	|| ydk::is_set(number_of_qad_stale_receive_messages_drops.yfilter)
	|| ydk::is_set(number_of_qad_transfer_message_drops.yfilter)
	|| ydk::is_set(number_of_qad_transfer_message_sent.yfilter)
	|| ydk::is_set(number_of_received_internal_acks.yfilter)
	|| ydk::is_set(number_of_sent_internal_acks.yfilter)
	|| ydk::is_set(number_of_succeeded_init_sync.yfilter)
	|| (audit_counters !=  nullptr && audit_counters->has_operation())
	|| (snd_counters !=  nullptr && snd_counters->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_packet_drops.is_set || is_set(held_packet_drops.yfilter)) leaf_name_data.push_back(held_packet_drops.get_name_leafdata());
    if (internal_ack_drops_immediate_match.is_set || is_set(internal_ack_drops_immediate_match.yfilter)) leaf_name_data.push_back(internal_ack_drops_immediate_match.get_name_leafdata());
    if (internal_ack_drops_initsync_first_phase.is_set || is_set(internal_ack_drops_initsync_first_phase.yfilter)) leaf_name_data.push_back(internal_ack_drops_initsync_first_phase.get_name_leafdata());
    if (internal_ack_drops_not_replicated.is_set || is_set(internal_ack_drops_not_replicated.yfilter)) leaf_name_data.push_back(internal_ack_drops_not_replicated.get_name_leafdata());
    if (internal_ack_drops_stale.is_set || is_set(internal_ack_drops_stale.yfilter)) leaf_name_data.push_back(internal_ack_drops_stale.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_added_sessions.is_set || is_set(number_of_added_sessions.yfilter)) leaf_name_data.push_back(number_of_added_sessions.get_name_leafdata());
    if (number_of_attempted_init_sync.is_set || is_set(number_of_attempted_init_sync.yfilter)) leaf_name_data.push_back(number_of_attempted_init_sync.get_name_leafdata());
    if (number_of_connected_clients.is_set || is_set(number_of_connected_clients.yfilter)) leaf_name_data.push_back(number_of_connected_clients.get_name_leafdata());
    if (number_of_created_session_sets.is_set || is_set(number_of_created_session_sets.yfilter)) leaf_name_data.push_back(number_of_created_session_sets.get_name_leafdata());
    if (number_of_current_clients.is_set || is_set(number_of_current_clients.yfilter)) leaf_name_data.push_back(number_of_current_clients.get_name_leafdata());
    if (number_of_current_session_sets.is_set || is_set(number_of_current_session_sets.yfilter)) leaf_name_data.push_back(number_of_current_session_sets.get_name_leafdata());
    if (number_of_current_sessions.is_set || is_set(number_of_current_sessions.yfilter)) leaf_name_data.push_back(number_of_current_sessions.get_name_leafdata());
    if (number_of_deleted_sessions.is_set || is_set(number_of_deleted_sessions.yfilter)) leaf_name_data.push_back(number_of_deleted_sessions.get_name_leafdata());
    if (number_of_destroyed_session_sets.is_set || is_set(number_of_destroyed_session_sets.yfilter)) leaf_name_data.push_back(number_of_destroyed_session_sets.get_name_leafdata());
    if (number_of_disconnected_clients.is_set || is_set(number_of_disconnected_clients.yfilter)) leaf_name_data.push_back(number_of_disconnected_clients.get_name_leafdata());
    if (number_of_failed_init_sync.is_set || is_set(number_of_failed_init_sync.yfilter)) leaf_name_data.push_back(number_of_failed_init_sync.get_name_leafdata());
    if (number_of_held_but_dropped_internal_acks.is_set || is_set(number_of_held_but_dropped_internal_acks.yfilter)) leaf_name_data.push_back(number_of_held_but_dropped_internal_acks.get_name_leafdata());
    if (number_of_held_but_dropped_packets.is_set || is_set(number_of_held_but_dropped_packets.yfilter)) leaf_name_data.push_back(number_of_held_but_dropped_packets.get_name_leafdata());
    if (number_of_held_internal_acks.is_set || is_set(number_of_held_internal_acks.yfilter)) leaf_name_data.push_back(number_of_held_internal_acks.get_name_leafdata());
    if (number_of_held_packets.is_set || is_set(number_of_held_packets.yfilter)) leaf_name_data.push_back(number_of_held_packets.get_name_leafdata());
    if (number_of_internal_ack_drops_no_pcb.is_set || is_set(number_of_internal_ack_drops_no_pcb.yfilter)) leaf_name_data.push_back(number_of_internal_ack_drops_no_pcb.get_name_leafdata());
    if (number_of_internal_ack_drops_no_scbdp.is_set || is_set(number_of_internal_ack_drops_no_scbdp.yfilter)) leaf_name_data.push_back(number_of_internal_ack_drops_no_scbdp.get_name_leafdata());
    if (number_of_partner_node.is_set || is_set(number_of_partner_node.yfilter)) leaf_name_data.push_back(number_of_partner_node.get_name_leafdata());
    if (number_of_qad_receive_messages_accepts.is_set || is_set(number_of_qad_receive_messages_accepts.yfilter)) leaf_name_data.push_back(number_of_qad_receive_messages_accepts.get_name_leafdata());
    if (number_of_qad_receive_messages_drops.is_set || is_set(number_of_qad_receive_messages_drops.yfilter)) leaf_name_data.push_back(number_of_qad_receive_messages_drops.get_name_leafdata());
    if (number_of_qad_receive_messages_unknowns.is_set || is_set(number_of_qad_receive_messages_unknowns.yfilter)) leaf_name_data.push_back(number_of_qad_receive_messages_unknowns.get_name_leafdata());
    if (number_of_qad_stale_receive_messages_drops.is_set || is_set(number_of_qad_stale_receive_messages_drops.yfilter)) leaf_name_data.push_back(number_of_qad_stale_receive_messages_drops.get_name_leafdata());
    if (number_of_qad_transfer_message_drops.is_set || is_set(number_of_qad_transfer_message_drops.yfilter)) leaf_name_data.push_back(number_of_qad_transfer_message_drops.get_name_leafdata());
    if (number_of_qad_transfer_message_sent.is_set || is_set(number_of_qad_transfer_message_sent.yfilter)) leaf_name_data.push_back(number_of_qad_transfer_message_sent.get_name_leafdata());
    if (number_of_received_internal_acks.is_set || is_set(number_of_received_internal_acks.yfilter)) leaf_name_data.push_back(number_of_received_internal_acks.get_name_leafdata());
    if (number_of_sent_internal_acks.is_set || is_set(number_of_sent_internal_acks.yfilter)) leaf_name_data.push_back(number_of_sent_internal_acks.get_name_leafdata());
    if (number_of_succeeded_init_sync.is_set || is_set(number_of_succeeded_init_sync.yfilter)) leaf_name_data.push_back(number_of_succeeded_init_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "audit-counters")
    {
        if(audit_counters == nullptr)
        {
            audit_counters = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters>();
        }
        return audit_counters;
    }

    if(child_yang_name == "notification-statistic")
    {
        for(auto const & c : notification_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic>();
        c->parent = this;
        notification_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "snd-counters")
    {
        if(snd_counters == nullptr)
        {
            snd_counters = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters>();
        }
        return snd_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(audit_counters != nullptr)
    {
        children["audit-counters"] = audit_counters;
    }

    for (auto const & c : notification_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(snd_counters != nullptr)
    {
        children["snd-counters"] = snd_counters;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-packet-drops")
    {
        held_packet_drops = value;
        held_packet_drops.value_namespace = name_space;
        held_packet_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-immediate-match")
    {
        internal_ack_drops_immediate_match = value;
        internal_ack_drops_immediate_match.value_namespace = name_space;
        internal_ack_drops_immediate_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-initsync-first-phase")
    {
        internal_ack_drops_initsync_first_phase = value;
        internal_ack_drops_initsync_first_phase.value_namespace = name_space;
        internal_ack_drops_initsync_first_phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-not-replicated")
    {
        internal_ack_drops_not_replicated = value;
        internal_ack_drops_not_replicated.value_namespace = name_space;
        internal_ack_drops_not_replicated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ack-drops-stale")
    {
        internal_ack_drops_stale = value;
        internal_ack_drops_stale.value_namespace = name_space;
        internal_ack_drops_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-added-sessions")
    {
        number_of_added_sessions = value;
        number_of_added_sessions.value_namespace = name_space;
        number_of_added_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-attempted-init-sync")
    {
        number_of_attempted_init_sync = value;
        number_of_attempted_init_sync.value_namespace = name_space;
        number_of_attempted_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-connected-clients")
    {
        number_of_connected_clients = value;
        number_of_connected_clients.value_namespace = name_space;
        number_of_connected_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-created-session-sets")
    {
        number_of_created_session_sets = value;
        number_of_created_session_sets.value_namespace = name_space;
        number_of_created_session_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-current-clients")
    {
        number_of_current_clients = value;
        number_of_current_clients.value_namespace = name_space;
        number_of_current_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-current-session-sets")
    {
        number_of_current_session_sets = value;
        number_of_current_session_sets.value_namespace = name_space;
        number_of_current_session_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-current-sessions")
    {
        number_of_current_sessions = value;
        number_of_current_sessions.value_namespace = name_space;
        number_of_current_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-deleted-sessions")
    {
        number_of_deleted_sessions = value;
        number_of_deleted_sessions.value_namespace = name_space;
        number_of_deleted_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-destroyed-session-sets")
    {
        number_of_destroyed_session_sets = value;
        number_of_destroyed_session_sets.value_namespace = name_space;
        number_of_destroyed_session_sets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-disconnected-clients")
    {
        number_of_disconnected_clients = value;
        number_of_disconnected_clients.value_namespace = name_space;
        number_of_disconnected_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-failed-init-sync")
    {
        number_of_failed_init_sync = value;
        number_of_failed_init_sync.value_namespace = name_space;
        number_of_failed_init_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-held-but-dropped-internal-acks")
    {
        number_of_held_but_dropped_internal_acks = value;
        number_of_held_but_dropped_internal_acks.value_namespace = name_space;
        number_of_held_but_dropped_internal_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-held-but-dropped-packets")
    {
        number_of_held_but_dropped_packets = value;
        number_of_held_but_dropped_packets.value_namespace = name_space;
        number_of_held_but_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-held-internal-acks")
    {
        number_of_held_internal_acks = value;
        number_of_held_internal_acks.value_namespace = name_space;
        number_of_held_internal_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-held-packets")
    {
        number_of_held_packets = value;
        number_of_held_packets.value_namespace = name_space;
        number_of_held_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-internal-ack-drops-no-pcb")
    {
        number_of_internal_ack_drops_no_pcb = value;
        number_of_internal_ack_drops_no_pcb.value_namespace = name_space;
        number_of_internal_ack_drops_no_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-internal-ack-drops-no-scbdp")
    {
        number_of_internal_ack_drops_no_scbdp = value;
        number_of_internal_ack_drops_no_scbdp.value_namespace = name_space;
        number_of_internal_ack_drops_no_scbdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-partner-node")
    {
        number_of_partner_node = value;
        number_of_partner_node.value_namespace = name_space;
        number_of_partner_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-qad-receive-messages-accepts")
    {
        number_of_qad_receive_messages_accepts = value;
        number_of_qad_receive_messages_accepts.value_namespace = name_space;
        number_of_qad_receive_messages_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-qad-receive-messages-drops")
    {
        number_of_qad_receive_messages_drops = value;
        number_of_qad_receive_messages_drops.value_namespace = name_space;
        number_of_qad_receive_messages_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-qad-receive-messages-unknowns")
    {
        number_of_qad_receive_messages_unknowns = value;
        number_of_qad_receive_messages_unknowns.value_namespace = name_space;
        number_of_qad_receive_messages_unknowns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-qad-stale-receive-messages-drops")
    {
        number_of_qad_stale_receive_messages_drops = value;
        number_of_qad_stale_receive_messages_drops.value_namespace = name_space;
        number_of_qad_stale_receive_messages_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-qad-transfer-message-drops")
    {
        number_of_qad_transfer_message_drops = value;
        number_of_qad_transfer_message_drops.value_namespace = name_space;
        number_of_qad_transfer_message_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-qad-transfer-message-sent")
    {
        number_of_qad_transfer_message_sent = value;
        number_of_qad_transfer_message_sent.value_namespace = name_space;
        number_of_qad_transfer_message_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-received-internal-acks")
    {
        number_of_received_internal_acks = value;
        number_of_received_internal_acks.value_namespace = name_space;
        number_of_received_internal_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-sent-internal-acks")
    {
        number_of_sent_internal_acks = value;
        number_of_sent_internal_acks.value_namespace = name_space;
        number_of_sent_internal_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-succeeded-init-sync")
    {
        number_of_succeeded_init_sync = value;
        number_of_succeeded_init_sync.value_namespace = name_space;
        number_of_succeeded_init_sync.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-packet-drops")
    {
        held_packet_drops.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-immediate-match")
    {
        internal_ack_drops_immediate_match.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-initsync-first-phase")
    {
        internal_ack_drops_initsync_first_phase.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-not-replicated")
    {
        internal_ack_drops_not_replicated.yfilter = yfilter;
    }
    if(value_path == "internal-ack-drops-stale")
    {
        internal_ack_drops_stale.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "number-of-added-sessions")
    {
        number_of_added_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-attempted-init-sync")
    {
        number_of_attempted_init_sync.yfilter = yfilter;
    }
    if(value_path == "number-of-connected-clients")
    {
        number_of_connected_clients.yfilter = yfilter;
    }
    if(value_path == "number-of-created-session-sets")
    {
        number_of_created_session_sets.yfilter = yfilter;
    }
    if(value_path == "number-of-current-clients")
    {
        number_of_current_clients.yfilter = yfilter;
    }
    if(value_path == "number-of-current-session-sets")
    {
        number_of_current_session_sets.yfilter = yfilter;
    }
    if(value_path == "number-of-current-sessions")
    {
        number_of_current_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-deleted-sessions")
    {
        number_of_deleted_sessions.yfilter = yfilter;
    }
    if(value_path == "number-of-destroyed-session-sets")
    {
        number_of_destroyed_session_sets.yfilter = yfilter;
    }
    if(value_path == "number-of-disconnected-clients")
    {
        number_of_disconnected_clients.yfilter = yfilter;
    }
    if(value_path == "number-of-failed-init-sync")
    {
        number_of_failed_init_sync.yfilter = yfilter;
    }
    if(value_path == "number-of-held-but-dropped-internal-acks")
    {
        number_of_held_but_dropped_internal_acks.yfilter = yfilter;
    }
    if(value_path == "number-of-held-but-dropped-packets")
    {
        number_of_held_but_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "number-of-held-internal-acks")
    {
        number_of_held_internal_acks.yfilter = yfilter;
    }
    if(value_path == "number-of-held-packets")
    {
        number_of_held_packets.yfilter = yfilter;
    }
    if(value_path == "number-of-internal-ack-drops-no-pcb")
    {
        number_of_internal_ack_drops_no_pcb.yfilter = yfilter;
    }
    if(value_path == "number-of-internal-ack-drops-no-scbdp")
    {
        number_of_internal_ack_drops_no_scbdp.yfilter = yfilter;
    }
    if(value_path == "number-of-partner-node")
    {
        number_of_partner_node.yfilter = yfilter;
    }
    if(value_path == "number-of-qad-receive-messages-accepts")
    {
        number_of_qad_receive_messages_accepts.yfilter = yfilter;
    }
    if(value_path == "number-of-qad-receive-messages-drops")
    {
        number_of_qad_receive_messages_drops.yfilter = yfilter;
    }
    if(value_path == "number-of-qad-receive-messages-unknowns")
    {
        number_of_qad_receive_messages_unknowns.yfilter = yfilter;
    }
    if(value_path == "number-of-qad-stale-receive-messages-drops")
    {
        number_of_qad_stale_receive_messages_drops.yfilter = yfilter;
    }
    if(value_path == "number-of-qad-transfer-message-drops")
    {
        number_of_qad_transfer_message_drops.yfilter = yfilter;
    }
    if(value_path == "number-of-qad-transfer-message-sent")
    {
        number_of_qad_transfer_message_sent.yfilter = yfilter;
    }
    if(value_path == "number-of-received-internal-acks")
    {
        number_of_received_internal_acks.yfilter = yfilter;
    }
    if(value_path == "number-of-sent-internal-acks")
    {
        number_of_sent_internal_acks.yfilter = yfilter;
    }
    if(value_path == "number-of-succeeded-init-sync")
    {
        number_of_succeeded_init_sync.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "audit-counters" || name == "notification-statistic" || name == "snd-counters" || name == "held-packet-drops" || name == "internal-ack-drops-immediate-match" || name == "internal-ack-drops-initsync-first-phase" || name == "internal-ack-drops-not-replicated" || name == "internal-ack-drops-stale" || name == "last-cleared-time" || name == "number-of-added-sessions" || name == "number-of-attempted-init-sync" || name == "number-of-connected-clients" || name == "number-of-created-session-sets" || name == "number-of-current-clients" || name == "number-of-current-session-sets" || name == "number-of-current-sessions" || name == "number-of-deleted-sessions" || name == "number-of-destroyed-session-sets" || name == "number-of-disconnected-clients" || name == "number-of-failed-init-sync" || name == "number-of-held-but-dropped-internal-acks" || name == "number-of-held-but-dropped-packets" || name == "number-of-held-internal-acks" || name == "number-of-held-packets" || name == "number-of-internal-ack-drops-no-pcb" || name == "number-of-internal-ack-drops-no-scbdp" || name == "number-of-partner-node" || name == "number-of-qad-receive-messages-accepts" || name == "number-of-qad-receive-messages-drops" || name == "number-of-qad-receive-messages-unknowns" || name == "number-of-qad-stale-receive-messages-drops" || name == "number-of-qad-transfer-message-drops" || name == "number-of-qad-transfer-message-sent" || name == "number-of-received-internal-acks" || name == "number-of-sent-internal-acks" || name == "number-of-succeeded-init-sync")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AuditCounters()
    :
    aggr_only(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly>())
	,common(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common>())
{
    aggr_only->parent = this;
    common->parent = this;

    yang_name = "audit-counters"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::~AuditCounters()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::has_data() const
{
    return (aggr_only !=  nullptr && aggr_only->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::has_operation() const
{
    return is_set(yfilter)
	|| (aggr_only !=  nullptr && aggr_only->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "audit-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggr-only")
    {
        if(aggr_only == nullptr)
        {
            aggr_only = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly>();
        }
        return aggr_only;
    }

    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggr_only != nullptr)
    {
        children["aggr-only"] = aggr_only;
    }

    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggr-only" || name == "common")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::AggrOnly()
    :
    mark_session_set_ack_rcv_drop_aggr{YType::uint32, "mark-session-set-ack-rcv-drop-aggr"},
    mark_session_set_nack_rcv_drop_aggr{YType::uint32, "mark-session-set-nack-rcv-drop-aggr"},
    mark_session_set_rcv_drop_aggr{YType::uint32, "mark-session-set-rcv-drop-aggr"},
    session_rcv_drop_aggr{YType::uint32, "session-rcv-drop-aggr"},
    session_set_response_rcv_drop_aggr{YType::uint32, "session-set-response-rcv-drop-aggr"},
    sweep_session_set_rcv_drop_aggr{YType::uint32, "sweep-session-set-rcv-drop-aggr"}
{

    yang_name = "aggr-only"; yang_parent_name = "audit-counters"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::~AggrOnly()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::has_data() const
{
    return mark_session_set_ack_rcv_drop_aggr.is_set
	|| mark_session_set_nack_rcv_drop_aggr.is_set
	|| mark_session_set_rcv_drop_aggr.is_set
	|| session_rcv_drop_aggr.is_set
	|| session_set_response_rcv_drop_aggr.is_set
	|| sweep_session_set_rcv_drop_aggr.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_session_set_ack_rcv_drop_aggr.yfilter)
	|| ydk::is_set(mark_session_set_nack_rcv_drop_aggr.yfilter)
	|| ydk::is_set(mark_session_set_rcv_drop_aggr.yfilter)
	|| ydk::is_set(session_rcv_drop_aggr.yfilter)
	|| ydk::is_set(session_set_response_rcv_drop_aggr.yfilter)
	|| ydk::is_set(sweep_session_set_rcv_drop_aggr.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_session_set_ack_rcv_drop_aggr.is_set || is_set(mark_session_set_ack_rcv_drop_aggr.yfilter)) leaf_name_data.push_back(mark_session_set_ack_rcv_drop_aggr.get_name_leafdata());
    if (mark_session_set_nack_rcv_drop_aggr.is_set || is_set(mark_session_set_nack_rcv_drop_aggr.yfilter)) leaf_name_data.push_back(mark_session_set_nack_rcv_drop_aggr.get_name_leafdata());
    if (mark_session_set_rcv_drop_aggr.is_set || is_set(mark_session_set_rcv_drop_aggr.yfilter)) leaf_name_data.push_back(mark_session_set_rcv_drop_aggr.get_name_leafdata());
    if (session_rcv_drop_aggr.is_set || is_set(session_rcv_drop_aggr.yfilter)) leaf_name_data.push_back(session_rcv_drop_aggr.get_name_leafdata());
    if (session_set_response_rcv_drop_aggr.is_set || is_set(session_set_response_rcv_drop_aggr.yfilter)) leaf_name_data.push_back(session_set_response_rcv_drop_aggr.get_name_leafdata());
    if (sweep_session_set_rcv_drop_aggr.is_set || is_set(sweep_session_set_rcv_drop_aggr.yfilter)) leaf_name_data.push_back(sweep_session_set_rcv_drop_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-session-set-ack-rcv-drop-aggr")
    {
        mark_session_set_ack_rcv_drop_aggr = value;
        mark_session_set_ack_rcv_drop_aggr.value_namespace = name_space;
        mark_session_set_ack_rcv_drop_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-nack-rcv-drop-aggr")
    {
        mark_session_set_nack_rcv_drop_aggr = value;
        mark_session_set_nack_rcv_drop_aggr.value_namespace = name_space;
        mark_session_set_nack_rcv_drop_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-rcv-drop-aggr")
    {
        mark_session_set_rcv_drop_aggr = value;
        mark_session_set_rcv_drop_aggr.value_namespace = name_space;
        mark_session_set_rcv_drop_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rcv-drop-aggr")
    {
        session_rcv_drop_aggr = value;
        session_rcv_drop_aggr.value_namespace = name_space;
        session_rcv_drop_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-set-response-rcv-drop-aggr")
    {
        session_set_response_rcv_drop_aggr = value;
        session_set_response_rcv_drop_aggr.value_namespace = name_space;
        session_set_response_rcv_drop_aggr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-session-set-rcv-drop-aggr")
    {
        sweep_session_set_rcv_drop_aggr = value;
        sweep_session_set_rcv_drop_aggr.value_namespace = name_space;
        sweep_session_set_rcv_drop_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-session-set-ack-rcv-drop-aggr")
    {
        mark_session_set_ack_rcv_drop_aggr.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-nack-rcv-drop-aggr")
    {
        mark_session_set_nack_rcv_drop_aggr.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-rcv-drop-aggr")
    {
        mark_session_set_rcv_drop_aggr.yfilter = yfilter;
    }
    if(value_path == "session-rcv-drop-aggr")
    {
        session_rcv_drop_aggr.yfilter = yfilter;
    }
    if(value_path == "session-set-response-rcv-drop-aggr")
    {
        session_set_response_rcv_drop_aggr.yfilter = yfilter;
    }
    if(value_path == "sweep-session-set-rcv-drop-aggr")
    {
        sweep_session_set_rcv_drop_aggr.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-session-set-ack-rcv-drop-aggr" || name == "mark-session-set-nack-rcv-drop-aggr" || name == "mark-session-set-rcv-drop-aggr" || name == "session-rcv-drop-aggr" || name == "session-set-response-rcv-drop-aggr" || name == "sweep-session-set-rcv-drop-aggr")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::Common()
    :
    abort{YType::uint32, "abort"},
    mark_session_set_ack_rcv{YType::uint32, "mark-session-set-ack-rcv"},
    mark_session_set_ack_rcv_drop{YType::uint32, "mark-session-set-ack-rcv-drop"},
    mark_session_set_ack_send{YType::uint32, "mark-session-set-ack-send"},
    mark_session_set_ack_send_drop{YType::uint32, "mark-session-set-ack-send-drop"},
    mark_session_set_nack_rcv{YType::uint32, "mark-session-set-nack-rcv"},
    mark_session_set_nack_rcv_drop{YType::uint32, "mark-session-set-nack-rcv-drop"},
    mark_session_set_nack_send{YType::uint32, "mark-session-set-nack-send"},
    mark_session_set_nack_send_drop{YType::uint32, "mark-session-set-nack-send-drop"},
    mark_session_set_rcv{YType::uint32, "mark-session-set-rcv"},
    mark_session_set_rcv_drop{YType::uint32, "mark-session-set-rcv-drop"},
    mark_session_set_send{YType::uint32, "mark-session-set-send"},
    mark_session_set_send_drop{YType::uint32, "mark-session-set-send-drop"},
    session_rcv{YType::uint32, "session-rcv"},
    session_rcv_drop{YType::uint32, "session-rcv-drop"},
    session_send{YType::uint32, "session-send"},
    session_send_drop{YType::uint32, "session-send-drop"},
    session_set_response_rcv{YType::uint32, "session-set-response-rcv"},
    session_set_response_rcv_drop{YType::uint32, "session-set-response-rcv-drop"},
    session_set_response_send{YType::uint32, "session-set-response-send"},
    session_set_response_send_drop{YType::uint32, "session-set-response-send-drop"},
    sweep_session_set_rcv{YType::uint32, "sweep-session-set-rcv"},
    sweep_session_set_rcv_drop{YType::uint32, "sweep-session-set-rcv-drop"},
    sweep_session_set_send{YType::uint32, "sweep-session-set-send"},
    sweep_session_set_send_drop{YType::uint32, "sweep-session-set-send-drop"}
{

    yang_name = "common"; yang_parent_name = "audit-counters"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::~Common()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::has_data() const
{
    return abort.is_set
	|| mark_session_set_ack_rcv.is_set
	|| mark_session_set_ack_rcv_drop.is_set
	|| mark_session_set_ack_send.is_set
	|| mark_session_set_ack_send_drop.is_set
	|| mark_session_set_nack_rcv.is_set
	|| mark_session_set_nack_rcv_drop.is_set
	|| mark_session_set_nack_send.is_set
	|| mark_session_set_nack_send_drop.is_set
	|| mark_session_set_rcv.is_set
	|| mark_session_set_rcv_drop.is_set
	|| mark_session_set_send.is_set
	|| mark_session_set_send_drop.is_set
	|| session_rcv.is_set
	|| session_rcv_drop.is_set
	|| session_send.is_set
	|| session_send_drop.is_set
	|| session_set_response_rcv.is_set
	|| session_set_response_rcv_drop.is_set
	|| session_set_response_send.is_set
	|| session_set_response_send_drop.is_set
	|| sweep_session_set_rcv.is_set
	|| sweep_session_set_rcv_drop.is_set
	|| sweep_session_set_send.is_set
	|| sweep_session_set_send_drop.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort.yfilter)
	|| ydk::is_set(mark_session_set_ack_rcv.yfilter)
	|| ydk::is_set(mark_session_set_ack_rcv_drop.yfilter)
	|| ydk::is_set(mark_session_set_ack_send.yfilter)
	|| ydk::is_set(mark_session_set_ack_send_drop.yfilter)
	|| ydk::is_set(mark_session_set_nack_rcv.yfilter)
	|| ydk::is_set(mark_session_set_nack_rcv_drop.yfilter)
	|| ydk::is_set(mark_session_set_nack_send.yfilter)
	|| ydk::is_set(mark_session_set_nack_send_drop.yfilter)
	|| ydk::is_set(mark_session_set_rcv.yfilter)
	|| ydk::is_set(mark_session_set_rcv_drop.yfilter)
	|| ydk::is_set(mark_session_set_send.yfilter)
	|| ydk::is_set(mark_session_set_send_drop.yfilter)
	|| ydk::is_set(session_rcv.yfilter)
	|| ydk::is_set(session_rcv_drop.yfilter)
	|| ydk::is_set(session_send.yfilter)
	|| ydk::is_set(session_send_drop.yfilter)
	|| ydk::is_set(session_set_response_rcv.yfilter)
	|| ydk::is_set(session_set_response_rcv_drop.yfilter)
	|| ydk::is_set(session_set_response_send.yfilter)
	|| ydk::is_set(session_set_response_send_drop.yfilter)
	|| ydk::is_set(sweep_session_set_rcv.yfilter)
	|| ydk::is_set(sweep_session_set_rcv_drop.yfilter)
	|| ydk::is_set(sweep_session_set_send.yfilter)
	|| ydk::is_set(sweep_session_set_send_drop.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort.is_set || is_set(abort.yfilter)) leaf_name_data.push_back(abort.get_name_leafdata());
    if (mark_session_set_ack_rcv.is_set || is_set(mark_session_set_ack_rcv.yfilter)) leaf_name_data.push_back(mark_session_set_ack_rcv.get_name_leafdata());
    if (mark_session_set_ack_rcv_drop.is_set || is_set(mark_session_set_ack_rcv_drop.yfilter)) leaf_name_data.push_back(mark_session_set_ack_rcv_drop.get_name_leafdata());
    if (mark_session_set_ack_send.is_set || is_set(mark_session_set_ack_send.yfilter)) leaf_name_data.push_back(mark_session_set_ack_send.get_name_leafdata());
    if (mark_session_set_ack_send_drop.is_set || is_set(mark_session_set_ack_send_drop.yfilter)) leaf_name_data.push_back(mark_session_set_ack_send_drop.get_name_leafdata());
    if (mark_session_set_nack_rcv.is_set || is_set(mark_session_set_nack_rcv.yfilter)) leaf_name_data.push_back(mark_session_set_nack_rcv.get_name_leafdata());
    if (mark_session_set_nack_rcv_drop.is_set || is_set(mark_session_set_nack_rcv_drop.yfilter)) leaf_name_data.push_back(mark_session_set_nack_rcv_drop.get_name_leafdata());
    if (mark_session_set_nack_send.is_set || is_set(mark_session_set_nack_send.yfilter)) leaf_name_data.push_back(mark_session_set_nack_send.get_name_leafdata());
    if (mark_session_set_nack_send_drop.is_set || is_set(mark_session_set_nack_send_drop.yfilter)) leaf_name_data.push_back(mark_session_set_nack_send_drop.get_name_leafdata());
    if (mark_session_set_rcv.is_set || is_set(mark_session_set_rcv.yfilter)) leaf_name_data.push_back(mark_session_set_rcv.get_name_leafdata());
    if (mark_session_set_rcv_drop.is_set || is_set(mark_session_set_rcv_drop.yfilter)) leaf_name_data.push_back(mark_session_set_rcv_drop.get_name_leafdata());
    if (mark_session_set_send.is_set || is_set(mark_session_set_send.yfilter)) leaf_name_data.push_back(mark_session_set_send.get_name_leafdata());
    if (mark_session_set_send_drop.is_set || is_set(mark_session_set_send_drop.yfilter)) leaf_name_data.push_back(mark_session_set_send_drop.get_name_leafdata());
    if (session_rcv.is_set || is_set(session_rcv.yfilter)) leaf_name_data.push_back(session_rcv.get_name_leafdata());
    if (session_rcv_drop.is_set || is_set(session_rcv_drop.yfilter)) leaf_name_data.push_back(session_rcv_drop.get_name_leafdata());
    if (session_send.is_set || is_set(session_send.yfilter)) leaf_name_data.push_back(session_send.get_name_leafdata());
    if (session_send_drop.is_set || is_set(session_send_drop.yfilter)) leaf_name_data.push_back(session_send_drop.get_name_leafdata());
    if (session_set_response_rcv.is_set || is_set(session_set_response_rcv.yfilter)) leaf_name_data.push_back(session_set_response_rcv.get_name_leafdata());
    if (session_set_response_rcv_drop.is_set || is_set(session_set_response_rcv_drop.yfilter)) leaf_name_data.push_back(session_set_response_rcv_drop.get_name_leafdata());
    if (session_set_response_send.is_set || is_set(session_set_response_send.yfilter)) leaf_name_data.push_back(session_set_response_send.get_name_leafdata());
    if (session_set_response_send_drop.is_set || is_set(session_set_response_send_drop.yfilter)) leaf_name_data.push_back(session_set_response_send_drop.get_name_leafdata());
    if (sweep_session_set_rcv.is_set || is_set(sweep_session_set_rcv.yfilter)) leaf_name_data.push_back(sweep_session_set_rcv.get_name_leafdata());
    if (sweep_session_set_rcv_drop.is_set || is_set(sweep_session_set_rcv_drop.yfilter)) leaf_name_data.push_back(sweep_session_set_rcv_drop.get_name_leafdata());
    if (sweep_session_set_send.is_set || is_set(sweep_session_set_send.yfilter)) leaf_name_data.push_back(sweep_session_set_send.get_name_leafdata());
    if (sweep_session_set_send_drop.is_set || is_set(sweep_session_set_send_drop.yfilter)) leaf_name_data.push_back(sweep_session_set_send_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort")
    {
        abort = value;
        abort.value_namespace = name_space;
        abort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-ack-rcv")
    {
        mark_session_set_ack_rcv = value;
        mark_session_set_ack_rcv.value_namespace = name_space;
        mark_session_set_ack_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-ack-rcv-drop")
    {
        mark_session_set_ack_rcv_drop = value;
        mark_session_set_ack_rcv_drop.value_namespace = name_space;
        mark_session_set_ack_rcv_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-ack-send")
    {
        mark_session_set_ack_send = value;
        mark_session_set_ack_send.value_namespace = name_space;
        mark_session_set_ack_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-ack-send-drop")
    {
        mark_session_set_ack_send_drop = value;
        mark_session_set_ack_send_drop.value_namespace = name_space;
        mark_session_set_ack_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-nack-rcv")
    {
        mark_session_set_nack_rcv = value;
        mark_session_set_nack_rcv.value_namespace = name_space;
        mark_session_set_nack_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-nack-rcv-drop")
    {
        mark_session_set_nack_rcv_drop = value;
        mark_session_set_nack_rcv_drop.value_namespace = name_space;
        mark_session_set_nack_rcv_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-nack-send")
    {
        mark_session_set_nack_send = value;
        mark_session_set_nack_send.value_namespace = name_space;
        mark_session_set_nack_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-nack-send-drop")
    {
        mark_session_set_nack_send_drop = value;
        mark_session_set_nack_send_drop.value_namespace = name_space;
        mark_session_set_nack_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-rcv")
    {
        mark_session_set_rcv = value;
        mark_session_set_rcv.value_namespace = name_space;
        mark_session_set_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-rcv-drop")
    {
        mark_session_set_rcv_drop = value;
        mark_session_set_rcv_drop.value_namespace = name_space;
        mark_session_set_rcv_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-send")
    {
        mark_session_set_send = value;
        mark_session_set_send.value_namespace = name_space;
        mark_session_set_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-session-set-send-drop")
    {
        mark_session_set_send_drop = value;
        mark_session_set_send_drop.value_namespace = name_space;
        mark_session_set_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rcv")
    {
        session_rcv = value;
        session_rcv.value_namespace = name_space;
        session_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rcv-drop")
    {
        session_rcv_drop = value;
        session_rcv_drop.value_namespace = name_space;
        session_rcv_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-send")
    {
        session_send = value;
        session_send.value_namespace = name_space;
        session_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-send-drop")
    {
        session_send_drop = value;
        session_send_drop.value_namespace = name_space;
        session_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-set-response-rcv")
    {
        session_set_response_rcv = value;
        session_set_response_rcv.value_namespace = name_space;
        session_set_response_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-set-response-rcv-drop")
    {
        session_set_response_rcv_drop = value;
        session_set_response_rcv_drop.value_namespace = name_space;
        session_set_response_rcv_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-set-response-send")
    {
        session_set_response_send = value;
        session_set_response_send.value_namespace = name_space;
        session_set_response_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-set-response-send-drop")
    {
        session_set_response_send_drop = value;
        session_set_response_send_drop.value_namespace = name_space;
        session_set_response_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-session-set-rcv")
    {
        sweep_session_set_rcv = value;
        sweep_session_set_rcv.value_namespace = name_space;
        sweep_session_set_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-session-set-rcv-drop")
    {
        sweep_session_set_rcv_drop = value;
        sweep_session_set_rcv_drop.value_namespace = name_space;
        sweep_session_set_rcv_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-session-set-send")
    {
        sweep_session_set_send = value;
        sweep_session_set_send.value_namespace = name_space;
        sweep_session_set_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-session-set-send-drop")
    {
        sweep_session_set_send_drop = value;
        sweep_session_set_send_drop.value_namespace = name_space;
        sweep_session_set_send_drop.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort")
    {
        abort.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-ack-rcv")
    {
        mark_session_set_ack_rcv.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-ack-rcv-drop")
    {
        mark_session_set_ack_rcv_drop.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-ack-send")
    {
        mark_session_set_ack_send.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-ack-send-drop")
    {
        mark_session_set_ack_send_drop.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-nack-rcv")
    {
        mark_session_set_nack_rcv.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-nack-rcv-drop")
    {
        mark_session_set_nack_rcv_drop.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-nack-send")
    {
        mark_session_set_nack_send.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-nack-send-drop")
    {
        mark_session_set_nack_send_drop.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-rcv")
    {
        mark_session_set_rcv.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-rcv-drop")
    {
        mark_session_set_rcv_drop.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-send")
    {
        mark_session_set_send.yfilter = yfilter;
    }
    if(value_path == "mark-session-set-send-drop")
    {
        mark_session_set_send_drop.yfilter = yfilter;
    }
    if(value_path == "session-rcv")
    {
        session_rcv.yfilter = yfilter;
    }
    if(value_path == "session-rcv-drop")
    {
        session_rcv_drop.yfilter = yfilter;
    }
    if(value_path == "session-send")
    {
        session_send.yfilter = yfilter;
    }
    if(value_path == "session-send-drop")
    {
        session_send_drop.yfilter = yfilter;
    }
    if(value_path == "session-set-response-rcv")
    {
        session_set_response_rcv.yfilter = yfilter;
    }
    if(value_path == "session-set-response-rcv-drop")
    {
        session_set_response_rcv_drop.yfilter = yfilter;
    }
    if(value_path == "session-set-response-send")
    {
        session_set_response_send.yfilter = yfilter;
    }
    if(value_path == "session-set-response-send-drop")
    {
        session_set_response_send_drop.yfilter = yfilter;
    }
    if(value_path == "sweep-session-set-rcv")
    {
        sweep_session_set_rcv.yfilter = yfilter;
    }
    if(value_path == "sweep-session-set-rcv-drop")
    {
        sweep_session_set_rcv_drop.yfilter = yfilter;
    }
    if(value_path == "sweep-session-set-send")
    {
        sweep_session_set_send.yfilter = yfilter;
    }
    if(value_path == "sweep-session-set-send-drop")
    {
        sweep_session_set_send_drop.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort" || name == "mark-session-set-ack-rcv" || name == "mark-session-set-ack-rcv-drop" || name == "mark-session-set-ack-send" || name == "mark-session-set-ack-send-drop" || name == "mark-session-set-nack-rcv" || name == "mark-session-set-nack-rcv-drop" || name == "mark-session-set-nack-send" || name == "mark-session-set-nack-send-drop" || name == "mark-session-set-rcv" || name == "mark-session-set-rcv-drop" || name == "mark-session-set-send" || name == "mark-session-set-send-drop" || name == "session-rcv" || name == "session-rcv-drop" || name == "session-send" || name == "session-send-drop" || name == "session-set-response-rcv" || name == "session-set-response-rcv-drop" || name == "session-set-response-send" || name == "session-set-response-send-drop" || name == "sweep-session-set-rcv" || name == "sweep-session-set-rcv-drop" || name == "sweep-session-set-send" || name == "sweep-session-set-send-drop")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::NotificationStatistic()
    :
    delivered_count{YType::uint32, "delivered-count"},
    dropped_count{YType::uint32, "dropped-count"},
    failed_count{YType::uint32, "failed-count"},
    queued_count{YType::uint32, "queued-count"}
{

    yang_name = "notification-statistic"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::~NotificationStatistic()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::has_data() const
{
    return delivered_count.is_set
	|| dropped_count.is_set
	|| failed_count.is_set
	|| queued_count.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delivered_count.yfilter)
	|| ydk::is_set(dropped_count.yfilter)
	|| ydk::is_set(failed_count.yfilter)
	|| ydk::is_set(queued_count.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delivered_count.is_set || is_set(delivered_count.yfilter)) leaf_name_data.push_back(delivered_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.yfilter)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (failed_count.is_set || is_set(failed_count.yfilter)) leaf_name_data.push_back(failed_count.get_name_leafdata());
    if (queued_count.is_set || is_set(queued_count.yfilter)) leaf_name_data.push_back(queued_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delivered-count")
    {
        delivered_count = value;
        delivered_count.value_namespace = name_space;
        delivered_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
        dropped_count.value_namespace = name_space;
        dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-count")
    {
        failed_count = value;
        failed_count.value_namespace = name_space;
        failed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queued-count")
    {
        queued_count = value;
        queued_count.value_namespace = name_space;
        queued_count.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delivered-count")
    {
        delivered_count.yfilter = yfilter;
    }
    if(value_path == "dropped-count")
    {
        dropped_count.yfilter = yfilter;
    }
    if(value_path == "failed-count")
    {
        failed_count.yfilter = yfilter;
    }
    if(value_path == "queued-count")
    {
        queued_count.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delivered-count" || name == "dropped-count" || name == "failed-count" || name == "queued-count")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::SndCounters()
    :
    aggr_only(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly>())
	,common(std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common>())
{
    aggr_only->parent = this;
    common->parent = this;

    yang_name = "snd-counters"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::~SndCounters()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::has_data() const
{
    return (aggr_only !=  nullptr && aggr_only->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::has_operation() const
{
    return is_set(yfilter)
	|| (aggr_only !=  nullptr && aggr_only->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snd-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggr-only")
    {
        if(aggr_only == nullptr)
        {
            aggr_only = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly>();
        }
        return aggr_only;
    }

    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggr_only != nullptr)
    {
        children["aggr-only"] = aggr_only;
    }

    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggr-only" || name == "common")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::AggrOnly()
    :
    cleanup_rcv_drop_no_pcb{YType::uint32, "cleanup-rcv-drop-no-pcb"},
    cleanup_rcv_drop_no_scb_dp{YType::uint32, "cleanup-rcv-drop-no-scb-dp"},
    data_xfer_rcv_drop_no_pcb{YType::uint32, "data-xfer-rcv-drop-no-pcb"},
    data_xfer_rcv_drop_no_scb_dp{YType::uint32, "data-xfer-rcv-drop-no-scb-dp"},
    nack_rcv_drop_no_pcb{YType::uint32, "nack-rcv-drop-no-pcb"},
    nack_rcv_drop_no_scb_dp{YType::uint32, "nack-rcv-drop-no-scb-dp"},
    seg_instr_rcv_drop_no_pcb{YType::uint32, "seg-instr-rcv-drop-no-pcb"},
    seg_instr_rcv_drop_no_scb_dp{YType::uint32, "seg-instr-rcv-drop-no-scb-dp"}
{

    yang_name = "aggr-only"; yang_parent_name = "snd-counters"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::~AggrOnly()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::has_data() const
{
    return cleanup_rcv_drop_no_pcb.is_set
	|| cleanup_rcv_drop_no_scb_dp.is_set
	|| data_xfer_rcv_drop_no_pcb.is_set
	|| data_xfer_rcv_drop_no_scb_dp.is_set
	|| nack_rcv_drop_no_pcb.is_set
	|| nack_rcv_drop_no_scb_dp.is_set
	|| seg_instr_rcv_drop_no_pcb.is_set
	|| seg_instr_rcv_drop_no_scb_dp.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanup_rcv_drop_no_pcb.yfilter)
	|| ydk::is_set(cleanup_rcv_drop_no_scb_dp.yfilter)
	|| ydk::is_set(data_xfer_rcv_drop_no_pcb.yfilter)
	|| ydk::is_set(data_xfer_rcv_drop_no_scb_dp.yfilter)
	|| ydk::is_set(nack_rcv_drop_no_pcb.yfilter)
	|| ydk::is_set(nack_rcv_drop_no_scb_dp.yfilter)
	|| ydk::is_set(seg_instr_rcv_drop_no_pcb.yfilter)
	|| ydk::is_set(seg_instr_rcv_drop_no_scb_dp.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_rcv_drop_no_pcb.is_set || is_set(cleanup_rcv_drop_no_pcb.yfilter)) leaf_name_data.push_back(cleanup_rcv_drop_no_pcb.get_name_leafdata());
    if (cleanup_rcv_drop_no_scb_dp.is_set || is_set(cleanup_rcv_drop_no_scb_dp.yfilter)) leaf_name_data.push_back(cleanup_rcv_drop_no_scb_dp.get_name_leafdata());
    if (data_xfer_rcv_drop_no_pcb.is_set || is_set(data_xfer_rcv_drop_no_pcb.yfilter)) leaf_name_data.push_back(data_xfer_rcv_drop_no_pcb.get_name_leafdata());
    if (data_xfer_rcv_drop_no_scb_dp.is_set || is_set(data_xfer_rcv_drop_no_scb_dp.yfilter)) leaf_name_data.push_back(data_xfer_rcv_drop_no_scb_dp.get_name_leafdata());
    if (nack_rcv_drop_no_pcb.is_set || is_set(nack_rcv_drop_no_pcb.yfilter)) leaf_name_data.push_back(nack_rcv_drop_no_pcb.get_name_leafdata());
    if (nack_rcv_drop_no_scb_dp.is_set || is_set(nack_rcv_drop_no_scb_dp.yfilter)) leaf_name_data.push_back(nack_rcv_drop_no_scb_dp.get_name_leafdata());
    if (seg_instr_rcv_drop_no_pcb.is_set || is_set(seg_instr_rcv_drop_no_pcb.yfilter)) leaf_name_data.push_back(seg_instr_rcv_drop_no_pcb.get_name_leafdata());
    if (seg_instr_rcv_drop_no_scb_dp.is_set || is_set(seg_instr_rcv_drop_no_scb_dp.yfilter)) leaf_name_data.push_back(seg_instr_rcv_drop_no_scb_dp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanup-rcv-drop-no-pcb")
    {
        cleanup_rcv_drop_no_pcb = value;
        cleanup_rcv_drop_no_pcb.value_namespace = name_space;
        cleanup_rcv_drop_no_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-rcv-drop-no-scb-dp")
    {
        cleanup_rcv_drop_no_scb_dp = value;
        cleanup_rcv_drop_no_scb_dp.value_namespace = name_space;
        cleanup_rcv_drop_no_scb_dp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-drop-no-pcb")
    {
        data_xfer_rcv_drop_no_pcb = value;
        data_xfer_rcv_drop_no_pcb.value_namespace = name_space;
        data_xfer_rcv_drop_no_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-drop-no-scb-dp")
    {
        data_xfer_rcv_drop_no_scb_dp = value;
        data_xfer_rcv_drop_no_scb_dp.value_namespace = name_space;
        data_xfer_rcv_drop_no_scb_dp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv-drop-no-pcb")
    {
        nack_rcv_drop_no_pcb = value;
        nack_rcv_drop_no_pcb.value_namespace = name_space;
        nack_rcv_drop_no_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv-drop-no-scb-dp")
    {
        nack_rcv_drop_no_scb_dp = value;
        nack_rcv_drop_no_scb_dp.value_namespace = name_space;
        nack_rcv_drop_no_scb_dp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-drop-no-pcb")
    {
        seg_instr_rcv_drop_no_pcb = value;
        seg_instr_rcv_drop_no_pcb.value_namespace = name_space;
        seg_instr_rcv_drop_no_pcb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-drop-no-scb-dp")
    {
        seg_instr_rcv_drop_no_scb_dp = value;
        seg_instr_rcv_drop_no_scb_dp.value_namespace = name_space;
        seg_instr_rcv_drop_no_scb_dp.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanup-rcv-drop-no-pcb")
    {
        cleanup_rcv_drop_no_pcb.yfilter = yfilter;
    }
    if(value_path == "cleanup-rcv-drop-no-scb-dp")
    {
        cleanup_rcv_drop_no_scb_dp.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-drop-no-pcb")
    {
        data_xfer_rcv_drop_no_pcb.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-drop-no-scb-dp")
    {
        data_xfer_rcv_drop_no_scb_dp.yfilter = yfilter;
    }
    if(value_path == "nack-rcv-drop-no-pcb")
    {
        nack_rcv_drop_no_pcb.yfilter = yfilter;
    }
    if(value_path == "nack-rcv-drop-no-scb-dp")
    {
        nack_rcv_drop_no_scb_dp.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-drop-no-pcb")
    {
        seg_instr_rcv_drop_no_pcb.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-drop-no-scb-dp")
    {
        seg_instr_rcv_drop_no_scb_dp.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup-rcv-drop-no-pcb" || name == "cleanup-rcv-drop-no-scb-dp" || name == "data-xfer-rcv-drop-no-pcb" || name == "data-xfer-rcv-drop-no-scb-dp" || name == "nack-rcv-drop-no-pcb" || name == "nack-rcv-drop-no-scb-dp" || name == "seg-instr-rcv-drop-no-pcb" || name == "seg-instr-rcv-drop-no-scb-dp")
        return true;
    return false;
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::Common()
    :
    cleanup_rcv{YType::uint32, "cleanup-rcv"},
    cleanup_rcv_fail_buffer_trim{YType::uint32, "cleanup-rcv-fail-buffer-trim"},
    cleanup_rcv_success{YType::uint32, "cleanup-rcv-success"},
    cleanup_send{YType::uint32, "cleanup-send"},
    cleanup_send_drop{YType::uint32, "cleanup-send-drop"},
    data_xfer_rcv{YType::uint32, "data-xfer-rcv"},
    data_xfer_rcv_fail_buffer_trim{YType::uint32, "data-xfer-rcv-fail-buffer-trim"},
    data_xfer_rcv_fail_snd_una_out_of_sync{YType::uint32, "data-xfer-rcv-fail-snd-una-out-of-sync"},
    data_xfer_rcv_success{YType::uint32, "data-xfer-rcv-success"},
    data_xfer_send{YType::uint32, "data-xfer-send"},
    data_xfer_send_drop{YType::uint32, "data-xfer-send-drop"},
    data_xfer_send_iov_alloc{YType::uint32, "data-xfer-send-iov-alloc"},
    data_xfer_send_total{YType::uint64, "data-xfer-send-total"},
    nack_rcv{YType::uint32, "nack-rcv"},
    nack_rcv_fail_data_send{YType::uint32, "nack-rcv-fail-data-send"},
    nack_rcv_success{YType::uint32, "nack-rcv-success"},
    nack_send{YType::uint32, "nack-send"},
    nack_send_drop{YType::uint32, "nack-send-drop"},
    seg_instr_rcv{YType::uint32, "seg-instr-rcv"},
    seg_instr_rcv_fail_buffer_trim{YType::uint32, "seg-instr-rcv-fail-buffer-trim"},
    seg_instr_rcv_fail_tcp_process{YType::uint32, "seg-instr-rcv-fail-tcp-process"},
    seg_instr_rcv_success{YType::uint32, "seg-instr-rcv-success"},
    seg_instr_send{YType::uint32, "seg-instr-send"},
    seg_instr_send_drop{YType::uint32, "seg-instr-send-drop"},
    seg_instr_send_units{YType::uint32, "seg-instr-send-units"}
{

    yang_name = "common"; yang_parent_name = "snd-counters"; is_top_level_class = false; has_list_ancestor = true;
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::~Common()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::has_data() const
{
    return cleanup_rcv.is_set
	|| cleanup_rcv_fail_buffer_trim.is_set
	|| cleanup_rcv_success.is_set
	|| cleanup_send.is_set
	|| cleanup_send_drop.is_set
	|| data_xfer_rcv.is_set
	|| data_xfer_rcv_fail_buffer_trim.is_set
	|| data_xfer_rcv_fail_snd_una_out_of_sync.is_set
	|| data_xfer_rcv_success.is_set
	|| data_xfer_send.is_set
	|| data_xfer_send_drop.is_set
	|| data_xfer_send_iov_alloc.is_set
	|| data_xfer_send_total.is_set
	|| nack_rcv.is_set
	|| nack_rcv_fail_data_send.is_set
	|| nack_rcv_success.is_set
	|| nack_send.is_set
	|| nack_send_drop.is_set
	|| seg_instr_rcv.is_set
	|| seg_instr_rcv_fail_buffer_trim.is_set
	|| seg_instr_rcv_fail_tcp_process.is_set
	|| seg_instr_rcv_success.is_set
	|| seg_instr_send.is_set
	|| seg_instr_send_drop.is_set
	|| seg_instr_send_units.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cleanup_rcv.yfilter)
	|| ydk::is_set(cleanup_rcv_fail_buffer_trim.yfilter)
	|| ydk::is_set(cleanup_rcv_success.yfilter)
	|| ydk::is_set(cleanup_send.yfilter)
	|| ydk::is_set(cleanup_send_drop.yfilter)
	|| ydk::is_set(data_xfer_rcv.yfilter)
	|| ydk::is_set(data_xfer_rcv_fail_buffer_trim.yfilter)
	|| ydk::is_set(data_xfer_rcv_fail_snd_una_out_of_sync.yfilter)
	|| ydk::is_set(data_xfer_rcv_success.yfilter)
	|| ydk::is_set(data_xfer_send.yfilter)
	|| ydk::is_set(data_xfer_send_drop.yfilter)
	|| ydk::is_set(data_xfer_send_iov_alloc.yfilter)
	|| ydk::is_set(data_xfer_send_total.yfilter)
	|| ydk::is_set(nack_rcv.yfilter)
	|| ydk::is_set(nack_rcv_fail_data_send.yfilter)
	|| ydk::is_set(nack_rcv_success.yfilter)
	|| ydk::is_set(nack_send.yfilter)
	|| ydk::is_set(nack_send_drop.yfilter)
	|| ydk::is_set(seg_instr_rcv.yfilter)
	|| ydk::is_set(seg_instr_rcv_fail_buffer_trim.yfilter)
	|| ydk::is_set(seg_instr_rcv_fail_tcp_process.yfilter)
	|| ydk::is_set(seg_instr_rcv_success.yfilter)
	|| ydk::is_set(seg_instr_send.yfilter)
	|| ydk::is_set(seg_instr_send_drop.yfilter)
	|| ydk::is_set(seg_instr_send_units.yfilter);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup_rcv.is_set || is_set(cleanup_rcv.yfilter)) leaf_name_data.push_back(cleanup_rcv.get_name_leafdata());
    if (cleanup_rcv_fail_buffer_trim.is_set || is_set(cleanup_rcv_fail_buffer_trim.yfilter)) leaf_name_data.push_back(cleanup_rcv_fail_buffer_trim.get_name_leafdata());
    if (cleanup_rcv_success.is_set || is_set(cleanup_rcv_success.yfilter)) leaf_name_data.push_back(cleanup_rcv_success.get_name_leafdata());
    if (cleanup_send.is_set || is_set(cleanup_send.yfilter)) leaf_name_data.push_back(cleanup_send.get_name_leafdata());
    if (cleanup_send_drop.is_set || is_set(cleanup_send_drop.yfilter)) leaf_name_data.push_back(cleanup_send_drop.get_name_leafdata());
    if (data_xfer_rcv.is_set || is_set(data_xfer_rcv.yfilter)) leaf_name_data.push_back(data_xfer_rcv.get_name_leafdata());
    if (data_xfer_rcv_fail_buffer_trim.is_set || is_set(data_xfer_rcv_fail_buffer_trim.yfilter)) leaf_name_data.push_back(data_xfer_rcv_fail_buffer_trim.get_name_leafdata());
    if (data_xfer_rcv_fail_snd_una_out_of_sync.is_set || is_set(data_xfer_rcv_fail_snd_una_out_of_sync.yfilter)) leaf_name_data.push_back(data_xfer_rcv_fail_snd_una_out_of_sync.get_name_leafdata());
    if (data_xfer_rcv_success.is_set || is_set(data_xfer_rcv_success.yfilter)) leaf_name_data.push_back(data_xfer_rcv_success.get_name_leafdata());
    if (data_xfer_send.is_set || is_set(data_xfer_send.yfilter)) leaf_name_data.push_back(data_xfer_send.get_name_leafdata());
    if (data_xfer_send_drop.is_set || is_set(data_xfer_send_drop.yfilter)) leaf_name_data.push_back(data_xfer_send_drop.get_name_leafdata());
    if (data_xfer_send_iov_alloc.is_set || is_set(data_xfer_send_iov_alloc.yfilter)) leaf_name_data.push_back(data_xfer_send_iov_alloc.get_name_leafdata());
    if (data_xfer_send_total.is_set || is_set(data_xfer_send_total.yfilter)) leaf_name_data.push_back(data_xfer_send_total.get_name_leafdata());
    if (nack_rcv.is_set || is_set(nack_rcv.yfilter)) leaf_name_data.push_back(nack_rcv.get_name_leafdata());
    if (nack_rcv_fail_data_send.is_set || is_set(nack_rcv_fail_data_send.yfilter)) leaf_name_data.push_back(nack_rcv_fail_data_send.get_name_leafdata());
    if (nack_rcv_success.is_set || is_set(nack_rcv_success.yfilter)) leaf_name_data.push_back(nack_rcv_success.get_name_leafdata());
    if (nack_send.is_set || is_set(nack_send.yfilter)) leaf_name_data.push_back(nack_send.get_name_leafdata());
    if (nack_send_drop.is_set || is_set(nack_send_drop.yfilter)) leaf_name_data.push_back(nack_send_drop.get_name_leafdata());
    if (seg_instr_rcv.is_set || is_set(seg_instr_rcv.yfilter)) leaf_name_data.push_back(seg_instr_rcv.get_name_leafdata());
    if (seg_instr_rcv_fail_buffer_trim.is_set || is_set(seg_instr_rcv_fail_buffer_trim.yfilter)) leaf_name_data.push_back(seg_instr_rcv_fail_buffer_trim.get_name_leafdata());
    if (seg_instr_rcv_fail_tcp_process.is_set || is_set(seg_instr_rcv_fail_tcp_process.yfilter)) leaf_name_data.push_back(seg_instr_rcv_fail_tcp_process.get_name_leafdata());
    if (seg_instr_rcv_success.is_set || is_set(seg_instr_rcv_success.yfilter)) leaf_name_data.push_back(seg_instr_rcv_success.get_name_leafdata());
    if (seg_instr_send.is_set || is_set(seg_instr_send.yfilter)) leaf_name_data.push_back(seg_instr_send.get_name_leafdata());
    if (seg_instr_send_drop.is_set || is_set(seg_instr_send_drop.yfilter)) leaf_name_data.push_back(seg_instr_send_drop.get_name_leafdata());
    if (seg_instr_send_units.is_set || is_set(seg_instr_send_units.yfilter)) leaf_name_data.push_back(seg_instr_send_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cleanup-rcv")
    {
        cleanup_rcv = value;
        cleanup_rcv.value_namespace = name_space;
        cleanup_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-rcv-fail-buffer-trim")
    {
        cleanup_rcv_fail_buffer_trim = value;
        cleanup_rcv_fail_buffer_trim.value_namespace = name_space;
        cleanup_rcv_fail_buffer_trim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-rcv-success")
    {
        cleanup_rcv_success = value;
        cleanup_rcv_success.value_namespace = name_space;
        cleanup_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-send")
    {
        cleanup_send = value;
        cleanup_send.value_namespace = name_space;
        cleanup_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-send-drop")
    {
        cleanup_send_drop = value;
        cleanup_send_drop.value_namespace = name_space;
        cleanup_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv")
    {
        data_xfer_rcv = value;
        data_xfer_rcv.value_namespace = name_space;
        data_xfer_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-fail-buffer-trim")
    {
        data_xfer_rcv_fail_buffer_trim = value;
        data_xfer_rcv_fail_buffer_trim.value_namespace = name_space;
        data_xfer_rcv_fail_buffer_trim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-fail-snd-una-out-of-sync")
    {
        data_xfer_rcv_fail_snd_una_out_of_sync = value;
        data_xfer_rcv_fail_snd_una_out_of_sync.value_namespace = name_space;
        data_xfer_rcv_fail_snd_una_out_of_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-rcv-success")
    {
        data_xfer_rcv_success = value;
        data_xfer_rcv_success.value_namespace = name_space;
        data_xfer_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send")
    {
        data_xfer_send = value;
        data_xfer_send.value_namespace = name_space;
        data_xfer_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send-drop")
    {
        data_xfer_send_drop = value;
        data_xfer_send_drop.value_namespace = name_space;
        data_xfer_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send-iov-alloc")
    {
        data_xfer_send_iov_alloc = value;
        data_xfer_send_iov_alloc.value_namespace = name_space;
        data_xfer_send_iov_alloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-xfer-send-total")
    {
        data_xfer_send_total = value;
        data_xfer_send_total.value_namespace = name_space;
        data_xfer_send_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv")
    {
        nack_rcv = value;
        nack_rcv.value_namespace = name_space;
        nack_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv-fail-data-send")
    {
        nack_rcv_fail_data_send = value;
        nack_rcv_fail_data_send.value_namespace = name_space;
        nack_rcv_fail_data_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-rcv-success")
    {
        nack_rcv_success = value;
        nack_rcv_success.value_namespace = name_space;
        nack_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-send")
    {
        nack_send = value;
        nack_send.value_namespace = name_space;
        nack_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-send-drop")
    {
        nack_send_drop = value;
        nack_send_drop.value_namespace = name_space;
        nack_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv")
    {
        seg_instr_rcv = value;
        seg_instr_rcv.value_namespace = name_space;
        seg_instr_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-fail-buffer-trim")
    {
        seg_instr_rcv_fail_buffer_trim = value;
        seg_instr_rcv_fail_buffer_trim.value_namespace = name_space;
        seg_instr_rcv_fail_buffer_trim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-fail-tcp-process")
    {
        seg_instr_rcv_fail_tcp_process = value;
        seg_instr_rcv_fail_tcp_process.value_namespace = name_space;
        seg_instr_rcv_fail_tcp_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-rcv-success")
    {
        seg_instr_rcv_success = value;
        seg_instr_rcv_success.value_namespace = name_space;
        seg_instr_rcv_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-send")
    {
        seg_instr_send = value;
        seg_instr_send.value_namespace = name_space;
        seg_instr_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-send-drop")
    {
        seg_instr_send_drop = value;
        seg_instr_send_drop.value_namespace = name_space;
        seg_instr_send_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seg-instr-send-units")
    {
        seg_instr_send_units = value;
        seg_instr_send_units.value_namespace = name_space;
        seg_instr_send_units.value_namespace_prefix = name_space_prefix;
    }
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cleanup-rcv")
    {
        cleanup_rcv.yfilter = yfilter;
    }
    if(value_path == "cleanup-rcv-fail-buffer-trim")
    {
        cleanup_rcv_fail_buffer_trim.yfilter = yfilter;
    }
    if(value_path == "cleanup-rcv-success")
    {
        cleanup_rcv_success.yfilter = yfilter;
    }
    if(value_path == "cleanup-send")
    {
        cleanup_send.yfilter = yfilter;
    }
    if(value_path == "cleanup-send-drop")
    {
        cleanup_send_drop.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv")
    {
        data_xfer_rcv.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-fail-buffer-trim")
    {
        data_xfer_rcv_fail_buffer_trim.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-fail-snd-una-out-of-sync")
    {
        data_xfer_rcv_fail_snd_una_out_of_sync.yfilter = yfilter;
    }
    if(value_path == "data-xfer-rcv-success")
    {
        data_xfer_rcv_success.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send")
    {
        data_xfer_send.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send-drop")
    {
        data_xfer_send_drop.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send-iov-alloc")
    {
        data_xfer_send_iov_alloc.yfilter = yfilter;
    }
    if(value_path == "data-xfer-send-total")
    {
        data_xfer_send_total.yfilter = yfilter;
    }
    if(value_path == "nack-rcv")
    {
        nack_rcv.yfilter = yfilter;
    }
    if(value_path == "nack-rcv-fail-data-send")
    {
        nack_rcv_fail_data_send.yfilter = yfilter;
    }
    if(value_path == "nack-rcv-success")
    {
        nack_rcv_success.yfilter = yfilter;
    }
    if(value_path == "nack-send")
    {
        nack_send.yfilter = yfilter;
    }
    if(value_path == "nack-send-drop")
    {
        nack_send_drop.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv")
    {
        seg_instr_rcv.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-fail-buffer-trim")
    {
        seg_instr_rcv_fail_buffer_trim.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-fail-tcp-process")
    {
        seg_instr_rcv_fail_tcp_process.yfilter = yfilter;
    }
    if(value_path == "seg-instr-rcv-success")
    {
        seg_instr_rcv_success.yfilter = yfilter;
    }
    if(value_path == "seg-instr-send")
    {
        seg_instr_send.yfilter = yfilter;
    }
    if(value_path == "seg-instr-send-drop")
    {
        seg_instr_send_drop.yfilter = yfilter;
    }
    if(value_path == "seg-instr-send-units")
    {
        seg_instr_send_units.yfilter = yfilter;
    }
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cleanup-rcv" || name == "cleanup-rcv-fail-buffer-trim" || name == "cleanup-rcv-success" || name == "cleanup-send" || name == "cleanup-send-drop" || name == "data-xfer-rcv" || name == "data-xfer-rcv-fail-buffer-trim" || name == "data-xfer-rcv-fail-snd-una-out-of-sync" || name == "data-xfer-rcv-success" || name == "data-xfer-send" || name == "data-xfer-send-drop" || name == "data-xfer-send-iov-alloc" || name == "data-xfer-send-total" || name == "nack-rcv" || name == "nack-rcv-fail-data-send" || name == "nack-rcv-success" || name == "nack-send" || name == "nack-send-drop" || name == "seg-instr-rcv" || name == "seg-instr-rcv-fail-buffer-trim" || name == "seg-instr-rcv-fail-tcp-process" || name == "seg-instr-rcv-success" || name == "seg-instr-send" || name == "seg-instr-send-drop" || name == "seg-instr-send-units")
        return true;
    return false;
}

const Enum::YLeaf NsrDownReason::none {0, "none"};
const Enum::YLeaf NsrDownReason::init_sync_aborted {1, "init-sync-aborted"};
const Enum::YLeaf NsrDownReason::client_disabled {2, "client-disabled"};
const Enum::YLeaf NsrDownReason::client_disconnect {3, "client-disconnect"};
const Enum::YLeaf NsrDownReason::tcp_disconnect {4, "tcp-disconnect"};
const Enum::YLeaf NsrDownReason::failover {5, "failover"};
const Enum::YLeaf NsrDownReason::nsr_clear {6, "nsr-clear"};
const Enum::YLeaf NsrDownReason::internal_error {7, "internal-error"};
const Enum::YLeaf NsrDownReason::retransmit_threshold_exceed {8, "retransmit-threshold-exceed"};
const Enum::YLeaf NsrDownReason::init_sync_failure_thresh_exceeded {9, "init-sync-failure-thresh-exceeded"};
const Enum::YLeaf NsrDownReason::audit_timeout {10, "audit-timeout"};
const Enum::YLeaf NsrDownReason::audit_failed {11, "audit-failed"};
const Enum::YLeaf NsrDownReason::standby_sscb_deleted {12, "standby-sscb-deleted"};
const Enum::YLeaf NsrDownReason::standby_session_close {13, "standby-session-close"};
const Enum::YLeaf NsrDownReason::standby_rxpath_frozen {14, "standby-rxpath-frozen"};
const Enum::YLeaf NsrDownReason::partner_deleted {15, "partner-deleted"};

const Enum::YLeaf TcpAddressFamily::ipv4 {2, "ipv4"};
const Enum::YLeaf TcpAddressFamily::ipv6 {10, "ipv6"};

const Enum::YLeaf TcpConnState::closed {0, "closed"};
const Enum::YLeaf TcpConnState::listen {1, "listen"};
const Enum::YLeaf TcpConnState::syn_sent {2, "syn-sent"};
const Enum::YLeaf TcpConnState::syn_received {3, "syn-received"};
const Enum::YLeaf TcpConnState::established {4, "established"};
const Enum::YLeaf TcpConnState::close_wait {5, "close-wait"};
const Enum::YLeaf TcpConnState::fin_wait1 {6, "fin-wait1"};
const Enum::YLeaf TcpConnState::closing {7, "closing"};
const Enum::YLeaf TcpConnState::last_ack {8, "last-ack"};
const Enum::YLeaf TcpConnState::fin_wait2 {9, "fin-wait2"};
const Enum::YLeaf TcpConnState::time_wait {10, "time-wait"};

const Enum::YLeaf MessageTypeIcmp::echo_reply {0, "echo-reply"};
const Enum::YLeaf MessageTypeIcmp::destination_unreachable {3, "destination-unreachable"};
const Enum::YLeaf MessageTypeIcmp::source_quench {4, "source-quench"};
const Enum::YLeaf MessageTypeIcmp::redirect {5, "redirect"};
const Enum::YLeaf MessageTypeIcmp::alternate_host_address {6, "alternate-host-address"};
const Enum::YLeaf MessageTypeIcmp::echo {8, "echo"};
const Enum::YLeaf MessageTypeIcmp::router_advertisement {9, "router-advertisement"};
const Enum::YLeaf MessageTypeIcmp::router_selection {10, "router-selection"};
const Enum::YLeaf MessageTypeIcmp::time_exceeded {11, "time-exceeded"};
const Enum::YLeaf MessageTypeIcmp::parameter_problem {12, "parameter-problem"};
const Enum::YLeaf MessageTypeIcmp::time_stamp {13, "time-stamp"};
const Enum::YLeaf MessageTypeIcmp::time_stamp_reply {14, "time-stamp-reply"};
const Enum::YLeaf MessageTypeIcmp::information_request {15, "information-request"};
const Enum::YLeaf MessageTypeIcmp::information_reply {16, "information-reply"};
const Enum::YLeaf MessageTypeIcmp::address_mask_request {17, "address-mask-request"};
const Enum::YLeaf MessageTypeIcmp::address_mask_reply {18, "address-mask-reply"};
const Enum::YLeaf MessageTypeIcmp::trace_route {30, "trace-route"};
const Enum::YLeaf MessageTypeIcmp::datagram_conversion_error {31, "datagram-conversion-error"};
const Enum::YLeaf MessageTypeIcmp::mobile_host_redirect {32, "mobile-host-redirect"};
const Enum::YLeaf MessageTypeIcmp::where_are_you {33, "where-are-you"};
const Enum::YLeaf MessageTypeIcmp::iam_here {34, "iam-here"};
const Enum::YLeaf MessageTypeIcmp::mobile_registration_request {35, "mobile-registration-request"};
const Enum::YLeaf MessageTypeIcmp::mobile_registration_reply {36, "mobile-registration-reply"};
const Enum::YLeaf MessageTypeIcmp::domain_name_request {37, "domain-name-request"};

const Enum::YLeaf AddrFamily::internetwork {2, "internetwork"};
const Enum::YLeaf AddrFamily::ip_version6 {10, "ip-version6"};

const Enum::YLeaf MessageTypeIcmpv6::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf MessageTypeIcmpv6::packet_too_big {2, "packet-too-big"};
const Enum::YLeaf MessageTypeIcmpv6::time_exceeded {3, "time-exceeded"};
const Enum::YLeaf MessageTypeIcmpv6::parameter_problem {4, "parameter-problem"};
const Enum::YLeaf MessageTypeIcmpv6::echo_request {128, "echo-request"};
const Enum::YLeaf MessageTypeIcmpv6::echo_reply {129, "echo-reply"};
const Enum::YLeaf MessageTypeIcmpv6::multicast_listener_query {130, "multicast-listener-query"};
const Enum::YLeaf MessageTypeIcmpv6::multicast_listener_report {131, "multicast-listener-report"};
const Enum::YLeaf MessageTypeIcmpv6::multicast_listener_done {132, "multicast-listener-done"};
const Enum::YLeaf MessageTypeIcmpv6::router_solicitation {133, "router-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6::router_advertisement {134, "router-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6::neighbor_solicitation {135, "neighbor-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6::neighbor_advertisement {136, "neighbor-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6::redirect_message {137, "redirect-message"};
const Enum::YLeaf MessageTypeIcmpv6::router_renumbering {138, "router-renumbering"};
const Enum::YLeaf MessageTypeIcmpv6::node_information_query {139, "node-information-query"};
const Enum::YLeaf MessageTypeIcmpv6::node_information_reply {140, "node-information-reply"};
const Enum::YLeaf MessageTypeIcmpv6::inverse_neighbor_discovery_solicitaion {141, "inverse-neighbor-discovery-solicitaion"};
const Enum::YLeaf MessageTypeIcmpv6::inverse_neighbor_discover_advertisement {142, "inverse-neighbor-discover-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6::v2_multicast_listener_report {143, "v2-multicast-listener-report"};
const Enum::YLeaf MessageTypeIcmpv6::home_agent_address_discovery_request {144, "home-agent-address-discovery-request"};
const Enum::YLeaf MessageTypeIcmpv6::home_agent_address_discovery_reply {145, "home-agent-address-discovery-reply"};
const Enum::YLeaf MessageTypeIcmpv6::mobile_prefix_solicitation {146, "mobile-prefix-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6::mobile_prefix_advertisement {147, "mobile-prefix-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6::certification_path_solicitation_message {148, "certification-path-solicitation-message"};
const Enum::YLeaf MessageTypeIcmpv6::certification_path_advertisement_message {149, "certification-path-advertisement-message"};
const Enum::YLeaf MessageTypeIcmpv6::experimental_mobility_protocols {150, "experimental-mobility-protocols"};
const Enum::YLeaf MessageTypeIcmpv6::multicast_router_advertisement {151, "multicast-router-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6::multicast_router_solicitation {152, "multicast-router-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6::multicast_router_termination {153, "multicast-router-termination"};
const Enum::YLeaf MessageTypeIcmpv6::fmipv6_messages {154, "fmipv6-messages"};

const Enum::YLeaf Show::all {0, "all"};
const Enum::YLeaf Show::static_policy {1, "static-policy"};
const Enum::YLeaf Show::interface_filter {2, "interface-filter"};
const Enum::YLeaf Show::packet_filter {3, "packet-filter"};

const Enum::YLeaf MessageTypeIcmp_::echo_reply {0, "echo-reply"};
const Enum::YLeaf MessageTypeIcmp_::destination_unreachable {3, "destination-unreachable"};
const Enum::YLeaf MessageTypeIcmp_::source_quench {4, "source-quench"};
const Enum::YLeaf MessageTypeIcmp_::redirect {5, "redirect"};
const Enum::YLeaf MessageTypeIcmp_::alternate_host_address {6, "alternate-host-address"};
const Enum::YLeaf MessageTypeIcmp_::echo {8, "echo"};
const Enum::YLeaf MessageTypeIcmp_::router_advertisement {9, "router-advertisement"};
const Enum::YLeaf MessageTypeIcmp_::router_selection {10, "router-selection"};
const Enum::YLeaf MessageTypeIcmp_::time_exceeded {11, "time-exceeded"};
const Enum::YLeaf MessageTypeIcmp_::parameter_problem {12, "parameter-problem"};
const Enum::YLeaf MessageTypeIcmp_::time_stamp {13, "time-stamp"};
const Enum::YLeaf MessageTypeIcmp_::time_stamp_reply {14, "time-stamp-reply"};
const Enum::YLeaf MessageTypeIcmp_::information_request {15, "information-request"};
const Enum::YLeaf MessageTypeIcmp_::information_reply {16, "information-reply"};
const Enum::YLeaf MessageTypeIcmp_::address_mask_request {17, "address-mask-request"};
const Enum::YLeaf MessageTypeIcmp_::address_mask_reply {18, "address-mask-reply"};
const Enum::YLeaf MessageTypeIcmp_::trace_route {30, "trace-route"};
const Enum::YLeaf MessageTypeIcmp_::datagram_conversion_error {31, "datagram-conversion-error"};
const Enum::YLeaf MessageTypeIcmp_::mobile_host_redirect {32, "mobile-host-redirect"};
const Enum::YLeaf MessageTypeIcmp_::where_are_you {33, "where-are-you"};
const Enum::YLeaf MessageTypeIcmp_::iam_here {34, "iam-here"};
const Enum::YLeaf MessageTypeIcmp_::mobile_registration_request {35, "mobile-registration-request"};
const Enum::YLeaf MessageTypeIcmp_::mobile_registration_reply {36, "mobile-registration-reply"};
const Enum::YLeaf MessageTypeIcmp_::domain_name_request {37, "domain-name-request"};

const Enum::YLeaf Packet::icmp {0, "icmp"};
const Enum::YLeaf Packet::icm_pv6 {1, "icm-pv6"};
const Enum::YLeaf Packet::igmp {2, "igmp"};
const Enum::YLeaf Packet::unknown {3, "unknown"};

const Enum::YLeaf MessageTypeIgmp::membership_query {17, "membership-query"};
const Enum::YLeaf MessageTypeIgmp::v1_membership_report {18, "v1-membership-report"};
const Enum::YLeaf MessageTypeIgmp::dvmrp {19, "dvmrp"};
const Enum::YLeaf MessageTypeIgmp::pi_mv1 {20, "pi-mv1"};
const Enum::YLeaf MessageTypeIgmp::cisco_trace_messages {21, "cisco-trace-messages"};
const Enum::YLeaf MessageTypeIgmp::v2_membership_report {22, "v2-membership-report"};
const Enum::YLeaf MessageTypeIgmp::v2_leave_group {23, "v2-leave-group"};
const Enum::YLeaf MessageTypeIgmp::multicast_traceroute_response {30, "multicast-traceroute-response"};
const Enum::YLeaf MessageTypeIgmp::multicast_traceroute {31, "multicast-traceroute"};
const Enum::YLeaf MessageTypeIgmp::v3_membership_report {34, "v3-membership-report"};
const Enum::YLeaf MessageTypeIgmp::multicast_router_advertisement {48, "multicast-router-advertisement"};
const Enum::YLeaf MessageTypeIgmp::multicast_router_solicitation {49, "multicast-router-solicitation"};
const Enum::YLeaf MessageTypeIgmp::multicast_router_termination {50, "multicast-router-termination"};

const Enum::YLeaf MessageTypeIgmp_::membership_query {17, "membership-query"};
const Enum::YLeaf MessageTypeIgmp_::v1_membership_report {18, "v1-membership-report"};
const Enum::YLeaf MessageTypeIgmp_::dvmrp {19, "dvmrp"};
const Enum::YLeaf MessageTypeIgmp_::pi_mv1 {20, "pi-mv1"};
const Enum::YLeaf MessageTypeIgmp_::cisco_trace_messages {21, "cisco-trace-messages"};
const Enum::YLeaf MessageTypeIgmp_::v2_membership_report {22, "v2-membership-report"};
const Enum::YLeaf MessageTypeIgmp_::v2_leave_group {23, "v2-leave-group"};
const Enum::YLeaf MessageTypeIgmp_::multicast_traceroute_response {30, "multicast-traceroute-response"};
const Enum::YLeaf MessageTypeIgmp_::multicast_traceroute {31, "multicast-traceroute"};
const Enum::YLeaf MessageTypeIgmp_::v3_membership_report {34, "v3-membership-report"};
const Enum::YLeaf MessageTypeIgmp_::multicast_router_advertisement {48, "multicast-router-advertisement"};
const Enum::YLeaf MessageTypeIgmp_::multicast_router_solicitation {49, "multicast-router-solicitation"};
const Enum::YLeaf MessageTypeIgmp_::multicast_router_termination {50, "multicast-router-termination"};

const Enum::YLeaf PakPrio::unspecified_packet {0, "unspecified-packet"};
const Enum::YLeaf PakPrio::normal_packet {1, "normal-packet"};
const Enum::YLeaf PakPrio::medium_packet {2, "medium-packet"};
const Enum::YLeaf PakPrio::high_packet {3, "high-packet"};
const Enum::YLeaf PakPrio::crucial_packet {4, "crucial-packet"};

const Enum::YLeaf TcpTimer::retransmission_timer {0, "retransmission-timer"};
const Enum::YLeaf TcpTimer::window_probe_timer {1, "window-probe-timer"};
const Enum::YLeaf TcpTimer::timewait_state_timer {2, "timewait-state-timer"};
const Enum::YLeaf TcpTimer::ack_hold_timer {3, "ack-hold-timer"};
const Enum::YLeaf TcpTimer::keep_alive_timer {4, "keep-alive-timer"};
const Enum::YLeaf TcpTimer::pmtu_ager_timer {5, "pmtu-ager-timer"};
const Enum::YLeaf TcpTimer::retransmission_giveup_timer {6, "retransmission-giveup-timer"};
const Enum::YLeaf TcpTimer::throttle_timer {7, "throttle-timer"};

const Enum::YLeaf NsrStatus::down {0, "down"};
const Enum::YLeaf NsrStatus::up {1, "up"};
const Enum::YLeaf NsrStatus::na {2, "na"};

const Enum::YLeaf MessageTypeIcmpv6_::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf MessageTypeIcmpv6_::packet_too_big {2, "packet-too-big"};
const Enum::YLeaf MessageTypeIcmpv6_::time_exceeded {3, "time-exceeded"};
const Enum::YLeaf MessageTypeIcmpv6_::parameter_problem {4, "parameter-problem"};
const Enum::YLeaf MessageTypeIcmpv6_::echo_request {128, "echo-request"};
const Enum::YLeaf MessageTypeIcmpv6_::echo_reply {129, "echo-reply"};
const Enum::YLeaf MessageTypeIcmpv6_::multicast_listener_query {130, "multicast-listener-query"};
const Enum::YLeaf MessageTypeIcmpv6_::multicast_listener_report {131, "multicast-listener-report"};
const Enum::YLeaf MessageTypeIcmpv6_::multicast_listener_done {132, "multicast-listener-done"};
const Enum::YLeaf MessageTypeIcmpv6_::router_solicitation {133, "router-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6_::router_advertisement {134, "router-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6_::neighbor_solicitation {135, "neighbor-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6_::neighbor_advertisement {136, "neighbor-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6_::redirect_message {137, "redirect-message"};
const Enum::YLeaf MessageTypeIcmpv6_::router_renumbering {138, "router-renumbering"};
const Enum::YLeaf MessageTypeIcmpv6_::node_information_query {139, "node-information-query"};
const Enum::YLeaf MessageTypeIcmpv6_::node_information_reply {140, "node-information-reply"};
const Enum::YLeaf MessageTypeIcmpv6_::inverse_neighbor_discovery_solicitaion {141, "inverse-neighbor-discovery-solicitaion"};
const Enum::YLeaf MessageTypeIcmpv6_::inverse_neighbor_discover_advertisement {142, "inverse-neighbor-discover-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6_::v2_multicast_listener_report {143, "v2-multicast-listener-report"};
const Enum::YLeaf MessageTypeIcmpv6_::home_agent_address_discovery_request {144, "home-agent-address-discovery-request"};
const Enum::YLeaf MessageTypeIcmpv6_::home_agent_address_discovery_reply {145, "home-agent-address-discovery-reply"};
const Enum::YLeaf MessageTypeIcmpv6_::mobile_prefix_solicitation {146, "mobile-prefix-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6_::mobile_prefix_advertisement {147, "mobile-prefix-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6_::certification_path_solicitation_message {148, "certification-path-solicitation-message"};
const Enum::YLeaf MessageTypeIcmpv6_::certification_path_advertisement_message {149, "certification-path-advertisement-message"};
const Enum::YLeaf MessageTypeIcmpv6_::experimental_mobility_protocols {150, "experimental-mobility-protocols"};
const Enum::YLeaf MessageTypeIcmpv6_::multicast_router_advertisement {151, "multicast-router-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6_::multicast_router_solicitation {152, "multicast-router-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6_::multicast_router_termination {153, "multicast-router-termination"};
const Enum::YLeaf MessageTypeIcmpv6_::fmipv6_messages {154, "fmipv6-messages"};


}
}

