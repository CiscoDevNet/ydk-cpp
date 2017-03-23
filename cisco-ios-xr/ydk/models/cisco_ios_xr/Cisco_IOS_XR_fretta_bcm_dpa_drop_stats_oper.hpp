#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_DROP_STATS_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_DROP_STATS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper {

class Drop : public Entity
{
    public:
        Drop();
        ~Drop();

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



        class Nodes; //type: Drop::Nodes

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes> nodes;


}; // Drop


class Drop::Nodes : public Entity
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



        class Node; //type: Drop::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node> > node;


}; // Drop::Nodes


class Drop::Nodes::Node : public Entity
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

        class NpuNumberForDropStats; //type: Drop::Nodes::Node::NpuNumberForDropStats

        std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node::NpuNumberForDropStats> npu_number_for_drop_stats;


}; // Drop::Nodes::Node


class Drop::Nodes::Node::NpuNumberForDropStats : public Entity
{
    public:
        NpuNumberForDropStats();
        ~NpuNumberForDropStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NpuNumberForDropStat; //type: Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat> > npu_number_for_drop_stat;


}; // Drop::Nodes::Node::NpuNumberForDropStats


class Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat : public Entity
{
    public:
        NpuNumberForDropStat();
        ~NpuNumberForDropStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: int32

        class DropSpecificStatsData; //type: Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData> > drop_specific_stats_data;


}; // Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat


class Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData : public Entity
{
    public:
        DropSpecificStatsData();
        ~DropSpecificStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf drop_data; //type: int32
        YLeaf id; //type: uint32
        YLeaf name; //type: string
        YLeaf count; //type: uint64



}; // Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_DROP_STATS_OPER_ */
