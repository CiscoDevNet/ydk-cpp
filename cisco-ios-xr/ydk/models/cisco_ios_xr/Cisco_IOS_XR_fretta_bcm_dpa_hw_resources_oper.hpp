#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_HW_RESOURCES_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_HW_RESOURCES_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper {

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats> stats;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes> nodes;
        
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
        class StatsResourcesDatas; //type: Dpa::Stats::Nodes::Node::StatsResourcesDatas
        class HwResourcesDatas; //type: Dpa::Stats::Nodes::Node::HwResourcesDatas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics> asic_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers> npu_numbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::StatsResourcesDatas> stats_resources_datas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::HwResourcesDatas> hw_resources_datas;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds> asic_statistics_detail_for_npu_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds> asic_statistics_for_npu_ids;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics> statistics;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics> statistics;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display> display;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds> trap_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles> interface_handles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers> base_numbers;
        
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


class Dpa::Stats::Nodes::Node::StatsResourcesDatas : public ydk::Entity
{
    public:
        StatsResourcesDatas();
        ~StatsResourcesDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsResourcesData; //type: Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData

        ydk::YList stats_resources_data;
        
}; // Dpa::Stats::Nodes::Node::StatsResourcesDatas


class Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData : public ydk::Entity
{
    public:
        StatsResourcesData();
        ~StatsResourcesData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf resource; //type: Resource
        ydk::YLeaf sys_cp_cnfg_prof; //type: uint32
        ydk::YLeaf next_avail_cp_id; //type: uint32
        ydk::YLeaf num_cntr_engines; //type: uint32
        class CntrEngine; //type: Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData::CntrEngine

        ydk::YList cntr_engine;
        
}; // Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData


class Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData::CntrEngine : public ydk::Entity
{
    public:
        CntrEngine();
        ~CntrEngine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: string
        ydk::YLeaf core_id; //type: uint32
        class AppsInfo; //type: Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData::CntrEngine::AppsInfo

        ydk::YList apps_info;
        
}; // Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData::CntrEngine


class Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData::CntrEngine::AppsInfo : public ydk::Entity
{
    public:
        AppsInfo();
        ~AppsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: string
        ydk::YLeaf num_cntrs_for_app; //type: uint32
        ydk::YLeaf num_cntrs_used; //type: uint32

}; // Dpa::Stats::Nodes::Node::StatsResourcesDatas::StatsResourcesData::CntrEngine::AppsInfo


class Dpa::Stats::Nodes::Node::HwResourcesDatas : public ydk::Entity
{
    public:
        HwResourcesDatas();
        ~HwResourcesDatas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HwResourcesData; //type: Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData

        ydk::YList hw_resources_data;
        
}; // Dpa::Stats::Nodes::Node::HwResourcesDatas


class Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData : public ydk::Entity
{
    public:
        HwResourcesData();
        ~HwResourcesData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf resource; //type: Resource
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf num_npus; //type: uint32
        ydk::YLeaf cmd_invalid; //type: boolean
        class NpuHwr; //type: Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr

        ydk::YList npu_hwr;
        
}; // Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData


class Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr : public ydk::Entity
{
    public:
        NpuHwr();
        ~NpuHwr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_allowed; //type: uint32
        ydk::YLeaf npu_id; //type: uint32
        ydk::YLeaf max_entries; //type: uint32
        ydk::YLeaf red_oor_threshold; //type: uint32
        ydk::YLeaf red_oor_threshold_percent; //type: uint32
        ydk::YLeaf yellow_oor_threshold; //type: uint32
        ydk::YLeaf yellow_oor_threshold_percent; //type: uint32
        ydk::YLeaf inuse_objects; //type: uint32
        ydk::YLeaf num_lt; //type: uint32
        ydk::YLeaf oor_change_count; //type: uint32
        ydk::YLeaf oor_state_change_time1; //type: string
        ydk::YLeaf oor_state_change_time2; //type: string
        ydk::YLeaf oor_state; //type: string
        class LtHwr; //type: Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr

        ydk::YList lt_hwr;
        
}; // Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr


class Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr : public ydk::Entity
{
    public:
        LtHwr();
        ~LtHwr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lt_id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf hw_entries; //type: uint32
        ydk::YLeaf sw_entries; //type: uint32

}; // Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr

class Resource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lem;
        static const ydk::Enum::YLeaf lpm;
        static const ydk::Enum::YLeaf encap;
        static const ydk::Enum::YLeaf ext_tcam_ipv4;
        static const ydk::Enum::YLeaf ext_tcam_ipv6_short;
        static const ydk::Enum::YLeaf ext_tcam_ipv6_long;
        static const ydk::Enum::YLeaf fec;
        static const ydk::Enum::YLeaf ecmpfec;
        static const ydk::Enum::YLeaf ext_tcam_ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "lem") return 0;
            if (name == "lpm") return 1;
            if (name == "encap") return 2;
            if (name == "ext-tcam-ipv4") return 3;
            if (name == "ext-tcam-ipv6-short") return 4;
            if (name == "ext-tcam-ipv6-long") return 5;
            if (name == "fec") return 6;
            if (name == "ecmpfec") return 7;
            if (name == "ext-tcam-ipv6") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_HW_RESOURCES_OPER_ */

