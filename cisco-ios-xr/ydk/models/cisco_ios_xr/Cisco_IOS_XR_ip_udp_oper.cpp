
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_udp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_udp_oper {

Udp::Udp()
    :
    nodes(std::make_shared<Udp::Nodes>())
{
    nodes->parent = this;

    yang_name = "udp"; yang_parent_name = "Cisco-IOS-XR-ip-udp-oper";
}

Udp::~Udp()
{
}

bool Udp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Udp::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-oper:udp";

    return path_buffer.str();

}

const EntityPath Udp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Udp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Udp::clone_ptr() const
{
    return std::make_shared<Udp>();
}

std::string Udp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Udp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Udp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Udp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Udp::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "udp";
}

Udp::Nodes::~Nodes()
{
}

bool Udp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Udp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Udp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Udp::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-udp-oper:udp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Udp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Udp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Udp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Udp::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Udp::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Udp::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Udp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    statistics(std::make_shared<Udp::Nodes::Node::Statistics>())
{
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Udp::Nodes::Node::~Node()
{
}

bool Udp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Udp::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Udp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Udp::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-udp-oper:udp/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Udp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Udp::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Udp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Udp::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Udp::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Udp::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "node-name")
        return true;
    return false;
}

Udp::Nodes::Node::Statistics::Statistics()
    :
    ipv4_traffic(std::make_shared<Udp::Nodes::Node::Statistics::Ipv4Traffic>())
	,ipv6_traffic(std::make_shared<Udp::Nodes::Node::Statistics::Ipv6Traffic>())
{
    ipv4_traffic->parent = this;

    ipv6_traffic->parent = this;

    yang_name = "statistics"; yang_parent_name = "node";
}

Udp::Nodes::Node::Statistics::~Statistics()
{
}

bool Udp::Nodes::Node::Statistics::has_data() const
{
    return (ipv4_traffic !=  nullptr && ipv4_traffic->has_data())
	|| (ipv6_traffic !=  nullptr && ipv6_traffic->has_data());
}

bool Udp::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_traffic !=  nullptr && ipv4_traffic->has_operation())
	|| (ipv6_traffic !=  nullptr && ipv6_traffic->has_operation());
}

std::string Udp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Udp::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Udp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-traffic")
    {
        if(ipv4_traffic == nullptr)
        {
            ipv4_traffic = std::make_shared<Udp::Nodes::Node::Statistics::Ipv4Traffic>();
        }
        return ipv4_traffic;
    }

    if(child_yang_name == "ipv6-traffic")
    {
        if(ipv6_traffic == nullptr)
        {
            ipv6_traffic = std::make_shared<Udp::Nodes::Node::Statistics::Ipv6Traffic>();
        }
        return ipv6_traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Udp::Nodes::Node::Statistics::get_children() const
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

void Udp::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Udp::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Udp::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-traffic" || name == "ipv6-traffic")
        return true;
    return false;
}

Udp::Nodes::Node::Statistics::Ipv4Traffic::Ipv4Traffic()
    :
    udp_bad_length_packets{YType::uint32, "udp-bad-length-packets"},
    udp_checksum_error_packets{YType::uint32, "udp-checksum-error-packets"},
    udp_dropped_packets{YType::uint32, "udp-dropped-packets"},
    udp_input_packets{YType::uint32, "udp-input-packets"},
    udp_no_port_packets{YType::uint32, "udp-no-port-packets"},
    udp_output_packets{YType::uint32, "udp-output-packets"}
{
    yang_name = "ipv4-traffic"; yang_parent_name = "statistics";
}

Udp::Nodes::Node::Statistics::Ipv4Traffic::~Ipv4Traffic()
{
}

bool Udp::Nodes::Node::Statistics::Ipv4Traffic::has_data() const
{
    return udp_bad_length_packets.is_set
	|| udp_checksum_error_packets.is_set
	|| udp_dropped_packets.is_set
	|| udp_input_packets.is_set
	|| udp_no_port_packets.is_set
	|| udp_output_packets.is_set;
}

bool Udp::Nodes::Node::Statistics::Ipv4Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp_bad_length_packets.yfilter)
	|| ydk::is_set(udp_checksum_error_packets.yfilter)
	|| ydk::is_set(udp_dropped_packets.yfilter)
	|| ydk::is_set(udp_input_packets.yfilter)
	|| ydk::is_set(udp_no_port_packets.yfilter)
	|| ydk::is_set(udp_output_packets.yfilter);
}

std::string Udp::Nodes::Node::Statistics::Ipv4Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-traffic";

    return path_buffer.str();

}

