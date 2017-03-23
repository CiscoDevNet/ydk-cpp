#ifndef _CISCO_IOS_XR_ASR9K_XBAR_OPER_
#define _CISCO_IOS_XR_ASR9K_XBAR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_xbar_oper {

class CrossBarStats : public Entity
{
    public:
        CrossBarStats();
        ~CrossBarStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: CrossBarStats::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes> nodes;


}; // CrossBarStats


class CrossBarStats::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: CrossBarStats::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node> > node;


}; // CrossBarStats::Nodes


class CrossBarStats::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class CrossBarTable; //type: CrossBarStats::Nodes::Node::CrossBarTable

        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable> cross_bar_table;


}; // CrossBarStats::Nodes::Node


class CrossBarStats::Nodes::Node::CrossBarTable : public Entity
{
    public:
        CrossBarTable();
        ~CrossBarTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PktStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::PktStats
        class Sm15Stats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats

        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::PktStats> pkt_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats> sm15_stats;


}; // CrossBarStats::Nodes::Node::CrossBarTable


class CrossBarStats::Nodes::Node::CrossBarTable::PktStats : public Entity
{
    public:
        PktStats();
        ~PktStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PktStat; //type: CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat> > pkt_stat;


}; // CrossBarStats::Nodes::Node::CrossBarTable::PktStats


class CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat : public Entity
{
    public:
        PktStat();
        ~PktStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asic_id; //type: string
        YLeaf port; //type: string
        YLeaf internal_error_count; //type: uint64
        YLeaf input_buffer_queued_packet_count_high; //type: uint64
        YLeaf ingress_packet_count_since_last_read_high; //type: uint64
        YLeaf ingress_channel_utilization_count_high; //type: uint64
        YLeaf input_buffer_back_pressure_count_high; //type: uint64
        YLeaf xbar_timeout_drop_count_high; //type: uint64
        YLeaf holdrop_count_high; //type: uint64
        YLeaf null_fpoe_drop_count_high; //type: uint64
        YLeaf diagnostic_packet_count_high; //type: uint64
        YLeaf input_buffer_correctable_ecc_error_count_high; //type: uint64
        YLeaf input_buffer_uncorrectable_ecc_error_count_high; //type: uint64
        YLeaf header_crc_error_count_high; //type: uint64
        YLeaf short_input_header_error_count_high; //type: uint64
        YLeaf packet_crc_error_count_high; //type: uint64
        YLeaf short_packet_error_count_high; //type: uint64
        YLeaf output_buffer_queued_packet_count_high; //type: uint64
        YLeaf egress_packet_count_since_last_read_high; //type: uint64
        YLeaf egress_channel_utilization_count_high; //type: uint64
        YLeaf output_buffer_back_pressure_count_high; //type: uint64
        YLeaf output_buffer_correctable_ecc_error_count_high; //type: uint64
        YLeaf output_buffer_uncorrectable_ecc_error_count_high; //type: uint64
        YLeaf fpoedb_correctable_ecc_error_count_high; //type: uint64
        YLeaf fpoedb_uncorrectable_ecc_error_count_high; //type: uint64
        YLeaf input_buffer_queued_packet_count_low; //type: uint64
        YLeaf ingress_packet_count_since_last_read_low; //type: uint64
        YLeaf ingress_channel_utilization_count_low; //type: uint64
        YLeaf input_buffer_back_pressure_count_low; //type: uint64
        YLeaf xbar_timeout_drop_count_low; //type: uint64
        YLeaf holdrop_count_low; //type: uint64
        YLeaf null_fpoe_drop_count_low; //type: uint64
        YLeaf diagnostic_packet_count_low; //type: uint64
        YLeaf input_buffer_correctable_ecc_error_count_low; //type: uint64
        YLeaf input_buffer_uncorrectable_ecc_error_count_low; //type: uint64
        YLeaf header_crc_error_count_low; //type: uint64
        YLeaf short_input_header_error_count_low; //type: uint64
        YLeaf packet_crc_error_count_low; //type: uint64
        YLeaf short_packet_error_count_low; //type: uint64
        YLeaf output_buffer_queued_packet_count_low; //type: uint64
        YLeaf egress_packet_count_since_last_read_low; //type: uint64
        YLeaf egress_channel_utilization_count_low; //type: uint64
        YLeaf output_buffer_back_pressure_count_low; //type: uint64
        YLeaf output_buffer_correctable_ecc_error_count_low; //type: uint64
        YLeaf output_buffer_uncorrectable_ecc_error_count_low; //type: uint64
        YLeaf fpoedb_correctable_ecc_error_count_low; //type: uint64
        YLeaf fpoedb_uncorrectable_ecc_error_count_low; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::PktStats::PktStat


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats : public Entity
{
    public:
        Sm15Stats();
        ~Sm15Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sm15Stat; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat> > sm15_stat;


}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat : public Entity
{
    public:
        Sm15Stat();
        ~Sm15Stat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asic_id; //type: string
        YLeaf port; //type: string
        YLeaf internal_err_cnt; //type: uint64

        class Ua0Stats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats
        class Ua1Stats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats
        class Ua2Stats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats
        class MaStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats
        class CaStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats
        class PiStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats
        class PeStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats
        class PiUcStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats
        class PiMcStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats
        class PiCcStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats
        class PeUcStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats
        class PeMcStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats
        class PeCcStats; //type: CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats

        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats> ca_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats> ma_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats> pe_cc_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats> pe_mc_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats> pe_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats> pe_uc_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats> pi_cc_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats> pi_mc_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats> pi_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats> pi_uc_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats> ua0_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats> ua1_stats;
        std::shared_ptr<Cisco_IOS_XR_asr9k_xbar_oper::CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats> ua2_stats;


}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats : public Entity
{
    public:
        Ua0Stats();
        ~Ua0Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dest_drop_pkt_cnt; //type: uint64
        YLeaf src_dest_pkt_cnt; //type: uint64
        YLeaf dest_src_pkt_cnt; //type: uint64
        YLeaf rcv_pkt_cnt; //type: uint64
        YLeaf tx_pkt_cnt; //type: uint64
        YLeaf rx_drop_pkt_cnt; //type: uint64
        YLeaf rx_fabric_to_cnt; //type: uint64
        YLeaf ack_wait_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua0Stats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats : public Entity
{
    public:
        Ua1Stats();
        ~Ua1Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dest_drop_pkt_cnt; //type: uint64
        YLeaf src_dest_pkt_cnt; //type: uint64
        YLeaf dest_src_pkt_cnt; //type: uint64
        YLeaf rcv_pkt_cnt; //type: uint64
        YLeaf tx_pkt_cnt; //type: uint64
        YLeaf rx_drop_pkt_cnt; //type: uint64
        YLeaf rx_fabric_to_cnt; //type: uint64
        YLeaf ack_wait_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua1Stats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats : public Entity
{
    public:
        Ua2Stats();
        ~Ua2Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dest_drop_pkt_cnt; //type: uint64
        YLeaf src_dest_pkt_cnt; //type: uint64
        YLeaf dest_src_pkt_cnt; //type: uint64
        YLeaf rcv_pkt_cnt; //type: uint64
        YLeaf tx_pkt_cnt; //type: uint64
        YLeaf rx_drop_pkt_cnt; //type: uint64
        YLeaf rx_fabric_to_cnt; //type: uint64
        YLeaf ack_wait_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::Ua2Stats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats : public Entity
{
    public:
        MaStats();
        ~MaStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dest_drop_pkt_cnt; //type: uint64
        YLeaf src_dest_pkt_cnt; //type: uint64
        YLeaf dest_src_pkt_cnt; //type: uint64
        YLeaf rcv_pkt_cnt; //type: uint64
        YLeaf tx_pkt_cnt; //type: uint64
        YLeaf rx_drop_pkt_cnt; //type: uint64
        YLeaf rx_re_transmit_cnt; //type: uint64
        YLeaf rx_fabric_to_cnt; //type: uint64
        YLeaf rx_hol_to_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::MaStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats : public Entity
{
    public:
        CaStats();
        ~CaStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dest_drop_pkt_cnt; //type: uint64
        YLeaf src_dest_pkt_cnt; //type: uint64
        YLeaf dest_src_pkt_cnt; //type: uint64
        YLeaf rcv_pkt_cnt; //type: uint64
        YLeaf tx_pkt_cnt; //type: uint64
        YLeaf rx_drop_pkt_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::CaStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats : public Entity
{
    public:
        PiStats();
        ~PiStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_rate1_cnt; //type: uint64
        YLeaf total_rate2_cnt; //type: uint64
        YLeaf total_rate3_cnt; //type: uint64
        YLeaf total_calc_rate; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats : public Entity
{
    public:
        PeStats();
        ~PeStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_rate1_cnt; //type: uint64
        YLeaf total_rate2_cnt; //type: uint64
        YLeaf total_rate3_cnt; //type: uint64
        YLeaf total_calc_rate; //type: uint64
        YLeaf mc2uc_preempt_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats : public Entity
{
    public:
        PiUcStats();
        ~PiUcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pkt_rcv_cnt; //type: uint64
        YLeaf pkt_seq_err_cnt; //type: uint64
        YLeaf in_coming_pkt_err_cnt; //type: uint64
        YLeaf min_pkt_len_err_cnt; //type: uint64
        YLeaf max_pkt_len_err_cnt; //type: uint64
        YLeaf line_err_drp_pkt; //type: uint64
        YLeaf pkt_crc_err_cnt; //type: uint64
        YLeaf pkt_cfh_crc_err_cnt; //type: uint64
        YLeaf line_s_written_in_mem0; //type: uint64
        YLeaf line_s_written_in_mem1; //type: uint64
        YLeaf line_s_written_in_mem2; //type: uint64
        YLeaf tail_drp_pkt_cnt; //type: uint64
        YLeaf uc0_data_mem_ecc_1bit_err_cnt; //type: uint64
        YLeaf uc1_data_mem_ecc_1bit_err_cnt; //type: uint64
        YLeaf uc2_data_mem_ecc_1bit_err_cnt; //type: uint64
        YLeaf uc0_data_mem_ecc_2bit_err_cnt; //type: uint64
        YLeaf uc1_data_mem_ecc_2bit_err_cnt; //type: uint64
        YLeaf uc2_data_mem_ecc_2bit_err_cnt; //type: uint64
        YLeaf diag_pkt_cnt; //type: uint64
        YLeaf pkt_sent_to_disabled_port_cnt; //type: uint64
        YLeaf pkt_null_poe_sent_ua0_cnt; //type: uint64
        YLeaf pkt_null_poe_sent_ua1_cnt; //type: uint64
        YLeaf pkt_null_poe_sent_ua2_cnt; //type: uint64
        YLeaf pkt_fpoe_addr_rng_hit_cnt; //type: uint64
        YLeaf fpoe_mem_ecc_1bit_err_cnt; //type: uint64
        YLeaf fpoe_mem_ecc_2bit_err_cnt; //type: uint64
        YLeaf pkts_sent_to_ux0_cnt; //type: uint64
        YLeaf pkts_sent_to_ux1_cnt; //type: uint64
        YLeaf pkts_sent_to_ux2_cnt; //type: uint64
        YLeaf cpp_head_drop_pkt_cnt; //type: uint64
        YLeaf tr_head_drop_pkt_cnt; //type: uint64
        YLeaf tr_pkt_sent_to_ux; //type: uint64
        YLeaf stop_thrsh_hit_cnt; //type: uint64
        YLeaf rate_cnt; //type: uint64
        YLeaf calc_rate; //type: uint64
        YLeaf crc_stomp_pkt_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiUcStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats : public Entity
{
    public:
        PiMcStats();
        ~PiMcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pkt_rcv_cnt; //type: uint64
        YLeaf pkt_seq_err_cnt; //type: uint64
        YLeaf in_coming_pkt_err_cnt; //type: uint64
        YLeaf min_pkt_len_err_cnt; //type: uint64
        YLeaf max_pkt_len_err_cnt; //type: uint64
        YLeaf line_err_drp_pkt; //type: uint64
        YLeaf pkt_crc_err_cnt; //type: uint64
        YLeaf pkt_cfh_crc_err_cnt; //type: uint64
        YLeaf line_s_written_in_mem; //type: uint64
        YLeaf tail_drp_pkt_cnt; //type: uint64
        YLeaf data_mem0_ecc_1bit_err_cnt; //type: uint64
        YLeaf data_mem1_ecc_1bit_err_cnt; //type: uint64
        YLeaf data_mem2_ecc_1bit_err_cnt; //type: uint64
        YLeaf data_mem0_ecc_2bit_err_cnt; //type: uint64
        YLeaf data_mem1_ecc_2bit_err_cnt; //type: uint64
        YLeaf data_mem2_ecc_2bit_err_cnt; //type: uint64
        YLeaf diag_pkt_cnt; //type: uint64
        YLeaf pkt_sent_to_disabled_port; //type: uint64
        YLeaf pkt_fpoe_match_hit_cnt; //type: uint64
        YLeaf pkt_null_poe_sent_cnt; //type: uint64
        YLeaf pkt_fpoe_addr_rng_hit_cnt; //type: uint64
        YLeaf di_hdr_len_err_pkt_cnt; //type: uint64
        YLeaf di_err_pkt_cnt; //type: uint64
        YLeaf fpoe_mem_ecc_1bit_err_cnt; //type: uint64
        YLeaf fpoe_mem_ecc_2bit_err_cnt; //type: uint64
        YLeaf pkts_sent_to_mx_cnt; //type: uint64
        YLeaf cpp_head_drop_pkt_from_ma_cnt; //type: uint64
        YLeaf tr_head_drop_pkt_from_ma_cnt; //type: uint64
        YLeaf tr_pkt_sent_to_mx; //type: uint64
        YLeaf stop_thrsh_hit_cnt; //type: uint64
        YLeaf rate_cnt; //type: uint64
        YLeaf calc_rate; //type: uint64
        YLeaf crc_stomp_pkt_cnt; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiMcStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats : public Entity
{
    public:
        PiCcStats();
        ~PiCcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in0_ecc_serr_cnt; //type: uint64
        YLeaf in0_ecc_derr_cnt; //type: uint64
        YLeaf in1_ecc_serr_cnt; //type: uint64
        YLeaf in1_ecc_derr_cnt; //type: uint64
        YLeaf data_mem_ecc_serr_cnt; //type: uint64
        YLeaf data_mem_ecc_derr_cnt; //type: uint64
        YLeaf data_mem_ovf0_cnt; //type: uint64
        YLeaf data_mem_ovf1_cnt; //type: uint64
        YLeaf fpoe_mem_ecc_serr_cnt; //type: uint64
        YLeaf fpoe_mem_ecc_derr_cnt; //type: uint64
        YLeaf null_poe_cnt; //type: uint64
        YLeaf shut_ack_cnt; //type: uint64
        YLeaf in0_fnc_err_cnt; //type: uint64
        YLeaf in1_fnc_err_cnt; //type: uint64
        YLeaf in0_drop_cnt; //type: uint64
        YLeaf in1_drop_cnt; //type: uint64
        YLeaf in0_cong_cnt; //type: uint64
        YLeaf in1_cong_cnt; //type: uint64
        YLeaf in0_shut_cnt; //type: uint64
        YLeaf in1_shut_cnt; //type: uint64
        YLeaf tail_drop_msg_cnt; //type: uint64
        YLeaf in0_pkt_cnt; //type: uint64
        YLeaf in1_pkt_cnt; //type: uint64
        YLeaf dmem_rd_cnt; //type: uint64
        YLeaf in_dmem0_cnt; //type: uint64
        YLeaf in_dmem1_cnt; //type: uint64
        YLeaf out_pkt_cnt; //type: uint64
        YLeaf stop_thrsh_hit_cnt; //type: uint64
        YLeaf rate_cnt; //type: uint64
        YLeaf calc_rate; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PiCcStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats : public Entity
{
    public:
        PeUcStats();
        ~PeUcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_pkt_uc0_cnt; //type: uint64
        YLeaf in_pkt_uc1_cnt; //type: uint64
        YLeaf in_pkt_uc2_cnt; //type: uint64
        YLeaf in_full_line_uc0_cnt; //type: uint64
        YLeaf in_full_line_uc1_cnt; //type: uint64
        YLeaf in_full_line_uc2_cnt; //type: uint64
        YLeaf pkt_trunc_eop_uc0_cnt; //type: uint64
        YLeaf pkt_trunc_eop_uc1_cnt; //type: uint64
        YLeaf pkt_trunc_eop_uc2_cnt; //type: uint64
        YLeaf pkt_sop_drop_uc0_cnt; //type: uint64
        YLeaf pkt_sop_drop_uc1_cnt; //type: uint64
        YLeaf pkt_sop_drop_uc2_cnt; //type: uint64
        YLeaf pkt_ecc_err_drop_uc_cnt; //type: uint64
        YLeaf pkt_ecc_trunc_cnt_uc_cnt; //type: uint64
        YLeaf ecc_1bit_err_uc0_0_cnt; //type: uint64
        YLeaf ecc_1bit_err_uc0_1_cnt; //type: uint64
        YLeaf ecc_1bit_err_uc1_0_cnt; //type: uint64
        YLeaf ecc_1bit_err_uc1_1_cnt; //type: uint64
        YLeaf ecc_1bit_err_uc2_0_cnt; //type: uint64
        YLeaf ecc_1bit_err_uc2_1_cnt; //type: uint64
        YLeaf ecc_2bit_err_uc0_0_cnt; //type: uint64
        YLeaf ecc_2bit_err_uc0_1_cnt; //type: uint64
        YLeaf ecc_2bit_err_uc1_0_cnt; //type: uint64
        YLeaf ecc_2bit_err_uc1_1_cnt; //type: uint64
        YLeaf ecc_2bit_err_uc2_0_cnt; //type: uint64
        YLeaf ecc_2bit_err_uc2_1_cnt; //type: uint64
        YLeaf out_pkt_uc_cnt; //type: uint64
        YLeaf fe_uc_sop_eop_pack_cnt; //type: uint64
        YLeaf fc_uc_0_1_trans_cnt; //type: uint64
        YLeaf rate_cnt; //type: uint64
        YLeaf calc_rate; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeUcStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats : public Entity
{
    public:
        PeMcStats();
        ~PeMcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_pkt_mc_cnt; //type: uint64
        YLeaf in_full_line_mc_cnt; //type: uint64
        YLeaf pkt_trunc_eop_mc_cnt; //type: uint64
        YLeaf pkt_sop_drop_mc_cnt; //type: uint64
        YLeaf pkt_ecc_err_drop_mc_cnt; //type: uint64
        YLeaf pkt_ecc_err_trunc_cnt_mc_cnt; //type: uint64
        YLeaf ecc_1bit_err_mc0_cnt; //type: uint64
        YLeaf ecc_1bit_err_mc1_cnt; //type: uint64
        YLeaf ecc_1bit_err_mc2_cnt; //type: uint64
        YLeaf ecc_2bit_err_mc0_cnt; //type: uint64
        YLeaf ecc_2bit_err_mc1_cnt; //type: uint64
        YLeaf ecc_2bit_err_mc2_cnt; //type: uint64
        YLeaf out_pkt_mc_cnt; //type: uint64
        YLeaf fe_mc_sop_eop_pack_cnt; //type: uint64
        YLeaf fc_mc_0_1_trans_cnt; //type: uint64
        YLeaf rate_cnt; //type: uint64
        YLeaf calc_rate; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeMcStats


class CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats : public Entity
{
    public:
        PeCcStats();
        ~PeCcStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_pkt_cnt; //type: uint64
        YLeaf out_path0_pkt_cnt; //type: uint64
        YLeaf out_path1_pkt_cnt; //type: uint64
        YLeaf xbar_ecc_drop_pkt_cnt; //type: uint64
        YLeaf mem0_drop_pkt_cnt; //type: uint64
        YLeaf mem1_drop_pkt_cnt; //type: uint64
        YLeaf congn_pkt_cnt; //type: uint64
        YLeaf xbar_ecc_single_err_cnt; //type: uint64
        YLeaf xbar_ecc_double_err_cnt; //type: uint64
        YLeaf mem0_ecc_single_err_cnt; //type: uint64
        YLeaf mem0_ecc_double_err_cnt; //type: uint64
        YLeaf mem1_ecc_single_err_cnt; //type: uint64
        YLeaf mem1_ecc_double_err_cnt; //type: uint64
        YLeaf fc_cc_0_1_trans_cnt; //type: uint64
        YLeaf rate_cnt; //type: uint64
        YLeaf calc_rate; //type: uint64



}; // CrossBarStats::Nodes::Node::CrossBarTable::Sm15Stats::Sm15Stat::PeCcStats


}
}

#endif /* _CISCO_IOS_XR_ASR9K_XBAR_OPER_ */

