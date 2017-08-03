#ifndef _CISCO_IOS_XR_ASR9K_ASIC_ERRORS_OPER_
#define _CISCO_IOS_XR_ASR9K_ASIC_ERRORS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_asic_errors_oper {

class AsicErrorStats : public ydk::Entity
{
    public:
        AsicErrorStats();
        ~AsicErrorStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Nodes; //type: AsicErrorStats::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes> nodes;
        
}; // AsicErrorStats


class AsicErrorStats::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: AsicErrorStats::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node> > node;
        
}; // AsicErrorStats::Nodes


class AsicErrorStats::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class Counts; //type: AsicErrorStats::Nodes::Node::Counts

        std::shared_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node::Counts> counts;
        
}; // AsicErrorStats::Nodes::Node


class AsicErrorStats::Nodes::Node::Counts : public ydk::Entity
{
    public:
        Counts();
        ~Counts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Count; //type: AsicErrorStats::Nodes::Node::Counts::Count

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node::Counts::Count> > count;
        
}; // AsicErrorStats::Nodes::Node::Counts


class AsicErrorStats::Nodes::Node::Counts::Count : public ydk::Entity
{
    public:
        Count();
        ~Count();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class SumData; //type: AsicErrorStats::Nodes::Node::Counts::Count::SumData

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node::Counts::Count::SumData> > sum_data;
        
}; // AsicErrorStats::Nodes::Node::Counts::Count


class AsicErrorStats::Nodes::Node::Counts::Count::SumData : public ydk::Entity
{
    public:
        SumData();
        ~SumData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf num_nodes; //type: uint32
        ydk::YLeaf crc_err_count; //type: uint32
        ydk::YLeaf sbe_err_count; //type: uint32
        ydk::YLeaf mbe_err_count; //type: uint32
        ydk::YLeaf par_err_count; //type: uint32
        ydk::YLeaf gen_err_count; //type: uint32
        ydk::YLeaf reset_err_count; //type: uint32
        ydk::YLeafList node_key; //type: list of  uint32

}; // AsicErrorStats::Nodes::Node::Counts::Count::SumData


}
}

#endif /* _CISCO_IOS_XR_ASR9K_ASIC_ERRORS_OPER_ */

