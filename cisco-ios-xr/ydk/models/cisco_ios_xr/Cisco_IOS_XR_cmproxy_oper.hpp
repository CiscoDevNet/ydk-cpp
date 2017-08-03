#ifndef _CISCO_IOS_XR_CMPROXY_OPER_
#define _CISCO_IOS_XR_CMPROXY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cmproxy_oper {

class SdrInventoryVm : public ydk::Entity
{
    public:
        SdrInventoryVm();
        ~SdrInventoryVm();

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

        class Nodes; //type: SdrInventoryVm::Nodes

        std::shared_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes> nodes;
        
}; // SdrInventoryVm


class SdrInventoryVm::Nodes : public ydk::Entity
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

        class Node; //type: SdrInventoryVm::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes::Node> > node;
        
}; // SdrInventoryVm::Nodes


class SdrInventoryVm::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class NodeEntries; //type: SdrInventoryVm::Nodes::Node::NodeEntries

        std::shared_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes::Node::NodeEntries> node_entries;
        
}; // SdrInventoryVm::Nodes::Node


class SdrInventoryVm::Nodes::Node::NodeEntries : public ydk::Entity
{
    public:
        NodeEntries();
        ~NodeEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeEntry; //type: SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry> > node_entry;
        
}; // SdrInventoryVm::Nodes::Node::NodeEntries


class SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry : public ydk::Entity
{
    public:
        NodeEntry();
        ~NodeEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf valid; //type: uint32
        ydk::YLeaf card_type; //type: uint32
        ydk::YLeaf card_type_string; //type: string
        ydk::YLeaf nodeid; //type: int32
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf partner_id; //type: int32
        ydk::YLeaf partner_name; //type: string
        ydk::YLeaf red_state; //type: uint32
        ydk::YLeaf red_state_string; //type: string
        ydk::YLeaf node_sw_state; //type: uint32
        ydk::YLeaf node_sw_state_string; //type: string
        ydk::YLeaf prev_sw_state; //type: uint32
        ydk::YLeaf prev_sw_state_string; //type: string
        ydk::YLeaf node_ip; //type: uint32
        ydk::YLeaf node_ipv4_string; //type: string

}; // SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry


}
}

#endif /* _CISCO_IOS_XR_CMPROXY_OPER_ */

