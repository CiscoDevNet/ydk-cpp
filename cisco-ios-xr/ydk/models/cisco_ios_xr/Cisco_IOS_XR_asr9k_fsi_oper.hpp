#ifndef _CISCO_IOS_XR_ASR9K_FSI_OPER_
#define _CISCO_IOS_XR_ASR9K_FSI_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_fsi_oper {

class FabricStats : public Entity
{
    public:
        FabricStats();
        ~FabricStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: FabricStats::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes> nodes;
        
}; // FabricStats


class FabricStats::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: FabricStats::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node> > node;
        
}; // FabricStats::Nodes


class FabricStats::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Statses; //type: FabricStats::Nodes::Node::Statses

        std::shared_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses> statses;
        
}; // FabricStats::Nodes::Node


class FabricStats::Nodes::Node::Statses : public Entity
{
    public:
        Statses();
        ~Statses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stats; //type: FabricStats::Nodes::Node::Statses::Stats

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats> > stats;
        
}; // FabricStats::Nodes::Node::Statses


class FabricStats::Nodes::Node::Statses::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf stat_table_name; //type: string
        class StatsTable; //type: FabricStats::Nodes::Node::Statses::Stats::StatsTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats::StatsTable> > stats_table;
        
}; // FabricStats::Nodes::Node::Statses::Stats


class FabricStats::Nodes::Node::Statses::Stats::StatsTable : public Entity
{
    public:
        StatsTable();
        ~StatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FsiStat; //type: FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat> > fsi_stat;
        
}; // FabricStats::Nodes::Node::Statses::Stats::StatsTable


class FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat : public Entity
{
    public:
        FsiStat();
        ~FsiStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint64
        YLeaf counter_name; //type: string

}; // FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat


}
}

#endif /* _CISCO_IOS_XR_ASR9K_FSI_OPER_ */