const EntityPath Udp::Nodes::Node::Statistics::Ipv4Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Traffic' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_bad_length_packets.is_set || is_set(udp_bad_length_packets.yfilter)) leaf_name_data.push_back(udp_bad_length_packets.get_name_leafdata());
    if (udp_checksum_error_packets.is_set || is_set(udp_checksum_error_packets.yfilter)) leaf_name_data.push_back(udp_checksum_error_packets.get_name_leafdata());
    if (udp_dropped_packets.is_set || is_set(udp_dropped_packets.yfilter)) leaf_name_data.push_back(udp_dropped_packets.get_name_leafdata());
    if (udp_input_packets.is_set || is_set(udp_input_packets.yfilter)) leaf_name_data.push_back(udp_input_packets.get_name_leafdata());
    if (udp_no_port_packets.is_set || is_set(udp_no_port_packets.yfilter)) leaf_name_data.push_back(udp_no_port_packets.get_name_leafdata());
    if (udp_output_packets.is_set || is_set(udp_output_packets.yfilter)) leaf_name_data.push_back(udp_output_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Udp::Nodes::Node::Statistics::Ipv4Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Udp::Nodes::Node::Statistics::Ipv4Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Udp::Nodes::Node::Statistics::Ipv4Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-bad-length-packets")
    {
        udp_bad_length_packets = value;
        udp_bad_length_packets.value_namespace = name_space;
        udp_bad_length_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-checksum-error-packets")
    {
        udp_checksum_error_packets = value;
        udp_checksum_error_packets.value_namespace = name_space;
        udp_checksum_error_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-dropped-packets")
    {
        udp_dropped_packets = value;
        udp_dropped_packets.value_namespace = name_space;
        udp_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-input-packets")
    {
        udp_input_packets = value;
        udp_input_packets.value_namespace = name_space;
        udp_input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-no-port-packets")
    {
        udp_no_port_packets = value;
        udp_no_port_packets.value_namespace = name_space;
        udp_no_port_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-output-packets")
    {
        udp_output_packets = value;
        udp_output_packets.value_namespace = name_space;
        udp_output_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Udp::Nodes::Node::Statistics::Ipv4Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-bad-length-packets")
    {
        udp_bad_length_packets.yfilter = yfilter;
    }
    if(value_path == "udp-checksum-error-packets")
    {
        udp_checksum_error_packets.yfilter = yfilter;
    }
    if(value_path == "udp-dropped-packets")
    {
        udp_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "udp-input-packets")
    {
        udp_input_packets.yfilter = yfilter;
    }
    if(value_path == "udp-no-port-packets")
    {
        udp_no_port_packets.yfilter = yfilter;
    }
    if(value_path == "udp-output-packets")
    {
        udp_output_packets.yfilter = yfilter;
    }
}

bool Udp::Nodes::Node::Statistics::Ipv4Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-bad-length-packets" || name == "udp-checksum-error-packets" || name == "udp-dropped-packets" || name == "udp-input-packets" || name == "udp-no-port-packets" || name == "udp-output-packets")
        return true;
    return false;
}

Udp::Nodes::Node::Statistics::Ipv6Traffic::Ipv6Traffic()
    :
    udp_bad_length_packets{YType::uint32, "udp-bad-length-packets"},
    udp_checksum_error_packets{YType::uint32, "udp-checksum-error-packets"},
    udp_dropped_packets{YType::uint32, "udp-dropped-packets"},
    udp_input_packets{YType::uint32, "udp-input-packets"},
    udp_no_port_packets{YType::uint32, "udp-no-port-packets"},
    udp_output_packets{YType::uint32, "udp-output-packets"}
{
    yang_name = "ipv6-traffic"; yang_parent_name = "statistics";
}

Udp::Nodes::Node::Statistics::Ipv6Traffic::~Ipv6Traffic()
{
}

bool Udp::Nodes::Node::Statistics::Ipv6Traffic::has_data() const
{
    return udp_bad_length_packets.is_set
	|| udp_checksum_error_packets.is_set
	|| udp_dropped_packets.is_set
	|| udp_input_packets.is_set
	|| udp_no_port_packets.is_set
	|| udp_output_packets.is_set;
}

bool Udp::Nodes::Node::Statistics::Ipv6Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp_bad_length_packets.yfilter)
	|| ydk::is_set(udp_checksum_error_packets.yfilter)
	|| ydk::is_set(udp_dropped_packets.yfilter)
	|| ydk::is_set(udp_input_packets.yfilter)
	|| ydk::is_set(udp_no_port_packets.yfilter)
	|| ydk::is_set(udp_output_packets.yfilter);
}

std::string Udp::Nodes::Node::Statistics::Ipv6Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-traffic";

    return path_buffer.str();

}

const EntityPath Udp::Nodes::Node::Statistics::Ipv6Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Traffic' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_bad_length_packets.is_set || is_set(udp_bad_length_packets.yfilter)) leaf_name_data.push_back(udp_bad_length_packets.get_name_leafdata());
    if (udp_checksum_error_packets.is_set || is_set(udp_checksum_error_packets.yfilter)) leaf_name_data.push_back(udp_checksum_error_packets.get_name_leafdata());
    if (udp_dropped_packets.is_set || is_set(udp_dropped_packets.yfilter)) leaf_name_data.push_back(udp_dropped_packets.get_name_leafdata());
    if (udp_input_packets.is_set || is_set(udp_input_packets.yfilter)) leaf_name_data.push_back(udp_input_packets.get_name_leafdata());
    if (udp_no_port_packets.is_set || is_set(udp_no_port_packets.yfilter)) leaf_name_data.push_back(udp_no_port_packets.get_name_leafdata());
    if (udp_output_packets.is_set || is_set(udp_output_packets.yfilter)) leaf_name_data.push_back(udp_output_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Udp::Nodes::Node::Statistics::Ipv6Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Udp::Nodes::Node::Statistics::Ipv6Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Udp::Nodes::Node::Statistics::Ipv6Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-bad-length-packets")
    {
        udp_bad_length_packets = value;
        udp_bad_length_packets.value_namespace = name_space;
        udp_bad_length_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-checksum-error-packets")
    {
        udp_checksum_error_packets = value;
        udp_checksum_error_packets.value_namespace = name_space;
        udp_checksum_error_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-dropped-packets")
    {
        udp_dropped_packets = value;
        udp_dropped_packets.value_namespace = name_space;
        udp_dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-input-packets")
    {
        udp_input_packets = value;
        udp_input_packets.value_namespace = name_space;
        udp_input_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-no-port-packets")
    {
        udp_no_port_packets = value;
        udp_no_port_packets.value_namespace = name_space;
        udp_no_port_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-output-packets")
    {
        udp_output_packets = value;
        udp_output_packets.value_namespace = name_space;
        udp_output_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Udp::Nodes::Node::Statistics::Ipv6Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-bad-length-packets")
    {
        udp_bad_length_packets.yfilter = yfilter;
    }
    if(value_path == "udp-checksum-error-packets")
    {
        udp_checksum_error_packets.yfilter = yfilter;
    }
    if(value_path == "udp-dropped-packets")
    {
        udp_dropped_packets.yfilter = yfilter;
    }
    if(value_path == "udp-input-packets")
    {
        udp_input_packets.yfilter = yfilter;
    }
    if(value_path == "udp-no-port-packets")
    {
        udp_no_port_packets.yfilter = yfilter;
    }
    if(value_path == "udp-output-packets")
    {
        udp_output_packets.yfilter = yfilter;
    }
}

bool Udp::Nodes::Node::Statistics::Ipv6Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-bad-length-packets" || name == "udp-checksum-error-packets" || name == "udp-dropped-packets" || name == "udp-input-packets" || name == "udp-no-port-packets" || name == "udp-output-packets")
        return true;
    return false;
}

UdpConnection::UdpConnection()
    :
    nodes(std::make_shared<UdpConnection::Nodes>())
{
    nodes->parent = this;

    yang_name = "udp-connection"; yang_parent_name = "Cisco-IOS-XR-ip-udp-oper";
}

UdpConnection::~UdpConnection()
{
}

bool UdpConnection::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool UdpConnection::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string UdpConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-oper:udp-connection";

    return path_buffer.str();

}

const EntityPath UdpConnection::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> UdpConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<UdpConnection::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void UdpConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> UdpConnection::clone_ptr() const
{
    return std::make_shared<UdpConnection>();
}

std::string UdpConnection::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string UdpConnection::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function UdpConnection::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> UdpConnection::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool UdpConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

UdpConnection::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "udp-connection";
}

UdpConnection::Nodes::~Nodes()
{
}

bool UdpConnection::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-udp-oper:udp-connection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<UdpConnection::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    lpts(std::make_shared<UdpConnection::Nodes::Node::Lpts>())
	,pcb_briefs(std::make_shared<UdpConnection::Nodes::Node::PcbBriefs>())
	,pcb_details(std::make_shared<UdpConnection::Nodes::Node::PcbDetails>())
	,statistics(std::make_shared<UdpConnection::Nodes::Node::Statistics>())
{
    lpts->parent = this;

    pcb_briefs->parent = this;

    pcb_details->parent = this;

    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

UdpConnection::Nodes::Node::~Node()
{
}

bool UdpConnection::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (lpts !=  nullptr && lpts->has_data())
	|| (pcb_briefs !=  nullptr && pcb_briefs->has_data())
	|| (pcb_details !=  nullptr && pcb_details->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool UdpConnection::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (lpts !=  nullptr && lpts->has_operation())
	|| (pcb_briefs !=  nullptr && pcb_briefs->has_operation())
	|| (pcb_details !=  nullptr && pcb_details->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string UdpConnection::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-udp-oper:udp-connection/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts")
    {
        if(lpts == nullptr)
        {
            lpts = std::make_shared<UdpConnection::Nodes::Node::Lpts>();
        }
        return lpts;
    }

    if(child_yang_name == "pcb-briefs")
    {
        if(pcb_briefs == nullptr)
        {
            pcb_briefs = std::make_shared<UdpConnection::Nodes::Node::PcbBriefs>();
        }
        return pcb_briefs;
    }

    if(child_yang_name == "pcb-details")
    {
        if(pcb_details == nullptr)
        {
            pcb_details = std::make_shared<UdpConnection::Nodes::Node::PcbDetails>();
        }
        return pcb_details;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<UdpConnection::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lpts != nullptr)
    {
        children["lpts"] = lpts;
    }

    if(pcb_briefs != nullptr)
    {
        children["pcb-briefs"] = pcb_briefs;
    }

    if(pcb_details != nullptr)
    {
        children["pcb-details"] = pcb_details;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void UdpConnection::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts" || name == "pcb-briefs" || name == "pcb-details" || name == "statistics" || name == "node-name")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::Statistics()
    :
    clients(std::make_shared<UdpConnection::Nodes::Node::Statistics::Clients>())
	,pcb_statistics(std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics>())
	,summary(std::make_shared<UdpConnection::Nodes::Node::Statistics::Summary>())
{
    clients->parent = this;

    pcb_statistics->parent = this;

    summary->parent = this;

    yang_name = "statistics"; yang_parent_name = "node";
}

UdpConnection::Nodes::Node::Statistics::~Statistics()
{
}

bool UdpConnection::Nodes::Node::Statistics::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (pcb_statistics !=  nullptr && pcb_statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool UdpConnection::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (clients !=  nullptr && clients->has_operation())
	|| (pcb_statistics !=  nullptr && pcb_statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string UdpConnection::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<UdpConnection::Nodes::Node::Statistics::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "pcb-statistics")
    {
        if(pcb_statistics == nullptr)
        {
            pcb_statistics = std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics>();
        }
        return pcb_statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<UdpConnection::Nodes::Node::Statistics::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(pcb_statistics != nullptr)
    {
        children["pcb-statistics"] = pcb_statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void UdpConnection::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "pcb-statistics" || name == "summary")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "statistics";
}

UdpConnection::Nodes::Node::Statistics::Clients::~Clients()
{
}

bool UdpConnection::Nodes::Node::Statistics::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::Node::Statistics::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::Node::Statistics::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<UdpConnection::Nodes::Node::Statistics::Clients::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::Node::Statistics::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::Statistics::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::Statistics::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::Clients::Client::Client()
    :
    client_id{YType::uint32, "client-id"},
    client_jid{YType::int32, "client-jid"},
    client_name{YType::str, "client-name"},
    ipv4_received_packets{YType::uint32, "ipv4-received-packets"},
    ipv4_sent_packets{YType::uint32, "ipv4-sent-packets"},
    ipv6_received_packets{YType::uint32, "ipv6-received-packets"},
    ipv6_sent_packets{YType::uint32, "ipv6-sent-packets"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

UdpConnection::Nodes::Node::Statistics::Clients::Client::~Client()
{
}

bool UdpConnection::Nodes::Node::Statistics::Clients::Client::has_data() const
{
    return client_id.is_set
	|| client_jid.is_set
	|| client_name.is_set
	|| ipv4_received_packets.is_set
	|| ipv4_sent_packets.is_set
	|| ipv6_received_packets.is_set
	|| ipv6_sent_packets.is_set;
}

bool UdpConnection::Nodes::Node::Statistics::Clients::Client::has_operation() const
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

std::string UdpConnection::Nodes::Node::Statistics::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::Clients::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_jid.is_set || is_set(client_jid.yfilter)) leaf_name_data.push_back(client_jid.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (ipv4_received_packets.is_set || is_set(ipv4_received_packets.yfilter)) leaf_name_data.push_back(ipv4_received_packets.get_name_leafdata());
    if (ipv4_sent_packets.is_set || is_set(ipv4_sent_packets.yfilter)) leaf_name_data.push_back(ipv4_sent_packets.get_name_leafdata());
    if (ipv6_received_packets.is_set || is_set(ipv6_received_packets.yfilter)) leaf_name_data.push_back(ipv6_received_packets.get_name_leafdata());
    if (ipv6_sent_packets.is_set || is_set(ipv6_sent_packets.yfilter)) leaf_name_data.push_back(ipv6_sent_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Statistics::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Statistics::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Statistics::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "client-jid" || name == "client-name" || name == "ipv4-received-packets" || name == "ipv4-sent-packets" || name == "ipv6-received-packets" || name == "ipv6-sent-packets")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::Summary::Summary()
    :
    cloned_packets{YType::uint32, "cloned-packets"},
    failed_clone_packets{YType::uint32, "failed-clone-packets"},
    forward_broadcast_packets{YType::uint32, "forward-broadcast-packets"},
    received_bad_checksum_packets{YType::uint32, "received-bad-checksum-packets"},
    received_drop_packets{YType::uint32, "received-drop-packets"},
    received_no_port_packets{YType::uint32, "received-no-port-packets"},
    received_too_short_packets{YType::uint32, "received-too-short-packets"},
    received_total_packets{YType::uint32, "received-total-packets"},
    sent_error_packets{YType::uint32, "sent-error-packets"},
    sent_total_packets{YType::uint32, "sent-total-packets"}
{
    yang_name = "summary"; yang_parent_name = "statistics";
}

UdpConnection::Nodes::Node::Statistics::Summary::~Summary()
{
}

bool UdpConnection::Nodes::Node::Statistics::Summary::has_data() const
{
    return cloned_packets.is_set
	|| failed_clone_packets.is_set
	|| forward_broadcast_packets.is_set
	|| received_bad_checksum_packets.is_set
	|| received_drop_packets.is_set
	|| received_no_port_packets.is_set
	|| received_too_short_packets.is_set
	|| received_total_packets.is_set
	|| sent_error_packets.is_set
	|| sent_total_packets.is_set;
}

bool UdpConnection::Nodes::Node::Statistics::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cloned_packets.yfilter)
	|| ydk::is_set(failed_clone_packets.yfilter)
	|| ydk::is_set(forward_broadcast_packets.yfilter)
	|| ydk::is_set(received_bad_checksum_packets.yfilter)
	|| ydk::is_set(received_drop_packets.yfilter)
	|| ydk::is_set(received_no_port_packets.yfilter)
	|| ydk::is_set(received_too_short_packets.yfilter)
	|| ydk::is_set(received_total_packets.yfilter)
	|| ydk::is_set(sent_error_packets.yfilter)
	|| ydk::is_set(sent_total_packets.yfilter);
}

std::string UdpConnection::Nodes::Node::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cloned_packets.is_set || is_set(cloned_packets.yfilter)) leaf_name_data.push_back(cloned_packets.get_name_leafdata());
    if (failed_clone_packets.is_set || is_set(failed_clone_packets.yfilter)) leaf_name_data.push_back(failed_clone_packets.get_name_leafdata());
    if (forward_broadcast_packets.is_set || is_set(forward_broadcast_packets.yfilter)) leaf_name_data.push_back(forward_broadcast_packets.get_name_leafdata());
    if (received_bad_checksum_packets.is_set || is_set(received_bad_checksum_packets.yfilter)) leaf_name_data.push_back(received_bad_checksum_packets.get_name_leafdata());
    if (received_drop_packets.is_set || is_set(received_drop_packets.yfilter)) leaf_name_data.push_back(received_drop_packets.get_name_leafdata());
    if (received_no_port_packets.is_set || is_set(received_no_port_packets.yfilter)) leaf_name_data.push_back(received_no_port_packets.get_name_leafdata());
    if (received_too_short_packets.is_set || is_set(received_too_short_packets.yfilter)) leaf_name_data.push_back(received_too_short_packets.get_name_leafdata());
    if (received_total_packets.is_set || is_set(received_total_packets.yfilter)) leaf_name_data.push_back(received_total_packets.get_name_leafdata());
    if (sent_error_packets.is_set || is_set(sent_error_packets.yfilter)) leaf_name_data.push_back(sent_error_packets.get_name_leafdata());
    if (sent_total_packets.is_set || is_set(sent_total_packets.yfilter)) leaf_name_data.push_back(sent_total_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cloned-packets")
    {
        cloned_packets = value;
        cloned_packets.value_namespace = name_space;
        cloned_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-clone-packets")
    {
        failed_clone_packets = value;
        failed_clone_packets.value_namespace = name_space;
        failed_clone_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-broadcast-packets")
    {
        forward_broadcast_packets = value;
        forward_broadcast_packets.value_namespace = name_space;
        forward_broadcast_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-bad-checksum-packets")
    {
        received_bad_checksum_packets = value;
        received_bad_checksum_packets.value_namespace = name_space;
        received_bad_checksum_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-drop-packets")
    {
        received_drop_packets = value;
        received_drop_packets.value_namespace = name_space;
        received_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-no-port-packets")
    {
        received_no_port_packets = value;
        received_no_port_packets.value_namespace = name_space;
        received_no_port_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-too-short-packets")
    {
        received_too_short_packets = value;
        received_too_short_packets.value_namespace = name_space;
        received_too_short_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-packets")
    {
        received_total_packets = value;
        received_total_packets.value_namespace = name_space;
        received_total_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-error-packets")
    {
        sent_error_packets = value;
        sent_error_packets.value_namespace = name_space;
        sent_error_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-total-packets")
    {
        sent_total_packets = value;
        sent_total_packets.value_namespace = name_space;
        sent_total_packets.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cloned-packets")
    {
        cloned_packets.yfilter = yfilter;
    }
    if(value_path == "failed-clone-packets")
    {
        failed_clone_packets.yfilter = yfilter;
    }
    if(value_path == "forward-broadcast-packets")
    {
        forward_broadcast_packets.yfilter = yfilter;
    }
    if(value_path == "received-bad-checksum-packets")
    {
        received_bad_checksum_packets.yfilter = yfilter;
    }
    if(value_path == "received-drop-packets")
    {
        received_drop_packets.yfilter = yfilter;
    }
    if(value_path == "received-no-port-packets")
    {
        received_no_port_packets.yfilter = yfilter;
    }
    if(value_path == "received-too-short-packets")
    {
        received_too_short_packets.yfilter = yfilter;
    }
    if(value_path == "received-total-packets")
    {
        received_total_packets.yfilter = yfilter;
    }
    if(value_path == "sent-error-packets")
    {
        sent_error_packets.yfilter = yfilter;
    }
    if(value_path == "sent-total-packets")
    {
        sent_total_packets.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cloned-packets" || name == "failed-clone-packets" || name == "forward-broadcast-packets" || name == "received-bad-checksum-packets" || name == "received-drop-packets" || name == "received-no-port-packets" || name == "received-too-short-packets" || name == "received-total-packets" || name == "sent-error-packets" || name == "sent-total-packets")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistics()
{
    yang_name = "pcb-statistics"; yang_parent_name = "statistics";
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::~PcbStatistics()
{
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::has_data() const
{
    for (std::size_t index=0; index<pcb_statistic.size(); index++)
    {
        if(pcb_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::has_operation() const
{
    for (std::size_t index=0; index<pcb_statistic.size(); index++)
    {
        if(pcb_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::Node::Statistics::PcbStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb-statistics";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::PcbStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcbStatistics' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::PcbStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcb-statistic")
    {
        for(auto const & c : pcb_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic>();
        c->parent = this;
        pcb_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::PcbStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pcb_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcb-statistic")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::PcbStatistic()
    :
    pcb_address{YType::int32, "pcb-address"},
    is_paw_socket{YType::boolean, "is-paw-socket"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    receive(std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive>())
	,send(std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send>())
{
    receive->parent = this;

    send->parent = this;

    yang_name = "pcb-statistic"; yang_parent_name = "pcb-statistics";
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::~PcbStatistic()
{
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::has_data() const
{
    return pcb_address.is_set
	|| is_paw_socket.is_set
	|| vrf_id.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcb_address.yfilter)
	|| ydk::is_set(is_paw_socket.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb-statistic" <<"[pcb-address='" <<pcb_address <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcbStatistic' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_address.is_set || is_set(pcb_address.yfilter)) leaf_name_data.push_back(pcb_address.get_name_leafdata());
    if (is_paw_socket.is_set || is_set(is_paw_socket.yfilter)) leaf_name_data.push_back(is_paw_socket.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-address")
    {
        pcb_address = value;
        pcb_address.value_namespace = name_space;
        pcb_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-paw-socket")
    {
        is_paw_socket = value;
        is_paw_socket.value_namespace = name_space;
        is_paw_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-address")
    {
        pcb_address.yfilter = yfilter;
    }
    if(value_path == "is-paw-socket")
    {
        is_paw_socket.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send" || name == "pcb-address" || name == "is-paw-socket" || name == "vrf-id")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::Send()
    :
    failed_queued_net_io_packets{YType::uint32, "failed-queued-net-io-packets"},
    failed_queued_network_packets{YType::uint32, "failed-queued-network-packets"},
    received_application_bytes{YType::uint64, "received-application-bytes"},
    received_xipc_pulses{YType::uint64, "received-xipc-pulses"},
    sent_net_io_packets{YType::uint64, "sent-net-io-packets"},
    sent_network_packets{YType::uint64, "sent-network-packets"}
{
    yang_name = "send"; yang_parent_name = "pcb-statistic";
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::~Send()
{
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::has_data() const
{
    return failed_queued_net_io_packets.is_set
	|| failed_queued_network_packets.is_set
	|| received_application_bytes.is_set
	|| received_xipc_pulses.is_set
	|| sent_net_io_packets.is_set
	|| sent_network_packets.is_set;
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failed_queued_net_io_packets.yfilter)
	|| ydk::is_set(failed_queued_network_packets.yfilter)
	|| ydk::is_set(received_application_bytes.yfilter)
	|| ydk::is_set(received_xipc_pulses.yfilter)
	|| ydk::is_set(sent_net_io_packets.yfilter)
	|| ydk::is_set(sent_network_packets.yfilter);
}

std::string UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failed_queued_net_io_packets.is_set || is_set(failed_queued_net_io_packets.yfilter)) leaf_name_data.push_back(failed_queued_net_io_packets.get_name_leafdata());
    if (failed_queued_network_packets.is_set || is_set(failed_queued_network_packets.yfilter)) leaf_name_data.push_back(failed_queued_network_packets.get_name_leafdata());
    if (received_application_bytes.is_set || is_set(received_application_bytes.yfilter)) leaf_name_data.push_back(received_application_bytes.get_name_leafdata());
    if (received_xipc_pulses.is_set || is_set(received_xipc_pulses.yfilter)) leaf_name_data.push_back(received_xipc_pulses.get_name_leafdata());
    if (sent_net_io_packets.is_set || is_set(sent_net_io_packets.yfilter)) leaf_name_data.push_back(sent_net_io_packets.get_name_leafdata());
    if (sent_network_packets.is_set || is_set(sent_network_packets.yfilter)) leaf_name_data.push_back(sent_network_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failed-queued-net-io-packets")
    {
        failed_queued_net_io_packets = value;
        failed_queued_net_io_packets.value_namespace = name_space;
        failed_queued_net_io_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-queued-network-packets")
    {
        failed_queued_network_packets = value;
        failed_queued_network_packets.value_namespace = name_space;
        failed_queued_network_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-application-bytes")
    {
        received_application_bytes = value;
        received_application_bytes.value_namespace = name_space;
        received_application_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-xipc-pulses")
    {
        received_xipc_pulses = value;
        received_xipc_pulses.value_namespace = name_space;
        received_xipc_pulses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-net-io-packets")
    {
        sent_net_io_packets = value;
        sent_net_io_packets.value_namespace = name_space;
        sent_net_io_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-network-packets")
    {
        sent_network_packets = value;
        sent_network_packets.value_namespace = name_space;
        sent_network_packets.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failed-queued-net-io-packets")
    {
        failed_queued_net_io_packets.yfilter = yfilter;
    }
    if(value_path == "failed-queued-network-packets")
    {
        failed_queued_network_packets.yfilter = yfilter;
    }
    if(value_path == "received-application-bytes")
    {
        received_application_bytes.yfilter = yfilter;
    }
    if(value_path == "received-xipc-pulses")
    {
        received_xipc_pulses.yfilter = yfilter;
    }
    if(value_path == "sent-net-io-packets")
    {
        sent_net_io_packets.yfilter = yfilter;
    }
    if(value_path == "sent-network-packets")
    {
        sent_network_packets.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failed-queued-net-io-packets" || name == "failed-queued-network-packets" || name == "received-application-bytes" || name == "received-xipc-pulses" || name == "sent-net-io-packets" || name == "sent-network-packets")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::Receive()
    :
    failed_queued_application_packets{YType::uint32, "failed-queued-application-packets"},
    failed_queued_application_socket_packets{YType::uint32, "failed-queued-application-socket-packets"},
    queued_application_packets{YType::uint64, "queued-application-packets"},
    queued_application_socket_packets{YType::uint64, "queued-application-socket-packets"},
    received_network_packets{YType::uint64, "received-network-packets"}
{
    yang_name = "receive"; yang_parent_name = "pcb-statistic";
}

UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::~Receive()
{
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::has_data() const
{
    return failed_queued_application_packets.is_set
	|| failed_queued_application_socket_packets.is_set
	|| queued_application_packets.is_set
	|| queued_application_socket_packets.is_set
	|| received_network_packets.is_set;
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failed_queued_application_packets.yfilter)
	|| ydk::is_set(failed_queued_application_socket_packets.yfilter)
	|| ydk::is_set(queued_application_packets.yfilter)
	|| ydk::is_set(queued_application_socket_packets.yfilter)
	|| ydk::is_set(received_network_packets.yfilter);
}

std::string UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failed_queued_application_packets.is_set || is_set(failed_queued_application_packets.yfilter)) leaf_name_data.push_back(failed_queued_application_packets.get_name_leafdata());
    if (failed_queued_application_socket_packets.is_set || is_set(failed_queued_application_socket_packets.yfilter)) leaf_name_data.push_back(failed_queued_application_socket_packets.get_name_leafdata());
    if (queued_application_packets.is_set || is_set(queued_application_packets.yfilter)) leaf_name_data.push_back(queued_application_packets.get_name_leafdata());
    if (queued_application_socket_packets.is_set || is_set(queued_application_socket_packets.yfilter)) leaf_name_data.push_back(queued_application_socket_packets.get_name_leafdata());
    if (received_network_packets.is_set || is_set(received_network_packets.yfilter)) leaf_name_data.push_back(received_network_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failed-queued-application-packets")
    {
        failed_queued_application_packets = value;
        failed_queued_application_packets.value_namespace = name_space;
        failed_queued_application_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-queued-application-socket-packets")
    {
        failed_queued_application_socket_packets = value;
        failed_queued_application_socket_packets.value_namespace = name_space;
        failed_queued_application_socket_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queued-application-packets")
    {
        queued_application_packets = value;
        queued_application_packets.value_namespace = name_space;
        queued_application_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queued-application-socket-packets")
    {
        queued_application_socket_packets = value;
        queued_application_socket_packets.value_namespace = name_space;
        queued_application_socket_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-network-packets")
    {
        received_network_packets = value;
        received_network_packets.value_namespace = name_space;
        received_network_packets.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failed-queued-application-packets")
    {
        failed_queued_application_packets.yfilter = yfilter;
    }
    if(value_path == "failed-queued-application-socket-packets")
    {
        failed_queued_application_socket_packets.yfilter = yfilter;
    }
    if(value_path == "queued-application-packets")
    {
        queued_application_packets.yfilter = yfilter;
    }
    if(value_path == "queued-application-socket-packets")
    {
        queued_application_socket_packets.yfilter = yfilter;
    }
    if(value_path == "received-network-packets")
    {
        received_network_packets.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::Statistics::PcbStatistics::PcbStatistic::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failed-queued-application-packets" || name == "failed-queued-application-socket-packets" || name == "queued-application-packets" || name == "queued-application-socket-packets" || name == "received-network-packets")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Lpts()
    :
    queries(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries>())
{
    queries->parent = this;

    yang_name = "lpts"; yang_parent_name = "node";
}

UdpConnection::Nodes::Node::Lpts::~Lpts()
{
}

bool UdpConnection::Nodes::Node::Lpts::has_data() const
{
    return (queries !=  nullptr && queries->has_data());
}

bool UdpConnection::Nodes::Node::Lpts::has_operation() const
{
    return is_set(yfilter)
	|| (queries !=  nullptr && queries->has_operation());
}

std::string UdpConnection::Nodes::Node::Lpts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lpts' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queries")
    {
        if(queries == nullptr)
        {
            queries = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries>();
        }
        return queries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queries != nullptr)
    {
        children["queries"] = queries;
    }

    return children;
}

void UdpConnection::Nodes::Node::Lpts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::Lpts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::Lpts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queries")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Queries()
{
    yang_name = "queries"; yang_parent_name = "lpts";
}

UdpConnection::Nodes::Node::Lpts::Queries::~Queries()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::has_data() const
{
    for (std::size_t index=0; index<query.size(); index++)
    {
        if(query[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::has_operation() const
{
    for (std::size_t index=0; index<query.size(); index++)
    {
        if(query[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queries";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queries' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        for(auto const & c : query)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query>();
        c->parent = this;
        query.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : query)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::Lpts::Queries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Query()
    :
    query_name{YType::enumeration, "query-name"}
    	,
    pcbs(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs>())
{
    pcbs->parent = this;

    yang_name = "query"; yang_parent_name = "queries";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::~Query()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::has_data() const
{
    return query_name.is_set
	|| (pcbs !=  nullptr && pcbs->has_data());
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_name.yfilter)
	|| (pcbs !=  nullptr && pcbs->has_operation());
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query" <<"[query-name='" <<query_name <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Query' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_name.is_set || is_set(query_name.yfilter)) leaf_name_data.push_back(query_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcbs")
    {
        if(pcbs == nullptr)
        {
            pcbs = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs>();
        }
        return pcbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pcbs != nullptr)
    {
        children["pcbs"] = pcbs;
    }

    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-name")
    {
        query_name = value;
        query_name.value_namespace = name_space;
        query_name.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-name")
    {
        query_name.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcbs" || name == "query-name")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcbs()
{
    yang_name = "pcbs"; yang_parent_name = "query";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::~Pcbs()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::has_data() const
{
    for (std::size_t index=0; index<pcb.size(); index++)
    {
        if(pcb[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::has_operation() const
{
    for (std::size_t index=0; index<pcb.size(); index++)
    {
        if(pcb[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcbs";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcbs' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb>();
        c->parent = this;
        pcb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pcb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcb")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Pcb()
    :
    pcb_address{YType::int32, "pcb-address"},
    foreign_port{YType::uint16, "foreign-port"},
    l4_protocol{YType::uint32, "l4-protocol"},
    local_port{YType::uint16, "local-port"}
    	,
    common(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common>())
	,foreign_address(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress>())
	,local_address(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress>())
{
    common->parent = this;

    foreign_address->parent = this;

    local_address->parent = this;

    yang_name = "pcb"; yang_parent_name = "pcbs";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::~Pcb()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::has_data() const
{
    return pcb_address.is_set
	|| foreign_port.is_set
	|| l4_protocol.is_set
	|| local_port.is_set
	|| (common !=  nullptr && common->has_data())
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcb_address.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(l4_protocol.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb" <<"[pcb-address='" <<pcb_address <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcb' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_address.is_set || is_set(pcb_address.yfilter)) leaf_name_data.push_back(pcb_address.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (l4_protocol.is_set || is_set(l4_protocol.yfilter)) leaf_name_data.push_back(l4_protocol.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common>();
        }
        return common;
    }

    if(child_yang_name == "foreign-address")
    {
        if(foreign_address == nullptr)
        {
            foreign_address = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress>();
        }
        return foreign_address;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress>();
        }
        return local_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::get_children() const
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-address")
    {
        pcb_address = value;
        pcb_address.value_namespace = name_space;
        pcb_address.value_namespace_prefix = name_space_prefix;
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-address")
    {
        pcb_address.yfilter = yfilter;
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "foreign-address" || name == "local-address" || name == "pcb-address" || name == "foreign-port" || name == "l4-protocol" || name == "local-port")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::~LocalAddress()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::ForeignAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "foreign-address"; yang_parent_name = "pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::~ForeignAddress()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForeignAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::ForeignAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::Common()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    lpts_pcb(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb>())
{
    lpts_pcb->parent = this;

    yang_name = "common"; yang_parent_name = "pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::~Common()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::has_data() const
{
    return af_name.is_set
	|| (lpts_pcb !=  nullptr && lpts_pcb->has_data());
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (lpts_pcb !=  nullptr && lpts_pcb->has_operation());
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts-pcb")
    {
        if(lpts_pcb == nullptr)
        {
            lpts_pcb = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb>();
        }
        return lpts_pcb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lpts_pcb != nullptr)
    {
        children["lpts-pcb"] = lpts_pcb;
    }

    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts-pcb" || name == "af-name")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsPcb()
    :
    flow_types_info{YType::uint32, "flow-types-info"},
    ttl{YType::uint8, "ttl"}
    	,
    accept_mask(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask>())
	,lpts_flags(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags>())
	,options(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options>())
{
    accept_mask->parent = this;

    lpts_flags->parent = this;

    options->parent = this;

    yang_name = "lpts-pcb"; yang_parent_name = "common";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::~LptsPcb()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::has_data() const
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::has_operation() const
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

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-pcb";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LptsPcb' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_types_info.is_set || is_set(flow_types_info.yfilter)) leaf_name_data.push_back(flow_types_info.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-mask")
    {
        if(accept_mask == nullptr)
        {
            accept_mask = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask>();
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
        auto c = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "lpts-flags")
    {
        if(lpts_flags == nullptr)
        {
            lpts_flags = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags>();
        }
        return lpts_flags;
    }

    if(child_yang_name == "options")
    {
        if(options == nullptr)
        {
            options = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options>();
        }
        return options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::get_children() const
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mask" || name == "filter" || name == "lpts-flags" || name == "options" || name == "flow-types-info" || name == "ttl")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::Options()
    :
    is_ip_sla{YType::boolean, "is-ip-sla"},
    is_receive_filter{YType::boolean, "is-receive-filter"}
{
    yang_name = "options"; yang_parent_name = "lpts-pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::~Options()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::has_data() const
{
    return is_ip_sla.is_set
	|| is_receive_filter.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ip_sla.yfilter)
	|| ydk::is_set(is_receive_filter.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Options' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ip_sla.is_set || is_set(is_ip_sla.yfilter)) leaf_name_data.push_back(is_ip_sla.get_name_leafdata());
    if (is_receive_filter.is_set || is_set(is_receive_filter.yfilter)) leaf_name_data.push_back(is_receive_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Options::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ip-sla" || name == "is-receive-filter")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::LptsFlags()
    :
    is_ignore_vrf_filter{YType::boolean, "is-ignore-vrf-filter"},
    is_local_address_ignore{YType::boolean, "is-local-address-ignore"},
    is_pcb_bound{YType::boolean, "is-pcb-bound"}
{
    yang_name = "lpts-flags"; yang_parent_name = "lpts-pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::~LptsFlags()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::has_data() const
{
    return is_ignore_vrf_filter.is_set
	|| is_local_address_ignore.is_set
	|| is_pcb_bound.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ignore_vrf_filter.yfilter)
	|| ydk::is_set(is_local_address_ignore.yfilter)
	|| ydk::is_set(is_pcb_bound.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-flags";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LptsFlags' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ignore_vrf_filter.is_set || is_set(is_ignore_vrf_filter.yfilter)) leaf_name_data.push_back(is_ignore_vrf_filter.get_name_leafdata());
    if (is_local_address_ignore.is_set || is_set(is_local_address_ignore.yfilter)) leaf_name_data.push_back(is_local_address_ignore.get_name_leafdata());
    if (is_pcb_bound.is_set || is_set(is_pcb_bound.yfilter)) leaf_name_data.push_back(is_pcb_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::LptsFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ignore-vrf-filter" || name == "is-local-address-ignore" || name == "is-pcb-bound")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::AcceptMask()
    :
    is_interface{YType::boolean, "is-interface"},
    is_local_address{YType::boolean, "is-local-address"},
    is_local_port{YType::boolean, "is-local-port"},
    is_packet_type{YType::boolean, "is-packet-type"},
    is_remote_address{YType::boolean, "is-remote-address"},
    is_remote_port{YType::boolean, "is-remote-port"}
{
    yang_name = "accept-mask"; yang_parent_name = "lpts-pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::~AcceptMask()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::has_data() const
{
    return is_interface.is_set
	|| is_local_address.is_set
	|| is_local_port.is_set
	|| is_packet_type.is_set
	|| is_remote_address.is_set
	|| is_remote_port.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(is_local_address.yfilter)
	|| ydk::is_set(is_local_port.yfilter)
	|| ydk::is_set(is_packet_type.yfilter)
	|| ydk::is_set(is_remote_address.yfilter)
	|| ydk::is_set(is_remote_port.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-mask";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMask' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_local_address.is_set || is_set(is_local_address.yfilter)) leaf_name_data.push_back(is_local_address.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.yfilter)) leaf_name_data.push_back(is_local_port.get_name_leafdata());
    if (is_packet_type.is_set || is_set(is_packet_type.yfilter)) leaf_name_data.push_back(is_packet_type.get_name_leafdata());
    if (is_remote_address.is_set || is_set(is_remote_address.yfilter)) leaf_name_data.push_back(is_remote_address.get_name_leafdata());
    if (is_remote_port.is_set || is_set(is_remote_port.yfilter)) leaf_name_data.push_back(is_remote_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::AcceptMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-interface" || name == "is-local-address" || name == "is-local-port" || name == "is-packet-type" || name == "is-remote-address" || name == "is-remote-port")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::Filter()
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
    local_address(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress>())
	,packet_type(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType>())
	,remote_address(std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress>())
{
    local_address->parent = this;

    packet_type->parent = this;

    remote_address->parent = this;

    yang_name = "filter"; yang_parent_name = "lpts-pcb";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::~Filter()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::has_data() const
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::has_operation() const
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

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Filter' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_types_info.is_set || is_set(flow_types_info.yfilter)) leaf_name_data.push_back(flow_types_info.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_length.is_set || is_set(local_length.yfilter)) leaf_name_data.push_back(local_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (receive_local_port.is_set || is_set(receive_local_port.yfilter)) leaf_name_data.push_back(receive_local_port.get_name_leafdata());
    if (receive_remote_port.is_set || is_set(receive_remote_port.yfilter)) leaf_name_data.push_back(receive_remote_port.get_name_leafdata());
    if (remote_length.is_set || is_set(remote_length.yfilter)) leaf_name_data.push_back(remote_length.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "packet-type")
    {
        if(packet_type == nullptr)
        {
            packet_type = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType>();
        }
        return packet_type;
    }

    if(child_yang_name == "remote-address")
    {
        if(remote_address == nullptr)
        {
            remote_address = std::make_shared<UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress>();
        }
        return remote_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::get_children() const
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "packet-type" || name == "remote-address" || name == "flow-types-info" || name == "interface-name" || name == "local-length" || name == "priority" || name == "receive-local-port" || name == "receive-remote-port" || name == "remote-length" || name == "ttl")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::PacketType()
    :
    icm_pv6_message_type{YType::enumeration, "icm-pv6-message-type"},
    icmp_message_type{YType::enumeration, "icmp-message-type"},
    igmp_message_type{YType::enumeration, "igmp-message-type"},
    message_id{YType::uint32, "message-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "packet-type"; yang_parent_name = "filter";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::~PacketType()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::has_data() const
{
    return icm_pv6_message_type.is_set
	|| icmp_message_type.is_set
	|| igmp_message_type.is_set
	|| message_id.is_set
	|| type.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icm_pv6_message_type.yfilter)
	|| ydk::is_set(icmp_message_type.yfilter)
	|| ydk::is_set(igmp_message_type.yfilter)
	|| ydk::is_set(message_id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketType' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icm_pv6_message_type.is_set || is_set(icm_pv6_message_type.yfilter)) leaf_name_data.push_back(icm_pv6_message_type.get_name_leafdata());
    if (icmp_message_type.is_set || is_set(icmp_message_type.yfilter)) leaf_name_data.push_back(icmp_message_type.get_name_leafdata());
    if (igmp_message_type.is_set || is_set(igmp_message_type.yfilter)) leaf_name_data.push_back(igmp_message_type.get_name_leafdata());
    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::PacketType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icm-pv6-message-type" || name == "icmp-message-type" || name == "igmp-message-type" || name == "message-id" || name == "type")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::RemoteAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "remote-address"; yang_parent_name = "filter";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::~RemoteAddress()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::RemoteAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "filter";
}

UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::~LocalAddress()
{
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::Lpts::Queries::Query::Pcbs::Pcb::Common::LptsPcb::Filter::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetails()
{
    yang_name = "pcb-details"; yang_parent_name = "node";
}

UdpConnection::Nodes::Node::PcbDetails::~PcbDetails()
{
}

bool UdpConnection::Nodes::Node::PcbDetails::has_data() const
{
    for (std::size_t index=0; index<pcb_detail.size(); index++)
    {
        if(pcb_detail[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::Node::PcbDetails::has_operation() const
{
    for (std::size_t index=0; index<pcb_detail.size(); index++)
    {
        if(pcb_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::Node::PcbDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb-details";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcbDetails' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcb-detail")
    {
        for(auto const & c : pcb_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UdpConnection::Nodes::Node::PcbDetails::PcbDetail>();
        c->parent = this;
        pcb_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pcb_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::Node::PcbDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::PcbDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::PcbDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcb-detail")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetail::PcbDetail()
    :
    pcb_address{YType::int32, "pcb-address"},
    af_name{YType::enumeration, "af-name"},
    foreign_port{YType::uint16, "foreign-port"},
    local_port{YType::uint16, "local-port"},
    local_process_id{YType::uint32, "local-process-id"},
    receive_queue{YType::uint32, "receive-queue"},
    send_queue{YType::uint32, "send-queue"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    foreign_address(std::make_shared<UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress>())
	,local_address(std::make_shared<UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress>())
{
    foreign_address->parent = this;

    local_address->parent = this;

    yang_name = "pcb-detail"; yang_parent_name = "pcb-details";
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetail::~PcbDetail()
{
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::has_data() const
{
    return pcb_address.is_set
	|| af_name.is_set
	|| foreign_port.is_set
	|| local_port.is_set
	|| local_process_id.is_set
	|| receive_queue.is_set
	|| send_queue.is_set
	|| vrf_id.is_set
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcb_address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(local_process_id.yfilter)
	|| ydk::is_set(receive_queue.yfilter)
	|| ydk::is_set(send_queue.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string UdpConnection::Nodes::Node::PcbDetails::PcbDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb-detail" <<"[pcb-address='" <<pcb_address <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbDetails::PcbDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcbDetail' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_address.is_set || is_set(pcb_address.yfilter)) leaf_name_data.push_back(pcb_address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (local_process_id.is_set || is_set(local_process_id.yfilter)) leaf_name_data.push_back(local_process_id.get_name_leafdata());
    if (receive_queue.is_set || is_set(receive_queue.yfilter)) leaf_name_data.push_back(receive_queue.get_name_leafdata());
    if (send_queue.is_set || is_set(send_queue.yfilter)) leaf_name_data.push_back(send_queue.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbDetails::PcbDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-address")
    {
        if(foreign_address == nullptr)
        {
            foreign_address = std::make_shared<UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress>();
        }
        return foreign_address;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress>();
        }
        return local_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbDetails::PcbDetail::get_children() const
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

void UdpConnection::Nodes::Node::PcbDetails::PcbDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-address")
    {
        pcb_address = value;
        pcb_address.value_namespace = name_space;
        pcb_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-process-id")
    {
        local_process_id = value;
        local_process_id.value_namespace = name_space;
        local_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-queue")
    {
        receive_queue = value;
        receive_queue.value_namespace = name_space;
        receive_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue")
    {
        send_queue = value;
        send_queue.value_namespace = name_space;
        send_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::PcbDetails::PcbDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-address")
    {
        pcb_address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "local-process-id")
    {
        local_process_id.yfilter = yfilter;
    }
    if(value_path == "receive-queue")
    {
        receive_queue.yfilter = yfilter;
    }
    if(value_path == "send-queue")
    {
        send_queue.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-address" || name == "local-address" || name == "pcb-address" || name == "af-name" || name == "foreign-port" || name == "local-port" || name == "local-process-id" || name == "receive-queue" || name == "send-queue" || name == "vrf-id")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "pcb-detail";
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::~LocalAddress()
{
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::ForeignAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "foreign-address"; yang_parent_name = "pcb-detail";
}

UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::~ForeignAddress()
{
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForeignAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::PcbDetails::PcbDetail::ForeignAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBriefs()
{
    yang_name = "pcb-briefs"; yang_parent_name = "node";
}

UdpConnection::Nodes::Node::PcbBriefs::~PcbBriefs()
{
}

bool UdpConnection::Nodes::Node::PcbBriefs::has_data() const
{
    for (std::size_t index=0; index<pcb_brief.size(); index++)
    {
        if(pcb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool UdpConnection::Nodes::Node::PcbBriefs::has_operation() const
{
    for (std::size_t index=0; index<pcb_brief.size(); index++)
    {
        if(pcb_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpConnection::Nodes::Node::PcbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb-briefs";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcbBriefs' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcb-brief")
    {
        for(auto const & c : pcb_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UdpConnection::Nodes::Node::PcbBriefs::PcbBrief>();
        c->parent = this;
        pcb_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pcb_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpConnection::Nodes::Node::PcbBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpConnection::Nodes::Node::PcbBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpConnection::Nodes::Node::PcbBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcb-brief")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::PcbBrief()
    :
    pcb_address{YType::int32, "pcb-address"},
    af_name{YType::enumeration, "af-name"},
    foreign_port{YType::uint16, "foreign-port"},
    local_port{YType::uint16, "local-port"},
    receive_queue{YType::uint32, "receive-queue"},
    send_queue{YType::uint32, "send-queue"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    foreign_address(std::make_shared<UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress>())
	,local_address(std::make_shared<UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress>())
{
    foreign_address->parent = this;

    local_address->parent = this;

    yang_name = "pcb-brief"; yang_parent_name = "pcb-briefs";
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::~PcbBrief()
{
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::has_data() const
{
    return pcb_address.is_set
	|| af_name.is_set
	|| foreign_port.is_set
	|| local_port.is_set
	|| receive_queue.is_set
	|| send_queue.is_set
	|| vrf_id.is_set
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcb_address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(receive_queue.yfilter)
	|| ydk::is_set(send_queue.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb-brief" <<"[pcb-address='" <<pcb_address <<"']";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcbBrief' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcb_address.is_set || is_set(pcb_address.yfilter)) leaf_name_data.push_back(pcb_address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (receive_queue.is_set || is_set(receive_queue.yfilter)) leaf_name_data.push_back(receive_queue.get_name_leafdata());
    if (send_queue.is_set || is_set(send_queue.yfilter)) leaf_name_data.push_back(send_queue.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign-address")
    {
        if(foreign_address == nullptr)
        {
            foreign_address = std::make_shared<UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress>();
        }
        return foreign_address;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress>();
        }
        return local_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::get_children() const
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

void UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcb-address")
    {
        pcb_address = value;
        pcb_address.value_namespace = name_space;
        pcb_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-queue")
    {
        receive_queue = value;
        receive_queue.value_namespace = name_space;
        receive_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue")
    {
        send_queue = value;
        send_queue.value_namespace = name_space;
        send_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcb-address")
    {
        pcb_address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "receive-queue")
    {
        receive_queue.yfilter = yfilter;
    }
    if(value_path == "send-queue")
    {
        send_queue.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign-address" || name == "local-address" || name == "pcb-address" || name == "af-name" || name == "foreign-port" || name == "local-port" || name == "receive-queue" || name == "send-queue" || name == "vrf-id")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::LocalAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "pcb-brief";
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::~LocalAddress()
{
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::ForeignAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "foreign-address"; yang_parent_name = "pcb-brief";
}

UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::~ForeignAddress()
{
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";

    return path_buffer.str();

}

const EntityPath UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForeignAddress' in Cisco_IOS_XR_ip_udp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpConnection::Nodes::Node::PcbBriefs::PcbBrief::ForeignAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

const Enum::YLeaf Packet::icmp {0, "icmp"};
const Enum::YLeaf Packet::icm_pv6 {1, "icm-pv6"};
const Enum::YLeaf Packet::igmp {2, "igmp"};
const Enum::YLeaf Packet::unknown {3, "unknown"};

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

const Enum::YLeaf AddrFamily::unspecified {0, "unspecified"};
const Enum::YLeaf AddrFamily::local {1, "local"};
const Enum::YLeaf AddrFamily::inet {2, "inet"};
const Enum::YLeaf AddrFamily::implink {3, "implink"};
const Enum::YLeaf AddrFamily::pup {4, "pup"};
const Enum::YLeaf AddrFamily::chaos {5, "chaos"};
const Enum::YLeaf AddrFamily::ns {6, "ns"};
const Enum::YLeaf AddrFamily::iso {7, "iso"};
const Enum::YLeaf AddrFamily::ecma {8, "ecma"};
const Enum::YLeaf AddrFamily::data_kit {9, "data-kit"};
const Enum::YLeaf AddrFamily::ccitt {10, "ccitt"};
const Enum::YLeaf AddrFamily::sna {11, "sna"};
const Enum::YLeaf AddrFamily::de_cnet {12, "de-cnet"};
const Enum::YLeaf AddrFamily::dli {13, "dli"};
const Enum::YLeaf AddrFamily::lat {14, "lat"};
const Enum::YLeaf AddrFamily::hylink {15, "hylink"};
const Enum::YLeaf AddrFamily::appletalk {16, "appletalk"};
const Enum::YLeaf AddrFamily::route {17, "route"};
const Enum::YLeaf AddrFamily::link {18, "link"};
const Enum::YLeaf AddrFamily::pseudo_xtp {19, "pseudo-xtp"};
const Enum::YLeaf AddrFamily::coip {20, "coip"};
const Enum::YLeaf AddrFamily::cnt {21, "cnt"};
const Enum::YLeaf AddrFamily::pseudo_rtip {22, "pseudo-rtip"};
const Enum::YLeaf AddrFamily::ipx {23, "ipx"};
const Enum::YLeaf AddrFamily::sip {24, "sip"};
const Enum::YLeaf AddrFamily::pseudo_pip {25, "pseudo-pip"};
const Enum::YLeaf AddrFamily::inet6 {26, "inet6"};
const Enum::YLeaf AddrFamily::snap {27, "snap"};
const Enum::YLeaf AddrFamily::clnl {28, "clnl"};
const Enum::YLeaf AddrFamily::chdlc {29, "chdlc"};
const Enum::YLeaf AddrFamily::ppp {30, "ppp"};
const Enum::YLeaf AddrFamily::host_cas {31, "host-cas"};
const Enum::YLeaf AddrFamily::dsp {32, "dsp"};
const Enum::YLeaf AddrFamily::sap {33, "sap"};
const Enum::YLeaf AddrFamily::atm {34, "atm"};
const Enum::YLeaf AddrFamily::fr {35, "fr"};
const Enum::YLeaf AddrFamily::mso {36, "mso"};
const Enum::YLeaf AddrFamily::dchan {37, "dchan"};
const Enum::YLeaf AddrFamily::cas {38, "cas"};
const Enum::YLeaf AddrFamily::nat {39, "nat"};
const Enum::YLeaf AddrFamily::ether {40, "ether"};
const Enum::YLeaf AddrFamily::srp {41, "srp"};

const Enum::YLeaf UdpAddressFamily::ipv4 {2, "ipv4"};
const Enum::YLeaf UdpAddressFamily::ipv6 {10, "ipv6"};

const Enum::YLeaf LptsPcbQuery::all {0, "all"};
const Enum::YLeaf LptsPcbQuery::static_policy {1, "static-policy"};
const Enum::YLeaf LptsPcbQuery::interface {2, "interface"};
const Enum::YLeaf LptsPcbQuery::packet {3, "packet"};

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


}
}

