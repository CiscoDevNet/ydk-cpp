#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_DROP_STATS_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_DROP_STATS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper {

class Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

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

        class Nodes; //type: Drop::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes> nodes;
        
}; // Drop


class Drop::Nodes : public ydk::Entity
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

        class Node; //type: Drop::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node> > node;
        
}; // Drop::Nodes


class Drop::Nodes::Node : public ydk::Entity
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
        class NpuNumberForDropStats; //type: Drop::Nodes::Node::NpuNumberForDropStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node::NpuNumberForDropStats> npu_number_for_drop_stats;
        
}; // Drop::Nodes::Node


class Drop::Nodes::Node::NpuNumberForDropStats : public ydk::Entity
{
    public:
        NpuNumberForDropStats();
        ~NpuNumberForDropStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NpuNumberForDropStat; //type: Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat> > npu_number_for_drop_stat;
        
}; // Drop::Nodes::Node::NpuNumberForDropStats


class Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat : public ydk::Entity
{
    public:
        NpuNumberForDropStat();
        ~NpuNumberForDropStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: int32
        class DropSpecificStatsData; //type: Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData> > drop_specific_stats_data;
        
}; // Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat


class Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData : public ydk::Entity
{
    public:
        DropSpecificStatsData();
        ~DropSpecificStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_data; //type: int32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf count; //type: uint64

}; // Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_DROP_STATS_OPER_ */

