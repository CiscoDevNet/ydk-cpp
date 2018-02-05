
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_xbar_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_xbar_oper {

CrossBarStats::CrossBarStats()
    :
    nodes(std::make_shared<CrossBarStats::Nodes>())
{
    nodes->parent = this;

    yang_name = "cross-bar-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-xbar-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string CrossBarStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<CrossBarStats::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void CrossBarStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CrossBarStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CrossBarStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

CrossBarStats::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "cross-bar-stats"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string CrossBarStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<CrossBarStats::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossBarStats::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    cross_bar_table(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable>())
{
    cross_bar_table->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (cross_bar_table !=  nullptr && cross_bar_table->has_operation());
}

std::string CrossBarStats::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-xbar-oper:cross-bar-stats/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string CrossBarStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cross-bar-table")
    {
        if(cross_bar_table == nullptr)
        {
            cross_bar_table = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable>();
        }
        return cross_bar_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cross_bar_table != nullptr)
    {
        children["cross-bar-table"] = cross_bar_table;
    }

    return children;
}

void CrossBarStats::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cross-bar-table" || name == "node-name")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::CrossBarTable()
    :
    pkt_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats>())
	,sm15_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats>())
{
    pkt_stats->parent = this;
    sm15_stats->parent = this;

    yang_name = "cross-bar-table"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (pkt_stats !=  nullptr && pkt_stats->has_operation())
	|| (sm15_stats !=  nullptr && sm15_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-bar-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-stats")
    {
        if(pkt_stats == nullptr)
        {
            pkt_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats>();
        }
        return pkt_stats;
    }

    if(child_yang_name == "sm15-stats")
    {
        if(sm15_stats == nullptr)
        {
            sm15_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats>();
        }
        return sm15_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pkt_stats != nullptr)
    {
        children["pkt-stats"] = pkt_stats;
    }

    if(sm15_stats != nullptr)
    {
        children["sm15-stats"] = sm15_stats;
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-stats" || name == "sm15-stats")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStats()
{

    yang_name = "pkt-stats"; yang_parent_name = "cross-bar-table"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-stat")
    {
        auto c = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat>();
        c->parent = this;
        pkt_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pkt_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-stat")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::PktStat()
    :
    asic_id{YType::str, "asic-id"},
    port{YType::str, "port"},
    internal_error_count{YType::uint64, "internal-error-count"},
    input_buffer_queued_packet_count_high{YType::uint64, "input-buffer-queued-packet-count-high"},
    ingress_packet_count_since_last_read_high{YType::uint64, "ingress-packet-count-since-last-read-high"},
    ingress_channel_utilization_count_high{YType::uint64, "ingress-channel-utilization-count-high"},
    input_buffer_back_pressure_count_high{YType::uint64, "input-buffer-back-pressure-count-high"},
    xbar_timeout_drop_count_high{YType::uint64, "xbar-timeout-drop-count-high"},
    holdrop_count_high{YType::uint64, "holdrop-count-high"},
    null_fpoe_drop_count_high{YType::uint64, "null-fpoe-drop-count-high"},
    diagnostic_packet_count_high{YType::uint64, "diagnostic-packet-count-high"},
    input_buffer_correctable_ecc_error_count_high{YType::uint64, "input-buffer-correctable-ecc-error-count-high"},
    input_buffer_uncorrectable_ecc_error_count_high{YType::uint64, "input-buffer-uncorrectable-ecc-error-count-high"},
    header_crc_error_count_high{YType::uint64, "header-crc-error-count-high"},
    short_input_header_error_count_high{YType::uint64, "short-input-header-error-count-high"},
    packet_crc_error_count_high{YType::uint64, "packet-crc-error-count-high"},
    short_packet_error_count_high{YType::uint64, "short-packet-error-count-high"},
    output_buffer_queued_packet_count_high{YType::uint64, "output-buffer-queued-packet-count-high"},
    egress_packet_count_since_last_read_high{YType::uint64, "egress-packet-count-since-last-read-high"},
    egress_channel_utilization_count_high{YType::uint64, "egress-channel-utilization-count-high"},
    output_buffer_back_pressure_count_high{YType::uint64, "output-buffer-back-pressure-count-high"},
    output_buffer_correctable_ecc_error_count_high{YType::uint64, "output-buffer-correctable-ecc-error-count-high"},
    output_buffer_uncorrectable_ecc_error_count_high{YType::uint64, "output-buffer-uncorrectable-ecc-error-count-high"},
    fpoedb_correctable_ecc_error_count_high{YType::uint64, "fpoedb-correctable-ecc-error-count-high"},
    fpoedb_uncorrectable_ecc_error_count_high{YType::uint64, "fpoedb-uncorrectable-ecc-error-count-high"},
    input_buffer_queued_packet_count_low{YType::uint64, "input-buffer-queued-packet-count-low"},
    ingress_packet_count_since_last_read_low{YType::uint64, "ingress-packet-count-since-last-read-low"},
    ingress_channel_utilization_count_low{YType::uint64, "ingress-channel-utilization-count-low"},
    input_buffer_back_pressure_count_low{YType::uint64, "input-buffer-back-pressure-count-low"},
    xbar_timeout_drop_count_low{YType::uint64, "xbar-timeout-drop-count-low"},
    holdrop_count_low{YType::uint64, "holdrop-count-low"},
    null_fpoe_drop_count_low{YType::uint64, "null-fpoe-drop-count-low"},
    diagnostic_packet_count_low{YType::uint64, "diagnostic-packet-count-low"},
    input_buffer_correctable_ecc_error_count_low{YType::uint64, "input-buffer-correctable-ecc-error-count-low"},
    input_buffer_uncorrectable_ecc_error_count_low{YType::uint64, "input-buffer-uncorrectable-ecc-error-count-low"},
    header_crc_error_count_low{YType::uint64, "header-crc-error-count-low"},
    short_input_header_error_count_low{YType::uint64, "short-input-header-error-count-low"},
    packet_crc_error_count_low{YType::uint64, "packet-crc-error-count-low"},
    short_packet_error_count_low{YType::uint64, "short-packet-error-count-low"},
    output_buffer_queued_packet_count_low{YType::uint64, "output-buffer-queued-packet-count-low"},
    egress_packet_count_since_last_read_low{YType::uint64, "egress-packet-count-since-last-read-low"},
    egress_channel_utilization_count_low{YType::uint64, "egress-channel-utilization-count-low"},
    output_buffer_back_pressure_count_low{YType::uint64, "output-buffer-back-pressure-count-low"},
    output_buffer_correctable_ecc_error_count_low{YType::uint64, "output-buffer-correctable-ecc-error-count-low"},
    output_buffer_uncorrectable_ecc_error_count_low{YType::uint64, "output-buffer-uncorrectable-ecc-error-count-low"},
    fpoedb_correctable_ecc_error_count_low{YType::uint64, "fpoedb-correctable-ecc-error-count-low"},
    fpoedb_uncorrectable_ecc_error_count_low{YType::uint64, "fpoedb-uncorrectable-ecc-error-count-low"}
{

    yang_name = "pkt-stat"; yang_parent_name = "pkt-stats"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::~PktStat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_data() const
{
    return asic_id.is_set
	|| port.is_set
	|| internal_error_count.is_set
	|| input_buffer_queued_packet_count_high.is_set
	|| ingress_packet_count_since_last_read_high.is_set
	|| ingress_channel_utilization_count_high.is_set
	|| input_buffer_back_pressure_count_high.is_set
	|| xbar_timeout_drop_count_high.is_set
	|| holdrop_count_high.is_set
	|| null_fpoe_drop_count_high.is_set
	|| diagnostic_packet_count_high.is_set
	|| input_buffer_correctable_ecc_error_count_high.is_set
	|| input_buffer_uncorrectable_ecc_error_count_high.is_set
	|| header_crc_error_count_high.is_set
	|| short_input_header_error_count_high.is_set
	|| packet_crc_error_count_high.is_set
	|| short_packet_error_count_high.is_set
	|| output_buffer_queued_packet_count_high.is_set
	|| egress_packet_count_since_last_read_high.is_set
	|| egress_channel_utilization_count_high.is_set
	|| output_buffer_back_pressure_count_high.is_set
	|| output_buffer_correctable_ecc_error_count_high.is_set
	|| output_buffer_uncorrectable_ecc_error_count_high.is_set
	|| fpoedb_correctable_ecc_error_count_high.is_set
	|| fpoedb_uncorrectable_ecc_error_count_high.is_set
	|| input_buffer_queued_packet_count_low.is_set
	|| ingress_packet_count_since_last_read_low.is_set
	|| ingress_channel_utilization_count_low.is_set
	|| input_buffer_back_pressure_count_low.is_set
	|| xbar_timeout_drop_count_low.is_set
	|| holdrop_count_low.is_set
	|| null_fpoe_drop_count_low.is_set
	|| diagnostic_packet_count_low.is_set
	|| input_buffer_correctable_ecc_error_count_low.is_set
	|| input_buffer_uncorrectable_ecc_error_count_low.is_set
	|| header_crc_error_count_low.is_set
	|| short_input_header_error_count_low.is_set
	|| packet_crc_error_count_low.is_set
	|| short_packet_error_count_low.is_set
	|| output_buffer_queued_packet_count_low.is_set
	|| egress_packet_count_since_last_read_low.is_set
	|| egress_channel_utilization_count_low.is_set
	|| output_buffer_back_pressure_count_low.is_set
	|| output_buffer_correctable_ecc_error_count_low.is_set
	|| output_buffer_uncorrectable_ecc_error_count_low.is_set
	|| fpoedb_correctable_ecc_error_count_low.is_set
	|| fpoedb_uncorrectable_ecc_error_count_low.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_id.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(internal_error_count.yfilter)
	|| ydk::is_set(input_buffer_queued_packet_count_high.yfilter)
	|| ydk::is_set(ingress_packet_count_since_last_read_high.yfilter)
	|| ydk::is_set(ingress_channel_utilization_count_high.yfilter)
	|| ydk::is_set(input_buffer_back_pressure_count_high.yfilter)
	|| ydk::is_set(xbar_timeout_drop_count_high.yfilter)
	|| ydk::is_set(holdrop_count_high.yfilter)
	|| ydk::is_set(null_fpoe_drop_count_high.yfilter)
	|| ydk::is_set(diagnostic_packet_count_high.yfilter)
	|| ydk::is_set(input_buffer_correctable_ecc_error_count_high.yfilter)
	|| ydk::is_set(input_buffer_uncorrectable_ecc_error_count_high.yfilter)
	|| ydk::is_set(header_crc_error_count_high.yfilter)
	|| ydk::is_set(short_input_header_error_count_high.yfilter)
	|| ydk::is_set(packet_crc_error_count_high.yfilter)
	|| ydk::is_set(short_packet_error_count_high.yfilter)
	|| ydk::is_set(output_buffer_queued_packet_count_high.yfilter)
	|| ydk::is_set(egress_packet_count_since_last_read_high.yfilter)
	|| ydk::is_set(egress_channel_utilization_count_high.yfilter)
	|| ydk::is_set(output_buffer_back_pressure_count_high.yfilter)
	|| ydk::is_set(output_buffer_correctable_ecc_error_count_high.yfilter)
	|| ydk::is_set(output_buffer_uncorrectable_ecc_error_count_high.yfilter)
	|| ydk::is_set(fpoedb_correctable_ecc_error_count_high.yfilter)
	|| ydk::is_set(fpoedb_uncorrectable_ecc_error_count_high.yfilter)
	|| ydk::is_set(input_buffer_queued_packet_count_low.yfilter)
	|| ydk::is_set(ingress_packet_count_since_last_read_low.yfilter)
	|| ydk::is_set(ingress_channel_utilization_count_low.yfilter)
	|| ydk::is_set(input_buffer_back_pressure_count_low.yfilter)
	|| ydk::is_set(xbar_timeout_drop_count_low.yfilter)
	|| ydk::is_set(holdrop_count_low.yfilter)
	|| ydk::is_set(null_fpoe_drop_count_low.yfilter)
	|| ydk::is_set(diagnostic_packet_count_low.yfilter)
	|| ydk::is_set(input_buffer_correctable_ecc_error_count_low.yfilter)
	|| ydk::is_set(input_buffer_uncorrectable_ecc_error_count_low.yfilter)
	|| ydk::is_set(header_crc_error_count_low.yfilter)
	|| ydk::is_set(short_input_header_error_count_low.yfilter)
	|| ydk::is_set(packet_crc_error_count_low.yfilter)
	|| ydk::is_set(short_packet_error_count_low.yfilter)
	|| ydk::is_set(output_buffer_queued_packet_count_low.yfilter)
	|| ydk::is_set(egress_packet_count_since_last_read_low.yfilter)
	|| ydk::is_set(egress_channel_utilization_count_low.yfilter)
	|| ydk::is_set(output_buffer_back_pressure_count_low.yfilter)
	|| ydk::is_set(output_buffer_correctable_ecc_error_count_low.yfilter)
	|| ydk::is_set(output_buffer_uncorrectable_ecc_error_count_low.yfilter)
	|| ydk::is_set(fpoedb_correctable_ecc_error_count_low.yfilter)
	|| ydk::is_set(fpoedb_uncorrectable_ecc_error_count_low.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.yfilter)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (internal_error_count.is_set || is_set(internal_error_count.yfilter)) leaf_name_data.push_back(internal_error_count.get_name_leafdata());
    if (input_buffer_queued_packet_count_high.is_set || is_set(input_buffer_queued_packet_count_high.yfilter)) leaf_name_data.push_back(input_buffer_queued_packet_count_high.get_name_leafdata());
    if (ingress_packet_count_since_last_read_high.is_set || is_set(ingress_packet_count_since_last_read_high.yfilter)) leaf_name_data.push_back(ingress_packet_count_since_last_read_high.get_name_leafdata());
    if (ingress_channel_utilization_count_high.is_set || is_set(ingress_channel_utilization_count_high.yfilter)) leaf_name_data.push_back(ingress_channel_utilization_count_high.get_name_leafdata());
    if (input_buffer_back_pressure_count_high.is_set || is_set(input_buffer_back_pressure_count_high.yfilter)) leaf_name_data.push_back(input_buffer_back_pressure_count_high.get_name_leafdata());
    if (xbar_timeout_drop_count_high.is_set || is_set(xbar_timeout_drop_count_high.yfilter)) leaf_name_data.push_back(xbar_timeout_drop_count_high.get_name_leafdata());
    if (holdrop_count_high.is_set || is_set(holdrop_count_high.yfilter)) leaf_name_data.push_back(holdrop_count_high.get_name_leafdata());
    if (null_fpoe_drop_count_high.is_set || is_set(null_fpoe_drop_count_high.yfilter)) leaf_name_data.push_back(null_fpoe_drop_count_high.get_name_leafdata());
    if (diagnostic_packet_count_high.is_set || is_set(diagnostic_packet_count_high.yfilter)) leaf_name_data.push_back(diagnostic_packet_count_high.get_name_leafdata());
    if (input_buffer_correctable_ecc_error_count_high.is_set || is_set(input_buffer_correctable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(input_buffer_correctable_ecc_error_count_high.get_name_leafdata());
    if (input_buffer_uncorrectable_ecc_error_count_high.is_set || is_set(input_buffer_uncorrectable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(input_buffer_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (header_crc_error_count_high.is_set || is_set(header_crc_error_count_high.yfilter)) leaf_name_data.push_back(header_crc_error_count_high.get_name_leafdata());
    if (short_input_header_error_count_high.is_set || is_set(short_input_header_error_count_high.yfilter)) leaf_name_data.push_back(short_input_header_error_count_high.get_name_leafdata());
    if (packet_crc_error_count_high.is_set || is_set(packet_crc_error_count_high.yfilter)) leaf_name_data.push_back(packet_crc_error_count_high.get_name_leafdata());
    if (short_packet_error_count_high.is_set || is_set(short_packet_error_count_high.yfilter)) leaf_name_data.push_back(short_packet_error_count_high.get_name_leafdata());
    if (output_buffer_queued_packet_count_high.is_set || is_set(output_buffer_queued_packet_count_high.yfilter)) leaf_name_data.push_back(output_buffer_queued_packet_count_high.get_name_leafdata());
    if (egress_packet_count_since_last_read_high.is_set || is_set(egress_packet_count_since_last_read_high.yfilter)) leaf_name_data.push_back(egress_packet_count_since_last_read_high.get_name_leafdata());
    if (egress_channel_utilization_count_high.is_set || is_set(egress_channel_utilization_count_high.yfilter)) leaf_name_data.push_back(egress_channel_utilization_count_high.get_name_leafdata());
    if (output_buffer_back_pressure_count_high.is_set || is_set(output_buffer_back_pressure_count_high.yfilter)) leaf_name_data.push_back(output_buffer_back_pressure_count_high.get_name_leafdata());
    if (output_buffer_correctable_ecc_error_count_high.is_set || is_set(output_buffer_correctable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(output_buffer_correctable_ecc_error_count_high.get_name_leafdata());
    if (output_buffer_uncorrectable_ecc_error_count_high.is_set || is_set(output_buffer_uncorrectable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(output_buffer_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (fpoedb_correctable_ecc_error_count_high.is_set || is_set(fpoedb_correctable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(fpoedb_correctable_ecc_error_count_high.get_name_leafdata());
    if (fpoedb_uncorrectable_ecc_error_count_high.is_set || is_set(fpoedb_uncorrectable_ecc_error_count_high.yfilter)) leaf_name_data.push_back(fpoedb_uncorrectable_ecc_error_count_high.get_name_leafdata());
    if (input_buffer_queued_packet_count_low.is_set || is_set(input_buffer_queued_packet_count_low.yfilter)) leaf_name_data.push_back(input_buffer_queued_packet_count_low.get_name_leafdata());
    if (ingress_packet_count_since_last_read_low.is_set || is_set(ingress_packet_count_since_last_read_low.yfilter)) leaf_name_data.push_back(ingress_packet_count_since_last_read_low.get_name_leafdata());
    if (ingress_channel_utilization_count_low.is_set || is_set(ingress_channel_utilization_count_low.yfilter)) leaf_name_data.push_back(ingress_channel_utilization_count_low.get_name_leafdata());
    if (input_buffer_back_pressure_count_low.is_set || is_set(input_buffer_back_pressure_count_low.yfilter)) leaf_name_data.push_back(input_buffer_back_pressure_count_low.get_name_leafdata());
    if (xbar_timeout_drop_count_low.is_set || is_set(xbar_timeout_drop_count_low.yfilter)) leaf_name_data.push_back(xbar_timeout_drop_count_low.get_name_leafdata());
    if (holdrop_count_low.is_set || is_set(holdrop_count_low.yfilter)) leaf_name_data.push_back(holdrop_count_low.get_name_leafdata());
    if (null_fpoe_drop_count_low.is_set || is_set(null_fpoe_drop_count_low.yfilter)) leaf_name_data.push_back(null_fpoe_drop_count_low.get_name_leafdata());
    if (diagnostic_packet_count_low.is_set || is_set(diagnostic_packet_count_low.yfilter)) leaf_name_data.push_back(diagnostic_packet_count_low.get_name_leafdata());
    if (input_buffer_correctable_ecc_error_count_low.is_set || is_set(input_buffer_correctable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(input_buffer_correctable_ecc_error_count_low.get_name_leafdata());
    if (input_buffer_uncorrectable_ecc_error_count_low.is_set || is_set(input_buffer_uncorrectable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(input_buffer_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (header_crc_error_count_low.is_set || is_set(header_crc_error_count_low.yfilter)) leaf_name_data.push_back(header_crc_error_count_low.get_name_leafdata());
    if (short_input_header_error_count_low.is_set || is_set(short_input_header_error_count_low.yfilter)) leaf_name_data.push_back(short_input_header_error_count_low.get_name_leafdata());
    if (packet_crc_error_count_low.is_set || is_set(packet_crc_error_count_low.yfilter)) leaf_name_data.push_back(packet_crc_error_count_low.get_name_leafdata());
    if (short_packet_error_count_low.is_set || is_set(short_packet_error_count_low.yfilter)) leaf_name_data.push_back(short_packet_error_count_low.get_name_leafdata());
    if (output_buffer_queued_packet_count_low.is_set || is_set(output_buffer_queued_packet_count_low.yfilter)) leaf_name_data.push_back(output_buffer_queued_packet_count_low.get_name_leafdata());
    if (egress_packet_count_since_last_read_low.is_set || is_set(egress_packet_count_since_last_read_low.yfilter)) leaf_name_data.push_back(egress_packet_count_since_last_read_low.get_name_leafdata());
    if (egress_channel_utilization_count_low.is_set || is_set(egress_channel_utilization_count_low.yfilter)) leaf_name_data.push_back(egress_channel_utilization_count_low.get_name_leafdata());
    if (output_buffer_back_pressure_count_low.is_set || is_set(output_buffer_back_pressure_count_low.yfilter)) leaf_name_data.push_back(output_buffer_back_pressure_count_low.get_name_leafdata());
    if (output_buffer_correctable_ecc_error_count_low.is_set || is_set(output_buffer_correctable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(output_buffer_correctable_ecc_error_count_low.get_name_leafdata());
    if (output_buffer_uncorrectable_ecc_error_count_low.is_set || is_set(output_buffer_uncorrectable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(output_buffer_uncorrectable_ecc_error_count_low.get_name_leafdata());
    if (fpoedb_correctable_ecc_error_count_low.is_set || is_set(fpoedb_correctable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(fpoedb_correctable_ecc_error_count_low.get_name_leafdata());
    if (fpoedb_uncorrectable_ecc_error_count_low.is_set || is_set(fpoedb_uncorrectable_ecc_error_count_low.yfilter)) leaf_name_data.push_back(fpoedb_uncorrectable_ecc_error_count_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
        asic_id.value_namespace = name_space;
        asic_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count = value;
        internal_error_count.value_namespace = name_space;
        internal_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-queued-packet-count-high")
    {
        input_buffer_queued_packet_count_high = value;
        input_buffer_queued_packet_count_high.value_namespace = name_space;
        input_buffer_queued_packet_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-packet-count-since-last-read-high")
    {
        ingress_packet_count_since_last_read_high = value;
        ingress_packet_count_since_last_read_high.value_namespace = name_space;
        ingress_packet_count_since_last_read_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-channel-utilization-count-high")
    {
        ingress_channel_utilization_count_high = value;
        ingress_channel_utilization_count_high.value_namespace = name_space;
        ingress_channel_utilization_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-back-pressure-count-high")
    {
        input_buffer_back_pressure_count_high = value;
        input_buffer_back_pressure_count_high.value_namespace = name_space;
        input_buffer_back_pressure_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-timeout-drop-count-high")
    {
        xbar_timeout_drop_count_high = value;
        xbar_timeout_drop_count_high.value_namespace = name_space;
        xbar_timeout_drop_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdrop-count-high")
    {
        holdrop_count_high = value;
        holdrop_count_high.value_namespace = name_space;
        holdrop_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-fpoe-drop-count-high")
    {
        null_fpoe_drop_count_high = value;
        null_fpoe_drop_count_high.value_namespace = name_space;
        null_fpoe_drop_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic-packet-count-high")
    {
        diagnostic_packet_count_high = value;
        diagnostic_packet_count_high.value_namespace = name_space;
        diagnostic_packet_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-high")
    {
        input_buffer_correctable_ecc_error_count_high = value;
        input_buffer_correctable_ecc_error_count_high.value_namespace = name_space;
        input_buffer_correctable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-high")
    {
        input_buffer_uncorrectable_ecc_error_count_high = value;
        input_buffer_uncorrectable_ecc_error_count_high.value_namespace = name_space;
        input_buffer_uncorrectable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-crc-error-count-high")
    {
        header_crc_error_count_high = value;
        header_crc_error_count_high.value_namespace = name_space;
        header_crc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-input-header-error-count-high")
    {
        short_input_header_error_count_high = value;
        short_input_header_error_count_high.value_namespace = name_space;
        short_input_header_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-crc-error-count-high")
    {
        packet_crc_error_count_high = value;
        packet_crc_error_count_high.value_namespace = name_space;
        packet_crc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-packet-error-count-high")
    {
        short_packet_error_count_high = value;
        short_packet_error_count_high.value_namespace = name_space;
        short_packet_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-queued-packet-count-high")
    {
        output_buffer_queued_packet_count_high = value;
        output_buffer_queued_packet_count_high.value_namespace = name_space;
        output_buffer_queued_packet_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-packet-count-since-last-read-high")
    {
        egress_packet_count_since_last_read_high = value;
        egress_packet_count_since_last_read_high.value_namespace = name_space;
        egress_packet_count_since_last_read_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-channel-utilization-count-high")
    {
        egress_channel_utilization_count_high = value;
        egress_channel_utilization_count_high.value_namespace = name_space;
        egress_channel_utilization_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-back-pressure-count-high")
    {
        output_buffer_back_pressure_count_high = value;
        output_buffer_back_pressure_count_high.value_namespace = name_space;
        output_buffer_back_pressure_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-high")
    {
        output_buffer_correctable_ecc_error_count_high = value;
        output_buffer_correctable_ecc_error_count_high.value_namespace = name_space;
        output_buffer_correctable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-high")
    {
        output_buffer_uncorrectable_ecc_error_count_high = value;
        output_buffer_uncorrectable_ecc_error_count_high.value_namespace = name_space;
        output_buffer_uncorrectable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-high")
    {
        fpoedb_correctable_ecc_error_count_high = value;
        fpoedb_correctable_ecc_error_count_high.value_namespace = name_space;
        fpoedb_correctable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-high")
    {
        fpoedb_uncorrectable_ecc_error_count_high = value;
        fpoedb_uncorrectable_ecc_error_count_high.value_namespace = name_space;
        fpoedb_uncorrectable_ecc_error_count_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-queued-packet-count-low")
    {
        input_buffer_queued_packet_count_low = value;
        input_buffer_queued_packet_count_low.value_namespace = name_space;
        input_buffer_queued_packet_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-packet-count-since-last-read-low")
    {
        ingress_packet_count_since_last_read_low = value;
        ingress_packet_count_since_last_read_low.value_namespace = name_space;
        ingress_packet_count_since_last_read_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-channel-utilization-count-low")
    {
        ingress_channel_utilization_count_low = value;
        ingress_channel_utilization_count_low.value_namespace = name_space;
        ingress_channel_utilization_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-back-pressure-count-low")
    {
        input_buffer_back_pressure_count_low = value;
        input_buffer_back_pressure_count_low.value_namespace = name_space;
        input_buffer_back_pressure_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-timeout-drop-count-low")
    {
        xbar_timeout_drop_count_low = value;
        xbar_timeout_drop_count_low.value_namespace = name_space;
        xbar_timeout_drop_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdrop-count-low")
    {
        holdrop_count_low = value;
        holdrop_count_low.value_namespace = name_space;
        holdrop_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-fpoe-drop-count-low")
    {
        null_fpoe_drop_count_low = value;
        null_fpoe_drop_count_low.value_namespace = name_space;
        null_fpoe_drop_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic-packet-count-low")
    {
        diagnostic_packet_count_low = value;
        diagnostic_packet_count_low.value_namespace = name_space;
        diagnostic_packet_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-low")
    {
        input_buffer_correctable_ecc_error_count_low = value;
        input_buffer_correctable_ecc_error_count_low.value_namespace = name_space;
        input_buffer_correctable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-low")
    {
        input_buffer_uncorrectable_ecc_error_count_low = value;
        input_buffer_uncorrectable_ecc_error_count_low.value_namespace = name_space;
        input_buffer_uncorrectable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-crc-error-count-low")
    {
        header_crc_error_count_low = value;
        header_crc_error_count_low.value_namespace = name_space;
        header_crc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-input-header-error-count-low")
    {
        short_input_header_error_count_low = value;
        short_input_header_error_count_low.value_namespace = name_space;
        short_input_header_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-crc-error-count-low")
    {
        packet_crc_error_count_low = value;
        packet_crc_error_count_low.value_namespace = name_space;
        packet_crc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-packet-error-count-low")
    {
        short_packet_error_count_low = value;
        short_packet_error_count_low.value_namespace = name_space;
        short_packet_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-queued-packet-count-low")
    {
        output_buffer_queued_packet_count_low = value;
        output_buffer_queued_packet_count_low.value_namespace = name_space;
        output_buffer_queued_packet_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-packet-count-since-last-read-low")
    {
        egress_packet_count_since_last_read_low = value;
        egress_packet_count_since_last_read_low.value_namespace = name_space;
        egress_packet_count_since_last_read_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-channel-utilization-count-low")
    {
        egress_channel_utilization_count_low = value;
        egress_channel_utilization_count_low.value_namespace = name_space;
        egress_channel_utilization_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-back-pressure-count-low")
    {
        output_buffer_back_pressure_count_low = value;
        output_buffer_back_pressure_count_low.value_namespace = name_space;
        output_buffer_back_pressure_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-low")
    {
        output_buffer_correctable_ecc_error_count_low = value;
        output_buffer_correctable_ecc_error_count_low.value_namespace = name_space;
        output_buffer_correctable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-low")
    {
        output_buffer_uncorrectable_ecc_error_count_low = value;
        output_buffer_uncorrectable_ecc_error_count_low.value_namespace = name_space;
        output_buffer_uncorrectable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-low")
    {
        fpoedb_correctable_ecc_error_count_low = value;
        fpoedb_correctable_ecc_error_count_low.value_namespace = name_space;
        fpoedb_correctable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-low")
    {
        fpoedb_uncorrectable_ecc_error_count_low = value;
        fpoedb_uncorrectable_ecc_error_count_low.value_namespace = name_space;
        fpoedb_uncorrectable_ecc_error_count_low.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-id")
    {
        asic_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "internal-error-count")
    {
        internal_error_count.yfilter = yfilter;
    }
    if(value_path == "input-buffer-queued-packet-count-high")
    {
        input_buffer_queued_packet_count_high.yfilter = yfilter;
    }
    if(value_path == "ingress-packet-count-since-last-read-high")
    {
        ingress_packet_count_since_last_read_high.yfilter = yfilter;
    }
    if(value_path == "ingress-channel-utilization-count-high")
    {
        ingress_channel_utilization_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-back-pressure-count-high")
    {
        input_buffer_back_pressure_count_high.yfilter = yfilter;
    }
    if(value_path == "xbar-timeout-drop-count-high")
    {
        xbar_timeout_drop_count_high.yfilter = yfilter;
    }
    if(value_path == "holdrop-count-high")
    {
        holdrop_count_high.yfilter = yfilter;
    }
    if(value_path == "null-fpoe-drop-count-high")
    {
        null_fpoe_drop_count_high.yfilter = yfilter;
    }
    if(value_path == "diagnostic-packet-count-high")
    {
        diagnostic_packet_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-high")
    {
        input_buffer_correctable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-high")
    {
        input_buffer_uncorrectable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "header-crc-error-count-high")
    {
        header_crc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "short-input-header-error-count-high")
    {
        short_input_header_error_count_high.yfilter = yfilter;
    }
    if(value_path == "packet-crc-error-count-high")
    {
        packet_crc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "short-packet-error-count-high")
    {
        short_packet_error_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-queued-packet-count-high")
    {
        output_buffer_queued_packet_count_high.yfilter = yfilter;
    }
    if(value_path == "egress-packet-count-since-last-read-high")
    {
        egress_packet_count_since_last_read_high.yfilter = yfilter;
    }
    if(value_path == "egress-channel-utilization-count-high")
    {
        egress_channel_utilization_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-back-pressure-count-high")
    {
        output_buffer_back_pressure_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-high")
    {
        output_buffer_correctable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-high")
    {
        output_buffer_uncorrectable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-high")
    {
        fpoedb_correctable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-high")
    {
        fpoedb_uncorrectable_ecc_error_count_high.yfilter = yfilter;
    }
    if(value_path == "input-buffer-queued-packet-count-low")
    {
        input_buffer_queued_packet_count_low.yfilter = yfilter;
    }
    if(value_path == "ingress-packet-count-since-last-read-low")
    {
        ingress_packet_count_since_last_read_low.yfilter = yfilter;
    }
    if(value_path == "ingress-channel-utilization-count-low")
    {
        ingress_channel_utilization_count_low.yfilter = yfilter;
    }
    if(value_path == "input-buffer-back-pressure-count-low")
    {
        input_buffer_back_pressure_count_low.yfilter = yfilter;
    }
    if(value_path == "xbar-timeout-drop-count-low")
    {
        xbar_timeout_drop_count_low.yfilter = yfilter;
    }
    if(value_path == "holdrop-count-low")
    {
        holdrop_count_low.yfilter = yfilter;
    }
    if(value_path == "null-fpoe-drop-count-low")
    {
        null_fpoe_drop_count_low.yfilter = yfilter;
    }
    if(value_path == "diagnostic-packet-count-low")
    {
        diagnostic_packet_count_low.yfilter = yfilter;
    }
    if(value_path == "input-buffer-correctable-ecc-error-count-low")
    {
        input_buffer_correctable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "input-buffer-uncorrectable-ecc-error-count-low")
    {
        input_buffer_uncorrectable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "header-crc-error-count-low")
    {
        header_crc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "short-input-header-error-count-low")
    {
        short_input_header_error_count_low.yfilter = yfilter;
    }
    if(value_path == "packet-crc-error-count-low")
    {
        packet_crc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "short-packet-error-count-low")
    {
        short_packet_error_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-queued-packet-count-low")
    {
        output_buffer_queued_packet_count_low.yfilter = yfilter;
    }
    if(value_path == "egress-packet-count-since-last-read-low")
    {
        egress_packet_count_since_last_read_low.yfilter = yfilter;
    }
    if(value_path == "egress-channel-utilization-count-low")
    {
        egress_channel_utilization_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-back-pressure-count-low")
    {
        output_buffer_back_pressure_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-correctable-ecc-error-count-low")
    {
        output_buffer_correctable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "output-buffer-uncorrectable-ecc-error-count-low")
    {
        output_buffer_uncorrectable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "fpoedb-correctable-ecc-error-count-low")
    {
        fpoedb_correctable_ecc_error_count_low.yfilter = yfilter;
    }
    if(value_path == "fpoedb-uncorrectable-ecc-error-count-low")
    {
        fpoedb_uncorrectable_ecc_error_count_low.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-id" || name == "port" || name == "internal-error-count" || name == "input-buffer-queued-packet-count-high" || name == "ingress-packet-count-since-last-read-high" || name == "ingress-channel-utilization-count-high" || name == "input-buffer-back-pressure-count-high" || name == "xbar-timeout-drop-count-high" || name == "holdrop-count-high" || name == "null-fpoe-drop-count-high" || name == "diagnostic-packet-count-high" || name == "input-buffer-correctable-ecc-error-count-high" || name == "input-buffer-uncorrectable-ecc-error-count-high" || name == "header-crc-error-count-high" || name == "short-input-header-error-count-high" || name == "packet-crc-error-count-high" || name == "short-packet-error-count-high" || name == "output-buffer-queued-packet-count-high" || name == "egress-packet-count-since-last-read-high" || name == "egress-channel-utilization-count-high" || name == "output-buffer-back-pressure-count-high" || name == "output-buffer-correctable-ecc-error-count-high" || name == "output-buffer-uncorrectable-ecc-error-count-high" || name == "fpoedb-correctable-ecc-error-count-high" || name == "fpoedb-uncorrectable-ecc-error-count-high" || name == "input-buffer-queued-packet-count-low" || name == "ingress-packet-count-since-last-read-low" || name == "ingress-channel-utilization-count-low" || name == "input-buffer-back-pressure-count-low" || name == "xbar-timeout-drop-count-low" || name == "holdrop-count-low" || name == "null-fpoe-drop-count-low" || name == "diagnostic-packet-count-low" || name == "input-buffer-correctable-ecc-error-count-low" || name == "input-buffer-uncorrectable-ecc-error-count-low" || name == "header-crc-error-count-low" || name == "short-input-header-error-count-low" || name == "packet-crc-error-count-low" || name == "short-packet-error-count-low" || name == "output-buffer-queued-packet-count-low" || name == "egress-packet-count-since-last-read-low" || name == "egress-channel-utilization-count-low" || name == "output-buffer-back-pressure-count-low" || name == "output-buffer-correctable-ecc-error-count-low" || name == "output-buffer-uncorrectable-ecc-error-count-low" || name == "fpoedb-correctable-ecc-error-count-low" || name == "fpoedb-uncorrectable-ecc-error-count-low")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stats()
{

    yang_name = "sm15-stats"; yang_parent_name = "cross-bar-table"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm15-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sm15-stat")
    {
        auto c = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat>();
        c->parent = this;
        sm15_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sm15_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sm15-stat")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Sm15Stat()
    :
    asic_id{YType::str, "asic-id"},
    port{YType::str, "port"},
    internal_err_cnt{YType::uint64, "internal-err-cnt"}
    	,
    ua0_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats>())
	,ua1_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats>())
	,ua2_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats>())
	,ma_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats>())
	,ca_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats>())
	,pi_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats>())
	,pe_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats>())
	,pi_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats>())
	,pi_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats>())
	,pi_cc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats>())
	,pe_uc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats>())
	,pe_mc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats>())
	,pe_cc_stats(std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats>())
{
    ua0_stats->parent = this;
    ua1_stats->parent = this;
    ua2_stats->parent = this;
    ma_stats->parent = this;
    ca_stats->parent = this;
    pi_stats->parent = this;
    pe_stats->parent = this;
    pi_uc_stats->parent = this;
    pi_mc_stats->parent = this;
    pi_cc_stats->parent = this;
    pe_uc_stats->parent = this;
    pe_mc_stats->parent = this;
    pe_cc_stats->parent = this;

    yang_name = "sm15-stat"; yang_parent_name = "sm15-stats"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::~Sm15Stat()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_data() const
{
    return asic_id.is_set
	|| port.is_set
	|| internal_err_cnt.is_set
	|| (ua0_stats !=  nullptr && ua0_stats->has_data())
	|| (ua1_stats !=  nullptr && ua1_stats->has_data())
	|| (ua2_stats !=  nullptr && ua2_stats->has_data())
	|| (ma_stats !=  nullptr && ma_stats->has_data())
	|| (ca_stats !=  nullptr && ca_stats->has_data())
	|| (pi_stats !=  nullptr && pi_stats->has_data())
	|| (pe_stats !=  nullptr && pe_stats->has_data())
	|| (pi_uc_stats !=  nullptr && pi_uc_stats->has_data())
	|| (pi_mc_stats !=  nullptr && pi_mc_stats->has_data())
	|| (pi_cc_stats !=  nullptr && pi_cc_stats->has_data())
	|| (pe_uc_stats !=  nullptr && pe_uc_stats->has_data())
	|| (pe_mc_stats !=  nullptr && pe_mc_stats->has_data())
	|| (pe_cc_stats !=  nullptr && pe_cc_stats->has_data());
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_id.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(internal_err_cnt.yfilter)
	|| (ua0_stats !=  nullptr && ua0_stats->has_operation())
	|| (ua1_stats !=  nullptr && ua1_stats->has_operation())
	|| (ua2_stats !=  nullptr && ua2_stats->has_operation())
	|| (ma_stats !=  nullptr && ma_stats->has_operation())
	|| (ca_stats !=  nullptr && ca_stats->has_operation())
	|| (pi_stats !=  nullptr && pi_stats->has_operation())
	|| (pe_stats !=  nullptr && pe_stats->has_operation())
	|| (pi_uc_stats !=  nullptr && pi_uc_stats->has_operation())
	|| (pi_mc_stats !=  nullptr && pi_mc_stats->has_operation())
	|| (pi_cc_stats !=  nullptr && pi_cc_stats->has_operation())
	|| (pe_uc_stats !=  nullptr && pe_uc_stats->has_operation())
	|| (pe_mc_stats !=  nullptr && pe_mc_stats->has_operation())
	|| (pe_cc_stats !=  nullptr && pe_cc_stats->has_operation());
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm15-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_id.is_set || is_set(asic_id.yfilter)) leaf_name_data.push_back(asic_id.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (internal_err_cnt.is_set || is_set(internal_err_cnt.yfilter)) leaf_name_data.push_back(internal_err_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ua0-stats")
    {
        if(ua0_stats == nullptr)
        {
            ua0_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats>();
        }
        return ua0_stats;
    }

    if(child_yang_name == "ua1-stats")
    {
        if(ua1_stats == nullptr)
        {
            ua1_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats>();
        }
        return ua1_stats;
    }

    if(child_yang_name == "ua2-stats")
    {
        if(ua2_stats == nullptr)
        {
            ua2_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats>();
        }
        return ua2_stats;
    }

    if(child_yang_name == "ma-stats")
    {
        if(ma_stats == nullptr)
        {
            ma_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats>();
        }
        return ma_stats;
    }

    if(child_yang_name == "ca-stats")
    {
        if(ca_stats == nullptr)
        {
            ca_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats>();
        }
        return ca_stats;
    }

    if(child_yang_name == "pi-stats")
    {
        if(pi_stats == nullptr)
        {
            pi_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats>();
        }
        return pi_stats;
    }

    if(child_yang_name == "pe-stats")
    {
        if(pe_stats == nullptr)
        {
            pe_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats>();
        }
        return pe_stats;
    }

    if(child_yang_name == "pi-uc-stats")
    {
        if(pi_uc_stats == nullptr)
        {
            pi_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats>();
        }
        return pi_uc_stats;
    }

    if(child_yang_name == "pi-mc-stats")
    {
        if(pi_mc_stats == nullptr)
        {
            pi_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats>();
        }
        return pi_mc_stats;
    }

    if(child_yang_name == "pi-cc-stats")
    {
        if(pi_cc_stats == nullptr)
        {
            pi_cc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats>();
        }
        return pi_cc_stats;
    }

    if(child_yang_name == "pe-uc-stats")
    {
        if(pe_uc_stats == nullptr)
        {
            pe_uc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats>();
        }
        return pe_uc_stats;
    }

    if(child_yang_name == "pe-mc-stats")
    {
        if(pe_mc_stats == nullptr)
        {
            pe_mc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats>();
        }
        return pe_mc_stats;
    }

    if(child_yang_name == "pe-cc-stats")
    {
        if(pe_cc_stats == nullptr)
        {
            pe_cc_stats = std::make_shared<CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats>();
        }
        return pe_cc_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ua0_stats != nullptr)
    {
        children["ua0-stats"] = ua0_stats;
    }

    if(ua1_stats != nullptr)
    {
        children["ua1-stats"] = ua1_stats;
    }

    if(ua2_stats != nullptr)
    {
        children["ua2-stats"] = ua2_stats;
    }

    if(ma_stats != nullptr)
    {
        children["ma-stats"] = ma_stats;
    }

    if(ca_stats != nullptr)
    {
        children["ca-stats"] = ca_stats;
    }

    if(pi_stats != nullptr)
    {
        children["pi-stats"] = pi_stats;
    }

    if(pe_stats != nullptr)
    {
        children["pe-stats"] = pe_stats;
    }

    if(pi_uc_stats != nullptr)
    {
        children["pi-uc-stats"] = pi_uc_stats;
    }

    if(pi_mc_stats != nullptr)
    {
        children["pi-mc-stats"] = pi_mc_stats;
    }

    if(pi_cc_stats != nullptr)
    {
        children["pi-cc-stats"] = pi_cc_stats;
    }

    if(pe_uc_stats != nullptr)
    {
        children["pe-uc-stats"] = pe_uc_stats;
    }

    if(pe_mc_stats != nullptr)
    {
        children["pe-mc-stats"] = pe_mc_stats;
    }

    if(pe_cc_stats != nullptr)
    {
        children["pe-cc-stats"] = pe_cc_stats;
    }

    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-id")
    {
        asic_id = value;
        asic_id.value_namespace = name_space;
        asic_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt = value;
        internal_err_cnt.value_namespace = name_space;
        internal_err_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-id")
    {
        asic_id.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "internal-err-cnt")
    {
        internal_err_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ua0-stats" || name == "ua1-stats" || name == "ua2-stats" || name == "ma-stats" || name == "ca-stats" || name == "pi-stats" || name == "pe-stats" || name == "pi-uc-stats" || name == "pi-mc-stats" || name == "pi-cc-stats" || name == "pe-uc-stats" || name == "pe-mc-stats" || name == "pe-cc-stats" || name == "asic-id" || name == "port" || name == "internal-err-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::Ua0Stats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"}
{

    yang_name = "ua0-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::~Ua0Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| ack_wait_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(ack_wait_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua0-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.yfilter)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
        ack_wait_cnt.value_namespace = name_space;
        ack_wait_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-fabric-to-cnt" || name == "ack-wait-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::Ua1Stats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"}
{

    yang_name = "ua1-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::~Ua1Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| ack_wait_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(ack_wait_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua1-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.yfilter)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
        ack_wait_cnt.value_namespace = name_space;
        ack_wait_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-fabric-to-cnt" || name == "ack-wait-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::Ua2Stats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    ack_wait_cnt{YType::uint64, "ack-wait-cnt"}
{

    yang_name = "ua2-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::~Ua2Stats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| ack_wait_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(ack_wait_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ua2-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (ack_wait_cnt.is_set || is_set(ack_wait_cnt.yfilter)) leaf_name_data.push_back(ack_wait_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt = value;
        ack_wait_cnt.value_namespace = name_space;
        ack_wait_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "ack-wait-cnt")
    {
        ack_wait_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-fabric-to-cnt" || name == "ack-wait-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::MaStats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"},
    rx_re_transmit_cnt{YType::uint64, "rx-re-transmit-cnt"},
    rx_fabric_to_cnt{YType::uint64, "rx-fabric-to-cnt"},
    rx_hol_to_cnt{YType::uint64, "rx-hol-to-cnt"}
{

    yang_name = "ma-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::~MaStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set
	|| rx_re_transmit_cnt.is_set
	|| rx_fabric_to_cnt.is_set
	|| rx_hol_to_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter)
	|| ydk::is_set(rx_re_transmit_cnt.yfilter)
	|| ydk::is_set(rx_fabric_to_cnt.yfilter)
	|| ydk::is_set(rx_hol_to_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ma-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());
    if (rx_re_transmit_cnt.is_set || is_set(rx_re_transmit_cnt.yfilter)) leaf_name_data.push_back(rx_re_transmit_cnt.get_name_leafdata());
    if (rx_fabric_to_cnt.is_set || is_set(rx_fabric_to_cnt.yfilter)) leaf_name_data.push_back(rx_fabric_to_cnt.get_name_leafdata());
    if (rx_hol_to_cnt.is_set || is_set(rx_hol_to_cnt.yfilter)) leaf_name_data.push_back(rx_hol_to_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-re-transmit-cnt")
    {
        rx_re_transmit_cnt = value;
        rx_re_transmit_cnt.value_namespace = name_space;
        rx_re_transmit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt = value;
        rx_fabric_to_cnt.value_namespace = name_space;
        rx_fabric_to_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-hol-to-cnt")
    {
        rx_hol_to_cnt = value;
        rx_hol_to_cnt.value_namespace = name_space;
        rx_hol_to_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-re-transmit-cnt")
    {
        rx_re_transmit_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-fabric-to-cnt")
    {
        rx_fabric_to_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-hol-to-cnt")
    {
        rx_hol_to_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt" || name == "rx-re-transmit-cnt" || name == "rx-fabric-to-cnt" || name == "rx-hol-to-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::CaStats()
    :
    dest_drop_pkt_cnt{YType::uint64, "dest-drop-pkt-cnt"},
    src_dest_pkt_cnt{YType::uint64, "src-dest-pkt-cnt"},
    dest_src_pkt_cnt{YType::uint64, "dest-src-pkt-cnt"},
    rcv_pkt_cnt{YType::uint64, "rcv-pkt-cnt"},
    tx_pkt_cnt{YType::uint64, "tx-pkt-cnt"},
    rx_drop_pkt_cnt{YType::uint64, "rx-drop-pkt-cnt"}
{

    yang_name = "ca-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::~CaStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_data() const
{
    return dest_drop_pkt_cnt.is_set
	|| src_dest_pkt_cnt.is_set
	|| dest_src_pkt_cnt.is_set
	|| rcv_pkt_cnt.is_set
	|| tx_pkt_cnt.is_set
	|| rx_drop_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_drop_pkt_cnt.yfilter)
	|| ydk::is_set(src_dest_pkt_cnt.yfilter)
	|| ydk::is_set(dest_src_pkt_cnt.yfilter)
	|| ydk::is_set(rcv_pkt_cnt.yfilter)
	|| ydk::is_set(tx_pkt_cnt.yfilter)
	|| ydk::is_set(rx_drop_pkt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_drop_pkt_cnt.is_set || is_set(dest_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_drop_pkt_cnt.get_name_leafdata());
    if (src_dest_pkt_cnt.is_set || is_set(src_dest_pkt_cnt.yfilter)) leaf_name_data.push_back(src_dest_pkt_cnt.get_name_leafdata());
    if (dest_src_pkt_cnt.is_set || is_set(dest_src_pkt_cnt.yfilter)) leaf_name_data.push_back(dest_src_pkt_cnt.get_name_leafdata());
    if (rcv_pkt_cnt.is_set || is_set(rcv_pkt_cnt.yfilter)) leaf_name_data.push_back(rcv_pkt_cnt.get_name_leafdata());
    if (tx_pkt_cnt.is_set || is_set(tx_pkt_cnt.yfilter)) leaf_name_data.push_back(tx_pkt_cnt.get_name_leafdata());
    if (rx_drop_pkt_cnt.is_set || is_set(rx_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(rx_drop_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt = value;
        dest_drop_pkt_cnt.value_namespace = name_space;
        dest_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt = value;
        src_dest_pkt_cnt.value_namespace = name_space;
        src_dest_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt = value;
        dest_src_pkt_cnt.value_namespace = name_space;
        dest_src_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt = value;
        rcv_pkt_cnt.value_namespace = name_space;
        rcv_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt = value;
        tx_pkt_cnt.value_namespace = name_space;
        tx_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt = value;
        rx_drop_pkt_cnt.value_namespace = name_space;
        rx_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-drop-pkt-cnt")
    {
        dest_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "src-dest-pkt-cnt")
    {
        src_dest_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dest-src-pkt-cnt")
    {
        dest_src_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rcv-pkt-cnt")
    {
        rcv_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tx-pkt-cnt")
    {
        tx_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-drop-pkt-cnt")
    {
        rx_drop_pkt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-drop-pkt-cnt" || name == "src-dest-pkt-cnt" || name == "dest-src-pkt-cnt" || name == "rcv-pkt-cnt" || name == "tx-pkt-cnt" || name == "rx-drop-pkt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::PiStats()
    :
    total_rate1_cnt{YType::uint64, "total-rate1-cnt"},
    total_rate2_cnt{YType::uint64, "total-rate2-cnt"},
    total_rate3_cnt{YType::uint64, "total-rate3-cnt"},
    total_calc_rate{YType::uint64, "total-calc-rate"}
{

    yang_name = "pi-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::~PiStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_data() const
{
    return total_rate1_cnt.is_set
	|| total_rate2_cnt.is_set
	|| total_rate3_cnt.is_set
	|| total_calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_rate1_cnt.yfilter)
	|| ydk::is_set(total_rate2_cnt.yfilter)
	|| ydk::is_set(total_rate3_cnt.yfilter)
	|| ydk::is_set(total_calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_rate1_cnt.is_set || is_set(total_rate1_cnt.yfilter)) leaf_name_data.push_back(total_rate1_cnt.get_name_leafdata());
    if (total_rate2_cnt.is_set || is_set(total_rate2_cnt.yfilter)) leaf_name_data.push_back(total_rate2_cnt.get_name_leafdata());
    if (total_rate3_cnt.is_set || is_set(total_rate3_cnt.yfilter)) leaf_name_data.push_back(total_rate3_cnt.get_name_leafdata());
    if (total_calc_rate.is_set || is_set(total_calc_rate.yfilter)) leaf_name_data.push_back(total_calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt = value;
        total_rate1_cnt.value_namespace = name_space;
        total_rate1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt = value;
        total_rate2_cnt.value_namespace = name_space;
        total_rate2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt = value;
        total_rate3_cnt.value_namespace = name_space;
        total_rate3_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate = value;
        total_calc_rate.value_namespace = name_space;
        total_calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt.yfilter = yfilter;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-rate1-cnt" || name == "total-rate2-cnt" || name == "total-rate3-cnt" || name == "total-calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::PeStats()
    :
    total_rate1_cnt{YType::uint64, "total-rate1-cnt"},
    total_rate2_cnt{YType::uint64, "total-rate2-cnt"},
    total_rate3_cnt{YType::uint64, "total-rate3-cnt"},
    total_calc_rate{YType::uint64, "total-calc-rate"},
    mc2uc_preempt_cnt{YType::uint64, "mc2uc-preempt-cnt"}
{

    yang_name = "pe-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::~PeStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_data() const
{
    return total_rate1_cnt.is_set
	|| total_rate2_cnt.is_set
	|| total_rate3_cnt.is_set
	|| total_calc_rate.is_set
	|| mc2uc_preempt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_rate1_cnt.yfilter)
	|| ydk::is_set(total_rate2_cnt.yfilter)
	|| ydk::is_set(total_rate3_cnt.yfilter)
	|| ydk::is_set(total_calc_rate.yfilter)
	|| ydk::is_set(mc2uc_preempt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_rate1_cnt.is_set || is_set(total_rate1_cnt.yfilter)) leaf_name_data.push_back(total_rate1_cnt.get_name_leafdata());
    if (total_rate2_cnt.is_set || is_set(total_rate2_cnt.yfilter)) leaf_name_data.push_back(total_rate2_cnt.get_name_leafdata());
    if (total_rate3_cnt.is_set || is_set(total_rate3_cnt.yfilter)) leaf_name_data.push_back(total_rate3_cnt.get_name_leafdata());
    if (total_calc_rate.is_set || is_set(total_calc_rate.yfilter)) leaf_name_data.push_back(total_calc_rate.get_name_leafdata());
    if (mc2uc_preempt_cnt.is_set || is_set(mc2uc_preempt_cnt.yfilter)) leaf_name_data.push_back(mc2uc_preempt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt = value;
        total_rate1_cnt.value_namespace = name_space;
        total_rate1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt = value;
        total_rate2_cnt.value_namespace = name_space;
        total_rate2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt = value;
        total_rate3_cnt.value_namespace = name_space;
        total_rate3_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate = value;
        total_calc_rate.value_namespace = name_space;
        total_calc_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mc2uc-preempt-cnt")
    {
        mc2uc_preempt_cnt = value;
        mc2uc_preempt_cnt.value_namespace = name_space;
        mc2uc_preempt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-rate1-cnt")
    {
        total_rate1_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate2-cnt")
    {
        total_rate2_cnt.yfilter = yfilter;
    }
    if(value_path == "total-rate3-cnt")
    {
        total_rate3_cnt.yfilter = yfilter;
    }
    if(value_path == "total-calc-rate")
    {
        total_calc_rate.yfilter = yfilter;
    }
    if(value_path == "mc2uc-preempt-cnt")
    {
        mc2uc_preempt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-rate1-cnt" || name == "total-rate2-cnt" || name == "total-rate3-cnt" || name == "total-calc-rate" || name == "mc2uc-preempt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::PiUcStats()
    :
    pkt_rcv_cnt{YType::uint64, "pkt-rcv-cnt"},
    pkt_seq_err_cnt{YType::uint64, "pkt-seq-err-cnt"},
    in_coming_pkt_err_cnt{YType::uint64, "in-coming-pkt-err-cnt"},
    min_pkt_len_err_cnt{YType::uint64, "min-pkt-len-err-cnt"},
    max_pkt_len_err_cnt{YType::uint64, "max-pkt-len-err-cnt"},
    line_err_drp_pkt{YType::uint64, "line-err-drp-pkt"},
    pkt_crc_err_cnt{YType::uint64, "pkt-crc-err-cnt"},
    pkt_cfh_crc_err_cnt{YType::uint64, "pkt-cfh-crc-err-cnt"},
    line_s_written_in_mem0{YType::uint64, "line-s-written-in-mem0"},
    line_s_written_in_mem1{YType::uint64, "line-s-written-in-mem1"},
    line_s_written_in_mem2{YType::uint64, "line-s-written-in-mem2"},
    tail_drp_pkt_cnt{YType::uint64, "tail-drp-pkt-cnt"},
    uc0_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc0-data-mem-ecc-1bit-err-cnt"},
    uc1_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc1-data-mem-ecc-1bit-err-cnt"},
    uc2_data_mem_ecc_1bit_err_cnt{YType::uint64, "uc2-data-mem-ecc-1bit-err-cnt"},
    uc0_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc0-data-mem-ecc-2bit-err-cnt"},
    uc1_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc1-data-mem-ecc-2bit-err-cnt"},
    uc2_data_mem_ecc_2bit_err_cnt{YType::uint64, "uc2-data-mem-ecc-2bit-err-cnt"},
    diag_pkt_cnt{YType::uint64, "diag-pkt-cnt"},
    pkt_sent_to_disabled_port_cnt{YType::uint64, "pkt-sent-to-disabled-port-cnt"},
    pkt_null_poe_sent_ua0_cnt{YType::uint64, "pkt-null-poe-sent-ua0-cnt"},
    pkt_null_poe_sent_ua1_cnt{YType::uint64, "pkt-null-poe-sent-ua1-cnt"},
    pkt_null_poe_sent_ua2_cnt{YType::uint64, "pkt-null-poe-sent-ua2-cnt"},
    pkt_fpoe_addr_rng_hit_cnt{YType::uint64, "pkt-fpoe-addr-rng-hit-cnt"},
    fpoe_mem_ecc_1bit_err_cnt{YType::uint64, "fpoe-mem-ecc-1bit-err-cnt"},
    fpoe_mem_ecc_2bit_err_cnt{YType::uint64, "fpoe-mem-ecc-2bit-err-cnt"},
    pkts_sent_to_ux0_cnt{YType::uint64, "pkts-sent-to-ux0-cnt"},
    pkts_sent_to_ux1_cnt{YType::uint64, "pkts-sent-to-ux1-cnt"},
    pkts_sent_to_ux2_cnt{YType::uint64, "pkts-sent-to-ux2-cnt"},
    cpp_head_drop_pkt_cnt{YType::uint64, "cpp-head-drop-pkt-cnt"},
    tr_head_drop_pkt_cnt{YType::uint64, "tr-head-drop-pkt-cnt"},
    tr_pkt_sent_to_ux{YType::uint64, "tr-pkt-sent-to-ux"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"},
    crc_stomp_pkt_cnt{YType::uint64, "crc-stomp-pkt-cnt"}
{

    yang_name = "pi-uc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::~PiUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_data() const
{
    return pkt_rcv_cnt.is_set
	|| pkt_seq_err_cnt.is_set
	|| in_coming_pkt_err_cnt.is_set
	|| min_pkt_len_err_cnt.is_set
	|| max_pkt_len_err_cnt.is_set
	|| line_err_drp_pkt.is_set
	|| pkt_crc_err_cnt.is_set
	|| pkt_cfh_crc_err_cnt.is_set
	|| line_s_written_in_mem0.is_set
	|| line_s_written_in_mem1.is_set
	|| line_s_written_in_mem2.is_set
	|| tail_drp_pkt_cnt.is_set
	|| uc0_data_mem_ecc_1bit_err_cnt.is_set
	|| uc1_data_mem_ecc_1bit_err_cnt.is_set
	|| uc2_data_mem_ecc_1bit_err_cnt.is_set
	|| uc0_data_mem_ecc_2bit_err_cnt.is_set
	|| uc1_data_mem_ecc_2bit_err_cnt.is_set
	|| uc2_data_mem_ecc_2bit_err_cnt.is_set
	|| diag_pkt_cnt.is_set
	|| pkt_sent_to_disabled_port_cnt.is_set
	|| pkt_null_poe_sent_ua0_cnt.is_set
	|| pkt_null_poe_sent_ua1_cnt.is_set
	|| pkt_null_poe_sent_ua2_cnt.is_set
	|| pkt_fpoe_addr_rng_hit_cnt.is_set
	|| fpoe_mem_ecc_1bit_err_cnt.is_set
	|| fpoe_mem_ecc_2bit_err_cnt.is_set
	|| pkts_sent_to_ux0_cnt.is_set
	|| pkts_sent_to_ux1_cnt.is_set
	|| pkts_sent_to_ux2_cnt.is_set
	|| cpp_head_drop_pkt_cnt.is_set
	|| tr_head_drop_pkt_cnt.is_set
	|| tr_pkt_sent_to_ux.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set
	|| crc_stomp_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_rcv_cnt.yfilter)
	|| ydk::is_set(pkt_seq_err_cnt.yfilter)
	|| ydk::is_set(in_coming_pkt_err_cnt.yfilter)
	|| ydk::is_set(min_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(max_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(line_err_drp_pkt.yfilter)
	|| ydk::is_set(pkt_crc_err_cnt.yfilter)
	|| ydk::is_set(pkt_cfh_crc_err_cnt.yfilter)
	|| ydk::is_set(line_s_written_in_mem0.yfilter)
	|| ydk::is_set(line_s_written_in_mem1.yfilter)
	|| ydk::is_set(line_s_written_in_mem2.yfilter)
	|| ydk::is_set(tail_drp_pkt_cnt.yfilter)
	|| ydk::is_set(uc0_data_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(uc1_data_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(uc2_data_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(uc0_data_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(uc1_data_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(uc2_data_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(diag_pkt_cnt.yfilter)
	|| ydk::is_set(pkt_sent_to_disabled_port_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_ua0_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_ua1_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_ua2_cnt.yfilter)
	|| ydk::is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_ux0_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_ux1_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_ux2_cnt.yfilter)
	|| ydk::is_set(cpp_head_drop_pkt_cnt.yfilter)
	|| ydk::is_set(tr_head_drop_pkt_cnt.yfilter)
	|| ydk::is_set(tr_pkt_sent_to_ux.yfilter)
	|| ydk::is_set(stop_thrsh_hit_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter)
	|| ydk::is_set(crc_stomp_pkt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_rcv_cnt.is_set || is_set(pkt_rcv_cnt.yfilter)) leaf_name_data.push_back(pkt_rcv_cnt.get_name_leafdata());
    if (pkt_seq_err_cnt.is_set || is_set(pkt_seq_err_cnt.yfilter)) leaf_name_data.push_back(pkt_seq_err_cnt.get_name_leafdata());
    if (in_coming_pkt_err_cnt.is_set || is_set(in_coming_pkt_err_cnt.yfilter)) leaf_name_data.push_back(in_coming_pkt_err_cnt.get_name_leafdata());
    if (min_pkt_len_err_cnt.is_set || is_set(min_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(min_pkt_len_err_cnt.get_name_leafdata());
    if (max_pkt_len_err_cnt.is_set || is_set(max_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(max_pkt_len_err_cnt.get_name_leafdata());
    if (line_err_drp_pkt.is_set || is_set(line_err_drp_pkt.yfilter)) leaf_name_data.push_back(line_err_drp_pkt.get_name_leafdata());
    if (pkt_crc_err_cnt.is_set || is_set(pkt_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_crc_err_cnt.get_name_leafdata());
    if (pkt_cfh_crc_err_cnt.is_set || is_set(pkt_cfh_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_cfh_crc_err_cnt.get_name_leafdata());
    if (line_s_written_in_mem0.is_set || is_set(line_s_written_in_mem0.yfilter)) leaf_name_data.push_back(line_s_written_in_mem0.get_name_leafdata());
    if (line_s_written_in_mem1.is_set || is_set(line_s_written_in_mem1.yfilter)) leaf_name_data.push_back(line_s_written_in_mem1.get_name_leafdata());
    if (line_s_written_in_mem2.is_set || is_set(line_s_written_in_mem2.yfilter)) leaf_name_data.push_back(line_s_written_in_mem2.get_name_leafdata());
    if (tail_drp_pkt_cnt.is_set || is_set(tail_drp_pkt_cnt.yfilter)) leaf_name_data.push_back(tail_drp_pkt_cnt.get_name_leafdata());
    if (uc0_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc0_data_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(uc0_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc1_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc1_data_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(uc1_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc2_data_mem_ecc_1bit_err_cnt.is_set || is_set(uc2_data_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(uc2_data_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (uc0_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc0_data_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(uc0_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (uc1_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc1_data_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(uc1_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (uc2_data_mem_ecc_2bit_err_cnt.is_set || is_set(uc2_data_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(uc2_data_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (diag_pkt_cnt.is_set || is_set(diag_pkt_cnt.yfilter)) leaf_name_data.push_back(diag_pkt_cnt.get_name_leafdata());
    if (pkt_sent_to_disabled_port_cnt.is_set || is_set(pkt_sent_to_disabled_port_cnt.yfilter)) leaf_name_data.push_back(pkt_sent_to_disabled_port_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua0_cnt.is_set || is_set(pkt_null_poe_sent_ua0_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_ua0_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua1_cnt.is_set || is_set(pkt_null_poe_sent_ua1_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_ua1_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_ua2_cnt.is_set || is_set(pkt_null_poe_sent_ua2_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_ua2_cnt.get_name_leafdata());
    if (pkt_fpoe_addr_rng_hit_cnt.is_set || is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)) leaf_name_data.push_back(pkt_fpoe_addr_rng_hit_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_1bit_err_cnt.is_set || is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_2bit_err_cnt.is_set || is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (pkts_sent_to_ux0_cnt.is_set || is_set(pkts_sent_to_ux0_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_ux0_cnt.get_name_leafdata());
    if (pkts_sent_to_ux1_cnt.is_set || is_set(pkts_sent_to_ux1_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_ux1_cnt.get_name_leafdata());
    if (pkts_sent_to_ux2_cnt.is_set || is_set(pkts_sent_to_ux2_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_ux2_cnt.get_name_leafdata());
    if (cpp_head_drop_pkt_cnt.is_set || is_set(cpp_head_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(cpp_head_drop_pkt_cnt.get_name_leafdata());
    if (tr_head_drop_pkt_cnt.is_set || is_set(tr_head_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(tr_head_drop_pkt_cnt.get_name_leafdata());
    if (tr_pkt_sent_to_ux.is_set || is_set(tr_pkt_sent_to_ux.yfilter)) leaf_name_data.push_back(tr_pkt_sent_to_ux.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.yfilter)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (crc_stomp_pkt_cnt.is_set || is_set(crc_stomp_pkt_cnt.yfilter)) leaf_name_data.push_back(crc_stomp_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt = value;
        pkt_rcv_cnt.value_namespace = name_space;
        pkt_rcv_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt = value;
        pkt_seq_err_cnt.value_namespace = name_space;
        pkt_seq_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt = value;
        in_coming_pkt_err_cnt.value_namespace = name_space;
        in_coming_pkt_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt = value;
        min_pkt_len_err_cnt.value_namespace = name_space;
        min_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt = value;
        max_pkt_len_err_cnt.value_namespace = name_space;
        max_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt = value;
        line_err_drp_pkt.value_namespace = name_space;
        line_err_drp_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt = value;
        pkt_crc_err_cnt.value_namespace = name_space;
        pkt_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt = value;
        pkt_cfh_crc_err_cnt.value_namespace = name_space;
        pkt_cfh_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem0")
    {
        line_s_written_in_mem0 = value;
        line_s_written_in_mem0.value_namespace = name_space;
        line_s_written_in_mem0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem1")
    {
        line_s_written_in_mem1 = value;
        line_s_written_in_mem1.value_namespace = name_space;
        line_s_written_in_mem1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem2")
    {
        line_s_written_in_mem2 = value;
        line_s_written_in_mem2.value_namespace = name_space;
        line_s_written_in_mem2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt = value;
        tail_drp_pkt_cnt.value_namespace = name_space;
        tail_drp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc0-data-mem-ecc-1bit-err-cnt")
    {
        uc0_data_mem_ecc_1bit_err_cnt = value;
        uc0_data_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        uc0_data_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc1-data-mem-ecc-1bit-err-cnt")
    {
        uc1_data_mem_ecc_1bit_err_cnt = value;
        uc1_data_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        uc1_data_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc2-data-mem-ecc-1bit-err-cnt")
    {
        uc2_data_mem_ecc_1bit_err_cnt = value;
        uc2_data_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        uc2_data_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc0-data-mem-ecc-2bit-err-cnt")
    {
        uc0_data_mem_ecc_2bit_err_cnt = value;
        uc0_data_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        uc0_data_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc1-data-mem-ecc-2bit-err-cnt")
    {
        uc1_data_mem_ecc_2bit_err_cnt = value;
        uc1_data_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        uc1_data_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uc2-data-mem-ecc-2bit-err-cnt")
    {
        uc2_data_mem_ecc_2bit_err_cnt = value;
        uc2_data_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        uc2_data_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt = value;
        diag_pkt_cnt.value_namespace = name_space;
        diag_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sent-to-disabled-port-cnt")
    {
        pkt_sent_to_disabled_port_cnt = value;
        pkt_sent_to_disabled_port_cnt.value_namespace = name_space;
        pkt_sent_to_disabled_port_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-ua0-cnt")
    {
        pkt_null_poe_sent_ua0_cnt = value;
        pkt_null_poe_sent_ua0_cnt.value_namespace = name_space;
        pkt_null_poe_sent_ua0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-ua1-cnt")
    {
        pkt_null_poe_sent_ua1_cnt = value;
        pkt_null_poe_sent_ua1_cnt.value_namespace = name_space;
        pkt_null_poe_sent_ua1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-ua2-cnt")
    {
        pkt_null_poe_sent_ua2_cnt = value;
        pkt_null_poe_sent_ua2_cnt.value_namespace = name_space;
        pkt_null_poe_sent_ua2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt = value;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace = name_space;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt = value;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt = value;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-ux0-cnt")
    {
        pkts_sent_to_ux0_cnt = value;
        pkts_sent_to_ux0_cnt.value_namespace = name_space;
        pkts_sent_to_ux0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-ux1-cnt")
    {
        pkts_sent_to_ux1_cnt = value;
        pkts_sent_to_ux1_cnt.value_namespace = name_space;
        pkts_sent_to_ux1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-ux2-cnt")
    {
        pkts_sent_to_ux2_cnt = value;
        pkts_sent_to_ux2_cnt.value_namespace = name_space;
        pkts_sent_to_ux2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpp-head-drop-pkt-cnt")
    {
        cpp_head_drop_pkt_cnt = value;
        cpp_head_drop_pkt_cnt.value_namespace = name_space;
        cpp_head_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-head-drop-pkt-cnt")
    {
        tr_head_drop_pkt_cnt = value;
        tr_head_drop_pkt_cnt.value_namespace = name_space;
        tr_head_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-pkt-sent-to-ux")
    {
        tr_pkt_sent_to_ux = value;
        tr_pkt_sent_to_ux.value_namespace = name_space;
        tr_pkt_sent_to_ux.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
        stop_thrsh_hit_cnt.value_namespace = name_space;
        stop_thrsh_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt = value;
        crc_stomp_pkt_cnt.value_namespace = name_space;
        crc_stomp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt.yfilter = yfilter;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt.yfilter = yfilter;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem0")
    {
        line_s_written_in_mem0.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem1")
    {
        line_s_written_in_mem1.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem2")
    {
        line_s_written_in_mem2.yfilter = yfilter;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "uc0-data-mem-ecc-1bit-err-cnt")
    {
        uc0_data_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc1-data-mem-ecc-1bit-err-cnt")
    {
        uc1_data_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc2-data-mem-ecc-1bit-err-cnt")
    {
        uc2_data_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc0-data-mem-ecc-2bit-err-cnt")
    {
        uc0_data_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc1-data-mem-ecc-2bit-err-cnt")
    {
        uc1_data_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "uc2-data-mem-ecc-2bit-err-cnt")
    {
        uc2_data_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sent-to-disabled-port-cnt")
    {
        pkt_sent_to_disabled_port_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-ua0-cnt")
    {
        pkt_null_poe_sent_ua0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-ua1-cnt")
    {
        pkt_null_poe_sent_ua1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-ua2-cnt")
    {
        pkt_null_poe_sent_ua2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-ux0-cnt")
    {
        pkts_sent_to_ux0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-ux1-cnt")
    {
        pkts_sent_to_ux1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-ux2-cnt")
    {
        pkts_sent_to_ux2_cnt.yfilter = yfilter;
    }
    if(value_path == "cpp-head-drop-pkt-cnt")
    {
        cpp_head_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-head-drop-pkt-cnt")
    {
        tr_head_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-pkt-sent-to-ux")
    {
        tr_pkt_sent_to_ux.yfilter = yfilter;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-rcv-cnt" || name == "pkt-seq-err-cnt" || name == "in-coming-pkt-err-cnt" || name == "min-pkt-len-err-cnt" || name == "max-pkt-len-err-cnt" || name == "line-err-drp-pkt" || name == "pkt-crc-err-cnt" || name == "pkt-cfh-crc-err-cnt" || name == "line-s-written-in-mem0" || name == "line-s-written-in-mem1" || name == "line-s-written-in-mem2" || name == "tail-drp-pkt-cnt" || name == "uc0-data-mem-ecc-1bit-err-cnt" || name == "uc1-data-mem-ecc-1bit-err-cnt" || name == "uc2-data-mem-ecc-1bit-err-cnt" || name == "uc0-data-mem-ecc-2bit-err-cnt" || name == "uc1-data-mem-ecc-2bit-err-cnt" || name == "uc2-data-mem-ecc-2bit-err-cnt" || name == "diag-pkt-cnt" || name == "pkt-sent-to-disabled-port-cnt" || name == "pkt-null-poe-sent-ua0-cnt" || name == "pkt-null-poe-sent-ua1-cnt" || name == "pkt-null-poe-sent-ua2-cnt" || name == "pkt-fpoe-addr-rng-hit-cnt" || name == "fpoe-mem-ecc-1bit-err-cnt" || name == "fpoe-mem-ecc-2bit-err-cnt" || name == "pkts-sent-to-ux0-cnt" || name == "pkts-sent-to-ux1-cnt" || name == "pkts-sent-to-ux2-cnt" || name == "cpp-head-drop-pkt-cnt" || name == "tr-head-drop-pkt-cnt" || name == "tr-pkt-sent-to-ux" || name == "stop-thrsh-hit-cnt" || name == "rate-cnt" || name == "calc-rate" || name == "crc-stomp-pkt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::PiMcStats()
    :
    pkt_rcv_cnt{YType::uint64, "pkt-rcv-cnt"},
    pkt_seq_err_cnt{YType::uint64, "pkt-seq-err-cnt"},
    in_coming_pkt_err_cnt{YType::uint64, "in-coming-pkt-err-cnt"},
    min_pkt_len_err_cnt{YType::uint64, "min-pkt-len-err-cnt"},
    max_pkt_len_err_cnt{YType::uint64, "max-pkt-len-err-cnt"},
    line_err_drp_pkt{YType::uint64, "line-err-drp-pkt"},
    pkt_crc_err_cnt{YType::uint64, "pkt-crc-err-cnt"},
    pkt_cfh_crc_err_cnt{YType::uint64, "pkt-cfh-crc-err-cnt"},
    line_s_written_in_mem{YType::uint64, "line-s-written-in-mem"},
    tail_drp_pkt_cnt{YType::uint64, "tail-drp-pkt-cnt"},
    data_mem0_ecc_1bit_err_cnt{YType::uint64, "data-mem0-ecc-1bit-err-cnt"},
    data_mem1_ecc_1bit_err_cnt{YType::uint64, "data-mem1-ecc-1bit-err-cnt"},
    data_mem2_ecc_1bit_err_cnt{YType::uint64, "data-mem2-ecc-1bit-err-cnt"},
    data_mem0_ecc_2bit_err_cnt{YType::uint64, "data-mem0-ecc-2bit-err-cnt"},
    data_mem1_ecc_2bit_err_cnt{YType::uint64, "data-mem1-ecc-2bit-err-cnt"},
    data_mem2_ecc_2bit_err_cnt{YType::uint64, "data-mem2-ecc-2bit-err-cnt"},
    diag_pkt_cnt{YType::uint64, "diag-pkt-cnt"},
    pkt_sent_to_disabled_port{YType::uint64, "pkt-sent-to-disabled-port"},
    pkt_fpoe_match_hit_cnt{YType::uint64, "pkt-fpoe-match-hit-cnt"},
    pkt_null_poe_sent_cnt{YType::uint64, "pkt-null-poe-sent-cnt"},
    pkt_fpoe_addr_rng_hit_cnt{YType::uint64, "pkt-fpoe-addr-rng-hit-cnt"},
    di_hdr_len_err_pkt_cnt{YType::uint64, "di-hdr-len-err-pkt-cnt"},
    di_err_pkt_cnt{YType::uint64, "di-err-pkt-cnt"},
    fpoe_mem_ecc_1bit_err_cnt{YType::uint64, "fpoe-mem-ecc-1bit-err-cnt"},
    fpoe_mem_ecc_2bit_err_cnt{YType::uint64, "fpoe-mem-ecc-2bit-err-cnt"},
    pkts_sent_to_mx_cnt{YType::uint64, "pkts-sent-to-mx-cnt"},
    cpp_head_drop_pkt_from_ma_cnt{YType::uint64, "cpp-head-drop-pkt-from-ma-cnt"},
    tr_head_drop_pkt_from_ma_cnt{YType::uint64, "tr-head-drop-pkt-from-ma-cnt"},
    tr_pkt_sent_to_mx{YType::uint64, "tr-pkt-sent-to-mx"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"},
    crc_stomp_pkt_cnt{YType::uint64, "crc-stomp-pkt-cnt"}
{

    yang_name = "pi-mc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::~PiMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_data() const
{
    return pkt_rcv_cnt.is_set
	|| pkt_seq_err_cnt.is_set
	|| in_coming_pkt_err_cnt.is_set
	|| min_pkt_len_err_cnt.is_set
	|| max_pkt_len_err_cnt.is_set
	|| line_err_drp_pkt.is_set
	|| pkt_crc_err_cnt.is_set
	|| pkt_cfh_crc_err_cnt.is_set
	|| line_s_written_in_mem.is_set
	|| tail_drp_pkt_cnt.is_set
	|| data_mem0_ecc_1bit_err_cnt.is_set
	|| data_mem1_ecc_1bit_err_cnt.is_set
	|| data_mem2_ecc_1bit_err_cnt.is_set
	|| data_mem0_ecc_2bit_err_cnt.is_set
	|| data_mem1_ecc_2bit_err_cnt.is_set
	|| data_mem2_ecc_2bit_err_cnt.is_set
	|| diag_pkt_cnt.is_set
	|| pkt_sent_to_disabled_port.is_set
	|| pkt_fpoe_match_hit_cnt.is_set
	|| pkt_null_poe_sent_cnt.is_set
	|| pkt_fpoe_addr_rng_hit_cnt.is_set
	|| di_hdr_len_err_pkt_cnt.is_set
	|| di_err_pkt_cnt.is_set
	|| fpoe_mem_ecc_1bit_err_cnt.is_set
	|| fpoe_mem_ecc_2bit_err_cnt.is_set
	|| pkts_sent_to_mx_cnt.is_set
	|| cpp_head_drop_pkt_from_ma_cnt.is_set
	|| tr_head_drop_pkt_from_ma_cnt.is_set
	|| tr_pkt_sent_to_mx.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set
	|| crc_stomp_pkt_cnt.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkt_rcv_cnt.yfilter)
	|| ydk::is_set(pkt_seq_err_cnt.yfilter)
	|| ydk::is_set(in_coming_pkt_err_cnt.yfilter)
	|| ydk::is_set(min_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(max_pkt_len_err_cnt.yfilter)
	|| ydk::is_set(line_err_drp_pkt.yfilter)
	|| ydk::is_set(pkt_crc_err_cnt.yfilter)
	|| ydk::is_set(pkt_cfh_crc_err_cnt.yfilter)
	|| ydk::is_set(line_s_written_in_mem.yfilter)
	|| ydk::is_set(tail_drp_pkt_cnt.yfilter)
	|| ydk::is_set(data_mem0_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem1_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem2_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem0_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem1_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(data_mem2_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(diag_pkt_cnt.yfilter)
	|| ydk::is_set(pkt_sent_to_disabled_port.yfilter)
	|| ydk::is_set(pkt_fpoe_match_hit_cnt.yfilter)
	|| ydk::is_set(pkt_null_poe_sent_cnt.yfilter)
	|| ydk::is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)
	|| ydk::is_set(di_hdr_len_err_pkt_cnt.yfilter)
	|| ydk::is_set(di_err_pkt_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)
	|| ydk::is_set(pkts_sent_to_mx_cnt.yfilter)
	|| ydk::is_set(cpp_head_drop_pkt_from_ma_cnt.yfilter)
	|| ydk::is_set(tr_head_drop_pkt_from_ma_cnt.yfilter)
	|| ydk::is_set(tr_pkt_sent_to_mx.yfilter)
	|| ydk::is_set(stop_thrsh_hit_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter)
	|| ydk::is_set(crc_stomp_pkt_cnt.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_rcv_cnt.is_set || is_set(pkt_rcv_cnt.yfilter)) leaf_name_data.push_back(pkt_rcv_cnt.get_name_leafdata());
    if (pkt_seq_err_cnt.is_set || is_set(pkt_seq_err_cnt.yfilter)) leaf_name_data.push_back(pkt_seq_err_cnt.get_name_leafdata());
    if (in_coming_pkt_err_cnt.is_set || is_set(in_coming_pkt_err_cnt.yfilter)) leaf_name_data.push_back(in_coming_pkt_err_cnt.get_name_leafdata());
    if (min_pkt_len_err_cnt.is_set || is_set(min_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(min_pkt_len_err_cnt.get_name_leafdata());
    if (max_pkt_len_err_cnt.is_set || is_set(max_pkt_len_err_cnt.yfilter)) leaf_name_data.push_back(max_pkt_len_err_cnt.get_name_leafdata());
    if (line_err_drp_pkt.is_set || is_set(line_err_drp_pkt.yfilter)) leaf_name_data.push_back(line_err_drp_pkt.get_name_leafdata());
    if (pkt_crc_err_cnt.is_set || is_set(pkt_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_crc_err_cnt.get_name_leafdata());
    if (pkt_cfh_crc_err_cnt.is_set || is_set(pkt_cfh_crc_err_cnt.yfilter)) leaf_name_data.push_back(pkt_cfh_crc_err_cnt.get_name_leafdata());
    if (line_s_written_in_mem.is_set || is_set(line_s_written_in_mem.yfilter)) leaf_name_data.push_back(line_s_written_in_mem.get_name_leafdata());
    if (tail_drp_pkt_cnt.is_set || is_set(tail_drp_pkt_cnt.yfilter)) leaf_name_data.push_back(tail_drp_pkt_cnt.get_name_leafdata());
    if (data_mem0_ecc_1bit_err_cnt.is_set || is_set(data_mem0_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem0_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem1_ecc_1bit_err_cnt.is_set || is_set(data_mem1_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem1_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem2_ecc_1bit_err_cnt.is_set || is_set(data_mem2_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem2_ecc_1bit_err_cnt.get_name_leafdata());
    if (data_mem0_ecc_2bit_err_cnt.is_set || is_set(data_mem0_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem0_ecc_2bit_err_cnt.get_name_leafdata());
    if (data_mem1_ecc_2bit_err_cnt.is_set || is_set(data_mem1_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem1_ecc_2bit_err_cnt.get_name_leafdata());
    if (data_mem2_ecc_2bit_err_cnt.is_set || is_set(data_mem2_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(data_mem2_ecc_2bit_err_cnt.get_name_leafdata());
    if (diag_pkt_cnt.is_set || is_set(diag_pkt_cnt.yfilter)) leaf_name_data.push_back(diag_pkt_cnt.get_name_leafdata());
    if (pkt_sent_to_disabled_port.is_set || is_set(pkt_sent_to_disabled_port.yfilter)) leaf_name_data.push_back(pkt_sent_to_disabled_port.get_name_leafdata());
    if (pkt_fpoe_match_hit_cnt.is_set || is_set(pkt_fpoe_match_hit_cnt.yfilter)) leaf_name_data.push_back(pkt_fpoe_match_hit_cnt.get_name_leafdata());
    if (pkt_null_poe_sent_cnt.is_set || is_set(pkt_null_poe_sent_cnt.yfilter)) leaf_name_data.push_back(pkt_null_poe_sent_cnt.get_name_leafdata());
    if (pkt_fpoe_addr_rng_hit_cnt.is_set || is_set(pkt_fpoe_addr_rng_hit_cnt.yfilter)) leaf_name_data.push_back(pkt_fpoe_addr_rng_hit_cnt.get_name_leafdata());
    if (di_hdr_len_err_pkt_cnt.is_set || is_set(di_hdr_len_err_pkt_cnt.yfilter)) leaf_name_data.push_back(di_hdr_len_err_pkt_cnt.get_name_leafdata());
    if (di_err_pkt_cnt.is_set || is_set(di_err_pkt_cnt.yfilter)) leaf_name_data.push_back(di_err_pkt_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_1bit_err_cnt.is_set || is_set(fpoe_mem_ecc_1bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_1bit_err_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_2bit_err_cnt.is_set || is_set(fpoe_mem_ecc_2bit_err_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_2bit_err_cnt.get_name_leafdata());
    if (pkts_sent_to_mx_cnt.is_set || is_set(pkts_sent_to_mx_cnt.yfilter)) leaf_name_data.push_back(pkts_sent_to_mx_cnt.get_name_leafdata());
    if (cpp_head_drop_pkt_from_ma_cnt.is_set || is_set(cpp_head_drop_pkt_from_ma_cnt.yfilter)) leaf_name_data.push_back(cpp_head_drop_pkt_from_ma_cnt.get_name_leafdata());
    if (tr_head_drop_pkt_from_ma_cnt.is_set || is_set(tr_head_drop_pkt_from_ma_cnt.yfilter)) leaf_name_data.push_back(tr_head_drop_pkt_from_ma_cnt.get_name_leafdata());
    if (tr_pkt_sent_to_mx.is_set || is_set(tr_pkt_sent_to_mx.yfilter)) leaf_name_data.push_back(tr_pkt_sent_to_mx.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.yfilter)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());
    if (crc_stomp_pkt_cnt.is_set || is_set(crc_stomp_pkt_cnt.yfilter)) leaf_name_data.push_back(crc_stomp_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt = value;
        pkt_rcv_cnt.value_namespace = name_space;
        pkt_rcv_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt = value;
        pkt_seq_err_cnt.value_namespace = name_space;
        pkt_seq_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt = value;
        in_coming_pkt_err_cnt.value_namespace = name_space;
        in_coming_pkt_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt = value;
        min_pkt_len_err_cnt.value_namespace = name_space;
        min_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt = value;
        max_pkt_len_err_cnt.value_namespace = name_space;
        max_pkt_len_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt = value;
        line_err_drp_pkt.value_namespace = name_space;
        line_err_drp_pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt = value;
        pkt_crc_err_cnt.value_namespace = name_space;
        pkt_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt = value;
        pkt_cfh_crc_err_cnt.value_namespace = name_space;
        pkt_cfh_crc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-s-written-in-mem")
    {
        line_s_written_in_mem = value;
        line_s_written_in_mem.value_namespace = name_space;
        line_s_written_in_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt = value;
        tail_drp_pkt_cnt.value_namespace = name_space;
        tail_drp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem0-ecc-1bit-err-cnt")
    {
        data_mem0_ecc_1bit_err_cnt = value;
        data_mem0_ecc_1bit_err_cnt.value_namespace = name_space;
        data_mem0_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem1-ecc-1bit-err-cnt")
    {
        data_mem1_ecc_1bit_err_cnt = value;
        data_mem1_ecc_1bit_err_cnt.value_namespace = name_space;
        data_mem1_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem2-ecc-1bit-err-cnt")
    {
        data_mem2_ecc_1bit_err_cnt = value;
        data_mem2_ecc_1bit_err_cnt.value_namespace = name_space;
        data_mem2_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem0-ecc-2bit-err-cnt")
    {
        data_mem0_ecc_2bit_err_cnt = value;
        data_mem0_ecc_2bit_err_cnt.value_namespace = name_space;
        data_mem0_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem1-ecc-2bit-err-cnt")
    {
        data_mem1_ecc_2bit_err_cnt = value;
        data_mem1_ecc_2bit_err_cnt.value_namespace = name_space;
        data_mem1_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem2-ecc-2bit-err-cnt")
    {
        data_mem2_ecc_2bit_err_cnt = value;
        data_mem2_ecc_2bit_err_cnt.value_namespace = name_space;
        data_mem2_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt = value;
        diag_pkt_cnt.value_namespace = name_space;
        diag_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sent-to-disabled-port")
    {
        pkt_sent_to_disabled_port = value;
        pkt_sent_to_disabled_port.value_namespace = name_space;
        pkt_sent_to_disabled_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-fpoe-match-hit-cnt")
    {
        pkt_fpoe_match_hit_cnt = value;
        pkt_fpoe_match_hit_cnt.value_namespace = name_space;
        pkt_fpoe_match_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-null-poe-sent-cnt")
    {
        pkt_null_poe_sent_cnt = value;
        pkt_null_poe_sent_cnt.value_namespace = name_space;
        pkt_null_poe_sent_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt = value;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace = name_space;
        pkt_fpoe_addr_rng_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-hdr-len-err-pkt-cnt")
    {
        di_hdr_len_err_pkt_cnt = value;
        di_hdr_len_err_pkt_cnt.value_namespace = name_space;
        di_hdr_len_err_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-err-pkt-cnt")
    {
        di_err_pkt_cnt = value;
        di_err_pkt_cnt.value_namespace = name_space;
        di_err_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt = value;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_1bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt = value;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace = name_space;
        fpoe_mem_ecc_2bit_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-sent-to-mx-cnt")
    {
        pkts_sent_to_mx_cnt = value;
        pkts_sent_to_mx_cnt.value_namespace = name_space;
        pkts_sent_to_mx_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpp-head-drop-pkt-from-ma-cnt")
    {
        cpp_head_drop_pkt_from_ma_cnt = value;
        cpp_head_drop_pkt_from_ma_cnt.value_namespace = name_space;
        cpp_head_drop_pkt_from_ma_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-head-drop-pkt-from-ma-cnt")
    {
        tr_head_drop_pkt_from_ma_cnt = value;
        tr_head_drop_pkt_from_ma_cnt.value_namespace = name_space;
        tr_head_drop_pkt_from_ma_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tr-pkt-sent-to-mx")
    {
        tr_pkt_sent_to_mx = value;
        tr_pkt_sent_to_mx.value_namespace = name_space;
        tr_pkt_sent_to_mx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
        stop_thrsh_hit_cnt.value_namespace = name_space;
        stop_thrsh_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt = value;
        crc_stomp_pkt_cnt.value_namespace = name_space;
        crc_stomp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkt-rcv-cnt")
    {
        pkt_rcv_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-seq-err-cnt")
    {
        pkt_seq_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in-coming-pkt-err-cnt")
    {
        in_coming_pkt_err_cnt.yfilter = yfilter;
    }
    if(value_path == "min-pkt-len-err-cnt")
    {
        min_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "max-pkt-len-err-cnt")
    {
        max_pkt_len_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-err-drp-pkt")
    {
        line_err_drp_pkt.yfilter = yfilter;
    }
    if(value_path == "pkt-crc-err-cnt")
    {
        pkt_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-cfh-crc-err-cnt")
    {
        pkt_cfh_crc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "line-s-written-in-mem")
    {
        line_s_written_in_mem.yfilter = yfilter;
    }
    if(value_path == "tail-drp-pkt-cnt")
    {
        tail_drp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem0-ecc-1bit-err-cnt")
    {
        data_mem0_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem1-ecc-1bit-err-cnt")
    {
        data_mem1_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem2-ecc-1bit-err-cnt")
    {
        data_mem2_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem0-ecc-2bit-err-cnt")
    {
        data_mem0_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem1-ecc-2bit-err-cnt")
    {
        data_mem1_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem2-ecc-2bit-err-cnt")
    {
        data_mem2_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "diag-pkt-cnt")
    {
        diag_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sent-to-disabled-port")
    {
        pkt_sent_to_disabled_port.yfilter = yfilter;
    }
    if(value_path == "pkt-fpoe-match-hit-cnt")
    {
        pkt_fpoe_match_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-null-poe-sent-cnt")
    {
        pkt_null_poe_sent_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-fpoe-addr-rng-hit-cnt")
    {
        pkt_fpoe_addr_rng_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "di-hdr-len-err-pkt-cnt")
    {
        di_hdr_len_err_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "di-err-pkt-cnt")
    {
        di_err_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-1bit-err-cnt")
    {
        fpoe_mem_ecc_1bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-2bit-err-cnt")
    {
        fpoe_mem_ecc_2bit_err_cnt.yfilter = yfilter;
    }
    if(value_path == "pkts-sent-to-mx-cnt")
    {
        pkts_sent_to_mx_cnt.yfilter = yfilter;
    }
    if(value_path == "cpp-head-drop-pkt-from-ma-cnt")
    {
        cpp_head_drop_pkt_from_ma_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-head-drop-pkt-from-ma-cnt")
    {
        tr_head_drop_pkt_from_ma_cnt.yfilter = yfilter;
    }
    if(value_path == "tr-pkt-sent-to-mx")
    {
        tr_pkt_sent_to_mx.yfilter = yfilter;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
    if(value_path == "crc-stomp-pkt-cnt")
    {
        crc_stomp_pkt_cnt.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkt-rcv-cnt" || name == "pkt-seq-err-cnt" || name == "in-coming-pkt-err-cnt" || name == "min-pkt-len-err-cnt" || name == "max-pkt-len-err-cnt" || name == "line-err-drp-pkt" || name == "pkt-crc-err-cnt" || name == "pkt-cfh-crc-err-cnt" || name == "line-s-written-in-mem" || name == "tail-drp-pkt-cnt" || name == "data-mem0-ecc-1bit-err-cnt" || name == "data-mem1-ecc-1bit-err-cnt" || name == "data-mem2-ecc-1bit-err-cnt" || name == "data-mem0-ecc-2bit-err-cnt" || name == "data-mem1-ecc-2bit-err-cnt" || name == "data-mem2-ecc-2bit-err-cnt" || name == "diag-pkt-cnt" || name == "pkt-sent-to-disabled-port" || name == "pkt-fpoe-match-hit-cnt" || name == "pkt-null-poe-sent-cnt" || name == "pkt-fpoe-addr-rng-hit-cnt" || name == "di-hdr-len-err-pkt-cnt" || name == "di-err-pkt-cnt" || name == "fpoe-mem-ecc-1bit-err-cnt" || name == "fpoe-mem-ecc-2bit-err-cnt" || name == "pkts-sent-to-mx-cnt" || name == "cpp-head-drop-pkt-from-ma-cnt" || name == "tr-head-drop-pkt-from-ma-cnt" || name == "tr-pkt-sent-to-mx" || name == "stop-thrsh-hit-cnt" || name == "rate-cnt" || name == "calc-rate" || name == "crc-stomp-pkt-cnt")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::PiCcStats()
    :
    in0_ecc_serr_cnt{YType::uint64, "in0-ecc-serr-cnt"},
    in0_ecc_derr_cnt{YType::uint64, "in0-ecc-derr-cnt"},
    in1_ecc_serr_cnt{YType::uint64, "in1-ecc-serr-cnt"},
    in1_ecc_derr_cnt{YType::uint64, "in1-ecc-derr-cnt"},
    data_mem_ecc_serr_cnt{YType::uint64, "data-mem-ecc-serr-cnt"},
    data_mem_ecc_derr_cnt{YType::uint64, "data-mem-ecc-derr-cnt"},
    data_mem_ovf0_cnt{YType::uint64, "data-mem-ovf0-cnt"},
    data_mem_ovf1_cnt{YType::uint64, "data-mem-ovf1-cnt"},
    fpoe_mem_ecc_serr_cnt{YType::uint64, "fpoe-mem-ecc-serr-cnt"},
    fpoe_mem_ecc_derr_cnt{YType::uint64, "fpoe-mem-ecc-derr-cnt"},
    null_poe_cnt{YType::uint64, "null-poe-cnt"},
    shut_ack_cnt{YType::uint64, "shut-ack-cnt"},
    in0_fnc_err_cnt{YType::uint64, "in0-fnc-err-cnt"},
    in1_fnc_err_cnt{YType::uint64, "in1-fnc-err-cnt"},
    in0_drop_cnt{YType::uint64, "in0-drop-cnt"},
    in1_drop_cnt{YType::uint64, "in1-drop-cnt"},
    in0_cong_cnt{YType::uint64, "in0-cong-cnt"},
    in1_cong_cnt{YType::uint64, "in1-cong-cnt"},
    in0_shut_cnt{YType::uint64, "in0-shut-cnt"},
    in1_shut_cnt{YType::uint64, "in1-shut-cnt"},
    tail_drop_msg_cnt{YType::uint64, "tail-drop-msg-cnt"},
    in0_pkt_cnt{YType::uint64, "in0-pkt-cnt"},
    in1_pkt_cnt{YType::uint64, "in1-pkt-cnt"},
    dmem_rd_cnt{YType::uint64, "dmem-rd-cnt"},
    in_dmem0_cnt{YType::uint64, "in-dmem0-cnt"},
    in_dmem1_cnt{YType::uint64, "in-dmem1-cnt"},
    out_pkt_cnt{YType::uint64, "out-pkt-cnt"},
    stop_thrsh_hit_cnt{YType::uint64, "stop-thrsh-hit-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pi-cc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::~PiCcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_data() const
{
    return in0_ecc_serr_cnt.is_set
	|| in0_ecc_derr_cnt.is_set
	|| in1_ecc_serr_cnt.is_set
	|| in1_ecc_derr_cnt.is_set
	|| data_mem_ecc_serr_cnt.is_set
	|| data_mem_ecc_derr_cnt.is_set
	|| data_mem_ovf0_cnt.is_set
	|| data_mem_ovf1_cnt.is_set
	|| fpoe_mem_ecc_serr_cnt.is_set
	|| fpoe_mem_ecc_derr_cnt.is_set
	|| null_poe_cnt.is_set
	|| shut_ack_cnt.is_set
	|| in0_fnc_err_cnt.is_set
	|| in1_fnc_err_cnt.is_set
	|| in0_drop_cnt.is_set
	|| in1_drop_cnt.is_set
	|| in0_cong_cnt.is_set
	|| in1_cong_cnt.is_set
	|| in0_shut_cnt.is_set
	|| in1_shut_cnt.is_set
	|| tail_drop_msg_cnt.is_set
	|| in0_pkt_cnt.is_set
	|| in1_pkt_cnt.is_set
	|| dmem_rd_cnt.is_set
	|| in_dmem0_cnt.is_set
	|| in_dmem1_cnt.is_set
	|| out_pkt_cnt.is_set
	|| stop_thrsh_hit_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in0_ecc_serr_cnt.yfilter)
	|| ydk::is_set(in0_ecc_derr_cnt.yfilter)
	|| ydk::is_set(in1_ecc_serr_cnt.yfilter)
	|| ydk::is_set(in1_ecc_derr_cnt.yfilter)
	|| ydk::is_set(data_mem_ecc_serr_cnt.yfilter)
	|| ydk::is_set(data_mem_ecc_derr_cnt.yfilter)
	|| ydk::is_set(data_mem_ovf0_cnt.yfilter)
	|| ydk::is_set(data_mem_ovf1_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_serr_cnt.yfilter)
	|| ydk::is_set(fpoe_mem_ecc_derr_cnt.yfilter)
	|| ydk::is_set(null_poe_cnt.yfilter)
	|| ydk::is_set(shut_ack_cnt.yfilter)
	|| ydk::is_set(in0_fnc_err_cnt.yfilter)
	|| ydk::is_set(in1_fnc_err_cnt.yfilter)
	|| ydk::is_set(in0_drop_cnt.yfilter)
	|| ydk::is_set(in1_drop_cnt.yfilter)
	|| ydk::is_set(in0_cong_cnt.yfilter)
	|| ydk::is_set(in1_cong_cnt.yfilter)
	|| ydk::is_set(in0_shut_cnt.yfilter)
	|| ydk::is_set(in1_shut_cnt.yfilter)
	|| ydk::is_set(tail_drop_msg_cnt.yfilter)
	|| ydk::is_set(in0_pkt_cnt.yfilter)
	|| ydk::is_set(in1_pkt_cnt.yfilter)
	|| ydk::is_set(dmem_rd_cnt.yfilter)
	|| ydk::is_set(in_dmem0_cnt.yfilter)
	|| ydk::is_set(in_dmem1_cnt.yfilter)
	|| ydk::is_set(out_pkt_cnt.yfilter)
	|| ydk::is_set(stop_thrsh_hit_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pi-cc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in0_ecc_serr_cnt.is_set || is_set(in0_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(in0_ecc_serr_cnt.get_name_leafdata());
    if (in0_ecc_derr_cnt.is_set || is_set(in0_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(in0_ecc_derr_cnt.get_name_leafdata());
    if (in1_ecc_serr_cnt.is_set || is_set(in1_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(in1_ecc_serr_cnt.get_name_leafdata());
    if (in1_ecc_derr_cnt.is_set || is_set(in1_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(in1_ecc_derr_cnt.get_name_leafdata());
    if (data_mem_ecc_serr_cnt.is_set || is_set(data_mem_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(data_mem_ecc_serr_cnt.get_name_leafdata());
    if (data_mem_ecc_derr_cnt.is_set || is_set(data_mem_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(data_mem_ecc_derr_cnt.get_name_leafdata());
    if (data_mem_ovf0_cnt.is_set || is_set(data_mem_ovf0_cnt.yfilter)) leaf_name_data.push_back(data_mem_ovf0_cnt.get_name_leafdata());
    if (data_mem_ovf1_cnt.is_set || is_set(data_mem_ovf1_cnt.yfilter)) leaf_name_data.push_back(data_mem_ovf1_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_serr_cnt.is_set || is_set(fpoe_mem_ecc_serr_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_serr_cnt.get_name_leafdata());
    if (fpoe_mem_ecc_derr_cnt.is_set || is_set(fpoe_mem_ecc_derr_cnt.yfilter)) leaf_name_data.push_back(fpoe_mem_ecc_derr_cnt.get_name_leafdata());
    if (null_poe_cnt.is_set || is_set(null_poe_cnt.yfilter)) leaf_name_data.push_back(null_poe_cnt.get_name_leafdata());
    if (shut_ack_cnt.is_set || is_set(shut_ack_cnt.yfilter)) leaf_name_data.push_back(shut_ack_cnt.get_name_leafdata());
    if (in0_fnc_err_cnt.is_set || is_set(in0_fnc_err_cnt.yfilter)) leaf_name_data.push_back(in0_fnc_err_cnt.get_name_leafdata());
    if (in1_fnc_err_cnt.is_set || is_set(in1_fnc_err_cnt.yfilter)) leaf_name_data.push_back(in1_fnc_err_cnt.get_name_leafdata());
    if (in0_drop_cnt.is_set || is_set(in0_drop_cnt.yfilter)) leaf_name_data.push_back(in0_drop_cnt.get_name_leafdata());
    if (in1_drop_cnt.is_set || is_set(in1_drop_cnt.yfilter)) leaf_name_data.push_back(in1_drop_cnt.get_name_leafdata());
    if (in0_cong_cnt.is_set || is_set(in0_cong_cnt.yfilter)) leaf_name_data.push_back(in0_cong_cnt.get_name_leafdata());
    if (in1_cong_cnt.is_set || is_set(in1_cong_cnt.yfilter)) leaf_name_data.push_back(in1_cong_cnt.get_name_leafdata());
    if (in0_shut_cnt.is_set || is_set(in0_shut_cnt.yfilter)) leaf_name_data.push_back(in0_shut_cnt.get_name_leafdata());
    if (in1_shut_cnt.is_set || is_set(in1_shut_cnt.yfilter)) leaf_name_data.push_back(in1_shut_cnt.get_name_leafdata());
    if (tail_drop_msg_cnt.is_set || is_set(tail_drop_msg_cnt.yfilter)) leaf_name_data.push_back(tail_drop_msg_cnt.get_name_leafdata());
    if (in0_pkt_cnt.is_set || is_set(in0_pkt_cnt.yfilter)) leaf_name_data.push_back(in0_pkt_cnt.get_name_leafdata());
    if (in1_pkt_cnt.is_set || is_set(in1_pkt_cnt.yfilter)) leaf_name_data.push_back(in1_pkt_cnt.get_name_leafdata());
    if (dmem_rd_cnt.is_set || is_set(dmem_rd_cnt.yfilter)) leaf_name_data.push_back(dmem_rd_cnt.get_name_leafdata());
    if (in_dmem0_cnt.is_set || is_set(in_dmem0_cnt.yfilter)) leaf_name_data.push_back(in_dmem0_cnt.get_name_leafdata());
    if (in_dmem1_cnt.is_set || is_set(in_dmem1_cnt.yfilter)) leaf_name_data.push_back(in_dmem1_cnt.get_name_leafdata());
    if (out_pkt_cnt.is_set || is_set(out_pkt_cnt.yfilter)) leaf_name_data.push_back(out_pkt_cnt.get_name_leafdata());
    if (stop_thrsh_hit_cnt.is_set || is_set(stop_thrsh_hit_cnt.yfilter)) leaf_name_data.push_back(stop_thrsh_hit_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in0-ecc-serr-cnt")
    {
        in0_ecc_serr_cnt = value;
        in0_ecc_serr_cnt.value_namespace = name_space;
        in0_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-ecc-derr-cnt")
    {
        in0_ecc_derr_cnt = value;
        in0_ecc_derr_cnt.value_namespace = name_space;
        in0_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-ecc-serr-cnt")
    {
        in1_ecc_serr_cnt = value;
        in1_ecc_serr_cnt.value_namespace = name_space;
        in1_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-ecc-derr-cnt")
    {
        in1_ecc_derr_cnt = value;
        in1_ecc_derr_cnt.value_namespace = name_space;
        in1_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ecc-serr-cnt")
    {
        data_mem_ecc_serr_cnt = value;
        data_mem_ecc_serr_cnt.value_namespace = name_space;
        data_mem_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ecc-derr-cnt")
    {
        data_mem_ecc_derr_cnt = value;
        data_mem_ecc_derr_cnt.value_namespace = name_space;
        data_mem_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ovf0-cnt")
    {
        data_mem_ovf0_cnt = value;
        data_mem_ovf0_cnt.value_namespace = name_space;
        data_mem_ovf0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mem-ovf1-cnt")
    {
        data_mem_ovf1_cnt = value;
        data_mem_ovf1_cnt.value_namespace = name_space;
        data_mem_ovf1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-serr-cnt")
    {
        fpoe_mem_ecc_serr_cnt = value;
        fpoe_mem_ecc_serr_cnt.value_namespace = name_space;
        fpoe_mem_ecc_serr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpoe-mem-ecc-derr-cnt")
    {
        fpoe_mem_ecc_derr_cnt = value;
        fpoe_mem_ecc_derr_cnt.value_namespace = name_space;
        fpoe_mem_ecc_derr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null-poe-cnt")
    {
        null_poe_cnt = value;
        null_poe_cnt.value_namespace = name_space;
        null_poe_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shut-ack-cnt")
    {
        shut_ack_cnt = value;
        shut_ack_cnt.value_namespace = name_space;
        shut_ack_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-fnc-err-cnt")
    {
        in0_fnc_err_cnt = value;
        in0_fnc_err_cnt.value_namespace = name_space;
        in0_fnc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-fnc-err-cnt")
    {
        in1_fnc_err_cnt = value;
        in1_fnc_err_cnt.value_namespace = name_space;
        in1_fnc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-drop-cnt")
    {
        in0_drop_cnt = value;
        in0_drop_cnt.value_namespace = name_space;
        in0_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-drop-cnt")
    {
        in1_drop_cnt = value;
        in1_drop_cnt.value_namespace = name_space;
        in1_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-cong-cnt")
    {
        in0_cong_cnt = value;
        in0_cong_cnt.value_namespace = name_space;
        in0_cong_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-cong-cnt")
    {
        in1_cong_cnt = value;
        in1_cong_cnt.value_namespace = name_space;
        in1_cong_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-shut-cnt")
    {
        in0_shut_cnt = value;
        in0_shut_cnt.value_namespace = name_space;
        in0_shut_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-shut-cnt")
    {
        in1_shut_cnt = value;
        in1_shut_cnt.value_namespace = name_space;
        in1_shut_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drop-msg-cnt")
    {
        tail_drop_msg_cnt = value;
        tail_drop_msg_cnt.value_namespace = name_space;
        tail_drop_msg_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in0-pkt-cnt")
    {
        in0_pkt_cnt = value;
        in0_pkt_cnt.value_namespace = name_space;
        in0_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in1-pkt-cnt")
    {
        in1_pkt_cnt = value;
        in1_pkt_cnt.value_namespace = name_space;
        in1_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmem-rd-cnt")
    {
        dmem_rd_cnt = value;
        dmem_rd_cnt.value_namespace = name_space;
        dmem_rd_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-dmem0-cnt")
    {
        in_dmem0_cnt = value;
        in_dmem0_cnt.value_namespace = name_space;
        in_dmem0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-dmem1-cnt")
    {
        in_dmem1_cnt = value;
        in_dmem1_cnt.value_namespace = name_space;
        in_dmem1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-cnt")
    {
        out_pkt_cnt = value;
        out_pkt_cnt.value_namespace = name_space;
        out_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt = value;
        stop_thrsh_hit_cnt.value_namespace = name_space;
        stop_thrsh_hit_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in0-ecc-serr-cnt")
    {
        in0_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-ecc-derr-cnt")
    {
        in0_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-ecc-serr-cnt")
    {
        in1_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-ecc-derr-cnt")
    {
        in1_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ecc-serr-cnt")
    {
        data_mem_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ecc-derr-cnt")
    {
        data_mem_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ovf0-cnt")
    {
        data_mem_ovf0_cnt.yfilter = yfilter;
    }
    if(value_path == "data-mem-ovf1-cnt")
    {
        data_mem_ovf1_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-serr-cnt")
    {
        fpoe_mem_ecc_serr_cnt.yfilter = yfilter;
    }
    if(value_path == "fpoe-mem-ecc-derr-cnt")
    {
        fpoe_mem_ecc_derr_cnt.yfilter = yfilter;
    }
    if(value_path == "null-poe-cnt")
    {
        null_poe_cnt.yfilter = yfilter;
    }
    if(value_path == "shut-ack-cnt")
    {
        shut_ack_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-fnc-err-cnt")
    {
        in0_fnc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-fnc-err-cnt")
    {
        in1_fnc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-drop-cnt")
    {
        in0_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-drop-cnt")
    {
        in1_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-cong-cnt")
    {
        in0_cong_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-cong-cnt")
    {
        in1_cong_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-shut-cnt")
    {
        in0_shut_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-shut-cnt")
    {
        in1_shut_cnt.yfilter = yfilter;
    }
    if(value_path == "tail-drop-msg-cnt")
    {
        tail_drop_msg_cnt.yfilter = yfilter;
    }
    if(value_path == "in0-pkt-cnt")
    {
        in0_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "in1-pkt-cnt")
    {
        in1_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "dmem-rd-cnt")
    {
        dmem_rd_cnt.yfilter = yfilter;
    }
    if(value_path == "in-dmem0-cnt")
    {
        in_dmem0_cnt.yfilter = yfilter;
    }
    if(value_path == "in-dmem1-cnt")
    {
        in_dmem1_cnt.yfilter = yfilter;
    }
    if(value_path == "out-pkt-cnt")
    {
        out_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "stop-thrsh-hit-cnt")
    {
        stop_thrsh_hit_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in0-ecc-serr-cnt" || name == "in0-ecc-derr-cnt" || name == "in1-ecc-serr-cnt" || name == "in1-ecc-derr-cnt" || name == "data-mem-ecc-serr-cnt" || name == "data-mem-ecc-derr-cnt" || name == "data-mem-ovf0-cnt" || name == "data-mem-ovf1-cnt" || name == "fpoe-mem-ecc-serr-cnt" || name == "fpoe-mem-ecc-derr-cnt" || name == "null-poe-cnt" || name == "shut-ack-cnt" || name == "in0-fnc-err-cnt" || name == "in1-fnc-err-cnt" || name == "in0-drop-cnt" || name == "in1-drop-cnt" || name == "in0-cong-cnt" || name == "in1-cong-cnt" || name == "in0-shut-cnt" || name == "in1-shut-cnt" || name == "tail-drop-msg-cnt" || name == "in0-pkt-cnt" || name == "in1-pkt-cnt" || name == "dmem-rd-cnt" || name == "in-dmem0-cnt" || name == "in-dmem1-cnt" || name == "out-pkt-cnt" || name == "stop-thrsh-hit-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::PeUcStats()
    :
    in_pkt_uc0_cnt{YType::uint64, "in-pkt-uc0-cnt"},
    in_pkt_uc1_cnt{YType::uint64, "in-pkt-uc1-cnt"},
    in_pkt_uc2_cnt{YType::uint64, "in-pkt-uc2-cnt"},
    in_full_line_uc0_cnt{YType::uint64, "in-full-line-uc0-cnt"},
    in_full_line_uc1_cnt{YType::uint64, "in-full-line-uc1-cnt"},
    in_full_line_uc2_cnt{YType::uint64, "in-full-line-uc2-cnt"},
    pkt_trunc_eop_uc0_cnt{YType::uint64, "pkt-trunc-eop-uc0-cnt"},
    pkt_trunc_eop_uc1_cnt{YType::uint64, "pkt-trunc-eop-uc1-cnt"},
    pkt_trunc_eop_uc2_cnt{YType::uint64, "pkt-trunc-eop-uc2-cnt"},
    pkt_sop_drop_uc0_cnt{YType::uint64, "pkt-sop-drop-uc0-cnt"},
    pkt_sop_drop_uc1_cnt{YType::uint64, "pkt-sop-drop-uc1-cnt"},
    pkt_sop_drop_uc2_cnt{YType::uint64, "pkt-sop-drop-uc2-cnt"},
    pkt_ecc_err_drop_uc_cnt{YType::uint64, "pkt-ecc-err-drop-uc-cnt"},
    pkt_ecc_trunc_cnt_uc_cnt{YType::uint64, "pkt-ecc-trunc-cnt-uc-cnt"},
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
    out_pkt_uc_cnt{YType::uint64, "out-pkt-uc-cnt"},
    fe_uc_sop_eop_pack_cnt{YType::uint64, "fe-uc-sop-eop-pack-cnt"},
    fc_uc_0_1_trans_cnt{YType::uint64, "fc-uc-0-1-trans-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pe-uc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::~PeUcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_data() const
{
    return in_pkt_uc0_cnt.is_set
	|| in_pkt_uc1_cnt.is_set
	|| in_pkt_uc2_cnt.is_set
	|| in_full_line_uc0_cnt.is_set
	|| in_full_line_uc1_cnt.is_set
	|| in_full_line_uc2_cnt.is_set
	|| pkt_trunc_eop_uc0_cnt.is_set
	|| pkt_trunc_eop_uc1_cnt.is_set
	|| pkt_trunc_eop_uc2_cnt.is_set
	|| pkt_sop_drop_uc0_cnt.is_set
	|| pkt_sop_drop_uc1_cnt.is_set
	|| pkt_sop_drop_uc2_cnt.is_set
	|| pkt_ecc_err_drop_uc_cnt.is_set
	|| pkt_ecc_trunc_cnt_uc_cnt.is_set
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
	|| out_pkt_uc_cnt.is_set
	|| fe_uc_sop_eop_pack_cnt.is_set
	|| fc_uc_0_1_trans_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_uc0_cnt.yfilter)
	|| ydk::is_set(in_pkt_uc1_cnt.yfilter)
	|| ydk::is_set(in_pkt_uc2_cnt.yfilter)
	|| ydk::is_set(in_full_line_uc0_cnt.yfilter)
	|| ydk::is_set(in_full_line_uc1_cnt.yfilter)
	|| ydk::is_set(in_full_line_uc2_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_uc0_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_uc1_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_uc2_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_uc0_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_uc1_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_uc2_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_err_drop_uc_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_trunc_cnt_uc_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc0_0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc0_1_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc1_0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc1_1_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc2_0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_uc2_1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc0_0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc0_1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc1_0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc1_1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc2_0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_uc2_1_cnt.yfilter)
	|| ydk::is_set(out_pkt_uc_cnt.yfilter)
	|| ydk::is_set(fe_uc_sop_eop_pack_cnt.yfilter)
	|| ydk::is_set(fc_uc_0_1_trans_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-uc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_uc0_cnt.is_set || is_set(in_pkt_uc0_cnt.yfilter)) leaf_name_data.push_back(in_pkt_uc0_cnt.get_name_leafdata());
    if (in_pkt_uc1_cnt.is_set || is_set(in_pkt_uc1_cnt.yfilter)) leaf_name_data.push_back(in_pkt_uc1_cnt.get_name_leafdata());
    if (in_pkt_uc2_cnt.is_set || is_set(in_pkt_uc2_cnt.yfilter)) leaf_name_data.push_back(in_pkt_uc2_cnt.get_name_leafdata());
    if (in_full_line_uc0_cnt.is_set || is_set(in_full_line_uc0_cnt.yfilter)) leaf_name_data.push_back(in_full_line_uc0_cnt.get_name_leafdata());
    if (in_full_line_uc1_cnt.is_set || is_set(in_full_line_uc1_cnt.yfilter)) leaf_name_data.push_back(in_full_line_uc1_cnt.get_name_leafdata());
    if (in_full_line_uc2_cnt.is_set || is_set(in_full_line_uc2_cnt.yfilter)) leaf_name_data.push_back(in_full_line_uc2_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc0_cnt.is_set || is_set(pkt_trunc_eop_uc0_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_uc0_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc1_cnt.is_set || is_set(pkt_trunc_eop_uc1_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_uc1_cnt.get_name_leafdata());
    if (pkt_trunc_eop_uc2_cnt.is_set || is_set(pkt_trunc_eop_uc2_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_uc2_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc0_cnt.is_set || is_set(pkt_sop_drop_uc0_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_uc0_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc1_cnt.is_set || is_set(pkt_sop_drop_uc1_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_uc1_cnt.get_name_leafdata());
    if (pkt_sop_drop_uc2_cnt.is_set || is_set(pkt_sop_drop_uc2_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_uc2_cnt.get_name_leafdata());
    if (pkt_ecc_err_drop_uc_cnt.is_set || is_set(pkt_ecc_err_drop_uc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_err_drop_uc_cnt.get_name_leafdata());
    if (pkt_ecc_trunc_cnt_uc_cnt.is_set || is_set(pkt_ecc_trunc_cnt_uc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_trunc_cnt_uc_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc0_0_cnt.is_set || is_set(ecc_1bit_err_uc0_0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc0_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc0_1_cnt.is_set || is_set(ecc_1bit_err_uc0_1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc0_1_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc1_0_cnt.is_set || is_set(ecc_1bit_err_uc1_0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc1_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc1_1_cnt.is_set || is_set(ecc_1bit_err_uc1_1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc1_1_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc2_0_cnt.is_set || is_set(ecc_1bit_err_uc2_0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc2_0_cnt.get_name_leafdata());
    if (ecc_1bit_err_uc2_1_cnt.is_set || is_set(ecc_1bit_err_uc2_1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_uc2_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc0_0_cnt.is_set || is_set(ecc_2bit_err_uc0_0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc0_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc0_1_cnt.is_set || is_set(ecc_2bit_err_uc0_1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc0_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc1_0_cnt.is_set || is_set(ecc_2bit_err_uc1_0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc1_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc1_1_cnt.is_set || is_set(ecc_2bit_err_uc1_1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc1_1_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc2_0_cnt.is_set || is_set(ecc_2bit_err_uc2_0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc2_0_cnt.get_name_leafdata());
    if (ecc_2bit_err_uc2_1_cnt.is_set || is_set(ecc_2bit_err_uc2_1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_uc2_1_cnt.get_name_leafdata());
    if (out_pkt_uc_cnt.is_set || is_set(out_pkt_uc_cnt.yfilter)) leaf_name_data.push_back(out_pkt_uc_cnt.get_name_leafdata());
    if (fe_uc_sop_eop_pack_cnt.is_set || is_set(fe_uc_sop_eop_pack_cnt.yfilter)) leaf_name_data.push_back(fe_uc_sop_eop_pack_cnt.get_name_leafdata());
    if (fc_uc_0_1_trans_cnt.is_set || is_set(fc_uc_0_1_trans_cnt.yfilter)) leaf_name_data.push_back(fc_uc_0_1_trans_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-uc0-cnt")
    {
        in_pkt_uc0_cnt = value;
        in_pkt_uc0_cnt.value_namespace = name_space;
        in_pkt_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-uc1-cnt")
    {
        in_pkt_uc1_cnt = value;
        in_pkt_uc1_cnt.value_namespace = name_space;
        in_pkt_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkt-uc2-cnt")
    {
        in_pkt_uc2_cnt = value;
        in_pkt_uc2_cnt.value_namespace = name_space;
        in_pkt_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-uc0-cnt")
    {
        in_full_line_uc0_cnt = value;
        in_full_line_uc0_cnt.value_namespace = name_space;
        in_full_line_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-uc1-cnt")
    {
        in_full_line_uc1_cnt = value;
        in_full_line_uc1_cnt.value_namespace = name_space;
        in_full_line_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-uc2-cnt")
    {
        in_full_line_uc2_cnt = value;
        in_full_line_uc2_cnt.value_namespace = name_space;
        in_full_line_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-uc0-cnt")
    {
        pkt_trunc_eop_uc0_cnt = value;
        pkt_trunc_eop_uc0_cnt.value_namespace = name_space;
        pkt_trunc_eop_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-uc1-cnt")
    {
        pkt_trunc_eop_uc1_cnt = value;
        pkt_trunc_eop_uc1_cnt.value_namespace = name_space;
        pkt_trunc_eop_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-uc2-cnt")
    {
        pkt_trunc_eop_uc2_cnt = value;
        pkt_trunc_eop_uc2_cnt.value_namespace = name_space;
        pkt_trunc_eop_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-uc0-cnt")
    {
        pkt_sop_drop_uc0_cnt = value;
        pkt_sop_drop_uc0_cnt.value_namespace = name_space;
        pkt_sop_drop_uc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-uc1-cnt")
    {
        pkt_sop_drop_uc1_cnt = value;
        pkt_sop_drop_uc1_cnt.value_namespace = name_space;
        pkt_sop_drop_uc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-uc2-cnt")
    {
        pkt_sop_drop_uc2_cnt = value;
        pkt_sop_drop_uc2_cnt.value_namespace = name_space;
        pkt_sop_drop_uc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-err-drop-uc-cnt")
    {
        pkt_ecc_err_drop_uc_cnt = value;
        pkt_ecc_err_drop_uc_cnt.value_namespace = name_space;
        pkt_ecc_err_drop_uc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-trunc-cnt-uc-cnt")
    {
        pkt_ecc_trunc_cnt_uc_cnt = value;
        pkt_ecc_trunc_cnt_uc_cnt.value_namespace = name_space;
        pkt_ecc_trunc_cnt_uc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc0-0-cnt")
    {
        ecc_1bit_err_uc0_0_cnt = value;
        ecc_1bit_err_uc0_0_cnt.value_namespace = name_space;
        ecc_1bit_err_uc0_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc0-1-cnt")
    {
        ecc_1bit_err_uc0_1_cnt = value;
        ecc_1bit_err_uc0_1_cnt.value_namespace = name_space;
        ecc_1bit_err_uc0_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc1-0-cnt")
    {
        ecc_1bit_err_uc1_0_cnt = value;
        ecc_1bit_err_uc1_0_cnt.value_namespace = name_space;
        ecc_1bit_err_uc1_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc1-1-cnt")
    {
        ecc_1bit_err_uc1_1_cnt = value;
        ecc_1bit_err_uc1_1_cnt.value_namespace = name_space;
        ecc_1bit_err_uc1_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc2-0-cnt")
    {
        ecc_1bit_err_uc2_0_cnt = value;
        ecc_1bit_err_uc2_0_cnt.value_namespace = name_space;
        ecc_1bit_err_uc2_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-uc2-1-cnt")
    {
        ecc_1bit_err_uc2_1_cnt = value;
        ecc_1bit_err_uc2_1_cnt.value_namespace = name_space;
        ecc_1bit_err_uc2_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc0-0-cnt")
    {
        ecc_2bit_err_uc0_0_cnt = value;
        ecc_2bit_err_uc0_0_cnt.value_namespace = name_space;
        ecc_2bit_err_uc0_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc0-1-cnt")
    {
        ecc_2bit_err_uc0_1_cnt = value;
        ecc_2bit_err_uc0_1_cnt.value_namespace = name_space;
        ecc_2bit_err_uc0_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc1-0-cnt")
    {
        ecc_2bit_err_uc1_0_cnt = value;
        ecc_2bit_err_uc1_0_cnt.value_namespace = name_space;
        ecc_2bit_err_uc1_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc1-1-cnt")
    {
        ecc_2bit_err_uc1_1_cnt = value;
        ecc_2bit_err_uc1_1_cnt.value_namespace = name_space;
        ecc_2bit_err_uc1_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc2-0-cnt")
    {
        ecc_2bit_err_uc2_0_cnt = value;
        ecc_2bit_err_uc2_0_cnt.value_namespace = name_space;
        ecc_2bit_err_uc2_0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-uc2-1-cnt")
    {
        ecc_2bit_err_uc2_1_cnt = value;
        ecc_2bit_err_uc2_1_cnt.value_namespace = name_space;
        ecc_2bit_err_uc2_1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-uc-cnt")
    {
        out_pkt_uc_cnt = value;
        out_pkt_uc_cnt.value_namespace = name_space;
        out_pkt_uc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-uc-sop-eop-pack-cnt")
    {
        fe_uc_sop_eop_pack_cnt = value;
        fe_uc_sop_eop_pack_cnt.value_namespace = name_space;
        fe_uc_sop_eop_pack_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-uc-0-1-trans-cnt")
    {
        fc_uc_0_1_trans_cnt = value;
        fc_uc_0_1_trans_cnt.value_namespace = name_space;
        fc_uc_0_1_trans_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-uc0-cnt")
    {
        in_pkt_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "in-pkt-uc1-cnt")
    {
        in_pkt_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "in-pkt-uc2-cnt")
    {
        in_pkt_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-uc0-cnt")
    {
        in_full_line_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-uc1-cnt")
    {
        in_full_line_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-uc2-cnt")
    {
        in_full_line_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-uc0-cnt")
    {
        pkt_trunc_eop_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-uc1-cnt")
    {
        pkt_trunc_eop_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-uc2-cnt")
    {
        pkt_trunc_eop_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-uc0-cnt")
    {
        pkt_sop_drop_uc0_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-uc1-cnt")
    {
        pkt_sop_drop_uc1_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-uc2-cnt")
    {
        pkt_sop_drop_uc2_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-err-drop-uc-cnt")
    {
        pkt_ecc_err_drop_uc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-trunc-cnt-uc-cnt")
    {
        pkt_ecc_trunc_cnt_uc_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc0-0-cnt")
    {
        ecc_1bit_err_uc0_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc0-1-cnt")
    {
        ecc_1bit_err_uc0_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc1-0-cnt")
    {
        ecc_1bit_err_uc1_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc1-1-cnt")
    {
        ecc_1bit_err_uc1_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc2-0-cnt")
    {
        ecc_1bit_err_uc2_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-uc2-1-cnt")
    {
        ecc_1bit_err_uc2_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc0-0-cnt")
    {
        ecc_2bit_err_uc0_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc0-1-cnt")
    {
        ecc_2bit_err_uc0_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc1-0-cnt")
    {
        ecc_2bit_err_uc1_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc1-1-cnt")
    {
        ecc_2bit_err_uc1_1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc2-0-cnt")
    {
        ecc_2bit_err_uc2_0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-uc2-1-cnt")
    {
        ecc_2bit_err_uc2_1_cnt.yfilter = yfilter;
    }
    if(value_path == "out-pkt-uc-cnt")
    {
        out_pkt_uc_cnt.yfilter = yfilter;
    }
    if(value_path == "fe-uc-sop-eop-pack-cnt")
    {
        fe_uc_sop_eop_pack_cnt.yfilter = yfilter;
    }
    if(value_path == "fc-uc-0-1-trans-cnt")
    {
        fc_uc_0_1_trans_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-uc0-cnt" || name == "in-pkt-uc1-cnt" || name == "in-pkt-uc2-cnt" || name == "in-full-line-uc0-cnt" || name == "in-full-line-uc1-cnt" || name == "in-full-line-uc2-cnt" || name == "pkt-trunc-eop-uc0-cnt" || name == "pkt-trunc-eop-uc1-cnt" || name == "pkt-trunc-eop-uc2-cnt" || name == "pkt-sop-drop-uc0-cnt" || name == "pkt-sop-drop-uc1-cnt" || name == "pkt-sop-drop-uc2-cnt" || name == "pkt-ecc-err-drop-uc-cnt" || name == "pkt-ecc-trunc-cnt-uc-cnt" || name == "ecc-1bit-err-uc0-0-cnt" || name == "ecc-1bit-err-uc0-1-cnt" || name == "ecc-1bit-err-uc1-0-cnt" || name == "ecc-1bit-err-uc1-1-cnt" || name == "ecc-1bit-err-uc2-0-cnt" || name == "ecc-1bit-err-uc2-1-cnt" || name == "ecc-2bit-err-uc0-0-cnt" || name == "ecc-2bit-err-uc0-1-cnt" || name == "ecc-2bit-err-uc1-0-cnt" || name == "ecc-2bit-err-uc1-1-cnt" || name == "ecc-2bit-err-uc2-0-cnt" || name == "ecc-2bit-err-uc2-1-cnt" || name == "out-pkt-uc-cnt" || name == "fe-uc-sop-eop-pack-cnt" || name == "fc-uc-0-1-trans-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::PeMcStats()
    :
    in_pkt_mc_cnt{YType::uint64, "in-pkt-mc-cnt"},
    in_full_line_mc_cnt{YType::uint64, "in-full-line-mc-cnt"},
    pkt_trunc_eop_mc_cnt{YType::uint64, "pkt-trunc-eop-mc-cnt"},
    pkt_sop_drop_mc_cnt{YType::uint64, "pkt-sop-drop-mc-cnt"},
    pkt_ecc_err_drop_mc_cnt{YType::uint64, "pkt-ecc-err-drop-mc-cnt"},
    pkt_ecc_err_trunc_cnt_mc_cnt{YType::uint64, "pkt-ecc-err-trunc-cnt-mc-cnt"},
    ecc_1bit_err_mc0_cnt{YType::uint64, "ecc-1bit-err-mc0-cnt"},
    ecc_1bit_err_mc1_cnt{YType::uint64, "ecc-1bit-err-mc1-cnt"},
    ecc_1bit_err_mc2_cnt{YType::uint64, "ecc-1bit-err-mc2-cnt"},
    ecc_2bit_err_mc0_cnt{YType::uint64, "ecc-2bit-err-mc0-cnt"},
    ecc_2bit_err_mc1_cnt{YType::uint64, "ecc-2bit-err-mc1-cnt"},
    ecc_2bit_err_mc2_cnt{YType::uint64, "ecc-2bit-err-mc2-cnt"},
    out_pkt_mc_cnt{YType::uint64, "out-pkt-mc-cnt"},
    fe_mc_sop_eop_pack_cnt{YType::uint64, "fe-mc-sop-eop-pack-cnt"},
    fc_mc_0_1_trans_cnt{YType::uint64, "fc-mc-0-1-trans-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pe-mc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::~PeMcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_data() const
{
    return in_pkt_mc_cnt.is_set
	|| in_full_line_mc_cnt.is_set
	|| pkt_trunc_eop_mc_cnt.is_set
	|| pkt_sop_drop_mc_cnt.is_set
	|| pkt_ecc_err_drop_mc_cnt.is_set
	|| pkt_ecc_err_trunc_cnt_mc_cnt.is_set
	|| ecc_1bit_err_mc0_cnt.is_set
	|| ecc_1bit_err_mc1_cnt.is_set
	|| ecc_1bit_err_mc2_cnt.is_set
	|| ecc_2bit_err_mc0_cnt.is_set
	|| ecc_2bit_err_mc1_cnt.is_set
	|| ecc_2bit_err_mc2_cnt.is_set
	|| out_pkt_mc_cnt.is_set
	|| fe_mc_sop_eop_pack_cnt.is_set
	|| fc_mc_0_1_trans_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_mc_cnt.yfilter)
	|| ydk::is_set(in_full_line_mc_cnt.yfilter)
	|| ydk::is_set(pkt_trunc_eop_mc_cnt.yfilter)
	|| ydk::is_set(pkt_sop_drop_mc_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_err_drop_mc_cnt.yfilter)
	|| ydk::is_set(pkt_ecc_err_trunc_cnt_mc_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_mc0_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_mc1_cnt.yfilter)
	|| ydk::is_set(ecc_1bit_err_mc2_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_mc0_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_mc1_cnt.yfilter)
	|| ydk::is_set(ecc_2bit_err_mc2_cnt.yfilter)
	|| ydk::is_set(out_pkt_mc_cnt.yfilter)
	|| ydk::is_set(fe_mc_sop_eop_pack_cnt.yfilter)
	|| ydk::is_set(fc_mc_0_1_trans_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-mc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_mc_cnt.is_set || is_set(in_pkt_mc_cnt.yfilter)) leaf_name_data.push_back(in_pkt_mc_cnt.get_name_leafdata());
    if (in_full_line_mc_cnt.is_set || is_set(in_full_line_mc_cnt.yfilter)) leaf_name_data.push_back(in_full_line_mc_cnt.get_name_leafdata());
    if (pkt_trunc_eop_mc_cnt.is_set || is_set(pkt_trunc_eop_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_trunc_eop_mc_cnt.get_name_leafdata());
    if (pkt_sop_drop_mc_cnt.is_set || is_set(pkt_sop_drop_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_sop_drop_mc_cnt.get_name_leafdata());
    if (pkt_ecc_err_drop_mc_cnt.is_set || is_set(pkt_ecc_err_drop_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_err_drop_mc_cnt.get_name_leafdata());
    if (pkt_ecc_err_trunc_cnt_mc_cnt.is_set || is_set(pkt_ecc_err_trunc_cnt_mc_cnt.yfilter)) leaf_name_data.push_back(pkt_ecc_err_trunc_cnt_mc_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc0_cnt.is_set || is_set(ecc_1bit_err_mc0_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_mc0_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc1_cnt.is_set || is_set(ecc_1bit_err_mc1_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_mc1_cnt.get_name_leafdata());
    if (ecc_1bit_err_mc2_cnt.is_set || is_set(ecc_1bit_err_mc2_cnt.yfilter)) leaf_name_data.push_back(ecc_1bit_err_mc2_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc0_cnt.is_set || is_set(ecc_2bit_err_mc0_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_mc0_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc1_cnt.is_set || is_set(ecc_2bit_err_mc1_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_mc1_cnt.get_name_leafdata());
    if (ecc_2bit_err_mc2_cnt.is_set || is_set(ecc_2bit_err_mc2_cnt.yfilter)) leaf_name_data.push_back(ecc_2bit_err_mc2_cnt.get_name_leafdata());
    if (out_pkt_mc_cnt.is_set || is_set(out_pkt_mc_cnt.yfilter)) leaf_name_data.push_back(out_pkt_mc_cnt.get_name_leafdata());
    if (fe_mc_sop_eop_pack_cnt.is_set || is_set(fe_mc_sop_eop_pack_cnt.yfilter)) leaf_name_data.push_back(fe_mc_sop_eop_pack_cnt.get_name_leafdata());
    if (fc_mc_0_1_trans_cnt.is_set || is_set(fc_mc_0_1_trans_cnt.yfilter)) leaf_name_data.push_back(fc_mc_0_1_trans_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-mc-cnt")
    {
        in_pkt_mc_cnt = value;
        in_pkt_mc_cnt.value_namespace = name_space;
        in_pkt_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-full-line-mc-cnt")
    {
        in_full_line_mc_cnt = value;
        in_full_line_mc_cnt.value_namespace = name_space;
        in_full_line_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-trunc-eop-mc-cnt")
    {
        pkt_trunc_eop_mc_cnt = value;
        pkt_trunc_eop_mc_cnt.value_namespace = name_space;
        pkt_trunc_eop_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-sop-drop-mc-cnt")
    {
        pkt_sop_drop_mc_cnt = value;
        pkt_sop_drop_mc_cnt.value_namespace = name_space;
        pkt_sop_drop_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-err-drop-mc-cnt")
    {
        pkt_ecc_err_drop_mc_cnt = value;
        pkt_ecc_err_drop_mc_cnt.value_namespace = name_space;
        pkt_ecc_err_drop_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-ecc-err-trunc-cnt-mc-cnt")
    {
        pkt_ecc_err_trunc_cnt_mc_cnt = value;
        pkt_ecc_err_trunc_cnt_mc_cnt.value_namespace = name_space;
        pkt_ecc_err_trunc_cnt_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-mc0-cnt")
    {
        ecc_1bit_err_mc0_cnt = value;
        ecc_1bit_err_mc0_cnt.value_namespace = name_space;
        ecc_1bit_err_mc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-mc1-cnt")
    {
        ecc_1bit_err_mc1_cnt = value;
        ecc_1bit_err_mc1_cnt.value_namespace = name_space;
        ecc_1bit_err_mc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-1bit-err-mc2-cnt")
    {
        ecc_1bit_err_mc2_cnt = value;
        ecc_1bit_err_mc2_cnt.value_namespace = name_space;
        ecc_1bit_err_mc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-mc0-cnt")
    {
        ecc_2bit_err_mc0_cnt = value;
        ecc_2bit_err_mc0_cnt.value_namespace = name_space;
        ecc_2bit_err_mc0_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-mc1-cnt")
    {
        ecc_2bit_err_mc1_cnt = value;
        ecc_2bit_err_mc1_cnt.value_namespace = name_space;
        ecc_2bit_err_mc1_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecc-2bit-err-mc2-cnt")
    {
        ecc_2bit_err_mc2_cnt = value;
        ecc_2bit_err_mc2_cnt.value_namespace = name_space;
        ecc_2bit_err_mc2_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkt-mc-cnt")
    {
        out_pkt_mc_cnt = value;
        out_pkt_mc_cnt.value_namespace = name_space;
        out_pkt_mc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-mc-sop-eop-pack-cnt")
    {
        fe_mc_sop_eop_pack_cnt = value;
        fe_mc_sop_eop_pack_cnt.value_namespace = name_space;
        fe_mc_sop_eop_pack_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-mc-0-1-trans-cnt")
    {
        fc_mc_0_1_trans_cnt = value;
        fc_mc_0_1_trans_cnt.value_namespace = name_space;
        fc_mc_0_1_trans_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-mc-cnt")
    {
        in_pkt_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "in-full-line-mc-cnt")
    {
        in_full_line_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-trunc-eop-mc-cnt")
    {
        pkt_trunc_eop_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-sop-drop-mc-cnt")
    {
        pkt_sop_drop_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-err-drop-mc-cnt")
    {
        pkt_ecc_err_drop_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "pkt-ecc-err-trunc-cnt-mc-cnt")
    {
        pkt_ecc_err_trunc_cnt_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-mc0-cnt")
    {
        ecc_1bit_err_mc0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-mc1-cnt")
    {
        ecc_1bit_err_mc1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-1bit-err-mc2-cnt")
    {
        ecc_1bit_err_mc2_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-mc0-cnt")
    {
        ecc_2bit_err_mc0_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-mc1-cnt")
    {
        ecc_2bit_err_mc1_cnt.yfilter = yfilter;
    }
    if(value_path == "ecc-2bit-err-mc2-cnt")
    {
        ecc_2bit_err_mc2_cnt.yfilter = yfilter;
    }
    if(value_path == "out-pkt-mc-cnt")
    {
        out_pkt_mc_cnt.yfilter = yfilter;
    }
    if(value_path == "fe-mc-sop-eop-pack-cnt")
    {
        fe_mc_sop_eop_pack_cnt.yfilter = yfilter;
    }
    if(value_path == "fc-mc-0-1-trans-cnt")
    {
        fc_mc_0_1_trans_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-mc-cnt" || name == "in-full-line-mc-cnt" || name == "pkt-trunc-eop-mc-cnt" || name == "pkt-sop-drop-mc-cnt" || name == "pkt-ecc-err-drop-mc-cnt" || name == "pkt-ecc-err-trunc-cnt-mc-cnt" || name == "ecc-1bit-err-mc0-cnt" || name == "ecc-1bit-err-mc1-cnt" || name == "ecc-1bit-err-mc2-cnt" || name == "ecc-2bit-err-mc0-cnt" || name == "ecc-2bit-err-mc1-cnt" || name == "ecc-2bit-err-mc2-cnt" || name == "out-pkt-mc-cnt" || name == "fe-mc-sop-eop-pack-cnt" || name == "fc-mc-0-1-trans-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::PeCcStats()
    :
    in_pkt_cnt{YType::uint64, "in-pkt-cnt"},
    out_path0_pkt_cnt{YType::uint64, "out-path0-pkt-cnt"},
    out_path1_pkt_cnt{YType::uint64, "out-path1-pkt-cnt"},
    xbar_ecc_drop_pkt_cnt{YType::uint64, "xbar-ecc-drop-pkt-cnt"},
    mem0_drop_pkt_cnt{YType::uint64, "mem0-drop-pkt-cnt"},
    mem1_drop_pkt_cnt{YType::uint64, "mem1-drop-pkt-cnt"},
    congn_pkt_cnt{YType::uint64, "congn-pkt-cnt"},
    xbar_ecc_single_err_cnt{YType::uint64, "xbar-ecc-single-err-cnt"},
    xbar_ecc_double_err_cnt{YType::uint64, "xbar-ecc-double-err-cnt"},
    mem0_ecc_single_err_cnt{YType::uint64, "mem0-ecc-single-err-cnt"},
    mem0_ecc_double_err_cnt{YType::uint64, "mem0-ecc-double-err-cnt"},
    mem1_ecc_single_err_cnt{YType::uint64, "mem1-ecc-single-err-cnt"},
    mem1_ecc_double_err_cnt{YType::uint64, "mem1-ecc-double-err-cnt"},
    fc_cc_0_1_trans_cnt{YType::uint64, "fc-cc-0-1-trans-cnt"},
    rate_cnt{YType::uint64, "rate-cnt"},
    calc_rate{YType::uint64, "calc-rate"}
{

    yang_name = "pe-cc-stats"; yang_parent_name = "sm15-stat"; is_top_level_class = false; has_list_ancestor = true;
}

CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::~PeCcStats()
{
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_data() const
{
    return in_pkt_cnt.is_set
	|| out_path0_pkt_cnt.is_set
	|| out_path1_pkt_cnt.is_set
	|| xbar_ecc_drop_pkt_cnt.is_set
	|| mem0_drop_pkt_cnt.is_set
	|| mem1_drop_pkt_cnt.is_set
	|| congn_pkt_cnt.is_set
	|| xbar_ecc_single_err_cnt.is_set
	|| xbar_ecc_double_err_cnt.is_set
	|| mem0_ecc_single_err_cnt.is_set
	|| mem0_ecc_double_err_cnt.is_set
	|| mem1_ecc_single_err_cnt.is_set
	|| mem1_ecc_double_err_cnt.is_set
	|| fc_cc_0_1_trans_cnt.is_set
	|| rate_cnt.is_set
	|| calc_rate.is_set;
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkt_cnt.yfilter)
	|| ydk::is_set(out_path0_pkt_cnt.yfilter)
	|| ydk::is_set(out_path1_pkt_cnt.yfilter)
	|| ydk::is_set(xbar_ecc_drop_pkt_cnt.yfilter)
	|| ydk::is_set(mem0_drop_pkt_cnt.yfilter)
	|| ydk::is_set(mem1_drop_pkt_cnt.yfilter)
	|| ydk::is_set(congn_pkt_cnt.yfilter)
	|| ydk::is_set(xbar_ecc_single_err_cnt.yfilter)
	|| ydk::is_set(xbar_ecc_double_err_cnt.yfilter)
	|| ydk::is_set(mem0_ecc_single_err_cnt.yfilter)
	|| ydk::is_set(mem0_ecc_double_err_cnt.yfilter)
	|| ydk::is_set(mem1_ecc_single_err_cnt.yfilter)
	|| ydk::is_set(mem1_ecc_double_err_cnt.yfilter)
	|| ydk::is_set(fc_cc_0_1_trans_cnt.yfilter)
	|| ydk::is_set(rate_cnt.yfilter)
	|| ydk::is_set(calc_rate.yfilter);
}

std::string CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-cc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkt_cnt.is_set || is_set(in_pkt_cnt.yfilter)) leaf_name_data.push_back(in_pkt_cnt.get_name_leafdata());
    if (out_path0_pkt_cnt.is_set || is_set(out_path0_pkt_cnt.yfilter)) leaf_name_data.push_back(out_path0_pkt_cnt.get_name_leafdata());
    if (out_path1_pkt_cnt.is_set || is_set(out_path1_pkt_cnt.yfilter)) leaf_name_data.push_back(out_path1_pkt_cnt.get_name_leafdata());
    if (xbar_ecc_drop_pkt_cnt.is_set || is_set(xbar_ecc_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(xbar_ecc_drop_pkt_cnt.get_name_leafdata());
    if (mem0_drop_pkt_cnt.is_set || is_set(mem0_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(mem0_drop_pkt_cnt.get_name_leafdata());
    if (mem1_drop_pkt_cnt.is_set || is_set(mem1_drop_pkt_cnt.yfilter)) leaf_name_data.push_back(mem1_drop_pkt_cnt.get_name_leafdata());
    if (congn_pkt_cnt.is_set || is_set(congn_pkt_cnt.yfilter)) leaf_name_data.push_back(congn_pkt_cnt.get_name_leafdata());
    if (xbar_ecc_single_err_cnt.is_set || is_set(xbar_ecc_single_err_cnt.yfilter)) leaf_name_data.push_back(xbar_ecc_single_err_cnt.get_name_leafdata());
    if (xbar_ecc_double_err_cnt.is_set || is_set(xbar_ecc_double_err_cnt.yfilter)) leaf_name_data.push_back(xbar_ecc_double_err_cnt.get_name_leafdata());
    if (mem0_ecc_single_err_cnt.is_set || is_set(mem0_ecc_single_err_cnt.yfilter)) leaf_name_data.push_back(mem0_ecc_single_err_cnt.get_name_leafdata());
    if (mem0_ecc_double_err_cnt.is_set || is_set(mem0_ecc_double_err_cnt.yfilter)) leaf_name_data.push_back(mem0_ecc_double_err_cnt.get_name_leafdata());
    if (mem1_ecc_single_err_cnt.is_set || is_set(mem1_ecc_single_err_cnt.yfilter)) leaf_name_data.push_back(mem1_ecc_single_err_cnt.get_name_leafdata());
    if (mem1_ecc_double_err_cnt.is_set || is_set(mem1_ecc_double_err_cnt.yfilter)) leaf_name_data.push_back(mem1_ecc_double_err_cnt.get_name_leafdata());
    if (fc_cc_0_1_trans_cnt.is_set || is_set(fc_cc_0_1_trans_cnt.yfilter)) leaf_name_data.push_back(fc_cc_0_1_trans_cnt.get_name_leafdata());
    if (rate_cnt.is_set || is_set(rate_cnt.yfilter)) leaf_name_data.push_back(rate_cnt.get_name_leafdata());
    if (calc_rate.is_set || is_set(calc_rate.yfilter)) leaf_name_data.push_back(calc_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkt-cnt")
    {
        in_pkt_cnt = value;
        in_pkt_cnt.value_namespace = name_space;
        in_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path0-pkt-cnt")
    {
        out_path0_pkt_cnt = value;
        out_path0_pkt_cnt.value_namespace = name_space;
        out_path0_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path1-pkt-cnt")
    {
        out_path1_pkt_cnt = value;
        out_path1_pkt_cnt.value_namespace = name_space;
        out_path1_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-ecc-drop-pkt-cnt")
    {
        xbar_ecc_drop_pkt_cnt = value;
        xbar_ecc_drop_pkt_cnt.value_namespace = name_space;
        xbar_ecc_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem0-drop-pkt-cnt")
    {
        mem0_drop_pkt_cnt = value;
        mem0_drop_pkt_cnt.value_namespace = name_space;
        mem0_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem1-drop-pkt-cnt")
    {
        mem1_drop_pkt_cnt = value;
        mem1_drop_pkt_cnt.value_namespace = name_space;
        mem1_drop_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "congn-pkt-cnt")
    {
        congn_pkt_cnt = value;
        congn_pkt_cnt.value_namespace = name_space;
        congn_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-ecc-single-err-cnt")
    {
        xbar_ecc_single_err_cnt = value;
        xbar_ecc_single_err_cnt.value_namespace = name_space;
        xbar_ecc_single_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xbar-ecc-double-err-cnt")
    {
        xbar_ecc_double_err_cnt = value;
        xbar_ecc_double_err_cnt.value_namespace = name_space;
        xbar_ecc_double_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem0-ecc-single-err-cnt")
    {
        mem0_ecc_single_err_cnt = value;
        mem0_ecc_single_err_cnt.value_namespace = name_space;
        mem0_ecc_single_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem0-ecc-double-err-cnt")
    {
        mem0_ecc_double_err_cnt = value;
        mem0_ecc_double_err_cnt.value_namespace = name_space;
        mem0_ecc_double_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem1-ecc-single-err-cnt")
    {
        mem1_ecc_single_err_cnt = value;
        mem1_ecc_single_err_cnt.value_namespace = name_space;
        mem1_ecc_single_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem1-ecc-double-err-cnt")
    {
        mem1_ecc_double_err_cnt = value;
        mem1_ecc_double_err_cnt.value_namespace = name_space;
        mem1_ecc_double_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fc-cc-0-1-trans-cnt")
    {
        fc_cc_0_1_trans_cnt = value;
        fc_cc_0_1_trans_cnt.value_namespace = name_space;
        fc_cc_0_1_trans_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt = value;
        rate_cnt.value_namespace = name_space;
        rate_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calc-rate")
    {
        calc_rate = value;
        calc_rate.value_namespace = name_space;
        calc_rate.value_namespace_prefix = name_space_prefix;
    }
}

void CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkt-cnt")
    {
        in_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "out-path0-pkt-cnt")
    {
        out_path0_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "out-path1-pkt-cnt")
    {
        out_path1_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "xbar-ecc-drop-pkt-cnt")
    {
        xbar_ecc_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "mem0-drop-pkt-cnt")
    {
        mem0_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "mem1-drop-pkt-cnt")
    {
        mem1_drop_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "congn-pkt-cnt")
    {
        congn_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "xbar-ecc-single-err-cnt")
    {
        xbar_ecc_single_err_cnt.yfilter = yfilter;
    }
    if(value_path == "xbar-ecc-double-err-cnt")
    {
        xbar_ecc_double_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem0-ecc-single-err-cnt")
    {
        mem0_ecc_single_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem0-ecc-double-err-cnt")
    {
        mem0_ecc_double_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem1-ecc-single-err-cnt")
    {
        mem1_ecc_single_err_cnt.yfilter = yfilter;
    }
    if(value_path == "mem1-ecc-double-err-cnt")
    {
        mem1_ecc_double_err_cnt.yfilter = yfilter;
    }
    if(value_path == "fc-cc-0-1-trans-cnt")
    {
        fc_cc_0_1_trans_cnt.yfilter = yfilter;
    }
    if(value_path == "rate-cnt")
    {
        rate_cnt.yfilter = yfilter;
    }
    if(value_path == "calc-rate")
    {
        calc_rate.yfilter = yfilter;
    }
}

bool CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkt-cnt" || name == "out-path0-pkt-cnt" || name == "out-path1-pkt-cnt" || name == "xbar-ecc-drop-pkt-cnt" || name == "mem0-drop-pkt-cnt" || name == "mem1-drop-pkt-cnt" || name == "congn-pkt-cnt" || name == "xbar-ecc-single-err-cnt" || name == "xbar-ecc-double-err-cnt" || name == "mem0-ecc-single-err-cnt" || name == "mem0-ecc-double-err-cnt" || name == "mem1-ecc-single-err-cnt" || name == "mem1-ecc-double-err-cnt" || name == "fc-cc-0-1-trans-cnt" || name == "rate-cnt" || name == "calc-rate")
        return true;
    return false;
}


}
}

