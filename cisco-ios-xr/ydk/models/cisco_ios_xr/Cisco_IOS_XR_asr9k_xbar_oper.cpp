
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_xbar_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_xbar_oper {

CrossBarStats::CrossBarStats()
    :
    nodes(std::make_shared<CrossBarStats::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "cross-bar-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-xbar-oper";
}

CrossBarStats::~CrossBarStats()
{
}

bool CrossBarStats::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool CrossBarStats::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string CrossBarStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<CrossBarStats::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void CrossBarStats::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CrossBarStats::clone_ptr() const
{
    return std::make_shared<CrossBarStats>();
}

std::string CrossBarStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CrossBarStats::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CrossBarStats::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

CrossBarStats::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "cross-bar-stats";
}

CrossBarStats::Nodes::~Nodes()
{
}

bool CrossBarStats::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CrossBarStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<CrossBarStats::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void CrossBarStats::Nodes::set_value(const std::string & value_path, std::string value)
{
}

CrossBarStats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    cross_bar_table(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable>())
{
    cross_bar_table->parent = this;
    children["cross-bar-table"] = cross_bar_table;

    yang_name = "node"; yang_parent_name = "nodes";
}

CrossBarStats::Nodes::Node::~Node()
{
}

bool CrossBarStats::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (cross_bar_table !=  nullptr && cross_bar_table->has_data());
}

bool CrossBarStats::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (cross_bar_table !=  nullptr && cross_bar_table->has_operation());
}

std::string CrossBarStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cross-bar-table")
    {
        if(cross_bar_table != nullptr)
        {
            children["cross-bar-table"] = cross_bar_table;
        }
        else
        {
            cross_bar_table = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable>();
            cross_bar_table->parent = this;
            children["cross-bar-table"] = cross_bar_table;
        }
        return children.at("cross-bar-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::get_children()
{
    if(children.find("cross-bar-table") == children.end())
    {
        if(cross_bar_table != nullptr)
        {
            children["cross-bar-table"] = cross_bar_table;
        }
    }

    return children;
}

void CrossBarStats::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::CrossBarTable()
    :
    pkt_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats>())
	,sm15_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats>())
{
    pkt_stats->parent = this;
    children["pkt-stats"] = pkt_stats;

    sm15_stats->parent = this;
    children["sm15-stats"] = sm15_stats;

    yang_name = "cross-bar-table"; yang_parent_name = "node";
}

