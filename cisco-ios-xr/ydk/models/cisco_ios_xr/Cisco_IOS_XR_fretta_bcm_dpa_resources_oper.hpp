#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_resources_oper {

class Dpa : public ydk::Entity
{
    public:
        Dpa();
        ~Dpa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Stats; //type: Dpa::Stats
        class Resources; //type: Dpa::Resources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources> resources;
        
}; // Dpa


class Dpa::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nodes; //type: Dpa::Stats::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes> nodes;
        
}; // Dpa::Stats


class Dpa::Stats::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Dpa::Stats::Nodes::Node

        ydk::YList node;
        
}; // Dpa::Stats::Nodes


class Dpa::Stats::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class AsicStatistics; //type: Dpa::Stats::Nodes::Node::AsicStatistics
        class NpuNumbers; //type: Dpa::Stats::Nodes::Node::NpuNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics> asic_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers> npu_numbers;
        
}; // Dpa::Stats::Nodes::Node


class Dpa::Stats::Nodes::Node::AsicStatistics : public ydk::Entity
{
    public:
        AsicStatistics();
        ~AsicStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicStatisticsDetailForNpuIds; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds
        class AsicStatisticsForNpuIds; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds> asic_statistics_detail_for_npu_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds> asic_statistics_for_npu_ids;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds : public ydk::Entity
{
    public:
        AsicStatisticsDetailForNpuIds();
        ~AsicStatisticsDetailForNpuIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicStatisticsDetailForNpuId; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId

