#ifndef _CISCO_IOS_XR_ASR9K_FSI_OPER_
#define _CISCO_IOS_XR_ASR9K_FSI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_fsi_oper {

class FabricStats : public ydk::Entity
{
    public:
        FabricStats();
        ~FabricStats();

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

        class Nodes; //type: FabricStats::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes> nodes;
        
}; // FabricStats


class FabricStats::Nodes : public ydk::Entity
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

        class Node; //type: FabricStats::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node> > node;
        
}; // FabricStats::Nodes


class FabricStats::Nodes::Node : public ydk::Entity
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
        class Statses; //type: FabricStats::Nodes::Node::Statses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses> statses;
        
}; // FabricStats::Nodes::Node


class FabricStats::Nodes::Node::Statses : public ydk::Entity
{
    public:
        Statses();
        ~Statses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stats; //type: FabricStats::Nodes::Node::Statses::Stats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats> > stats;
        
}; // FabricStats::Nodes::Node::Statses


class FabricStats::Nodes::Node::Statses::Stats : public ydk::Entity
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

        ydk::YLeaf type; //type: string
        ydk::YLeaf last_clear_time; //type: uint64
        ydk::YLeaf stat_table_name; //type: string
        class StatsTable; //type: FabricStats::Nodes::Node::Statses::Stats::StatsTable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats::StatsTable> > stats_table;
        
}; // FabricStats::Nodes::Node::Statses::Stats


class FabricStats::Nodes::Node::Statses::Stats::StatsTable : public ydk::Entity
{
    public:
        StatsTable();
        ~StatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FsiStat; //type: FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat> > fsi_stat;
        
}; // FabricStats::Nodes::Node::Statses::Stats::StatsTable


class FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat : public ydk::Entity
{
    public:
        FsiStat();
        ~FsiStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint64
        ydk::YLeaf counter_name; //type: string

}; // FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat


}
}

#endif /* _CISCO_IOS_XR_ASR9K_FSI_OPER_ */