CrossBarStats::Nodes::Node::CrossBarTable::~CrossBarTable()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::has_data() const
{
    return (pkt_stats !=  nullptr && pkt_stats->has_data())
	|| (sm15_stats !=  nullptr && sm15_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::has_operation() const
{
    return is_set(operation)
	|| (pkt_stats !=  nullptr && pkt_stats->has_operation())
	|| (sm15_stats !=  nullptr && sm15_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-bar-table";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrossBarTable' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pkt-stats")
    {
        if(pkt_stats != nullptr)
        {
            children["pkt-stats"] = pkt_stats;
        }
        else
        {
            pkt_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats>();
            pkt_stats->parent = this;
            children["pkt-stats"] = pkt_stats;
        }
        return children.at("pkt-stats");
    }

    if(child_yang_name == "sm15-stats")
    {
        if(sm15_stats != nullptr)
        {
            children["sm15-stats"] = sm15_stats;
        }
        else
        {
            sm15_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats>();
            sm15_stats->parent = this;
            children["sm15-stats"] = sm15_stats;
        }
        return children.at("sm15-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::get_children()
{
    if(children.find("pkt-stats") == children.end())
    {
        if(pkt_stats != nullptr)
        {
            children["pkt-stats"] = pkt_stats;
        }
    }

    if(children.find("sm15-stats") == children.end())
    {
        if(sm15_stats != nullptr)
        {
            children["sm15-stats"] = sm15_stats;
        }
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::set_value(const std::string & value_path, std::string value)
{
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStats()
{
    yang_name = "pkt-stats"; yang_parent_name = "cross-bar-table";
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::~PktStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::has_data() const
{
    for (std::size_t index=0; index<pkt_stat.size(); index++)
    {
        if(pkt_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::has_operation() const
{
    for (std::size_t index=0; index<pkt_stat.size(); index++)
    {
        if(pkt_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PktStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pkt-stat")
    {
        for(auto const & c : pkt_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat>();
        c->parent = this;
        pkt_stat.push_back(std::move(c));
        children[segment_path] = pkt_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_children()
{
    for (auto const & c : pkt_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::set_value(const std::string & value_path, std::string value)
{
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::PktStat()
    :
    asic_id{YType::str, "asic-id"},
    diagnostic_packet_count_high{YType::uint64, "diagnostic-packet-count-high"},
    diagnostic_packet_count_low{YType::uint64, "diagnostic-packet-count-low"},
    egress_channel_utilization_count_high{YType::uint64, "egress-channel-utilization-count-high"},
    egress_channel_utilization_count_low{YType::uint64, "egress-channel-utilization-count-low"},
    egress_packet_count_since_last_read_high{YType::uint64, "egress-packet-count-since-last-read-high"},
    egress_packet_count_since_last_read_low{YType::uint64, "egress-packet-count-since-last-read-low"},
    fpoedb_correctable_ecc_error_count_high{YType::uint64, "fpoedb-correctable-ecc-error-count-high"},
    fpoedb_correctable_ecc_error_count_low{YType::uint64, "fpoedb-correctable-ecc-error-count-low"},
    fpoedb_uncorrectable_ecc_error_count_high{YType::uint64, "fpoedb-uncorrectable-ecc-error-count-high"},
    fpoedb_uncorrectable_ecc_error_count_low{YType::uint64, "fpoedb-uncorrectable-ecc-error-count-low"},
    header_crc_error_count_high{YType::uint64, "header-crc-error-count-high"},
    header_crc_error_count_low{YType::uint64, "header-crc-error-count-low"},
    holdrop_count_high{YType::uint64, "holdrop-count-high"},
    holdrop_count_low{YType::uint64, "holdrop-count-low"},
    ingress_channel_utilization_count_high{YType::uint64, "ingress-channel-utilization-count-high"},
    ingress_channel_utilization_count_low{YType::uint64, "ingress-channel-utilization-count-low"},
    ingress_packet_count_since_last_read_high{YType::uint64, "ingress-packet-count-since-last-read-high"},
    ingress_packet_count_since_last_read_low{YType::uint64, "ingress-packet-count-since-last-read-low"},
    input_buffer_back_pressure_count_high{YType::uint64, "input-buffer-back-pressure-count-high"},
    input_buffer_back_pressure_count_low{YType::uint64, "input-buffer-back-pressure-count-low"},
    input_buffer_correctable_ecc_error_count_high{YType::uint64, "input-buffer-correctable-ecc-error-count-high"},
    input_buffer_correctable_ecc_error_count_low{YType::uint64, "input-buffer-correctable-ecc-error-count-low"},
    input_buffer_queued_packet_count_high{YType::uint64, "input-buffer-queued-packet-count-high"},
    input_buffer_queued_packet_count_low{YType::uint64, "input-buffer-queued-packet-count-low"},
    input_buffer_uncorrectable_ecc_error_count_high{YType::uint64, "input-buffer-uncorrectable-ecc-error-count-high"},
    input_buffer_uncorrectable_ecc_error_count_low{YType::uint64, "input-buffer-uncorrectable-ecc-error-count-low"},
    internal_error_count{YType::uint64, "internal-error-count"},
    null_fpoe_drop_count_high{YType::uint64, "null-fpoe-drop-count-high"},
    null_fpoe_drop_count_low{YType::uint64, "null-fpoe-drop-count-low"},
    output_buffer_back_pressure_count_high{YType::uint64, "output-buffer-back-pressure-count-high"},
    output_buffer_back_pressure_count_low{YType::uint64, "output-buffer-back-pressure-count-low"},
    output_buffer_correctable_ecc_error_count_high{YType::uint64, "output-buffer-correctable-ecc-error-count-high"},
    output_buffer_correctable_ecc_error_count_low{YType::uint64, "output-buffer-correctable-ecc-error-count-low"},
    output_buffer_queued_packet_count_high{YType::uint64, "output-buffer-queued-packet-count-high"},
    output_buffer_queued_packet_count_low{YType::uint64, "output-buffer-queued-packet-count-low"},
    output_buffer_uncorrectable_ecc_error_count_high{YType::uint64, "output-buffer-uncorrectable-ecc-error-count-high"},
    output_buffer_uncorrectable_ecc_error_count_low{YType::uint64, "output-buffer-uncorrectable-ecc-error-count-low"},
    packet_crc_error_count_high{YType::uint64, "packet-crc-error-count-high"},
    packet_crc_error_count_low{YType::uint64, "packet-crc-error-count-low"},
    port{YType::str, "port"},
    short_input_header_error_count_high{YType::uint64, "short-input-header-error-count-high"},
    short_input_header_error_count_low{YType::uint64, "short-input-header-error-count-low"},
    short_packet_error_count_high{YType::uint64, "short-packet-error-count-high"},
    short_packet_error_count_low{YType::uint64, "short-packet-error-count-low"},
    xbar_timeout_drop_count_high{YType::uint64, "xbar-timeout-drop-count-high"},
    xbar_timeout_drop_count_low{YType::uint64, "xbar-timeout-drop-count-low"}
{
    yang_name = "pkt-stat"; yang_parent_name = "pkt-stats";
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::~PktStat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_data() const
{
    return asic_id.is_set
	|| diagnostic_packet_count_high.is_set
	|| diagnostic_packet_count_low.is_set
	|| egress_channel_utilization_count_high.is_set
	|| egress_channel_utilization_count_low.is_set
	|| egress_packet_count_since_last_read_high.is_set
	|| egress_packet_count_since_last_read_low.is_set
	|| fpoedb_correctable_ecc_error_count_high.is_set
	|| fpoedb_correctable_ecc_error_count_low.is_set
	|| fpoedb_uncorrectable_ecc_error_count_high.is_set
	|| fpoedb_uncorrectable_ecc_error_count_low.is_set
	|| header_crc_error_count_high.is_set
	|| header_crc_error_count_low.is_set
	|| holdrop_count_high.is_set
	|| holdrop_count_low.is_set
	|| ingress_channel_utilization_count_high.is_set
	|| ingress_channel_utilization_count_low.is_set
	|| ingress_packet_count_since_last_read_high.is_set
	|| ingress_packet_count_since_last_read_low.is_set
	|| input_buffer_back_pressure_count_high.is_set
	|| input_buffer_back_pressure_count_low.is_set
	|| input_buffer_correctable_ecc_error_count_high.is_set
	|| input_buffer_correctable_ecc_error_count_low.is_set
	|| input_buffer_queued_packet_count_high.is_set
	|| input_buffer_queued_packet_count_low.is_set
	|| input_buffer_uncorrectable_ecc_error_count_high.is_set
	|| input_buffer_uncorrectable_ecc_error_count_low.is_set
	|| internal_error_count.is_set
	|| null_fpoe_drop_count_high.is_set
	|| null_fpoe_drop_count_low.is_set
	|| output_buffer_back_pressure_count_high.is_set
	|| output_buffer_back_pressure_count_low.is_set
	|| output_buffer_correctable_ecc_error_count_high.is_set
	|| output_buffer_correctable_ecc_error_count_low.is_set
	|| output_buffer_queued_packet_count_high.is_set
	|| output_buffer_queued_packet_count_low.is_set
	|| output_buffer_uncorrectable_ecc_error_count_high.is_set
	|| output_buffer_uncorrectable_ecc_error_count_low.is_set
	|| packet_crc_error_count_high.is_set
	|| packet_crc_error_count_low.is_set
	|| port.is_set
	|| short_input_header_error_count_high.is_set
	|| short_input_header_error_count_low.is_set
	|| short_packet_error_count_high.is_set
	|| short_packet_error_count_low.is_set
	|| xbar_timeout_drop_count_high.is_set
	|| xbar_timeout_drop_count_low.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_id.operation)
	|| is_set(diagnostic_packet_count_high.operation)
	|| is_set(diagnostic_packet_count_low.operation)
	|| is_set(egress_channel_utilization_count_high.operation)
	|| is_set(egress_channel_utilization_count_low.operation)
	|| is_set(egress_packet_count_since_last_read_high.operation)
	|| is_set(egress_packet_count_since_last_read_low.operation)
	|| is_set(fpoedb_correctable_ecc_error_count_high.operation)
	|| is_set(fpoedb_correctable_ecc_error_count_low.operation)
	|| is_set(fpoedb_uncorrectable_ecc_error_count_high.operation)
	|| is_set(fpoedb_uncorrectable_ecc_error_count_low.operation)
	|| is_set(header_crc_error_count_high.operation)
	|| is_set(header_crc_error_count_low.operation)
	|| is_set(holdrop_count_high.operation)
	|| is_set(holdrop_count_low.operation)
	|| is_set(ingress_channel_utilization_count_high.operation)
	|| is_set(ingress_channel_utilization_count_low.operation)
	|| is_set(ingress_packet_count_since_last_read_high.operation)
	|| is_set(ingress_packet_count_since_last_read_low.operation)
	|| is_set(input_buffer_back_pressure_count_high.operation)
	|| is_set(input_buffer_back_pressure_count_low.operation)
	|| is_set(input_buffer_correctable_ecc_error_count_high.operation)
	|| is_set(input_buffer_correctable_ecc_error_count_low.operation)
	|| is_set(input_buffer_queued_packet_count_high.operation)
	|| is_set(input_buffer_queued_packet_count_low.operation)
	|| is_set(input_buffer_uncorrectable_ecc_error_count_high.operation)
	|| is_set(input_buffer_uncorrectable_ecc_error_count_low.operation)
	|| is_set(internal_error_count.operation)
	|| is_set(null_fpoe_drop_count_high.operation)
	|| is_set(null_fpoe_drop_count_low.operation)
	|| is_set(output_buffer_back_pressure_count_high.operation)
	|| is_set(output_buffer_back_pressure_count_low.operation)
	|| is_set(output_buffer_correctable_ecc_error_count_high.operation)
	|| is_set(output_buffer_correctable_ecc_error_count_low.operation)
	|| is_set(output_buffer_queued_packet_count_high.operation)
	|| is_set(output_buffer_queued_packet_count_low.operation)
	|| is_set(output_buffer_uncorrectable_ecc_error_count_high.operation)
	|| is_set(output_buffer_uncorrectable_ecc_error_count_low.operation)
	|| is_set(packet_crc_error_count_high.operation)
	|| is_set(packet_crc_error_count_low.operation)
	|| is_set(port.operation)
	|| is_set(short_input_header_error_count_high.operation)
	|| is_set(short_input_header_error_count_low.operation)
	|| is_set(short_packet_error_count_high.operation)
	|| is_set(short_packet_error_count_low.operation)
	|| is_set(xbar_timeout_drop_count_high.operation)
	|| is_set(xbar_timeout_drop_count_low.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-stat";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PktStat' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.operation)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (diagnostic_packet_count_high.is_set || is_set(diagnostic_packet_count_high.operation)) leaf_name_data.push_back(diagnostic_packet_count_high.get_name_leafdata());
    if (diagnostic_packet_count_low.is_set || is_set(diagnostic_packet_count_low.operation)) leaf_name_data.push_back(diagnostic_packet_count_low.get_name_leafdata());
    if (egress_channel_utilization_count_high.is_set || is_set(egress_channel_utilization_count_high.operation)) leaf_name_data.push_back(egress_channel_utilization_count_high.get_name_leafdata());
    if (egress_channel_utilization_count_low.is_set || is_set(egress_channel_utilization_count_low.operation)) leaf_name_data.push_back(egress_channel_utilization_count_low.get_name_leafdata());
    if (egress_packet_count_since_last_read_high.is_set || is_set(egress_packet_count_since_last_read_high.operation)) leaf_name_data.push_back(egress_packet_count_since_last_read_high.get_name_leafdata());
    if (egress_packet_count_since_last_read_low.is_set || is_set(egress_packet_count_since_last_read_low.operation)) leaf_name_data.push_back(egress_packet_count_since_last_read_low.get_name_leafdata());
    if (fpoedb_correctable_ecc_error_count_high.is_set || is_set(fpoedb_correctable_ecc_error_count_high.operation)) leaf_name_data.push_back(fpoedb_correctable_ecc_error_count_high.get_name_leafdata());
    if (fpoedb_correctable_ecc_error_count_low.is_set || is_set(fpoedb_correctable_ecc_error_count_low.operation)) leaf_name_data.push_back(fpoedb_correctable_ecc_error_count_low.get_name_leafdata());
    if (fpoedb_uncorrectable_ecc_error_count_high.is_set || is_set(fpoedb_uncorrectable_ecc_error_count_high.operation)) leaf_name_data.push_back(fpoedb_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (fpoedb_uncorrectable_ecc_error_count_low.is_set || is_set(fpoedb_uncorrectable_ecc_error_count_low.operation)) leaf_name_data.push_back(fpoedb_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (header_crc_error_count_high.is_set || is_set(header_crc_error_count_high.operation)) leaf_name_data.push_back(header_crc_error_count_high.get_name_leafdata());
    if (header_crc_error_count_low.is_set || is_set(header_crc_error_count_low.operation)) leaf_name_data.push_back(header_crc_error_count_low.get_name_leafdata());
    if (holdrop_count_high.is_set || is_set(holdrop_count_high.operation)) leaf_name_data.push_back(holdrop_count_high.get_name_leafdata());
    if (holdrop_count_low.is_set || is_set(holdrop_count_low.operation)) leaf_name_data.push_back(holdrop_count_low.get_name_leafdata());
    if (ingress_channel_utilization_count_high.is_set || is_set(ingress_channel_utilization_count_high.operation)) leaf_name_data.push_back(ingress_channel_utilization_count_high.get_name_leafdata());
    if (ingress_channel_utilization_count_low.is_set || is_set(ingress_channel_utilization_count_low.operation)) leaf_name_data.push_back(ingress_channel_utilization_count_low.get_name_leafdata());
    if (ingress_packet_count_since_last_read_high.is_set || is_set(ingress_packet_count_since_last_read_high.operation)) leaf_name_data.push_back(ingress_packet_count_since_last_read_high.get_name_leafdata());
    if (ingress_packet_count_since_last_read_low.is_set || is_set(ingress_packet_count_since_last_read_low.operation)) leaf_name_data.push_back(ingress_packet_count_since_last_read_low.get_name_leafdata());
    if (input_buffer_back_pressure_count_high.is_set || is_set(input_buffer_back_pressure_count_high.operation)) leaf_name_data.push_back(input_buffer_back_pressure_count_high.get_name_leafdata());
    if (input_buffer_back_pressure_count_low.is_set || is_set(input_buffer_back_pressure_count_low.operation)) leaf_name_data.push_back(input_buffer_back_pressure_count_low.get_name_leafdata());
    if (input_buffer_correctable_ecc_error_count_high.is_set || is_set(input_buffer_correctable_ecc_error_count_high.operation)) leaf_name_data.push_back(input_buffer_correctable_ecc_error_count_high.get_name_leafdata());
    if (input_buffer_correctable_ecc_error_count_low.is_set || is_set(input_buffer_correctable_ecc_error_count_low.operation)) leaf_name_data.push_back(input_buffer_correctable_ecc_error_count_low.get_name_leafdata());
    if (input_buffer_queued_packet_count_high.is_set || is_set(input_buffer_queued_packet_count_high.operation)) leaf_name_data.push_back(input_buffer_queued_packet_count_high.get_name_leafdata());
    if (input_buffer_queued_packet_count_low.is_set || is_set(input_buffer_queued_packet_count_low.operation)) leaf_name_data.push_back(input_buffer_queued_packet_count_low.get_name_leafdata());
    if (input_buffer_uncorrectable_ecc_error_count_high.is_set || is_set(input_buffer_uncorrectable_ecc_error_count_high.operation)) leaf_name_data.push_back(input_buffer_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (input_buffer_uncorrectable_ecc_error_count_low.is_set || is_set(input_buffer_uncorrectable_ecc_error_count_low.operation)) leaf_name_data.push_back(input_buffer_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.operation)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (null_fpoe_drop_count_high.is_set || is_set(null_fpoe_drop_count_high.operation)) leaf_name_data.push_back(null_fpoe_drop_count_high.get_name_leafdata());
    if (null_fpoe_drop_count_low.is_set || is_set(null_fpoe_drop_count_low.operation)) leaf_name_data.push_back(null_fpoe_drop_count_low.get_name_leafdata());
    if (output_buffer_back_pressure_count_high.is_set || is_set(output_buffer_back_pressure_count_high.operation)) leaf_name_data.push_back(output_buffer_back_pressure_count_high.get_name_leafdata());
    if (output_buffer_back_pressure_count_low.is_set || is_set(output_buffer_back_pressure_count_low.operation)) leaf_name_data.push_back(output_buffer_back_pressure_count_low.get_name_leafdata());
    if (output_buffer_correctable_ecc_error_count_high.is_set || is_set(output_buffer_correctable_ecc_error_count_high.operation)) leaf_name_data.push_back(output_buffer_correctable_ecc_error_count_high.get_name_leafdata());
    if (output_buffer_correctable_ecc_error_count_low.is_set || is_set(output_buffer_correctable_ecc_error_count_low.operation)) leaf_name_data.push_back(output_buffer_correctable_ecc_error_count_low.get_name_leafdata());
    if (output_buffer_queued_packet_count_high.is_set || is_set(output_buffer_queued_packet_count_high.operation)) leaf_name_data.push_back(output_buffer_queued_packet_count_high.get_name_leafdata());
    if (output_buffer_queued_packet_count_low.is_set || is_set(output_buffer_queued_packet_count_low.operation)) leaf_name_data.push_back(output_buffer_queued_packet_count_low.get_name_leafdata());
    if (output_buffer_uncorrectable_ecc_error_count_high.is_set || is_set(output_buffer_uncorrectable_ecc_error_count_high.operation)) leaf_name_data.push_back(output_buffer_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (output_buffer_uncorrectable_ecc_error_count_low.is_set || is_set(output_buffer_uncorrectable_ecc_error_count_low.operation)) leaf_name_data.push_back(output_buffer_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (packet_crc_error_count_high.is_set || is_set(packet_crc_error_count_high.operation)) leaf_name_data.push_back(packet_crc_error_count_high.get_name_leafdata());
    if (packet_crc_error_count_low.is_set || is_set(packet_crc_error_count_low.operation)) leaf_name_data.push_back(packet_crc_error_count_low.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (short_input_header_error_count_high.is_set || is_set(short_input_header_error_count_high.operation)) leaf_name_data.push_back(short_input_header_error_count_high.get_name_leafdata());
    if (short_input_header_error_count_low.is_set || is_set(short_input_header_error_count_low.operation)) leaf_name_data.push_back(short_input_header_error_count_low.get_name_leafdata());
    if (short_packet_error_count_high.is_set || is_set(short_packet_error_count_high.operation)) leaf_name_data.push_back(short_packet_error_count_high.get_name_leafdata());
    if (short_packet_error_count_low.is_set || is_set(short_packet_error_count_low.operation)) leaf_name_data.push_back(short_packet_error_count_low.get_name_leafdata());
    if (xbar_timeout_drop_count_high.is_set || is_set(xbar_timeout_drop_count_high.operation)) leaf_name_data.push_back(xbar_timeout_drop_count_high.get_name_leafdata());
    if (xbar_timeout_drop_count_low.is_set || is_set(xbar_timeout_drop_count_low.operation)) leaf_name_data.push_back(xbar_timeout_drop_count_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
    }
    if(value_path == "diagnostic-packet-count-high")
    {
        diagnostic_packet_count_high = value;
    }
    if(value_path == "diagnostic-packet-count-low")
    {
        diagnostic_packet_count_low = value;
    }
    if(value_path == "egress-channel-utilization-count-high")
    {
        egress_channel_utilization_count_high = value;
    }
    if(value_path == "egress-channel-utilization-count-low")
    {
        egress_channel_utilization_count_low = value;
    }
    if(value_path == "egress-packet-count-since-last-read-high")
    {
        egress_packet_count_since_last_read_high = value;
    }
    if(value_path == "egress-packet-count-since-last-read-low")
    {
        egress_packet_count_since_last_read_low = value;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-high")
    {
        fpoedb_correctable_ecc_error_count_high = value;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-low")
    {
        fpoedb_correctable_ecc_error_count_low = value;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-high")
    {
        fpoedb_uncorrectable_ecc_error_count_high = value;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-low")
    {
        fpoedb_uncorrectable_ecc_error_count_low = value;
    }
    if(value_path == "header-crc-error-count-high")
    {
        header_crc_error_count_high = value;
    }
    if(value_path == "header-crc-error-count-low")
    {
        header_crc_error_count_low = value;
    }
    if(value_path == "holdrop-count-high")
    {
        holdrop_count_high = value;
    }
    if(value_path == "holdrop-count-low")
    {
        holdrop_count_low = value;
    }
    if(value_path == "ingress-channel-utilization-count-high")
    {
        ingress_channel_utilization_count_high = value;
    }
    if(value_path == "ingress-channel-utilization-count-low")
    {
        ingress_channel_utilization_count_low = value;
    }
    if(value_path == "ingress-packet-count-since-last-read-high")
    {
        ingress_packet_count_since_last_read_high = value;
    }
    if(value_path == "ingress-packet-count-since-last-read-low")
    {
        ingress_packet_count_since_last_read_low = value;
    }
    if(value_path == "input-buffer-back-pressure-count-high")
    {
        input_buffer_back_pressure_count_high = value;
    }
    if(value_path == "input-buffer-back-pressure-count-low")
    {
        input_buffer_back_pressure_count_low = value;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-high")
    {
        input_buffer_correctable_ecc_error_count_high = value;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-low")
    {
        input_buffer_correctable_ecc_error_count_low = value;
    }
    if(value_path == "input-buffer-queued-packet-count-high")
    {
        input_buffer_queued_packet_count_high = value;
    }
    if(value_path == "input-buffer-queued-packet-count-low")
    {
        input_buffer_queued_packet_count_low = value;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-high")
    {
        input_buffer_uncorrectable_ecc_error_count_high = value;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-low")
    {
        input_buffer_uncorrectable_ecc_error_count_low = value;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
    }
    if(value_path == "null-fpoe-drop-count-high")
    {
        null_fpoe_drop_count_high = value;
    }
    if(value_path == "null-fpoe-drop-count-low")
    {
        null_fpoe_drop_count_low = value;
    }
    if(value_path == "output-buffer-back-pressure-count-high")
    {
        output_buffer_back_pressure_count_high = value;
    }
    if(value_path == "output-buffer-back-pressure-count-low")
    {
        output_buffer_back_pressure_count_low = value;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-high")
    {
        output_buffer_correctable_ecc_error_count_high = value;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-low")
    {
        output_buffer_correctable_ecc_error_count_low = value;
    }
    if(value_path == "output-buffer-queued-packet-count-high")
    {
        output_buffer_queued_packet_count_high = value;
    }
    if(value_path == "output-buffer-queued-packet-count-low")
    {
        output_buffer_queued_packet_count_low = value;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-high")
    {
        output_buffer_uncorrectable_ecc_error_count_high = value;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-low")
    {
        output_buffer_uncorrectable_ecc_error_count_low = value;
    }
    if(value_path == "packet-crc-error-count-high")
    {
        packet_crc_error_count_high = value;
    }
    if(value_path == "packet-crc-error-count-low")
    {
        packet_crc_error_count_low = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "short-input-header-error-count-high")
    {
        short_input_header_error_count_high = value;
    }
    if(value_path == "short-input-header-error-count-low")
    {
        short_input_header_error_count_low = value;
    }
    if(value_path == "short-packet-error-count-high")
    {
        short_packet_error_count_high = value;
    }
    if(value_path == "short-packet-error-count-low")
    {
        short_packet_error_count_low = value;
    }
    if(value_path == "xbar-timeout-drop-count-high")
    {
        xbar_timeout_drop_count_high = value;
    }
    if(value_path == "xbar-timeout-drop-count-low")
    {
        xbar_timeout_drop_count_low = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stats()
{
    yang_name = "sm15-stats"; yang_parent_name = "cross-bar-table";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::~Sm15Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::has_data() const
{
    for (std::size_t index=0; index<sm15_stat.size(); index++)
    {
        if(sm15_stat[index]->has_data())
            return true;
    }
    return false;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::has_operation() const
{
    for (std::size_t index=0; index<sm15_stat.size(); index++)
    {
        if(sm15_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm15-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sm15Stats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sm15-stat")
    {
        for(auto const & c : sm15_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat>();
        c->parent = this;
        sm15_stat.push_back(std::move(c));
        children[segment_path] = sm15_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_children()
{
    for (auto const & c : sm15_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::set_value(const std::string & value_path, std::string value)
{
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Sm15Stat()
    :
    asic_id{YType::str, "asic-id"},
    internal_err_cnt{YType::uint64, "internal-err-cnt"},
    port{YType::str, "port"}
    	,
    ca_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats>())
	,ma_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats>())
	,pe_cc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats>())
	,pe_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats>())
	,pe_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats>())
	,pe_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats>())
	,pi_cc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats>())
	,pi_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats>())
	,pi_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats>())
	,pi_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats>())
	,ua0_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats>())
	,ua1_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats>())
	,ua2_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats>())
{
    ca_stats->parent = this;
    children["ca-stats"] = ca_stats;

    ma_stats->parent = this;
    children["ma-stats"] = ma_stats;

    pe_cc_stats->parent = this;
    children["pe-cc-stats"] = pe_cc_stats;

    pe_mc_stats->parent = this;
    children["pe-mc-stats"] = pe_mc_stats;

    pe_stats->parent = this;
    children["pe-stats"] = pe_stats;

    pe_uc_stats->parent = this;
    children["pe-uc-stats"] = pe_uc_stats;

    pi_cc_stats->parent = this;
    children["pi-cc-stats"] = pi_cc_stats;

    pi_mc_stats->parent = this;
    children["pi-mc-stats"] = pi_mc_stats;

    pi_stats->parent = this;
    children["pi-stats"] = pi_stats;

    pi_uc_stats->parent = this;
    children["pi-uc-stats"] = pi_uc_stats;

    ua0_stats->parent = this;
    children["ua0-stats"] = ua0_stats;

    ua1_stats->parent = this;
    children["ua1-stats"] = ua1_stats;

    ua2_stats->parent = this;
    children["ua2-stats"] = ua2_stats;

    yang_name = "sm15-stat"; yang_parent_name = "sm15-stats";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::~Sm15Stat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_data() const
{
    return asic_id.is_set
	|| internal_err_cnt.is_set
	|| port.is_set
	|| (ca_stats !=  nullptr && ca_stats->has_data())
	|| (ma_stats !=  nullptr && ma_stats->has_data())
	|| (pe_cc_stats !=  nullptr && pe_cc_stats->has_data())
	|| (pe_mc_stats !=  nullptr && pe_mc_stats->has_data())
	|| (pe_stats !=  nullptr && pe_stats->has_data())
	|| (pe_uc_stats !=  nullptr && pe_uc_stats->has_data())
	|| (pi_cc_stats !=  nullptr && pi_cc_stats->has_data())
	|| (pi_mc_stats !=  nullptr && pi_mc_stats->has_data())
	|| (pi_stats !=  nullptr && pi_stats->has_data())
	|| (pi_uc_stats !=  nullptr && pi_uc_stats->has_data())
	|| (ua0_stats !=  nullptr && ua0_stats->has_data())
	|| (ua1_stats !=  nullptr && ua1_stats->has_data())
	|| (ua2_stats !=  nullptr && ua2_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_id.operation)
	|| is_set(internal_err_cnt.operation)
	|| is_set(port.operation)
	|| (ca_stats !=  nullptr && ca_stats->has_operation())
	|| (ma_stats !=  nullptr && ma_stats->has_operation())
	|| (pe_cc_stats !=  nullptr && pe_cc_stats->has_operation())
	|| (pe_mc_stats !=  nullptr && pe_mc_stats->has_operation())
	|| (pe_stats !=  nullptr && pe_stats->has_operation())
	|| (pe_uc_stats !=  nullptr && pe_uc_stats->has_operation())
	|| (pi_cc_stats !=  nullptr && pi_cc_stats->has_operation())
	|| (pi_mc_stats !=  nullptr && pi_mc_stats->has_operation())
	|| (pi_stats !=  nullptr && pi_stats->has_operation())
	|| (pi_uc_stats !=  nullptr && pi_uc_stats->has_operation())
	|| (ua0_stats !=  nullptr && ua0_stats->has_operation())
	|| (ua1_stats !=  nullptr && ua1_stats->has_operation())
	|| (ua2_stats !=  nullptr && ua2_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm15-stat";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sm15Stat' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.operation)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (internal_err_cnt.is_set || is_set(internal_err_cnt.operation)) leaf_name_data.push_back(internal_err_cnt.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ca-stats")
    {
        if(ca_stats != nullptr)
        {
            children["ca-stats"] = ca_stats;
        }
        else
        {
            ca_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats>();
            ca_stats->parent = this;
            children["ca-stats"] = ca_stats;
        }
        return children.at("ca-stats");
    }

    if(child_yang_name == "ma-stats")
    {
        if(ma_stats != nullptr)
        {
            children["ma-stats"] = ma_stats;
        }
        else
        {
            ma_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats>();
            ma_stats->parent = this;
            children["ma-stats"] = ma_stats;
        }
        return children.at("ma-stats");
    }

    if(child_yang_name == "pe-cc-stats")
    {
        if(pe_cc_stats != nullptr)
        {
            children["pe-cc-stats"] = pe_cc_stats;
        }
        else
        {
            pe_cc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats>();
            pe_cc_stats->parent = this;
            children["pe-cc-stats"] = pe_cc_stats;
        }
        return children.at("pe-cc-stats");
    }

    if(child_yang_name == "pe-mc-stats")
    {
        if(pe_mc_stats != nullptr)
        {
            children["pe-mc-stats"] = pe_mc_stats;
        }
        else
        {
            pe_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats>();
            pe_mc_stats->parent = this;
            children["pe-mc-stats"] = pe_mc_stats;
        }
        return children.at("pe-mc-stats");
    }

    if(child_yang_name == "pe-stats")
    {
        if(pe_stats != nullptr)
        {
            children["pe-stats"] = pe_stats;
        }
        else
        {
            pe_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats>();
            pe_stats->parent = this;
            children["pe-stats"] = pe_stats;
        }
        return children.at("pe-stats");
    }

    if(child_yang_name == "pe-uc-stats")
    {
        if(pe_uc_stats != nullptr)
        {
            children["pe-uc-stats"] = pe_uc_stats;
        }
        else
        {
            pe_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats>();
            pe_uc_stats->parent = this;
            children["pe-uc-stats"] = pe_uc_stats;
        }
        return children.at("pe-uc-stats");
    }

    if(child_yang_name == "pi-cc-stats")
    {
        if(pi_cc_stats != nullptr)
        {
            children["pi-cc-stats"] = pi_cc_stats;
        }
        else
        {
            pi_cc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats>();
            pi_cc_stats->parent = this;
            children["pi-cc-stats"] = pi_cc_stats;
        }
        return children.at("pi-cc-stats");
    }

    if(child_yang_name == "pi-mc-stats")
    {
        if(pi_mc_stats != nullptr)
        {
            children["pi-mc-stats"] = pi_mc_stats;
        }
        else
        {
            pi_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats>();
            pi_mc_stats->parent = this;
            children["pi-mc-stats"] = pi_mc_stats;
        }
        return children.at("pi-mc-stats");
    }

    if(child_yang_name == "pi-stats")
    {
        if(pi_stats != nullptr)
        {
            children["pi-stats"] = pi_stats;
        }
        else
        {
            pi_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats>();
            pi_stats->parent = this;
            children["pi-stats"] = pi_stats;
        }
        return children.at("pi-stats");
    }

    if(child_yang_name == "pi-uc-stats")
    {
        if(pi_uc_stats != nullptr)
        {
            children["pi-uc-stats"] = pi_uc_stats;
        }
        else
        {
            pi_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats>();
            pi_uc_stats->parent = this;
            children["pi-uc-stats"] = pi_uc_stats;
        }
        return children.at("pi-uc-stats");
    }

    if(child_yang_name == "ua0-stats")
    {
        if(ua0_stats != nullptr)
        {
            children["ua0-stats"] = ua0_stats;
        }
        else
        {
            ua0_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats>();
            ua0_stats->parent = this;
            children["ua0-stats"] = ua0_stats;
        }
        return children.at("ua0-stats");
    }

    if(child_yang_name == "ua1-stats")
    {
        if(ua1_stats != nullptr)
        {
            children["ua1-stats"] = ua1_stats;
        }
        else
        {
            ua1_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats>();
            ua1_stats->parent = this;
            children["ua1-stats"] = ua1_stats;
        }
        return children.at("ua1-stats");
    }

    if(child_yang_name == "ua2-stats")
    {
        if(ua2_stats != nullptr)
        {
            children["ua2-stats"] = ua2_stats;
        }
        else
        {
            ua2_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats>();
            ua2_stats->parent = this;
            children["ua2-stats"] = ua2_stats;
        }
        return children.at("ua2-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_children()
{
    if(children.find("ca-stats") == children.end())
    {
        if(ca_stats != nullptr)
        {
            children["ca-stats"] = ca_stats;
        }
    }

    if(children.find("ma-stats") == children.end())
    {
        if(ma_stats != nullptr)
        {
            children["ma-stats"] = ma_stats;
        }
    }

    if(children.find("pe-cc-stats") == children.end())
    {
        if(pe_cc_stats != nullptr)
        {
            children["pe-cc-stats"] = pe_cc_stats;
        }
    }

    if(children.find("pe-mc-stats") == children.end())
    {
        if(pe_mc_stats != nullptr)
        {
            children["pe-mc-stats"] = pe_mc_stats;
        }
    }

    if(children.find("pe-stats") == children.end())
    {
        if(pe_stats != nullptr)
        {
            children["pe-stats"] = pe_stats;
        }
    }

    if(children.find("pe-uc-stats") == children.end())
    {
        if(pe_uc_stats != nullptr)
        {
            children["pe-uc-stats"] = pe_uc_stats;
        }
    }

    if(children.find("pi-cc-stats") == children.end())
    {
        if(pi_cc_stats != nullptr)
        {
            children["pi-cc-stats"] = pi_cc_stats;
        }
    }

    if(children.find("pi-mc-stats") == children.end())
    {
        if(pi_mc_stats != nullptr)
        {
            children["pi-mc-stats"] = pi_mc_stats;
        }
    }

    if(children.find("pi-stats") == children.end())
    {
        if(pi_stats != nullptr)
        {
            children["pi-stats"] = pi_stats;
        }
    }

    if(children.find("pi-uc-stats") == children.end())
    {
        if(pi_uc_stats != nullptr)
        {
            children["pi-uc-stats"] = pi_uc_stats;
        }
    }

    if(children.find("ua0-stats") == children.end())
    {
        if(ua0_stats != nullptr)
        {
            children["ua0-stats"] = ua0_stats;
        }
    }

    if(children.find("ua1-stats") == children.end())
    {
        if(ua1_stats != nullptr)
        {
            children["ua1-stats"] = ua1_stats;
        }
    }

    if(children.find("ua2-stats") == children.end())
    {
        if(ua2_stats != nullptr)
        {
            children["ua2-stats"] = ua2_stats;
        }
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::Ua0Stats()
    :
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"},
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"}
{
    yang_name = "ua0-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::~Ua0Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_data() const
{
    return ack_wait_cnt.is_set
	|| dest_drop_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_wait_cnt.operation)
	|| is_set(dest_drop_pkt_cnt.operation)
	|| is_set(dest_src_pkt_cnt.operation)
	|| is_set(rcv_pkt_cnt.operation)
	|| is_set(rx_drop_pkt_cnt.operation)
	|| is_set(rx_fabric_to_cnt.operation)
	|| is_set(src_dest_pkt_cnt.operation)
	|| is_set(tx_pkt_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua0-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ua0Stats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.operation)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());
    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.operation)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.operation)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.operation)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.operation)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.operation)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.operation)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.operation)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
    }
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::Ua1Stats()
    :
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"},
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"}
{
    yang_name = "ua1-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::~Ua1Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_data() const
{
    return ack_wait_cnt.is_set
	|| dest_drop_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_wait_cnt.operation)
	|| is_set(dest_drop_pkt_cnt.operation)
	|| is_set(dest_src_pkt_cnt.operation)
	|| is_set(rcv_pkt_cnt.operation)
	|| is_set(rx_drop_pkt_cnt.operation)
	|| is_set(rx_fabric_to_cnt.operation)
	|| is_set(src_dest_pkt_cnt.operation)
	|| is_set(tx_pkt_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua1-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ua1Stats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.operation)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());
    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.operation)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.operation)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.operation)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.operation)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.operation)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.operation)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.operation)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
    }
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::Ua2Stats()
    :
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"},
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"}
{
    yang_name = "ua2-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::~Ua2Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_data() const
{
    return ack_wait_cnt.is_set
	|| dest_drop_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_wait_cnt.operation)
	|| is_set(dest_drop_pkt_cnt.operation)
	|| is_set(dest_src_pkt_cnt.operation)
	|| is_set(rcv_pkt_cnt.operation)
	|| is_set(rx_drop_pkt_cnt.operation)
	|| is_set(rx_fabric_to_cnt.operation)
	|| is_set(src_dest_pkt_cnt.operation)
	|| is_set(tx_pkt_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua2-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ua2Stats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.operation)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());
    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.operation)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.operation)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.operation)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.operation)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.operation)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.operation)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.operation)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
    }
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::MaStats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    rx_hol_to_cnt{YType::uint64, "rx-hol-to-cnt"},
    rx_re_transmit_cnt{YType::uint64, "rx-re-transmit-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"}
{
    yang_name = "ma-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::~MaStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| rx_hol_to_cnt.is_set
	|| rx_re_transmit_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_drop_pkt_cnt.operation)
	|| is_set(dest_src_pkt_cnt.operation)
	|| is_set(rcv_pkt_cnt.operation)
	|| is_set(rx_drop_pkt_cnt.operation)
	|| is_set(rx_fabric_to_cnt.operation)
	|| is_set(rx_hol_to_cnt.operation)
	|| is_set(rx_re_transmit_cnt.operation)
	|| is_set(src_dest_pkt_cnt.operation)
	|| is_set(tx_pkt_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ma-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.operation)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.operation)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.operation)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.operation)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.operation)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (rx_hol_to_cnt.is_set || is_set(rx_hol_to_cnt.operation)) leaf_name_data.push_back(rx_hol_to_cnt.get_name_leafdata());
    if (rx_re_transmit_cnt.is_set || is_set(rx_re_transmit_cnt.operation)) leaf_name_data.push_back(rx_re_transmit_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.operation)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.operation)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
    }
    if(value_path == "rx-hol-to-cnt")
    {
        rx_hol_to_cnt = value;
    }
    if(value_path == "rx-re-transmit-cnt")
    {
        rx_re_transmit_cnt = value;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::CaStats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"}
{
    yang_name = "ca-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::~CaStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_drop_pkt_cnt.operation)
	|| is_set(dest_src_pkt_cnt.operation)
	|| is_set(rcv_pkt_cnt.operation)
	|| is_set(rx_drop_pkt_cnt.operation)
	|| is_set(src_dest_pkt_cnt.operation)
	|| is_set(tx_pkt_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CaStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.operation)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.operation)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.operation)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.operation)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.operation)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.operation)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::PiStats()
    :
    total_calc_rate{YType::uint64, "total-calc-rate"},
    total_rate1_cnt{YType::uint64, "total-rate1-cnt"},
    total_rate2_cnt{YType::uint64, "total-rate2-cnt"},
    total_rate3_cnt{YType::uint64, "total-rate3-cnt"}
{
    yang_name = "pi-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::~PiStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_data() const
{
    return total_calc_rate.is_set
	|| total_rate1_cnt.is_set
	|| total_rate2_cnt.is_set
	|| total_rate3_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_operation() const
{
    return is_set(operation)
	|| is_set(total_calc_rate.operation)
	|| is_set(total_rate1_cnt.operation)
	|| is_set(total_rate2_cnt.operation)
	|| is_set(total_rate3_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_calc_rate.is_set || is_set(total_calc_rate.operation)) leaf_name_data.push_back(total_calc_rate.get_name_leafdata());
    if (total_rate1_cnt.is_set || is_set(total_rate1_cnt.operation)) leaf_name_data.push_back(total_rate1_cnt.get_name_leafdata());
    if (total_rate2_cnt.is_set || is_set(total_rate2_cnt.operation)) leaf_name_data.push_back(total_rate2_cnt.get_name_leafdata());
    if (total_rate3_cnt.is_set || is_set(total_rate3_cnt.operation)) leaf_name_data.push_back(total_rate3_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-calc-rate")
    {
        total_calc_rate = value;
    }
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt = value;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt = value;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::PeStats()
    :
    mc2uc_preempt_cnt{YType::uint64, "mc2uc-preempt-cnt"},
    total_calc_rate{YType::uint64, "total-calc-rate"},
    total_rate1_cnt{YType::uint64, "total-rate1-cnt"},
    total_rate2_cnt{YType::uint64, "total-rate2-cnt"},
    total_rate3_cnt{YType::uint64, "total-rate3-cnt"}
{
    yang_name = "pe-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::~PeStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_data() const
{
    return mc2uc_preempt_cnt.is_set
	|| total_calc_rate.is_set
	|| total_rate1_cnt.is_set
	|| total_rate2_cnt.is_set
	|| total_rate3_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_operation() const
{
    return is_set(operation)
	|| is_set(mc2uc_preempt_cnt.operation)
	|| is_set(total_calc_rate.operation)
	|| is_set(total_rate1_cnt.operation)
	|| is_set(total_rate2_cnt.operation)
	|| is_set(total_rate3_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc2uc_preempt_cnt.is_set || is_set(mc2uc_preempt_cnt.operation)) leaf_name_data.push_back(mc2uc_preempt_cnt.get_name_leafdata());
    if (total_calc_rate.is_set || is_set(total_calc_rate.operation)) leaf_name_data.push_back(total_calc_rate.get_name_leafdata());
    if (total_rate1_cnt.is_set || is_set(total_rate1_cnt.operation)) leaf_name_data.push_back(total_rate1_cnt.get_name_leafdata());
    if (total_rate2_cnt.is_set || is_set(total_rate2_cnt.operation)) leaf_name_data.push_back(total_rate2_cnt.get_name_leafdata());
    if (total_rate3_cnt.is_set || is_set(total_rate3_cnt.operation)) leaf_name_data.push_back(total_rate3_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mc2uc-preempt-cnt")
    {
        mc2uc_preempt_cnt = value;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate = value;
    }
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt = value;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt = value;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::PiUcStats()
    :
    calc_rate{YType::uint64, "calc-rate"},
    cpp_head_drop_pkt_cnt{YType::uint64, "cpp-head-drop-pkt-cnt"},
    crc_stomp_pkt_cnt{YType::uint64, "crc-stomp-pkt-cnt"},
    diag_pkt_cnt{YType::uint64, "diag-pkt-cnt"},
    fpoe_mem_ecc_1bit_err_cnt{YType::uint64, "fpoe-mem-ecc-1bit-err-cnt"},
    fpoe_mem_ecc_2bit_err_cnt{YType::uint64, "fpoe-mem-ecc-2bit-err-cnt"},
    in_coming_pkt_err_cnt{YType::uint64, "in-coming-pkt-err-cnt"},
    line_err_drp_pkt{YType::uint64, "line-err-drp-pkt"},
    line_s_written_in_mem0{YType::uint64, "line-s-written-in-mem0"},
    line_s_written_in_mem1{YType::uint64, "line-s-written-in-mem1"},
    line_s_written_in_mem2{YType::uint64, "line-s-written-in-mem2"},
    max_pkt_len_err_cnt{YType::uint64, "max-pkt-len-err-cnt"},
    min_pkt_len_err_cnt{YType::uint64, "min-pkt-len-err-cnt"},
    pkt_cfh_crc_err_cnt{YType::uint64, "pkt-cfh-crc-err-cnt"},
    pkt_crc_err_cnt{YType::uint64, "pkt-crc-err-cnt"},
    pkt_fpoe_addr_rng_hit_cnt{YType::uint64, "pkt-fpoe-addr-rng-hit-cnt"},
    pkt_null_poe_sent_ua0_cnt{YType::uint64, "pkt-null-poe-sent-ua0-cnt"},
    pkt_null_poe_sent_ua1_cnt{YType::uint64, "pkt-null-poe-sent-ua1-cnt"},
    pkt_null_poe_sent_ua2_cnt{YType::uint64, "pkt-null-poe-sent-ua2-cnt"},
    pkt_rcv_cnt{YType::uint64, "pkt-rcv-cnt"},
    pkt_sent_to_disabled_port_cnt{YType::uint64, "pkt-sent-to-disabled-port-cnt"},
    pkt_seq_err_cnt{YType::uint64, "pkt-seq-err-cnt"},
    pkts_sent_to_ux0_cnt{YType::uint64, "pkts-sent-to-ux0-cnt"},
    pkts_sent_to_ux1_cnt{YType::uint64, "pkts-sent-to-ux1-cnt"},
    pkts_sent_to_ux2_cnt{YType::uint64, "pkts-sent-to-ux2-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    tail_drp_pkt_cnt{YType::uint64, "tail-drp-pkt-cnt"},
    tr_head_drop_pkt_cnt{YType::uint64, "tr-head-drop-pkt-cnt"},
    tr_pkt_sent_to_ux{YType::uint64, "tr-pkt-sent-to-ux"},
    uc0_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc0-data-mem-ecc-1bit-err-cnt"},
    uc0_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc0-data-mem-ecc-2bit-err-cnt"},
    uc1_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc1-data-mem-ecc-1bit-err-cnt"},
    uc1_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc1-data-mem-ecc-2bit-err-cnt"},
    uc2_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc2-data-mem-ecc-1bit-err-cnt"},
    uc2_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc2-data-mem-ecc-2bit-err-cnt"}
{
    yang_name = "pi-uc-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::~PiUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_data() const
{
    return calc_rate.is_set
	|| cpp_head_drop_pkt_cnt.is_set
	|| crc_stomp_pkt_cnt.is_set
	|| diag_pkt_cnt.is_set
	|| fpoe_mem_ecc_1bit_err_cnt.is_set
	|| fpoe_mem_ecc_2bit_err_cnt.is_set
	|| in_coming_pkt_err_cnt.is_set
	|| line_err_drp_pkt.is_set
	|| line_s_written_in_mem0.is_set
	|| line_s_written_in_mem1.is_set
	|| line_s_written_in_mem2.is_set
	|| max_pkt_len_err_cnt.is_set
	|| min_pkt_len_err_cnt.is_set
	|| pkt_cfh_crc_err_cnt.is_set
	|| pkt_crc_err_cnt.is_set
	|| pkt_fpoe_addr_rng_hit_cnt.is_set
	|| pkt_null_poe_sent_ua0_cnt.is_set
	|| pkt_null_poe_sent_ua1_cnt.is_set
	|| pkt_null_poe_sent_ua2_cnt.is_set
	|| pkt_rcv_cnt.is_set
	|| pkt_sent_to_disabled_port_cnt.is_set
	|| pkt_seq_err_cnt.is_set
	|| pkts_sent_to_ux0_cnt.is_set
	|| pkts_sent_to_ux1_cnt.is_set
	|| pkts_sent_to_ux2_cnt.is_set
	|| rate_cnt.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| tail_drp_pkt_cnt.is_set
	|| tr_head_drop_pkt_cnt.is_set
	|| tr_pkt_sent_to_ux.is_set
	|| uc0_data_mem_ecc_1bit_err_cnt.is_set
	|| uc0_data_mem_ecc_2bit_err_cnt.is_set
	|| uc1_data_mem_ecc_1bit_err_cnt.is_set
	|| uc1_data_mem_ecc_2bit_err_cnt.is_set
	|| uc2_data_mem_ecc_1bit_err_cnt.is_set
	|| uc2_data_mem_ecc_2bit_err_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(calc_rate.operation)
	|| is_set(cpp_head_drop_pkt_cnt.operation)
	|| is_set(crc_stomp_pkt_cnt.operation)
	|| is_set(diag_pkt_cnt.operation)
	|| is_set(fpoe_mem_ecc_1bit_err_cnt.operation)
	|| is_set(fpoe_mem_ecc_2bit_err_cnt.operation)
	|| is_set(in_coming_pkt_err_cnt.operation)
	|| is_set(line_err_drp_pkt.operation)
	|| is_set(line_s_written_in_mem0.operation)
	|| is_set(line_s_written_in_mem1.operation)
	|| is_set(line_s_written_in_mem2.operation)
	|| is_set(max_pkt_len_err_cnt.operation)
	|| is_set(min_pkt_len_err_cnt.operation)
	|| is_set(pkt_cfh_crc_err_cnt.operation)
	|| is_set(pkt_crc_err_cnt.operation)
	|| is_set(pkt_fpoe_addr_rng_hit_cnt.operation)
	|| is_set(pkt_null_poe_sent_ua0_cnt.operation)
	|| is_set(pkt_null_poe_sent_ua1_cnt.operation)
	|| is_set(pkt_null_poe_sent_ua2_cnt.operation)
	|| is_set(pkt_rcv_cnt.operation)
	|| is_set(pkt_sent_to_disabled_port_cnt.operation)
	|| is_set(pkt_seq_err_cnt.operation)
	|| is_set(pkts_sent_to_ux0_cnt.operation)
	|| is_set(pkts_sent_to_ux1_cnt.operation)
	|| is_set(pkts_sent_to_ux2_cnt.operation)
	|| is_set(rate_cnt.operation)
	|| is_set(stop_thrsh_hit_cnt.operation)
	|| is_set(tail_drp_pkt_cnt.operation)
	|| is_set(tr_head_drop_pkt_cnt.operation)
	|| is_set(tr_pkt_sent_to_ux.operation)
	|| is_set(uc0_data_mem_ecc_1bit_err_cnt.operation)
	|| is_set(uc0_data_mem_ecc_2bit_err_cnt.operation)
	|| is_set(uc1_data_mem_ecc_1bit_err_cnt.operation)
	|| is_set(uc1_data_mem_ecc_2bit_err_cnt.operation)
	|| is_set(uc2_data_mem_ecc_1bit_err_cnt.operation)
	|| is_set(uc2_data_mem_ecc_2bit_err_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-uc-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiUcStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calc_rate.is_set || is_set(calc_rate.operation)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (cpp_head_drop_pkt_cnt.is_set || is_set(cpp_head_drop_pkt_cnt.operation)) leaf_name_data.push_back(cpp_head_drop_pkt_cnt.get_name_leafdata());
    if (crc_stomp_pkt_cnt.is_set || is_set(crc_stomp_pkt_cnt.operation)) leaf_name_data.push_back(crc_stomp_pkt_cnt.get_name_leafdata());
    if (diag_pkt_cnt.is_set || is_set(diag_pkt_cnt.operation)) leaf_name_data.push_back(diag_pkt_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_1bit_err_cnt.is_set || is_set(fpoe_mem_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(fpoe_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_2bit_err_cnt.is_set || is_set(fpoe_mem_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(fpoe_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (in_coming_pkt_err_cnt.is_set || is_set(in_coming_pkt_err_cnt.operation)) leaf_name_data.push_back(in_coming_pkt_err_cnt.get_name_leafdata());
    if (line_err_drp_pkt.is_set || is_set(line_err_drp_pkt.operation)) leaf_name_data.push_back(line_err_drp_pkt.get_name_leafdata());
    if (line_s_written_in_mem0.is_set || is_set(line_s_written_in_mem0.operation)) leaf_name_data.push_back(line_s_written_in_mem0.get_name_leafdata());
    if (line_s_written_in_mem1.is_set || is_set(line_s_written_in_mem1.operation)) leaf_name_data.push_back(line_s_written_in_mem1.get_name_leafdata());
    if (line_s_written_in_mem2.is_set || is_set(line_s_written_in_mem2.operation)) leaf_name_data.push_back(line_s_written_in_mem2.get_name_leafdata());
    if (max_pkt_len_err_cnt.is_set || is_set(max_pkt_len_err_cnt.operation)) leaf_name_data.push_back(max_pkt_len_err_cnt.get_name_leafdata());
    if (min_pkt_len_err_cnt.is_set || is_set(min_pkt_len_err_cnt.operation)) leaf_name_data.push_back(min_pkt_len_err_cnt.get_name_leafdata());
    if (pkt_cfh_crc_err_cnt.is_set || is_set(pkt_cfh_crc_err_cnt.operation)) leaf_name_data.push_back(pkt_cfh_crc_err_cnt.get_name_leafdata());
    if (pkt_crc_err_cnt.is_set || is_set(pkt_crc_err_cnt.operation)) leaf_name_data.push_back(pkt_crc_err_cnt.get_name_leafdata());
    if (pkt_fpoe_addr_rng_hit_cnt.is_set || is_set(pkt_fpoe_addr_rng_hit_cnt.operation)) leaf_name_data.push_back(pkt_fpoe_addr_rng_hit_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua0_cnt.is_set || is_set(pkt_null_poe_sent_ua0_cnt.operation)) leaf_name_data.push_back(pkt_null_poe_sent_ua0_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua1_cnt.is_set || is_set(pkt_null_poe_sent_ua1_cnt.operation)) leaf_name_data.push_back(pkt_null_poe_sent_ua1_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua2_cnt.is_set || is_set(pkt_null_poe_sent_ua2_cnt.operation)) leaf_name_data.push_back(pkt_null_poe_sent_ua2_cnt.get_name_leafdata());
    if (pkt_rcv_cnt.is_set || is_set(pkt_rcv_cnt.operation)) leaf_name_data.push_back(pkt_rcv_cnt.get_name_leafdata());
    if (pkt_sent_to_disabled_port_cnt.is_set || is_set(pkt_sent_to_disabled_port_cnt.operation)) leaf_name_data.push_back(pkt_sent_to_disabled_port_cnt.get_name_leafdata());
    if (pkt_seq_err_cnt.is_set || is_set(pkt_seq_err_cnt.operation)) leaf_name_data.push_back(pkt_seq_err_cnt.get_name_leafdata());
    if (pkts_sent_to_ux0_cnt.is_set || is_set(pkts_sent_to_ux0_cnt.operation)) leaf_name_data.push_back(pkts_sent_to_ux0_cnt.get_name_leafdata());
    if (pkts_sent_to_ux1_cnt.is_set || is_set(pkts_sent_to_ux1_cnt.operation)) leaf_name_data.push_back(pkts_sent_to_ux1_cnt.get_name_leafdata());
    if (pkts_sent_to_ux2_cnt.is_set || is_set(pkts_sent_to_ux2_cnt.operation)) leaf_name_data.push_back(pkts_sent_to_ux2_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.operation)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.operation)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (tail_drp_pkt_cnt.is_set || is_set(tail_drp_pkt_cnt.operation)) leaf_name_data.push_back(tail_drp_pkt_cnt.get_name_leafdata());
    if (tr_head_drop_pkt_cnt.is_set || is_set(tr_head_drop_pkt_cnt.operation)) leaf_name_data.push_back(tr_head_drop_pkt_cnt.get_name_leafdata());
    if (tr_pkt_sent_to_ux.is_set || is_set(tr_pkt_sent_to_ux.operation)) leaf_name_data.push_back(tr_pkt_sent_to_ux.get_name_leafdata());
    if (uc0_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc0_data_mem_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(uc0_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc0_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc0_data_mem_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(uc0_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (uc1_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc1_data_mem_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(uc1_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc1_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc1_data_mem_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(uc1_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (uc2_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc2_data_mem_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(uc2_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc2_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc2_data_mem_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(uc2_data_mem_ecc_2bit_err_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calc-rate")
    {
        calc_rate = value;
    }
    if(value_path == "cpp-head-drop-pkt-cnt")
    {
        cpp_head_drop_pkt_cnt = value;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt = value;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt = value;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt = value;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt = value;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt = value;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt = value;
    }
    if(value_path == "line-s-written-in-mem0")
    {
        line_s_written_in_mem0 = value;
    }
    if(value_path == "line-s-written-in-mem1")
    {
        line_s_written_in_mem1 = value;
    }
    if(value_path == "line-s-written-in-mem2")
    {
        line_s_written_in_mem2 = value;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt = value;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt = value;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt = value;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt = value;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt = value;
    }
    if(value_path == "pkt-null-poe-sent-ua0-cnt")
    {
        pkt_null_poe_sent_ua0_cnt = value;
    }
    if(value_path == "pkt-null-poe-sent-ua1-cnt")
    {
        pkt_null_poe_sent_ua1_cnt = value;
    }
    if(value_path == "pkt-null-poe-sent-ua2-cnt")
    {
        pkt_null_poe_sent_ua2_cnt = value;
    }
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt = value;
    }
    if(value_path == "pkt-sent-to-disabled-port-cnt")
    {
        pkt_sent_to_disabled_port_cnt = value;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt = value;
    }
    if(value_path == "pkts-sent-to-ux0-cnt")
    {
        pkts_sent_to_ux0_cnt = value;
    }
    if(value_path == "pkts-sent-to-ux1-cnt")
    {
        pkts_sent_to_ux1_cnt = value;
    }
    if(value_path == "pkts-sent-to-ux2-cnt")
    {
        pkts_sent_to_ux2_cnt = value;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt = value;
    }
    if(value_path == "tr-head-drop-pkt-cnt")
    {
        tr_head_drop_pkt_cnt = value;
    }
    if(value_path == "tr-pkt-sent-to-ux")
    {
        tr_pkt_sent_to_ux = value;
    }
    if(value_path == "uc0-data-mem-ecc-1bit-err-cnt")
    {
        uc0_data_mem_ecc_1bit_err_cnt = value;
    }
    if(value_path == "uc0-data-mem-ecc-2bit-err-cnt")
    {
        uc0_data_mem_ecc_2bit_err_cnt = value;
    }
    if(value_path == "uc1-data-mem-ecc-1bit-err-cnt")
    {
        uc1_data_mem_ecc_1bit_err_cnt = value;
    }
    if(value_path == "uc1-data-mem-ecc-2bit-err-cnt")
    {
        uc1_data_mem_ecc_2bit_err_cnt = value;
    }
    if(value_path == "uc2-data-mem-ecc-1bit-err-cnt")
    {
        uc2_data_mem_ecc_1bit_err_cnt = value;
    }
    if(value_path == "uc2-data-mem-ecc-2bit-err-cnt")
    {
        uc2_data_mem_ecc_2bit_err_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::PiMcStats()
    :
    calc_rate{YType::uint64, "calc-rate"},
    cpp_head_drop_pkt_from_ma_cnt{YType::uint64, "cpp-head-drop-pkt-from-ma-cnt"},
    crc_stomp_pkt_cnt{YType::uint64, "crc-stomp-pkt-cnt"},
    data_mem0_ecc_1bit_err_cnt{YType::uint64, "data-mem0-ecc-1bit-err-cnt"},
    data_mem0_ecc_2bit_err_cnt{YType::uint64, "data-mem0-ecc-2bit-err-cnt"},
    data_mem1_ecc_1bit_err_cnt{YType::uint64, "data-mem1-ecc-1bit-err-cnt"},
    data_mem1_ecc_2bit_err_cnt{YType::uint64, "data-mem1-ecc-2bit-err-cnt"},
    data_mem2_ecc_1bit_err_cnt{YType::uint64, "data-mem2-ecc-1bit-err-cnt"},
    data_mem2_ecc_2bit_err_cnt{YType::uint64, "data-mem2-ecc-2bit-err-cnt"},
    di_err_pkt_cnt{YType::uint64, "di-err-pkt-cnt"},
    di_hdr_len_err_pkt_cnt{YType::uint64, "di-hdr-len-err-pkt-cnt"},
    diag_pkt_cnt{YType::uint64, "diag-pkt-cnt"},
    fpoe_mem_ecc_1bit_err_cnt{YType::uint64, "fpoe-mem-ecc-1bit-err-cnt"},
    fpoe_mem_ecc_2bit_err_cnt{YType::uint64, "fpoe-mem-ecc-2bit-err-cnt"},
    in_coming_pkt_err_cnt{YType::uint64, "in-coming-pkt-err-cnt"},
    line_err_drp_pkt{YType::uint64, "line-err-drp-pkt"},
    line_s_written_in_mem{YType::uint64, "line-s-written-in-mem"},
    max_pkt_len_err_cnt{YType::uint64, "max-pkt-len-err-cnt"},
    min_pkt_len_err_cnt{YType::uint64, "min-pkt-len-err-cnt"},
    pkt_cfh_crc_err_cnt{YType::uint64, "pkt-cfh-crc-err-cnt"},
    pkt_crc_err_cnt{YType::uint64, "pkt-crc-err-cnt"},
    pkt_fpoe_addr_rng_hit_cnt{YType::uint64, "pkt-fpoe-addr-rng-hit-cnt"},
    pkt_fpoe_match_hit_cnt{YType::uint64, "pkt-fpoe-match-hit-cnt"},
    pkt_null_poe_sent_cnt{YType::uint64, "pkt-null-poe-sent-cnt"},
    pkt_rcv_cnt{YType::uint64, "pkt-rcv-cnt"},
    pkt_sent_to_disabled_port{YType::uint64, "pkt-sent-to-disabled-port"},
    pkt_seq_err_cnt{YType::uint64, "pkt-seq-err-cnt"},
    pkts_sent_to_mx_cnt{YType::uint64, "pkts-sent-to-mx-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    tail_drp_pkt_cnt{YType::uint64, "tail-drp-pkt-cnt"},
    tr_head_drop_pkt_from_ma_cnt{YType::uint64, "tr-head-drop-pkt-from-ma-cnt"},
    tr_pkt_sent_to_mx{YType::uint64, "tr-pkt-sent-to-mx"}
{
    yang_name = "pi-mc-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::~PiMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_data() const
{
    return calc_rate.is_set
	|| cpp_head_drop_pkt_from_ma_cnt.is_set
	|| crc_stomp_pkt_cnt.is_set
	|| data_mem0_ecc_1bit_err_cnt.is_set
	|| data_mem0_ecc_2bit_err_cnt.is_set
	|| data_mem1_ecc_1bit_err_cnt.is_set
	|| data_mem1_ecc_2bit_err_cnt.is_set
	|| data_mem2_ecc_1bit_err_cnt.is_set
	|| data_mem2_ecc_2bit_err_cnt.is_set
	|| di_err_pkt_cnt.is_set
	|| di_hdr_len_err_pkt_cnt.is_set
	|| diag_pkt_cnt.is_set
	|| fpoe_mem_ecc_1bit_err_cnt.is_set
	|| fpoe_mem_ecc_2bit_err_cnt.is_set
	|| in_coming_pkt_err_cnt.is_set
	|| line_err_drp_pkt.is_set
	|| line_s_written_in_mem.is_set
	|| max_pkt_len_err_cnt.is_set
	|| min_pkt_len_err_cnt.is_set
	|| pkt_cfh_crc_err_cnt.is_set
	|| pkt_crc_err_cnt.is_set
	|| pkt_fpoe_addr_rng_hit_cnt.is_set
	|| pkt_fpoe_match_hit_cnt.is_set
	|| pkt_null_poe_sent_cnt.is_set
	|| pkt_rcv_cnt.is_set
	|| pkt_sent_to_disabled_port.is_set
	|| pkt_seq_err_cnt.is_set
	|| pkts_sent_to_mx_cnt.is_set
	|| rate_cnt.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| tail_drp_pkt_cnt.is_set
	|| tr_head_drop_pkt_from_ma_cnt.is_set
	|| tr_pkt_sent_to_mx.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(calc_rate.operation)
	|| is_set(cpp_head_drop_pkt_from_ma_cnt.operation)
	|| is_set(crc_stomp_pkt_cnt.operation)
	|| is_set(data_mem0_ecc_1bit_err_cnt.operation)
	|| is_set(data_mem0_ecc_2bit_err_cnt.operation)
	|| is_set(data_mem1_ecc_1bit_err_cnt.operation)
	|| is_set(data_mem1_ecc_2bit_err_cnt.operation)
	|| is_set(data_mem2_ecc_1bit_err_cnt.operation)
	|| is_set(data_mem2_ecc_2bit_err_cnt.operation)
	|| is_set(di_err_pkt_cnt.operation)
	|| is_set(di_hdr_len_err_pkt_cnt.operation)
	|| is_set(diag_pkt_cnt.operation)
	|| is_set(fpoe_mem_ecc_1bit_err_cnt.operation)
	|| is_set(fpoe_mem_ecc_2bit_err_cnt.operation)
	|| is_set(in_coming_pkt_err_cnt.operation)
	|| is_set(line_err_drp_pkt.operation)
	|| is_set(line_s_written_in_mem.operation)
	|| is_set(max_pkt_len_err_cnt.operation)
	|| is_set(min_pkt_len_err_cnt.operation)
	|| is_set(pkt_cfh_crc_err_cnt.operation)
	|| is_set(pkt_crc_err_cnt.operation)
	|| is_set(pkt_fpoe_addr_rng_hit_cnt.operation)
	|| is_set(pkt_fpoe_match_hit_cnt.operation)
	|| is_set(pkt_null_poe_sent_cnt.operation)
	|| is_set(pkt_rcv_cnt.operation)
	|| is_set(pkt_sent_to_disabled_port.operation)
	|| is_set(pkt_seq_err_cnt.operation)
	|| is_set(pkts_sent_to_mx_cnt.operation)
	|| is_set(rate_cnt.operation)
	|| is_set(stop_thrsh_hit_cnt.operation)
	|| is_set(tail_drp_pkt_cnt.operation)
	|| is_set(tr_head_drop_pkt_from_ma_cnt.operation)
	|| is_set(tr_pkt_sent_to_mx.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mc-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiMcStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calc_rate.is_set || is_set(calc_rate.operation)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (cpp_head_drop_pkt_from_ma_cnt.is_set || is_set(cpp_head_drop_pkt_from_ma_cnt.operation)) leaf_name_data.push_back(cpp_head_drop_pkt_from_ma_cnt.get_name_leafdata());
    if (crc_stomp_pkt_cnt.is_set || is_set(crc_stomp_pkt_cnt.operation)) leaf_name_data.push_back(crc_stomp_pkt_cnt.get_name_leafdata());
    if (data_mem0_ecc_1bit_err_cnt.is_set || is_set(data_mem0_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(data_mem0_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem0_ecc_2bit_err_cnt.is_set || is_set(data_mem0_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(data_mem0_ecc_2bit_err_cnt.get_name_leafdata());
    if (data_mem1_ecc_1bit_err_cnt.is_set || is_set(data_mem1_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(data_mem1_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem1_ecc_2bit_err_cnt.is_set || is_set(data_mem1_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(data_mem1_ecc_2bit_err_cnt.get_name_leafdata());
    if (data_mem2_ecc_1bit_err_cnt.is_set || is_set(data_mem2_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(data_mem2_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem2_ecc_2bit_err_cnt.is_set || is_set(data_mem2_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(data_mem2_ecc_2bit_err_cnt.get_name_leafdata());
    if (di_err_pkt_cnt.is_set || is_set(di_err_pkt_cnt.operation)) leaf_name_data.push_back(di_err_pkt_cnt.get_name_leafdata());
    if (di_hdr_len_err_pkt_cnt.is_set || is_set(di_hdr_len_err_pkt_cnt.operation)) leaf_name_data.push_back(di_hdr_len_err_pkt_cnt.get_name_leafdata());
    if (diag_pkt_cnt.is_set || is_set(diag_pkt_cnt.operation)) leaf_name_data.push_back(diag_pkt_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_1bit_err_cnt.is_set || is_set(fpoe_mem_ecc_1bit_err_cnt.operation)) leaf_name_data.push_back(fpoe_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_2bit_err_cnt.is_set || is_set(fpoe_mem_ecc_2bit_err_cnt.operation)) leaf_name_data.push_back(fpoe_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (in_coming_pkt_err_cnt.is_set || is_set(in_coming_pkt_err_cnt.operation)) leaf_name_data.push_back(in_coming_pkt_err_cnt.get_name_leafdata());
    if (line_err_drp_pkt.is_set || is_set(line_err_drp_pkt.operation)) leaf_name_data.push_back(line_err_drp_pkt.get_name_leafdata());
    if (line_s_written_in_mem.is_set || is_set(line_s_written_in_mem.operation)) leaf_name_data.push_back(line_s_written_in_mem.get_name_leafdata());
    if (max_pkt_len_err_cnt.is_set || is_set(max_pkt_len_err_cnt.operation)) leaf_name_data.push_back(max_pkt_len_err_cnt.get_name_leafdata());
    if (min_pkt_len_err_cnt.is_set || is_set(min_pkt_len_err_cnt.operation)) leaf_name_data.push_back(min_pkt_len_err_cnt.get_name_leafdata());
    if (pkt_cfh_crc_err_cnt.is_set || is_set(pkt_cfh_crc_err_cnt.operation)) leaf_name_data.push_back(pkt_cfh_crc_err_cnt.get_name_leafdata());
    if (pkt_crc_err_cnt.is_set || is_set(pkt_crc_err_cnt.operation)) leaf_name_data.push_back(pkt_crc_err_cnt.get_name_leafdata());
    if (pkt_fpoe_addr_rng_hit_cnt.is_set || is_set(pkt_fpoe_addr_rng_hit_cnt.operation)) leaf_name_data.push_back(pkt_fpoe_addr_rng_hit_cnt.get_name_leafdata());
    if (pkt_fpoe_match_hit_cnt.is_set || is_set(pkt_fpoe_match_hit_cnt.operation)) leaf_name_data.push_back(pkt_fpoe_match_hit_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_cnt.is_set || is_set(pkt_null_poe_sent_cnt.operation)) leaf_name_data.push_back(pkt_null_poe_sent_cnt.get_name_leafdata());
    if (pkt_rcv_cnt.is_set || is_set(pkt_rcv_cnt.operation)) leaf_name_data.push_back(pkt_rcv_cnt.get_name_leafdata());
    if (pkt_sent_to_disabled_port.is_set || is_set(pkt_sent_to_disabled_port.operation)) leaf_name_data.push_back(pkt_sent_to_disabled_port.get_name_leafdata());
    if (pkt_seq_err_cnt.is_set || is_set(pkt_seq_err_cnt.operation)) leaf_name_data.push_back(pkt_seq_err_cnt.get_name_leafdata());
    if (pkts_sent_to_mx_cnt.is_set || is_set(pkts_sent_to_mx_cnt.operation)) leaf_name_data.push_back(pkts_sent_to_mx_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.operation)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.operation)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (tail_drp_pkt_cnt.is_set || is_set(tail_drp_pkt_cnt.operation)) leaf_name_data.push_back(tail_drp_pkt_cnt.get_name_leafdata());
    if (tr_head_drop_pkt_from_ma_cnt.is_set || is_set(tr_head_drop_pkt_from_ma_cnt.operation)) leaf_name_data.push_back(tr_head_drop_pkt_from_ma_cnt.get_name_leafdata());
    if (tr_pkt_sent_to_mx.is_set || is_set(tr_pkt_sent_to_mx.operation)) leaf_name_data.push_back(tr_pkt_sent_to_mx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calc-rate")
    {
        calc_rate = value;
    }
    if(value_path == "cpp-head-drop-pkt-from-ma-cnt")
    {
        cpp_head_drop_pkt_from_ma_cnt = value;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt = value;
    }
    if(value_path == "data-mem0-ecc-1bit-err-cnt")
    {
        data_mem0_ecc_1bit_err_cnt = value;
    }
    if(value_path == "data-mem0-ecc-2bit-err-cnt")
    {
        data_mem0_ecc_2bit_err_cnt = value;
    }
    if(value_path == "data-mem1-ecc-1bit-err-cnt")
    {
        data_mem1_ecc_1bit_err_cnt = value;
    }
    if(value_path == "data-mem1-ecc-2bit-err-cnt")
    {
        data_mem1_ecc_2bit_err_cnt = value;
    }
    if(value_path == "data-mem2-ecc-1bit-err-cnt")
    {
        data_mem2_ecc_1bit_err_cnt = value;
    }
    if(value_path == "data-mem2-ecc-2bit-err-cnt")
    {
        data_mem2_ecc_2bit_err_cnt = value;
    }
    if(value_path == "di-err-pkt-cnt")
    {
        di_err_pkt_cnt = value;
    }
    if(value_path == "di-hdr-len-err-pkt-cnt")
    {
        di_hdr_len_err_pkt_cnt = value;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt = value;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt = value;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt = value;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt = value;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt = value;
    }
    if(value_path == "line-s-written-in-mem")
    {
        line_s_written_in_mem = value;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt = value;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt = value;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt = value;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt = value;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt = value;
    }
    if(value_path == "pkt-fpoe-match-hit-cnt")
    {
        pkt_fpoe_match_hit_cnt = value;
    }
    if(value_path == "pkt-null-poe-sent-cnt")
    {
        pkt_null_poe_sent_cnt = value;
    }
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt = value;
    }
    if(value_path == "pkt-sent-to-disabled-port")
    {
        pkt_sent_to_disabled_port = value;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt = value;
    }
    if(value_path == "pkts-sent-to-mx-cnt")
    {
        pkts_sent_to_mx_cnt = value;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt = value;
    }
    if(value_path == "tr-head-drop-pkt-from-ma-cnt")
    {
        tr_head_drop_pkt_from_ma_cnt = value;
    }
    if(value_path == "tr-pkt-sent-to-mx")
    {
        tr_pkt_sent_to_mx = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::PiCcStats()
    :
    calc_rate{YType::uint64, "calc-rate"},
    data_mem_ecc_derr_cnt{YType::uint64, "data-mem-ecc-derr-cnt"},
    data_mem_ecc_serr_cnt{YType::uint64, "data-mem-ecc-serr-cnt"},
    data_mem_ovf0_cnt{YType::uint64, "data-mem-ovf0-cnt"},
    data_mem_ovf1_cnt{YType::uint64, "data-mem-ovf1-cnt"},
    dmem_rd_cnt{YType::uint64, "dmem-rd-cnt"},
    fpoe_mem_ecc_derr_cnt{YType::uint64, "fpoe-mem-ecc-derr-cnt"},
    fpoe_mem_ecc_serr_cnt{YType::uint64, "fpoe-mem-ecc-serr-cnt"},
    in0_cong_cnt{YType::uint64, "in0-cong-cnt"},
    in0_drop_cnt{YType::uint64, "in0-drop-cnt"},
    in0_ecc_derr_cnt{YType::uint64, "in0-ecc-derr-cnt"},
    in0_ecc_serr_cnt{YType::uint64, "in0-ecc-serr-cnt"},
    in0_fnc_err_cnt{YType::uint64, "in0-fnc-err-cnt"},
    in0_pkt_cnt{YType::uint64, "in0-pkt-cnt"},
    in0_shut_cnt{YType::uint64, "in0-shut-cnt"},
    in1_cong_cnt{YType::uint64, "in1-cong-cnt"},
    in1_drop_cnt{YType::uint64, "in1-drop-cnt"},
    in1_ecc_derr_cnt{YType::uint64, "in1-ecc-derr-cnt"},
    in1_ecc_serr_cnt{YType::uint64, "in1-ecc-serr-cnt"},
    in1_fnc_err_cnt{YType::uint64, "in1-fnc-err-cnt"},
    in1_pkt_cnt{YType::uint64, "in1-pkt-cnt"},
    in1_shut_cnt{YType::uint64, "in1-shut-cnt"},
    in_dmem0_cnt{YType::uint64, "in-dmem0-cnt"},
    in_dmem1_cnt{YType::uint64, "in-dmem1-cnt"},
    null_poe_cnt{YType::uint64, "null-poe-cnt"},
    out_pkt_cnt{YType::uint64, "out-pkt-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    shut_ack_cnt{YType::uint64, "shut-ack-cnt"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    tail_drop_msg_cnt{YType::uint64, "tail-drop-msg-cnt"}
{
    yang_name = "pi-cc-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::~PiCcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_data() const
{
    return calc_rate.is_set
	|| data_mem_ecc_derr_cnt.is_set
	|| data_mem_ecc_serr_cnt.is_set
	|| data_mem_ovf0_cnt.is_set
	|| data_mem_ovf1_cnt.is_set
	|| dmem_rd_cnt.is_set
	|| fpoe_mem_ecc_derr_cnt.is_set
	|| fpoe_mem_ecc_serr_cnt.is_set
	|| in0_cong_cnt.is_set
	|| in0_drop_cnt.is_set
	|| in0_ecc_derr_cnt.is_set
	|| in0_ecc_serr_cnt.is_set
	|| in0_fnc_err_cnt.is_set
	|| in0_pkt_cnt.is_set
	|| in0_shut_cnt.is_set
	|| in1_cong_cnt.is_set
	|| in1_drop_cnt.is_set
	|| in1_ecc_derr_cnt.is_set
	|| in1_ecc_serr_cnt.is_set
	|| in1_fnc_err_cnt.is_set
	|| in1_pkt_cnt.is_set
	|| in1_shut_cnt.is_set
	|| in_dmem0_cnt.is_set
	|| in_dmem1_cnt.is_set
	|| null_poe_cnt.is_set
	|| out_pkt_cnt.is_set
	|| rate_cnt.is_set
	|| shut_ack_cnt.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| tail_drop_msg_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(calc_rate.operation)
	|| is_set(data_mem_ecc_derr_cnt.operation)
	|| is_set(data_mem_ecc_serr_cnt.operation)
	|| is_set(data_mem_ovf0_cnt.operation)
	|| is_set(data_mem_ovf1_cnt.operation)
	|| is_set(dmem_rd_cnt.operation)
	|| is_set(fpoe_mem_ecc_derr_cnt.operation)
	|| is_set(fpoe_mem_ecc_serr_cnt.operation)
	|| is_set(in0_cong_cnt.operation)
	|| is_set(in0_drop_cnt.operation)
	|| is_set(in0_ecc_derr_cnt.operation)
	|| is_set(in0_ecc_serr_cnt.operation)
	|| is_set(in0_fnc_err_cnt.operation)
	|| is_set(in0_pkt_cnt.operation)
	|| is_set(in0_shut_cnt.operation)
	|| is_set(in1_cong_cnt.operation)
	|| is_set(in1_drop_cnt.operation)
	|| is_set(in1_ecc_derr_cnt.operation)
	|| is_set(in1_ecc_serr_cnt.operation)
	|| is_set(in1_fnc_err_cnt.operation)
	|| is_set(in1_pkt_cnt.operation)
	|| is_set(in1_shut_cnt.operation)
	|| is_set(in_dmem0_cnt.operation)
	|| is_set(in_dmem1_cnt.operation)
	|| is_set(null_poe_cnt.operation)
	|| is_set(out_pkt_cnt.operation)
	|| is_set(rate_cnt.operation)
	|| is_set(shut_ack_cnt.operation)
	|| is_set(stop_thrsh_hit_cnt.operation)
	|| is_set(tail_drop_msg_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-cc-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PiCcStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calc_rate.is_set || is_set(calc_rate.operation)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (data_mem_ecc_derr_cnt.is_set || is_set(data_mem_ecc_derr_cnt.operation)) leaf_name_data.push_back(data_mem_ecc_derr_cnt.get_name_leafdata());
    if (data_mem_ecc_serr_cnt.is_set || is_set(data_mem_ecc_serr_cnt.operation)) leaf_name_data.push_back(data_mem_ecc_serr_cnt.get_name_leafdata());
    if (data_mem_ovf0_cnt.is_set || is_set(data_mem_ovf0_cnt.operation)) leaf_name_data.push_back(data_mem_ovf0_cnt.get_name_leafdata());
    if (data_mem_ovf1_cnt.is_set || is_set(data_mem_ovf1_cnt.operation)) leaf_name_data.push_back(data_mem_ovf1_cnt.get_name_leafdata());
    if (dmem_rd_cnt.is_set || is_set(dmem_rd_cnt.operation)) leaf_name_data.push_back(dmem_rd_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_derr_cnt.is_set || is_set(fpoe_mem_ecc_derr_cnt.operation)) leaf_name_data.push_back(fpoe_mem_ecc_derr_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_serr_cnt.is_set || is_set(fpoe_mem_ecc_serr_cnt.operation)) leaf_name_data.push_back(fpoe_mem_ecc_serr_cnt.get_name_leafdata());
    if (in0_cong_cnt.is_set || is_set(in0_cong_cnt.operation)) leaf_name_data.push_back(in0_cong_cnt.get_name_leafdata());
    if (in0_drop_cnt.is_set || is_set(in0_drop_cnt.operation)) leaf_name_data.push_back(in0_drop_cnt.get_name_leafdata());
    if (in0_ecc_derr_cnt.is_set || is_set(in0_ecc_derr_cnt.operation)) leaf_name_data.push_back(in0_ecc_derr_cnt.get_name_leafdata());
    if (in0_ecc_serr_cnt.is_set || is_set(in0_ecc_serr_cnt.operation)) leaf_name_data.push_back(in0_ecc_serr_cnt.get_name_leafdata());
    if (in0_fnc_err_cnt.is_set || is_set(in0_fnc_err_cnt.operation)) leaf_name_data.push_back(in0_fnc_err_cnt.get_name_leafdata());
    if (in0_pkt_cnt.is_set || is_set(in0_pkt_cnt.operation)) leaf_name_data.push_back(in0_pkt_cnt.get_name_leafdata());
    if (in0_shut_cnt.is_set || is_set(in0_shut_cnt.operation)) leaf_name_data.push_back(in0_shut_cnt.get_name_leafdata());
    if (in1_cong_cnt.is_set || is_set(in1_cong_cnt.operation)) leaf_name_data.push_back(in1_cong_cnt.get_name_leafdata());
    if (in1_drop_cnt.is_set || is_set(in1_drop_cnt.operation)) leaf_name_data.push_back(in1_drop_cnt.get_name_leafdata());
    if (in1_ecc_derr_cnt.is_set || is_set(in1_ecc_derr_cnt.operation)) leaf_name_data.push_back(in1_ecc_derr_cnt.get_name_leafdata());
    if (in1_ecc_serr_cnt.is_set || is_set(in1_ecc_serr_cnt.operation)) leaf_name_data.push_back(in1_ecc_serr_cnt.get_name_leafdata());
    if (in1_fnc_err_cnt.is_set || is_set(in1_fnc_err_cnt.operation)) leaf_name_data.push_back(in1_fnc_err_cnt.get_name_leafdata());
    if (in1_pkt_cnt.is_set || is_set(in1_pkt_cnt.operation)) leaf_name_data.push_back(in1_pkt_cnt.get_name_leafdata());
    if (in1_shut_cnt.is_set || is_set(in1_shut_cnt.operation)) leaf_name_data.push_back(in1_shut_cnt.get_name_leafdata());
    if (in_dmem0_cnt.is_set || is_set(in_dmem0_cnt.operation)) leaf_name_data.push_back(in_dmem0_cnt.get_name_leafdata());
    if (in_dmem1_cnt.is_set || is_set(in_dmem1_cnt.operation)) leaf_name_data.push_back(in_dmem1_cnt.get_name_leafdata());
    if (null_poe_cnt.is_set || is_set(null_poe_cnt.operation)) leaf_name_data.push_back(null_poe_cnt.get_name_leafdata());
    if (out_pkt_cnt.is_set || is_set(out_pkt_cnt.operation)) leaf_name_data.push_back(out_pkt_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.operation)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (shut_ack_cnt.is_set || is_set(shut_ack_cnt.operation)) leaf_name_data.push_back(shut_ack_cnt.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.operation)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (tail_drop_msg_cnt.is_set || is_set(tail_drop_msg_cnt.operation)) leaf_name_data.push_back(tail_drop_msg_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calc-rate")
    {
        calc_rate = value;
    }
    if(value_path == "data-mem-ecc-derr-cnt")
    {
        data_mem_ecc_derr_cnt = value;
    }
    if(value_path == "data-mem-ecc-serr-cnt")
    {
        data_mem_ecc_serr_cnt = value;
    }
    if(value_path == "data-mem-ovf0-cnt")
    {
        data_mem_ovf0_cnt = value;
    }
    if(value_path == "data-mem-ovf1-cnt")
    {
        data_mem_ovf1_cnt = value;
    }
    if(value_path == "dmem-rd-cnt")
    {
        dmem_rd_cnt = value;
    }
    if(value_path == "fpoe-mem-ecc-derr-cnt")
    {
        fpoe_mem_ecc_derr_cnt = value;
    }
    if(value_path == "fpoe-mem-ecc-serr-cnt")
    {
        fpoe_mem_ecc_serr_cnt = value;
    }
    if(value_path == "in0-cong-cnt")
    {
        in0_cong_cnt = value;
    }
    if(value_path == "in0-drop-cnt")
    {
        in0_drop_cnt = value;
    }
    if(value_path == "in0-ecc-derr-cnt")
    {
        in0_ecc_derr_cnt = value;
    }
    if(value_path == "in0-ecc-serr-cnt")
    {
        in0_ecc_serr_cnt = value;
    }
    if(value_path == "in0-fnc-err-cnt")
    {
        in0_fnc_err_cnt = value;
    }
    if(value_path == "in0-pkt-cnt")
    {
        in0_pkt_cnt = value;
    }
    if(value_path == "in0-shut-cnt")
    {
        in0_shut_cnt = value;
    }
    if(value_path == "in1-cong-cnt")
    {
        in1_cong_cnt = value;
    }
    if(value_path == "in1-drop-cnt")
    {
        in1_drop_cnt = value;
    }
    if(value_path == "in1-ecc-derr-cnt")
    {
        in1_ecc_derr_cnt = value;
    }
    if(value_path == "in1-ecc-serr-cnt")
    {
        in1_ecc_serr_cnt = value;
    }
    if(value_path == "in1-fnc-err-cnt")
    {
        in1_fnc_err_cnt = value;
    }
    if(value_path == "in1-pkt-cnt")
    {
        in1_pkt_cnt = value;
    }
    if(value_path == "in1-shut-cnt")
    {
        in1_shut_cnt = value;
    }
    if(value_path == "in-dmem0-cnt")
    {
        in_dmem0_cnt = value;
    }
    if(value_path == "in-dmem1-cnt")
    {
        in_dmem1_cnt = value;
    }
    if(value_path == "null-poe-cnt")
    {
        null_poe_cnt = value;
    }
    if(value_path == "out-pkt-cnt")
    {
        out_pkt_cnt = value;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
    }
    if(value_path == "shut-ack-cnt")
    {
        shut_ack_cnt = value;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
    }
    if(value_path == "tail-drop-msg-cnt")
    {
        tail_drop_msg_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::PeUcStats()
    :
    calc_rate{YType::uint64, "calc-rate"},
    ecc_1bit_err_uc0_0_cnt{YType::uint64, "ecc-1bit-err-uc0-0-cnt"},
    ecc_1bit_err_uc0_1_cnt{YType::uint64, "ecc-1bit-err-uc0-1-cnt"},
    ecc_1bit_err_uc1_0_cnt{YType::uint64, "ecc-1bit-err-uc1-0-cnt"},
    ecc_1bit_err_uc1_1_cnt{YType::uint64, "ecc-1bit-err-uc1-1-cnt"},
    ecc_1bit_err_uc2_0_cnt{YType::uint64, "ecc-1bit-err-uc2-0-cnt"},
    ecc_1bit_err_uc2_1_cnt{YType::uint64, "ecc-1bit-err-uc2-1-cnt"},
    ecc_2bit_err_uc0_0_cnt{YType::uint64, "ecc-2bit-err-uc0-0-cnt"},
    ecc_2bit_err_uc0_1_cnt{YType::uint64, "ecc-2bit-err-uc0-1-cnt"},
    ecc_2bit_err_uc1_0_cnt{YType::uint64, "ecc-2bit-err-uc1-0-cnt"},
    ecc_2bit_err_uc1_1_cnt{YType::uint64, "ecc-2bit-err-uc1-1-cnt"},
    ecc_2bit_err_uc2_0_cnt{YType::uint64, "ecc-2bit-err-uc2-0-cnt"},
    ecc_2bit_err_uc2_1_cnt{YType::uint64, "ecc-2bit-err-uc2-1-cnt"},
    fc_uc_0_1_trans_cnt{YType::uint64, "fc-uc-0-1-trans-cnt"},
    fe_uc_sop_eop_pack_cnt{YType::uint64, "fe-uc-sop-eop-pack-cnt"},
    in_full_line_uc0_cnt{YType::uint64, "in-full-line-uc0-cnt"},
    in_full_line_uc1_cnt{YType::uint64, "in-full-line-uc1-cnt"},
    in_full_line_uc2_cnt{YType::uint64, "in-full-line-uc2-cnt"},
    in_pkt_uc0_cnt{YType::uint64, "in-pkt-uc0-cnt"},
    in_pkt_uc1_cnt{YType::uint64, "in-pkt-uc1-cnt"},
    in_pkt_uc2_cnt{YType::uint64, "in-pkt-uc2-cnt"},
    out_pkt_uc_cnt{YType::uint64, "out-pkt-uc-cnt"},
    pkt_ecc_err_drop_uc_cnt{YType::uint64, "pkt-ecc-err-drop-uc-cnt"},
    pkt_ecc_trunc_cnt_uc_cnt{YType::uint64, "pkt-ecc-trunc-cnt-uc-cnt"},
    pkt_sop_drop_uc0_cnt{YType::uint64, "pkt-sop-drop-uc0-cnt"},
    pkt_sop_drop_uc1_cnt{YType::uint64, "pkt-sop-drop-uc1-cnt"},
    pkt_sop_drop_uc2_cnt{YType::uint64, "pkt-sop-drop-uc2-cnt"},
    pkt_trunc_eop_uc0_cnt{YType::uint64, "pkt-trunc-eop-uc0-cnt"},
    pkt_trunc_eop_uc1_cnt{YType::uint64, "pkt-trunc-eop-uc1-cnt"},
    pkt_trunc_eop_uc2_cnt{YType::uint64, "pkt-trunc-eop-uc2-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"}
{
    yang_name = "pe-uc-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::~PeUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_data() const
{
    return calc_rate.is_set
	|| ecc_1bit_err_uc0_0_cnt.is_set
	|| ecc_1bit_err_uc0_1_cnt.is_set
	|| ecc_1bit_err_uc1_0_cnt.is_set
	|| ecc_1bit_err_uc1_1_cnt.is_set
	|| ecc_1bit_err_uc2_0_cnt.is_set
	|| ecc_1bit_err_uc2_1_cnt.is_set
	|| ecc_2bit_err_uc0_0_cnt.is_set
	|| ecc_2bit_err_uc0_1_cnt.is_set
	|| ecc_2bit_err_uc1_0_cnt.is_set
	|| ecc_2bit_err_uc1_1_cnt.is_set
	|| ecc_2bit_err_uc2_0_cnt.is_set
	|| ecc_2bit_err_uc2_1_cnt.is_set
	|| fc_uc_0_1_trans_cnt.is_set
	|| fe_uc_sop_eop_pack_cnt.is_set
	|| in_full_line_uc0_cnt.is_set
	|| in_full_line_uc1_cnt.is_set
	|| in_full_line_uc2_cnt.is_set
	|| in_pkt_uc0_cnt.is_set
	|| in_pkt_uc1_cnt.is_set
	|| in_pkt_uc2_cnt.is_set
	|| out_pkt_uc_cnt.is_set
	|| pkt_ecc_err_drop_uc_cnt.is_set
	|| pkt_ecc_trunc_cnt_uc_cnt.is_set
	|| pkt_sop_drop_uc0_cnt.is_set
	|| pkt_sop_drop_uc1_cnt.is_set
	|| pkt_sop_drop_uc2_cnt.is_set
	|| pkt_trunc_eop_uc0_cnt.is_set
	|| pkt_trunc_eop_uc1_cnt.is_set
	|| pkt_trunc_eop_uc2_cnt.is_set
	|| rate_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(calc_rate.operation)
	|| is_set(ecc_1bit_err_uc0_0_cnt.operation)
	|| is_set(ecc_1bit_err_uc0_1_cnt.operation)
	|| is_set(ecc_1bit_err_uc1_0_cnt.operation)
	|| is_set(ecc_1bit_err_uc1_1_cnt.operation)
	|| is_set(ecc_1bit_err_uc2_0_cnt.operation)
	|| is_set(ecc_1bit_err_uc2_1_cnt.operation)
	|| is_set(ecc_2bit_err_uc0_0_cnt.operation)
	|| is_set(ecc_2bit_err_uc0_1_cnt.operation)
	|| is_set(ecc_2bit_err_uc1_0_cnt.operation)
	|| is_set(ecc_2bit_err_uc1_1_cnt.operation)
	|| is_set(ecc_2bit_err_uc2_0_cnt.operation)
	|| is_set(ecc_2bit_err_uc2_1_cnt.operation)
	|| is_set(fc_uc_0_1_trans_cnt.operation)
	|| is_set(fe_uc_sop_eop_pack_cnt.operation)
	|| is_set(in_full_line_uc0_cnt.operation)
	|| is_set(in_full_line_uc1_cnt.operation)
	|| is_set(in_full_line_uc2_cnt.operation)
	|| is_set(in_pkt_uc0_cnt.operation)
	|| is_set(in_pkt_uc1_cnt.operation)
	|| is_set(in_pkt_uc2_cnt.operation)
	|| is_set(out_pkt_uc_cnt.operation)
	|| is_set(pkt_ecc_err_drop_uc_cnt.operation)
	|| is_set(pkt_ecc_trunc_cnt_uc_cnt.operation)
	|| is_set(pkt_sop_drop_uc0_cnt.operation)
	|| is_set(pkt_sop_drop_uc1_cnt.operation)
	|| is_set(pkt_sop_drop_uc2_cnt.operation)
	|| is_set(pkt_trunc_eop_uc0_cnt.operation)
	|| is_set(pkt_trunc_eop_uc1_cnt.operation)
	|| is_set(pkt_trunc_eop_uc2_cnt.operation)
	|| is_set(rate_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-uc-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeUcStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calc_rate.is_set || is_set(calc_rate.operation)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (ecc_1bit_err_uc0_0_cnt.is_set || is_set(ecc_1bit_err_uc0_0_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_uc0_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc0_1_cnt.is_set || is_set(ecc_1bit_err_uc0_1_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_uc0_1_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc1_0_cnt.is_set || is_set(ecc_1bit_err_uc1_0_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_uc1_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc1_1_cnt.is_set || is_set(ecc_1bit_err_uc1_1_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_uc1_1_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc2_0_cnt.is_set || is_set(ecc_1bit_err_uc2_0_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_uc2_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc2_1_cnt.is_set || is_set(ecc_1bit_err_uc2_1_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_uc2_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc0_0_cnt.is_set || is_set(ecc_2bit_err_uc0_0_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_uc0_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc0_1_cnt.is_set || is_set(ecc_2bit_err_uc0_1_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_uc0_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc1_0_cnt.is_set || is_set(ecc_2bit_err_uc1_0_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_uc1_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc1_1_cnt.is_set || is_set(ecc_2bit_err_uc1_1_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_uc1_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc2_0_cnt.is_set || is_set(ecc_2bit_err_uc2_0_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_uc2_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc2_1_cnt.is_set || is_set(ecc_2bit_err_uc2_1_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_uc2_1_cnt.get_name_leafdata());
    if (fc_uc_0_1_trans_cnt.is_set || is_set(fc_uc_0_1_trans_cnt.operation)) leaf_name_data.push_back(fc_uc_0_1_trans_cnt.get_name_leafdata());
    if (fe_uc_sop_eop_pack_cnt.is_set || is_set(fe_uc_sop_eop_pack_cnt.operation)) leaf_name_data.push_back(fe_uc_sop_eop_pack_cnt.get_name_leafdata());
    if (in_full_line_uc0_cnt.is_set || is_set(in_full_line_uc0_cnt.operation)) leaf_name_data.push_back(in_full_line_uc0_cnt.get_name_leafdata());
    if (in_full_line_uc1_cnt.is_set || is_set(in_full_line_uc1_cnt.operation)) leaf_name_data.push_back(in_full_line_uc1_cnt.get_name_leafdata());
    if (in_full_line_uc2_cnt.is_set || is_set(in_full_line_uc2_cnt.operation)) leaf_name_data.push_back(in_full_line_uc2_cnt.get_name_leafdata());
    if (in_pkt_uc0_cnt.is_set || is_set(in_pkt_uc0_cnt.operation)) leaf_name_data.push_back(in_pkt_uc0_cnt.get_name_leafdata());
    if (in_pkt_uc1_cnt.is_set || is_set(in_pkt_uc1_cnt.operation)) leaf_name_data.push_back(in_pkt_uc1_cnt.get_name_leafdata());
    if (in_pkt_uc2_cnt.is_set || is_set(in_pkt_uc2_cnt.operation)) leaf_name_data.push_back(in_pkt_uc2_cnt.get_name_leafdata());
    if (out_pkt_uc_cnt.is_set || is_set(out_pkt_uc_cnt.operation)) leaf_name_data.push_back(out_pkt_uc_cnt.get_name_leafdata());
    if (pkt_ecc_err_drop_uc_cnt.is_set || is_set(pkt_ecc_err_drop_uc_cnt.operation)) leaf_name_data.push_back(pkt_ecc_err_drop_uc_cnt.get_name_leafdata());
    if (pkt_ecc_trunc_cnt_uc_cnt.is_set || is_set(pkt_ecc_trunc_cnt_uc_cnt.operation)) leaf_name_data.push_back(pkt_ecc_trunc_cnt_uc_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc0_cnt.is_set || is_set(pkt_sop_drop_uc0_cnt.operation)) leaf_name_data.push_back(pkt_sop_drop_uc0_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc1_cnt.is_set || is_set(pkt_sop_drop_uc1_cnt.operation)) leaf_name_data.push_back(pkt_sop_drop_uc1_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc2_cnt.is_set || is_set(pkt_sop_drop_uc2_cnt.operation)) leaf_name_data.push_back(pkt_sop_drop_uc2_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc0_cnt.is_set || is_set(pkt_trunc_eop_uc0_cnt.operation)) leaf_name_data.push_back(pkt_trunc_eop_uc0_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc1_cnt.is_set || is_set(pkt_trunc_eop_uc1_cnt.operation)) leaf_name_data.push_back(pkt_trunc_eop_uc1_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc2_cnt.is_set || is_set(pkt_trunc_eop_uc2_cnt.operation)) leaf_name_data.push_back(pkt_trunc_eop_uc2_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.operation)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calc-rate")
    {
        calc_rate = value;
    }
    if(value_path == "ecc-1bit-err-uc0-0-cnt")
    {
        ecc_1bit_err_uc0_0_cnt = value;
    }
    if(value_path == "ecc-1bit-err-uc0-1-cnt")
    {
        ecc_1bit_err_uc0_1_cnt = value;
    }
    if(value_path == "ecc-1bit-err-uc1-0-cnt")
    {
        ecc_1bit_err_uc1_0_cnt = value;
    }
    if(value_path == "ecc-1bit-err-uc1-1-cnt")
    {
        ecc_1bit_err_uc1_1_cnt = value;
    }
    if(value_path == "ecc-1bit-err-uc2-0-cnt")
    {
        ecc_1bit_err_uc2_0_cnt = value;
    }
    if(value_path == "ecc-1bit-err-uc2-1-cnt")
    {
        ecc_1bit_err_uc2_1_cnt = value;
    }
    if(value_path == "ecc-2bit-err-uc0-0-cnt")
    {
        ecc_2bit_err_uc0_0_cnt = value;
    }
    if(value_path == "ecc-2bit-err-uc0-1-cnt")
    {
        ecc_2bit_err_uc0_1_cnt = value;
    }
    if(value_path == "ecc-2bit-err-uc1-0-cnt")
    {
        ecc_2bit_err_uc1_0_cnt = value;
    }
    if(value_path == "ecc-2bit-err-uc1-1-cnt")
    {
        ecc_2bit_err_uc1_1_cnt = value;
    }
    if(value_path == "ecc-2bit-err-uc2-0-cnt")
    {
        ecc_2bit_err_uc2_0_cnt = value;
    }
    if(value_path == "ecc-2bit-err-uc2-1-cnt")
    {
        ecc_2bit_err_uc2_1_cnt = value;
    }
    if(value_path == "fc-uc-0-1-trans-cnt")
    {
        fc_uc_0_1_trans_cnt = value;
    }
    if(value_path == "fe-uc-sop-eop-pack-cnt")
    {
        fe_uc_sop_eop_pack_cnt = value;
    }
    if(value_path == "in-full-line-uc0-cnt")
    {
        in_full_line_uc0_cnt = value;
    }
    if(value_path == "in-full-line-uc1-cnt")
    {
        in_full_line_uc1_cnt = value;
    }
    if(value_path == "in-full-line-uc2-cnt")
    {
        in_full_line_uc2_cnt = value;
    }
    if(value_path == "in-pkt-uc0-cnt")
    {
        in_pkt_uc0_cnt = value;
    }
    if(value_path == "in-pkt-uc1-cnt")
    {
        in_pkt_uc1_cnt = value;
    }
    if(value_path == "in-pkt-uc2-cnt")
    {
        in_pkt_uc2_cnt = value;
    }
    if(value_path == "out-pkt-uc-cnt")
    {
        out_pkt_uc_cnt = value;
    }
    if(value_path == "pkt-ecc-err-drop-uc-cnt")
    {
        pkt_ecc_err_drop_uc_cnt = value;
    }
    if(value_path == "pkt-ecc-trunc-cnt-uc-cnt")
    {
        pkt_ecc_trunc_cnt_uc_cnt = value;
    }
    if(value_path == "pkt-sop-drop-uc0-cnt")
    {
        pkt_sop_drop_uc0_cnt = value;
    }
    if(value_path == "pkt-sop-drop-uc1-cnt")
    {
        pkt_sop_drop_uc1_cnt = value;
    }
    if(value_path == "pkt-sop-drop-uc2-cnt")
    {
        pkt_sop_drop_uc2_cnt = value;
    }
    if(value_path == "pkt-trunc-eop-uc0-cnt")
    {
        pkt_trunc_eop_uc0_cnt = value;
    }
    if(value_path == "pkt-trunc-eop-uc1-cnt")
    {
        pkt_trunc_eop_uc1_cnt = value;
    }
    if(value_path == "pkt-trunc-eop-uc2-cnt")
    {
        pkt_trunc_eop_uc2_cnt = value;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::PeMcStats()
    :
    calc_rate{YType::uint64, "calc-rate"},
    ecc_1bit_err_mc0_cnt{YType::uint64, "ecc-1bit-err-mc0-cnt"},
    ecc_1bit_err_mc1_cnt{YType::uint64, "ecc-1bit-err-mc1-cnt"},
    ecc_1bit_err_mc2_cnt{YType::uint64, "ecc-1bit-err-mc2-cnt"},
    ecc_2bit_err_mc0_cnt{YType::uint64, "ecc-2bit-err-mc0-cnt"},
    ecc_2bit_err_mc1_cnt{YType::uint64, "ecc-2bit-err-mc1-cnt"},
    ecc_2bit_err_mc2_cnt{YType::uint64, "ecc-2bit-err-mc2-cnt"},
    fc_mc_0_1_trans_cnt{YType::uint64, "fc-mc-0-1-trans-cnt"},
    fe_mc_sop_eop_pack_cnt{YType::uint64, "fe-mc-sop-eop-pack-cnt"},
    in_full_line_mc_cnt{YType::uint64, "in-full-line-mc-cnt"},
    in_pkt_mc_cnt{YType::uint64, "in-pkt-mc-cnt"},
    out_pkt_mc_cnt{YType::uint64, "out-pkt-mc-cnt"},
    pkt_ecc_err_drop_mc_cnt{YType::uint64, "pkt-ecc-err-drop-mc-cnt"},
    pkt_ecc_err_trunc_cnt_mc_cnt{YType::uint64, "pkt-ecc-err-trunc-cnt-mc-cnt"},
    pkt_sop_drop_mc_cnt{YType::uint64, "pkt-sop-drop-mc-cnt"},
    pkt_trunc_eop_mc_cnt{YType::uint64, "pkt-trunc-eop-mc-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"}
{
    yang_name = "pe-mc-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::~PeMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_data() const
{
    return calc_rate.is_set
	|| ecc_1bit_err_mc0_cnt.is_set
	|| ecc_1bit_err_mc1_cnt.is_set
	|| ecc_1bit_err_mc2_cnt.is_set
	|| ecc_2bit_err_mc0_cnt.is_set
	|| ecc_2bit_err_mc1_cnt.is_set
	|| ecc_2bit_err_mc2_cnt.is_set
	|| fc_mc_0_1_trans_cnt.is_set
	|| fe_mc_sop_eop_pack_cnt.is_set
	|| in_full_line_mc_cnt.is_set
	|| in_pkt_mc_cnt.is_set
	|| out_pkt_mc_cnt.is_set
	|| pkt_ecc_err_drop_mc_cnt.is_set
	|| pkt_ecc_err_trunc_cnt_mc_cnt.is_set
	|| pkt_sop_drop_mc_cnt.is_set
	|| pkt_trunc_eop_mc_cnt.is_set
	|| rate_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(calc_rate.operation)
	|| is_set(ecc_1bit_err_mc0_cnt.operation)
	|| is_set(ecc_1bit_err_mc1_cnt.operation)
	|| is_set(ecc_1bit_err_mc2_cnt.operation)
	|| is_set(ecc_2bit_err_mc0_cnt.operation)
	|| is_set(ecc_2bit_err_mc1_cnt.operation)
	|| is_set(ecc_2bit_err_mc2_cnt.operation)
	|| is_set(fc_mc_0_1_trans_cnt.operation)
	|| is_set(fe_mc_sop_eop_pack_cnt.operation)
	|| is_set(in_full_line_mc_cnt.operation)
	|| is_set(in_pkt_mc_cnt.operation)
	|| is_set(out_pkt_mc_cnt.operation)
	|| is_set(pkt_ecc_err_drop_mc_cnt.operation)
	|| is_set(pkt_ecc_err_trunc_cnt_mc_cnt.operation)
	|| is_set(pkt_sop_drop_mc_cnt.operation)
	|| is_set(pkt_trunc_eop_mc_cnt.operation)
	|| is_set(rate_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-mc-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeMcStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calc_rate.is_set || is_set(calc_rate.operation)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (ecc_1bit_err_mc0_cnt.is_set || is_set(ecc_1bit_err_mc0_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_mc0_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc1_cnt.is_set || is_set(ecc_1bit_err_mc1_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_mc1_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc2_cnt.is_set || is_set(ecc_1bit_err_mc2_cnt.operation)) leaf_name_data.push_back(ecc_1bit_err_mc2_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc0_cnt.is_set || is_set(ecc_2bit_err_mc0_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_mc0_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc1_cnt.is_set || is_set(ecc_2bit_err_mc1_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_mc1_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc2_cnt.is_set || is_set(ecc_2bit_err_mc2_cnt.operation)) leaf_name_data.push_back(ecc_2bit_err_mc2_cnt.get_name_leafdata());
    if (fc_mc_0_1_trans_cnt.is_set || is_set(fc_mc_0_1_trans_cnt.operation)) leaf_name_data.push_back(fc_mc_0_1_trans_cnt.get_name_leafdata());
    if (fe_mc_sop_eop_pack_cnt.is_set || is_set(fe_mc_sop_eop_pack_cnt.operation)) leaf_name_data.push_back(fe_mc_sop_eop_pack_cnt.get_name_leafdata());
    if (in_full_line_mc_cnt.is_set || is_set(in_full_line_mc_cnt.operation)) leaf_name_data.push_back(in_full_line_mc_cnt.get_name_leafdata());
    if (in_pkt_mc_cnt.is_set || is_set(in_pkt_mc_cnt.operation)) leaf_name_data.push_back(in_pkt_mc_cnt.get_name_leafdata());
    if (out_pkt_mc_cnt.is_set || is_set(out_pkt_mc_cnt.operation)) leaf_name_data.push_back(out_pkt_mc_cnt.get_name_leafdata());
    if (pkt_ecc_err_drop_mc_cnt.is_set || is_set(pkt_ecc_err_drop_mc_cnt.operation)) leaf_name_data.push_back(pkt_ecc_err_drop_mc_cnt.get_name_leafdata());
    if (pkt_ecc_err_trunc_cnt_mc_cnt.is_set || is_set(pkt_ecc_err_trunc_cnt_mc_cnt.operation)) leaf_name_data.push_back(pkt_ecc_err_trunc_cnt_mc_cnt.get_name_leafdata());
    if (pkt_sop_drop_mc_cnt.is_set || is_set(pkt_sop_drop_mc_cnt.operation)) leaf_name_data.push_back(pkt_sop_drop_mc_cnt.get_name_leafdata());
    if (pkt_trunc_eop_mc_cnt.is_set || is_set(pkt_trunc_eop_mc_cnt.operation)) leaf_name_data.push_back(pkt_trunc_eop_mc_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.operation)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calc-rate")
    {
        calc_rate = value;
    }
    if(value_path == "ecc-1bit-err-mc0-cnt")
    {
        ecc_1bit_err_mc0_cnt = value;
    }
    if(value_path == "ecc-1bit-err-mc1-cnt")
    {
        ecc_1bit_err_mc1_cnt = value;
    }
    if(value_path == "ecc-1bit-err-mc2-cnt")
    {
        ecc_1bit_err_mc2_cnt = value;
    }
    if(value_path == "ecc-2bit-err-mc0-cnt")
    {
        ecc_2bit_err_mc0_cnt = value;
    }
    if(value_path == "ecc-2bit-err-mc1-cnt")
    {
        ecc_2bit_err_mc1_cnt = value;
    }
    if(value_path == "ecc-2bit-err-mc2-cnt")
    {
        ecc_2bit_err_mc2_cnt = value;
    }
    if(value_path == "fc-mc-0-1-trans-cnt")
    {
        fc_mc_0_1_trans_cnt = value;
    }
    if(value_path == "fe-mc-sop-eop-pack-cnt")
    {
        fe_mc_sop_eop_pack_cnt = value;
    }
    if(value_path == "in-full-line-mc-cnt")
    {
        in_full_line_mc_cnt = value;
    }
    if(value_path == "in-pkt-mc-cnt")
    {
        in_pkt_mc_cnt = value;
    }
    if(value_path == "out-pkt-mc-cnt")
    {
        out_pkt_mc_cnt = value;
    }
    if(value_path == "pkt-ecc-err-drop-mc-cnt")
    {
        pkt_ecc_err_drop_mc_cnt = value;
    }
    if(value_path == "pkt-ecc-err-trunc-cnt-mc-cnt")
    {
        pkt_ecc_err_trunc_cnt_mc_cnt = value;
    }
    if(value_path == "pkt-sop-drop-mc-cnt")
    {
        pkt_sop_drop_mc_cnt = value;
    }
    if(value_path == "pkt-trunc-eop-mc-cnt")
    {
        pkt_trunc_eop_mc_cnt = value;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
    }
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::PeCcStats()
    :
    calc_rate{YType::uint64, "calc-rate"},
    congn_pkt_cnt{YType::uint64, "congn-pkt-cnt"},
    fc_cc_0_1_trans_cnt{YType::uint64, "fc-cc-0-1-trans-cnt"},
    in_pkt_cnt{YType::uint64, "in-pkt-cnt"},
    mem0_drop_pkt_cnt{YType::uint64, "mem0-drop-pkt-cnt"},
    mem0_ecc_double_err_cnt{YType::uint64, "mem0-ecc-double-err-cnt"},
    mem0_ecc_single_err_cnt{YType::uint64, "mem0-ecc-single-err-cnt"},
    mem1_drop_pkt_cnt{YType::uint64, "mem1-drop-pkt-cnt"},
    mem1_ecc_double_err_cnt{YType::uint64, "mem1-ecc-double-err-cnt"},
    mem1_ecc_single_err_cnt{YType::uint64, "mem1-ecc-single-err-cnt"},
    out_path0_pkt_cnt{YType::uint64, "out-path0-pkt-cnt"},
    out_path1_pkt_cnt{YType::uint64, "out-path1-pkt-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    xbar_ecc_double_err_cnt{YType::uint64, "xbar-ecc-double-err-cnt"},
    xbar_ecc_drop_pkt_cnt{YType::uint64, "xbar-ecc-drop-pkt-cnt"},
    xbar_ecc_single_err_cnt{YType::uint64, "xbar-ecc-single-err-cnt"}
{
    yang_name = "pe-cc-stats"; yang_parent_name = "sm15-stat";
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::~PeCcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_data() const
{
    return calc_rate.is_set
	|| congn_pkt_cnt.is_set
	|| fc_cc_0_1_trans_cnt.is_set
	|| in_pkt_cnt.is_set
	|| mem0_drop_pkt_cnt.is_set
	|| mem0_ecc_double_err_cnt.is_set
	|| mem0_ecc_single_err_cnt.is_set
	|| mem1_drop_pkt_cnt.is_set
	|| mem1_ecc_double_err_cnt.is_set
	|| mem1_ecc_single_err_cnt.is_set
	|| out_path0_pkt_cnt.is_set
	|| out_path1_pkt_cnt.is_set
	|| rate_cnt.is_set
	|| xbar_ecc_double_err_cnt.is_set
	|| xbar_ecc_drop_pkt_cnt.is_set
	|| xbar_ecc_single_err_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(calc_rate.operation)
	|| is_set(congn_pkt_cnt.operation)
	|| is_set(fc_cc_0_1_trans_cnt.operation)
	|| is_set(in_pkt_cnt.operation)
	|| is_set(mem0_drop_pkt_cnt.operation)
	|| is_set(mem0_ecc_double_err_cnt.operation)
	|| is_set(mem0_ecc_single_err_cnt.operation)
	|| is_set(mem1_drop_pkt_cnt.operation)
	|| is_set(mem1_ecc_double_err_cnt.operation)
	|| is_set(mem1_ecc_single_err_cnt.operation)
	|| is_set(out_path0_pkt_cnt.operation)
	|| is_set(out_path1_pkt_cnt.operation)
	|| is_set(rate_cnt.operation)
	|| is_set(xbar_ecc_double_err_cnt.operation)
	|| is_set(xbar_ecc_drop_pkt_cnt.operation)
	|| is_set(xbar_ecc_single_err_cnt.operation);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-cc-stats";

    return path_buffer.str();

}

EntityPath CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeCcStats' in Cisco_IOS_XR_asr9k_xbar_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calc_rate.is_set || is_set(calc_rate.operation)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (congn_pkt_cnt.is_set || is_set(congn_pkt_cnt.operation)) leaf_name_data.push_back(congn_pkt_cnt.get_name_leafdata());
    if (fc_cc_0_1_trans_cnt.is_set || is_set(fc_cc_0_1_trans_cnt.operation)) leaf_name_data.push_back(fc_cc_0_1_trans_cnt.get_name_leafdata());
    if (in_pkt_cnt.is_set || is_set(in_pkt_cnt.operation)) leaf_name_data.push_back(in_pkt_cnt.get_name_leafdata());
    if (mem0_drop_pkt_cnt.is_set || is_set(mem0_drop_pkt_cnt.operation)) leaf_name_data.push_back(mem0_drop_pkt_cnt.get_name_leafdata());
    if (mem0_ecc_double_err_cnt.is_set || is_set(mem0_ecc_double_err_cnt.operation)) leaf_name_data.push_back(mem0_ecc_double_err_cnt.get_name_leafdata());
    if (mem0_ecc_single_err_cnt.is_set || is_set(mem0_ecc_single_err_cnt.operation)) leaf_name_data.push_back(mem0_ecc_single_err_cnt.get_name_leafdata());
    if (mem1_drop_pkt_cnt.is_set || is_set(mem1_drop_pkt_cnt.operation)) leaf_name_data.push_back(mem1_drop_pkt_cnt.get_name_leafdata());
    if (mem1_ecc_double_err_cnt.is_set || is_set(mem1_ecc_double_err_cnt.operation)) leaf_name_data.push_back(mem1_ecc_double_err_cnt.get_name_leafdata());
    if (mem1_ecc_single_err_cnt.is_set || is_set(mem1_ecc_single_err_cnt.operation)) leaf_name_data.push_back(mem1_ecc_single_err_cnt.get_name_leafdata());
    if (out_path0_pkt_cnt.is_set || is_set(out_path0_pkt_cnt.operation)) leaf_name_data.push_back(out_path0_pkt_cnt.get_name_leafdata());
    if (out_path1_pkt_cnt.is_set || is_set(out_path1_pkt_cnt.operation)) leaf_name_data.push_back(out_path1_pkt_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.operation)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (xbar_ecc_double_err_cnt.is_set || is_set(xbar_ecc_double_err_cnt.operation)) leaf_name_data.push_back(xbar_ecc_double_err_cnt.get_name_leafdata());
    if (xbar_ecc_drop_pkt_cnt.is_set || is_set(xbar_ecc_drop_pkt_cnt.operation)) leaf_name_data.push_back(xbar_ecc_drop_pkt_cnt.get_name_leafdata());
    if (xbar_ecc_single_err_cnt.is_set || is_set(xbar_ecc_single_err_cnt.operation)) leaf_name_data.push_back(xbar_ecc_single_err_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_children()
{
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calc-rate")
    {
        calc_rate = value;
    }
    if(value_path == "congn-pkt-cnt")
    {
        congn_pkt_cnt = value;
    }
    if(value_path == "fc-cc-0-1-trans-cnt")
    {
        fc_cc_0_1_trans_cnt = value;
    }
    if(value_path == "in-pkt-cnt")
    {
        in_pkt_cnt = value;
    }
    if(value_path == "mem0-drop-pkt-cnt")
    {
        mem0_drop_pkt_cnt = value;
    }
    if(value_path == "mem0-ecc-double-err-cnt")
    {
        mem0_ecc_double_err_cnt = value;
    }
    if(value_path == "mem0-ecc-single-err-cnt")
    {
        mem0_ecc_single_err_cnt = value;
    }
    if(value_path == "mem1-drop-pkt-cnt")
    {
        mem1_drop_pkt_cnt = value;
    }
    if(value_path == "mem1-ecc-double-err-cnt")
    {
        mem1_ecc_double_err_cnt = value;
    }
    if(value_path == "mem1-ecc-single-err-cnt")
    {
        mem1_ecc_single_err_cnt = value;
    }
    if(value_path == "out-path0-pkt-cnt")
    {
        out_path0_pkt_cnt = value;
    }
    if(value_path == "out-path1-pkt-cnt")
    {
        out_path1_pkt_cnt = value;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
    }
    if(value_path == "xbar-ecc-double-err-cnt")
    {
        xbar_ecc_double_err_cnt = value;
    }
    if(value_path == "xbar-ecc-drop-pkt-cnt")
    {
        xbar_ecc_drop_pkt_cnt = value;
    }
    if(value_path == "xbar-ecc-single-err-cnt")
    {
        xbar_ecc_single_err_cnt = value;
    }
}


}
}