        ydk::YList asic_statistics_detail_for_npu_id;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId : public ydk::Entity
{
    public:
        AsicStatisticsDetailForNpuId();
        ~AsicStatisticsDetailForNpuId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rack_number; //type: uint32
        ydk::YLeaf slot_number; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf chip_version; //type: uint16
        class Statistics; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics> statistics;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_blocks; //type: uint8
        class BlockInfo; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo

        ydk::YList block_info;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo : public ydk::Entity
{
    public:
        BlockInfo();
        ~BlockInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_name; //type: string
        ydk::YLeaf num_fields; //type: uint8
        class FieldInfo; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo

        ydk::YList field_info;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo : public ydk::Entity
{
    public:
        FieldInfo();
        ~FieldInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_name; //type: string
        ydk::YLeaf field_value; //type: uint64
        ydk::YLeaf is_overflow; //type: boolean

}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds : public ydk::Entity
{
    public:
        AsicStatisticsForNpuIds();
        ~AsicStatisticsForNpuIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicStatisticsForNpuId; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId

        ydk::YList asic_statistics_for_npu_id;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId : public ydk::Entity
{
    public:
        AsicStatisticsForNpuId();
        ~AsicStatisticsForNpuId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rack_number; //type: uint32
        ydk::YLeaf slot_number; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf chip_version; //type: uint16
        class Statistics; //type: Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics> statistics;
        
}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId


class Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbi_rx_total_byte_cnt; //type: uint64
        ydk::YLeaf nbi_rx_total_pkt_cnt; //type: uint64
        ydk::YLeaf ire_cpu_pkt_cnt; //type: uint64
        ydk::YLeaf ire_nif_pkt_cnt; //type: uint64
        ydk::YLeaf ire_oamp_pkt_cnt; //type: uint64
        ydk::YLeaf ire_olp_pkt_cnt; //type: uint64
        ydk::YLeaf ire_rcy_pkt_cnt; //type: uint64
        ydk::YLeaf ire_fdt_if_cnt; //type: uint64
        ydk::YLeaf idr_mmu_if_cnt; //type: uint64
        ydk::YLeaf idr_ocb_if_cnt; //type: uint64
        ydk::YLeaf iqm_enqueue_pkt_cnt; //type: uint64
        ydk::YLeaf iqm_dequeue_pkt_cnt; //type: uint64
        ydk::YLeaf iqm_deleted_pkt_cnt; //type: uint64
        ydk::YLeaf iqm_enq_discarded_pkt_cnt; //type: uint64
        ydk::YLeaf ipt_egq_pkt_cnt; //type: uint64
        ydk::YLeaf ipt_enq_pkt_cnt; //type: uint64
        ydk::YLeaf ipt_fdt_pkt_cnt; //type: uint64
        ydk::YLeaf ipt_cfg_event_cnt; //type: uint64
        ydk::YLeaf ipt_cfg_byte_cnt; //type: uint64
        ydk::YLeaf fdt_ipt_desc_cell_cnt; //type: uint64
        ydk::YLeaf fdt_ire_desc_cell_cnt; //type: uint64
        ydk::YLeaf fdt_transmitted_data_cells_cnt; //type: uint64
        ydk::YLeaf fdr_p1_cell_in_cnt; //type: uint64
        ydk::YLeaf fdr_p2_cell_in_cnt; //type: uint64
        ydk::YLeaf fdr_p3_cell_in_cnt; //type: uint64
        ydk::YLeaf fdr_cell_in_cnt_total; //type: uint64
        ydk::YLeaf fda_cells_in_cnt_p1; //type: uint64
        ydk::YLeaf fda_cells_in_cnt_p2; //type: uint64
        ydk::YLeaf fda_cells_in_cnt_p3; //type: uint64
        ydk::YLeaf fda_cells_in_tdm_cnt; //type: uint64
        ydk::YLeaf fda_cells_in_meshmc_cnt; //type: uint64
        ydk::YLeaf fda_cells_in_ipt_cnt; //type: uint64
        ydk::YLeaf fda_cells_out_cnt_p1; //type: uint64
        ydk::YLeaf fda_cells_out_cnt_p2; //type: uint64
        ydk::YLeaf fda_cells_out_cnt_p3; //type: uint64
        ydk::YLeaf fda_cells_out_tdm_cnt; //type: uint64
        ydk::YLeaf fda_cells_out_meshmc_cnt; //type: uint64
        ydk::YLeaf fda_cells_out_ipt_cnt; //type: uint64
        ydk::YLeaf fda_egq_drop_cnt; //type: uint64
        ydk::YLeaf fda_egq_meshmc_drop_cnt; //type: uint64
        ydk::YLeaf egq_fqp_pkt_cnt; //type: uint64
        ydk::YLeaf egq_pqp_uc_pkt_cnt; //type: uint64
        ydk::YLeaf egq_pqp_discard_uc_pkt_cnt; //type: uint64
        ydk::YLeaf egq_pqp_uc_bytes_cnt; //type: uint64
        ydk::YLeaf egq_pqp_mc_pkt_cnt; //type: uint64
        ydk::YLeaf egq_pqp_discard_mc_pkt_cnt; //type: uint64
        ydk::YLeaf egq_pqp_mc_bytes_cnt; //type: uint64
        ydk::YLeaf egq_ehp_uc_pkt_cnt; //type: uint64
        ydk::YLeaf egq_ehp_mc_high_pkt_cnt; //type: uint64
        ydk::YLeaf egq_ehp_mc_low_pkt_cnt; //type: uint64
        ydk::YLeaf egq_deleted_pkt_cnt; //type: uint64
        ydk::YLeaf egq_ehp_mc_high_discard_cnt; //type: uint64
        ydk::YLeaf egq_ehp_mc_low_discard_cnt; //type: uint64
        ydk::YLeaf egq_erpp_lag_pruning_discard_cnt; //type: uint64
        ydk::YLeaf egq_erpp_pmf_discard_cnt; //type: uint64
        ydk::YLeaf egq_erpp_vlan_mbr_discard_cnt; //type: uint64
        ydk::YLeaf epni_epe_byte_cnt; //type: uint64
        ydk::YLeaf epni_epe_pkt_cnt; //type: uint64
        ydk::YLeaf epni_epe_discard_cnt; //type: uint64
        ydk::YLeaf nbi_tx_total_byte_cnt; //type: uint64
        ydk::YLeaf nbi_tx_total_pkt_cnt; //type: uint64

}; // Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics


class Dpa::Stats::Nodes::Node::NpuNumbers : public ydk::Entity
{
    public:
        NpuNumbers();
        ~NpuNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NpuNumber; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber

        ydk::YList npu_number;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber : public ydk::Entity
{
    public:
        NpuNumber();
        ~NpuNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        class Display; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display> display;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display : public ydk::Entity
{
    public:
        Display();
        ~Display();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrapIds; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds
        class InterfaceHandles; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles
        class BaseNumbers; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds> trap_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles> interface_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers> base_numbers;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds : public ydk::Entity
{
    public:
        TrapIds();
        ~TrapIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrapId; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId

        ydk::YList trap_id;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId : public ydk::Entity
{
    public:
        TrapId();
        ~TrapId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trap_id; //type: uint32
        ydk::YLeaf trap_strength; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf trap_id_xr; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf fec_id; //type: uint32
        ydk::YLeaf policer_id; //type: uint32
        ydk::YLeaf stats_id; //type: uint32
        ydk::YLeaf encap_id; //type: uint32
        ydk::YLeaf mc_group; //type: uint32
        ydk::YLeaf trap_string; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf offset; //type: uint64
        ydk::YLeaf npu_id; //type: uint64
        ydk::YLeaf packet_dropped; //type: uint64
        ydk::YLeaf packet_accepted; //type: uint64

}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles : public ydk::Entity
{
    public:
        InterfaceHandles();
        ~InterfaceHandles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceHandle; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle

        ydk::YList interface_handle;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle : public ydk::Entity
{
    public:
        InterfaceHandle();
        ~InterfaceHandle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf in_use; //type: boolean
        ydk::YLeaf rack_num; //type: uint8
        ydk::YLeaf slot_num; //type: uint8
        ydk::YLeaf npu_num; //type: uint8
        ydk::YLeaf npu_core; //type: uint8
        ydk::YLeaf port_num; //type: uint8
        ydk::YLeaf if_handle; //type: uint32
        ydk::YLeaf sys_port; //type: uint32
        ydk::YLeaf pp_port; //type: uint32
        ydk::YLeaf port_speed; //type: uint32
        ydk::YLeaf voq_base; //type: uint32
        ydk::YLeaf connector_id; //type: uint32
        ydk::YLeaf is_local_port; //type: boolean
        class VoqStat; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat

        ydk::YList voq_stat;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat : public ydk::Entity
{
    public:
        VoqStat();
        ~VoqStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_bytes; //type: uint64
        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf dropped_bytes; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers : public ydk::Entity
{
    public:
        BaseNumbers();
        ~BaseNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BaseNumber; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber

        ydk::YList base_number;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber : public ydk::Entity
{
    public:
        BaseNumber();
        ~BaseNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf base_number; //type: uint32
        ydk::YLeaf in_use; //type: boolean
        ydk::YLeaf rack_num; //type: uint8
        ydk::YLeaf slot_num; //type: uint8
        ydk::YLeaf npu_num; //type: uint8
        ydk::YLeaf npu_core; //type: uint8
        ydk::YLeaf port_num; //type: uint8
        ydk::YLeaf if_handle; //type: uint32
        ydk::YLeaf sys_port; //type: uint32
        ydk::YLeaf pp_port; //type: uint32
        ydk::YLeaf port_speed; //type: uint32
        ydk::YLeaf voq_base; //type: uint32
        ydk::YLeaf connector_id; //type: uint32
        ydk::YLeaf is_local_port; //type: boolean
        class VoqStat; //type: Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat

        ydk::YList voq_stat;
        
}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber


class Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat : public ydk::Entity
{
    public:
        VoqStat();
        ~VoqStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_bytes; //type: uint64
        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf dropped_bytes; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat


class Dpa::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nodes; //type: Dpa::Resources::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes> nodes;
        
}; // Dpa::Resources


class Dpa::Resources::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Dpa::Resources::Nodes::Node

        ydk::YList node;
        
}; // Dpa::Resources::Nodes


class Dpa::Resources::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class TableDatas; //type: Dpa::Resources::Nodes::Node::TableDatas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa::Resources::Nodes::Node::TableDatas> table_datas;
        
}; // Dpa::Resources::Nodes::Node


class Dpa::Resources::Nodes::Node::TableDatas : public ydk::Entity
{
    public:
        TableDatas();
        ~TableDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TableData; //type: Dpa::Resources::Nodes::Node::TableDatas::TableData

        ydk::YList table_data;
        
}; // Dpa::Resources::Nodes::Node::TableDatas


class Dpa::Resources::Nodes::Node::TableDatas::TableData : public ydk::Entity
{
    public:
        TableData();
        ~TableData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf resource; //type: DpaTable
        ydk::YLeaf sysdb_avail_npu_mask; //type: uint64
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf is_global; //type: boolean
        ydk::YLeaf num_npus; //type: uint32
        ydk::YLeaf table_specific_list; //type: string
        class NpuTblr; //type: Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr

        ydk::YList npu_tblr;
        
}; // Dpa::Resources::Nodes::Node::TableDatas::TableData


class Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr : public ydk::Entity
{
    public:
        NpuTblr();
        ~NpuTblr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf num_objs; //type: uint32
        ydk::YLeaf create_req; //type: uint32
        ydk::YLeaf create_ok; //type: uint32
        ydk::YLeaf delete_req; //type: uint32
        ydk::YLeaf delete_ok; //type: uint32
        ydk::YLeaf update_req; //type: uint32
        ydk::YLeaf update_ok; //type: uint32
        ydk::YLeaf eod_req; //type: uint32
        ydk::YLeaf eod_ok; //type: uint32
        ydk::YLeaf err_hw_fail; //type: uint32
        ydk::YLeaf err_ref_resolve; //type: uint32
        ydk::YLeaf err_db_notfound; //type: uint32
        ydk::YLeaf err_db_exists; //type: uint32
        ydk::YLeaf err_db_nomem; //type: uint32
        ydk::YLeaf err_id_reserve; //type: uint32
        ydk::YLeaf err_id_release; //type: uint32
        ydk::YLeaf err_id_update; //type: uint32

}; // Dpa::Resources::Nodes::Node::TableDatas::TableData::NpuTblr

class DpaTable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf test_if;
        static const ydk::Enum::YLeaf test_nhg;
        static const ydk::Enum::YLeaf test_nh;
        static const ydk::Enum::YLeaf test_rt;
        static const ydk::Enum::YLeaf test_dynhg;
        static const ydk::Enum::YLeaf test_ip_punt_policy;
        static const ydk::Enum::YLeaf test_punt;
        static const ydk::Enum::YLeaf test_punt_policy_stats;
        static const ydk::Enum::YLeaf test_async_update;
        static const ydk::Enum::YLeaf test_ddel_q;
        static const ydk::Enum::YLeaf bdbvi;
        static const ydk::Enum::YLeaf sys;
        static const ydk::Enum::YLeaf npu;
        static const ydk::Enum::YLeaf npuhwid;
        static const ydk::Enum::YLeaf l1_port;
        static const ydk::Enum::YLeaf l2_port;
        static const ydk::Enum::YLeaf l2intf;
        static const ydk::Enum::YLeaf mplspwe_port_o_list;
        static const ydk::Enum::YLeaf mplspwe_port;
        static const ydk::Enum::YLeaf mhpwe_port;
        static const ydk::Enum::YLeaf l2xc;
        static const ydk::Enum::YLeaf l2vpnstats;
        static const ydk::Enum::YLeaf l1_ports_tats;
        static const ydk::Enum::YLeaf l3intf;
        static const ydk::Enum::YLeaf l3intfrxstats;
        static const ydk::Enum::YLeaf ip_route;
        static const ydk::Enum::YLeaf ip6_route;
        static const ydk::Enum::YLeaf punt_policy_stats;
        static const ydk::Enum::YLeaf tep;
        static const ydk::Enum::YLeaf ip_punt_policy;
        static const ydk::Enum::YLeaf ip6_punt_policy;
        static const ydk::Enum::YLeaf isis_punt_policy;
        static const ydk::Enum::YLeaf ipnh_group;
        static const ydk::Enum::YLeaf ip6nh_group;
        static const ydk::Enum::YLeaf ipnh;
        static const ydk::Enum::YLeaf ip6nh;
        static const ydk::Enum::YLeaf ipvrf;
        static const ydk::Enum::YLeaf mplsnh;
        static const ydk::Enum::YLeaf mpls_label;
        static const ydk::Enum::YLeaf dnx_trap;
        static const ydk::Enum::YLeaf punt;
        static const ydk::Enum::YLeaf punt_police_r;
        static const ydk::Enum::YLeaf punt_lpts_police_r;
        static const ydk::Enum::YLeaf punt_stats;
        static const ydk::Enum::YLeaf tm_port;
        static const ydk::Enum::YLeaf span_session;
        static const ydk::Enum::YLeaf police_rstats;
        static const ydk::Enum::YLeaf tm_ports_tats;
        static const ydk::Enum::YLeaf l3intftxstats;
        static const ydk::Enum::YLeaf mplstetxstats;
        static const ydk::Enum::YLeaf mplslblstats;
        static const ydk::Enum::YLeaf police_r;
        static const ydk::Enum::YLeaf l2intfrxstats;
        static const ydk::Enum::YLeaf l2intftxstats;
        static const ydk::Enum::YLeaf dnx_pbr_tt_ipv4;
        static const ydk::Enum::YLeaf dnx_pbr_tt_ipv6;
        static const ydk::Enum::YLeaf bfdhwoff;
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf lag_port;
        static const ydk::Enum::YLeaf qos_profile;
        static const ydk::Enum::YLeaf tmrate_profile;
        static const ydk::Enum::YLeaf dnx_port_range;
        static const ydk::Enum::YLeaf ipacl;
        static const ydk::Enum::YLeaf ip6acl;
        static const ydk::Enum::YLeaf sched_tree;
        static const ydk::Enum::YLeaf tmcos;
        static const ydk::Enum::YLeaf statsagg;
        static const ydk::Enum::YLeaf nhprotect;
        static const ydk::Enum::YLeaf sampler;
        static const ydk::Enum::YLeaf l2qos;
        static const ydk::Enum::YLeaf peer_qos;
        static const ydk::Enum::YLeaf ipqos;
        static const ydk::Enum::YLeaf ip6qos;
        static const ydk::Enum::YLeaf mplsqos;
        static const ydk::Enum::YLeaf qosid;
        static const ydk::Enum::YLeaf extlif;
        static const ydk::Enum::YLeaf elif;
        static const ydk::Enum::YLeaf ingaclstats;
        static const ydk::Enum::YLeaf egraclstats;
        static const ydk::Enum::YLeaf edpl;
        static const ydk::Enum::YLeaf erp;
        static const ydk::Enum::YLeaf cfmmaid;
        static const ydk::Enum::YLeaf cfmdefmps;
        static const ydk::Enum::YLeaf cfmofflmep;
        static const ydk::Enum::YLeaf cfmoffrmep;
        static const ydk::Enum::YLeaf cfmnonoff;
        static const ydk::Enum::YLeaf cfmhwoffrxstats;
        static const ydk::Enum::YLeaf ipmc_route;
        static const ydk::Enum::YLeaf l2ipmc_route;
        static const ydk::Enum::YLeaf ipmco_list;
        static const ydk::Enum::YLeaf l2mco_list;
        static const ydk::Enum::YLeaf ipmc_merge_do_list;
        static const ydk::Enum::YLeaf sgfgid_list;
        static const ydk::Enum::YLeaf meshmc;
        static const ydk::Enum::YLeaf l2_bridge;
        static const ydk::Enum::YLeaf l2_bridge_port;
        static const ydk::Enum::YLeaf l2_bridge_vni;
        static const ydk::Enum::YLeaf l2_bridge_vnidecap;
        static const ydk::Enum::YLeaf l2_bridge_mac;
        static const ydk::Enum::YLeaf l2brmac;
        static const ydk::Enum::YLeaf ip_tunnel_decap;
        static const ydk::Enum::YLeaf l2vlan_range;
        static const ydk::Enum::YLeaf ip_tunnel_encap;
        static const ydk::Enum::YLeaf rawget;
        static const ydk::Enum::YLeaf ip6mc_route;
        static const ydk::Enum::YLeaf l2evpnact_remote_peer_id;
        static const ydk::Enum::YLeaf l2evpnact_local_shl;
        static const ydk::Enum::YLeaf l2evpnact_remote_shl;
        static const ydk::Enum::YLeaf evpn_iml_range;
        static const ydk::Enum::YLeaf l2_bridge_o_list;
        static const ydk::Enum::YLeaf l2_bridge_vnio_list;
        static const ydk::Enum::YLeaf l2acl;
        static const ydk::Enum::YLeaf l2evpn_nh;
        static const ydk::Enum::YLeaf l2_bridge_port_sc;
        static const ydk::Enum::YLeaf l3intfmctxstats;
        static const ydk::Enum::YLeaf tidl_sample;
        static const ydk::Enum::YLeaf tidl_ref_sample;
        static const ydk::Enum::YLeaf ipacl_prefix;
        static const ydk::Enum::YLeaf ip6acl_prefix;
        static const ydk::Enum::YLeaf ipacl_port;
        static const ydk::Enum::YLeaf scaleacl;
        static const ydk::Enum::YLeaf ipmcf_hop;
        static const ydk::Enum::YLeaf bundle_swoff;
        static const ydk::Enum::YLeaf mcidswoff;
        static const ydk::Enum::YLeaf dest_map;
        static const ydk::Enum::YLeaf l2_bridge_port_pw;
        static const ydk::Enum::YLeaf l2evpnact_local_shlstats;
        static const ydk::Enum::YLeaf test_hidden;
        static const ydk::Enum::YLeaf test_local;
        static const ydk::Enum::YLeaf test_repeated;
        static const ydk::Enum::YLeaf limd;
        static const ydk::Enum::YLeaf litap;
        static const ydk::Enum::YLeaf l3intf_proto_stats;
        static const ydk::Enum::YLeaf srv6sid;
        static const ydk::Enum::YLeaf srv6nh;
        static const ydk::Enum::YLeaf redirect_vrf;
        static const ydk::Enum::YLeaf test_xtf;
        static const ydk::Enum::YLeaf ippbr;
        static const ydk::Enum::YLeaf ippbrstats;
        static const ydk::Enum::YLeaf l2_bridge_port_remote_lc;
        static const ydk::Enum::YLeaf mpls_mdt_bud;
        static const ydk::Enum::YLeaf l2mac_static;
        static const ydk::Enum::YLeaf sr_label_rxstats;
        static const ydk::Enum::YLeaf l2vpnxid;
        static const ydk::Enum::YLeaf rpfif;

        static int get_enum_value(const std::string & name) {
            if (name == "test-if") return 0;
            if (name == "test-nhg") return 1;
            if (name == "test-nh") return 2;
            if (name == "test-rt") return 3;
            if (name == "test-dynhg") return 4;
            if (name == "test-ip-punt-policy") return 5;
            if (name == "test-punt") return 6;
            if (name == "test-punt-policy-stats") return 7;
            if (name == "test-async-update") return 8;
            if (name == "test-ddel-q") return 9;
            if (name == "bdbvi") return 10;
            if (name == "sys") return 11;
            if (name == "npu") return 12;
            if (name == "npuhwid") return 13;
            if (name == "l1-port") return 14;
            if (name == "l2-port") return 15;
            if (name == "l2intf") return 16;
            if (name == "mplspwe-port-o-list") return 17;
            if (name == "mplspwe-port") return 18;
            if (name == "mhpwe-port") return 19;
            if (name == "l2xc") return 20;
            if (name == "l2vpnstats") return 21;
            if (name == "l1-ports-tats") return 22;
            if (name == "l3intf") return 23;
            if (name == "l3intfrxstats") return 24;
            if (name == "ip-route") return 25;
            if (name == "ip6-route") return 26;
            if (name == "punt-policy-stats") return 27;
            if (name == "tep") return 28;
            if (name == "ip-punt-policy") return 29;
            if (name == "ip6-punt-policy") return 30;
            if (name == "isis-punt-policy") return 31;
            if (name == "ipnh-group") return 32;
            if (name == "ip6nh-group") return 33;
            if (name == "ipnh") return 34;
            if (name == "ip6nh") return 35;
            if (name == "ipvrf") return 36;
            if (name == "mplsnh") return 37;
            if (name == "mpls-label") return 38;
            if (name == "dnx-trap") return 39;
            if (name == "punt") return 40;
            if (name == "punt-police-r") return 41;
            if (name == "punt-lpts-police-r") return 42;
            if (name == "punt-stats") return 43;
            if (name == "tm-port") return 44;
            if (name == "span-session") return 45;
            if (name == "police-rstats") return 46;
            if (name == "tm-ports-tats") return 47;
            if (name == "l3intftxstats") return 48;
            if (name == "mplstetxstats") return 49;
            if (name == "mplslblstats") return 50;
            if (name == "police-r") return 51;
            if (name == "l2intfrxstats") return 52;
            if (name == "l2intftxstats") return 53;
            if (name == "dnx-pbr-tt-ipv4") return 54;
            if (name == "dnx-pbr-tt-ipv6") return 55;
            if (name == "bfdhwoff") return 56;
            if (name == "global") return 57;
            if (name == "lag-port") return 58;
            if (name == "qos-profile") return 59;
            if (name == "tmrate-profile") return 60;
            if (name == "dnx-port-range") return 61;
            if (name == "ipacl") return 62;
            if (name == "ip6acl") return 63;
            if (name == "sched-tree") return 64;
            if (name == "tmcos") return 65;
            if (name == "statsagg") return 66;
            if (name == "nhprotect") return 67;
            if (name == "sampler") return 68;
            if (name == "l2qos") return 69;
            if (name == "peer-qos") return 70;
            if (name == "ipqos") return 71;
            if (name == "ip6qos") return 72;
            if (name == "mplsqos") return 73;
            if (name == "qosid") return 74;
            if (name == "extlif") return 75;
            if (name == "elif") return 76;
            if (name == "ingaclstats") return 77;
            if (name == "egraclstats") return 78;
            if (name == "edpl") return 79;
            if (name == "erp") return 80;
            if (name == "cfmmaid") return 81;
            if (name == "cfmdefmps") return 82;
            if (name == "cfmofflmep") return 83;
            if (name == "cfmoffrmep") return 84;
            if (name == "cfmnonoff") return 85;
            if (name == "cfmhwoffrxstats") return 86;
            if (name == "ipmc-route") return 87;
            if (name == "l2ipmc-route") return 88;
            if (name == "ipmco-list") return 89;
            if (name == "l2mco-list") return 90;
            if (name == "ipmc-merge-do-list") return 91;
            if (name == "sgfgid-list") return 92;
            if (name == "meshmc") return 93;
            if (name == "l2-bridge") return 94;
            if (name == "l2-bridge-port") return 95;
            if (name == "l2-bridge-vni") return 96;
            if (name == "l2-bridge-vnidecap") return 97;
            if (name == "l2-bridge-mac") return 98;
            if (name == "l2brmac") return 99;
            if (name == "ip-tunnel-decap") return 100;
            if (name == "l2vlan-range") return 101;
            if (name == "ip-tunnel-encap") return 102;
            if (name == "rawget") return 103;
            if (name == "ip6mc-route") return 104;
            if (name == "l2evpnact-remote-peer-id") return 105;
            if (name == "l2evpnact-local-shl") return 106;
            if (name == "l2evpnact-remote-shl") return 107;
            if (name == "evpn-iml-range") return 108;
            if (name == "l2-bridge-o-list") return 109;
            if (name == "l2-bridge-vnio-list") return 110;
            if (name == "l2acl") return 111;
            if (name == "l2evpn-nh") return 112;
            if (name == "l2-bridge-port-sc") return 113;
            if (name == "l3intfmctxstats") return 114;
            if (name == "tidl-sample") return 115;
            if (name == "tidl-ref-sample") return 116;
            if (name == "ipacl-prefix") return 117;
            if (name == "ip6acl-prefix") return 118;
            if (name == "ipacl-port") return 119;
            if (name == "scaleacl") return 120;
            if (name == "ipmcf-hop") return 121;
            if (name == "bundle-swoff") return 122;
            if (name == "mcidswoff") return 123;
            if (name == "dest-map") return 124;
            if (name == "l2-bridge-port-pw") return 125;
            if (name == "l2evpnact-local-shlstats") return 126;
            if (name == "test-hidden") return 127;
            if (name == "test-local") return 128;
            if (name == "test-repeated") return 129;
            if (name == "limd") return 130;
            if (name == "litap") return 131;
            if (name == "l3intf-proto-stats") return 132;
            if (name == "srv6sid") return 133;
            if (name == "srv6nh") return 134;
            if (name == "redirect-vrf") return 135;
            if (name == "test-xtf") return 136;
            if (name == "ippbr") return 137;
            if (name == "ippbrstats") return 138;
            if (name == "l2-bridge-port-remote-lc") return 139;
            if (name == "mpls-mdt-bud") return 140;
            if (name == "l2mac-static") return 141;
            if (name == "sr-label-rxstats") return 142;
            if (name == "l2vpnxid") return 143;
            if (name == "rpfif") return 144;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_OPER_ */

