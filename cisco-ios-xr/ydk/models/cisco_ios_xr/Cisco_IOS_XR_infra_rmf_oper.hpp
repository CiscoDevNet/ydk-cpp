#ifndef _CISCO_IOS_XR_INFRA_RMF_OPER_
#define _CISCO_IOS_XR_INFRA_RMF_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rmf_oper {

class Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

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

        class Nodes; //type: Redundancy::Nodes
        class Summary; //type: Redundancy::Summary

        std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary> summary;
        
}; // Redundancy


class Redundancy::Nodes : public ydk::Entity
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

        class Node; //type: Redundancy::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node> > node;
        
}; // Redundancy::Nodes


class Redundancy::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf log; //type: string
        ydk::YLeaf active_reboot_reason; //type: string
        ydk::YLeaf standby_reboot_reason; //type: string
        ydk::YLeaf err_log; //type: string
        class Redundancy_; //type: Redundancy::Nodes::Node::Redundancy_

        std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node::Redundancy_> redundancy;
        
}; // Redundancy::Nodes::Node


class Redundancy::Nodes::Node::Redundancy_ : public ydk::Entity
{
    public:
        Redundancy_();
        ~Redundancy_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: string
        ydk::YLeaf standby; //type: string
        ydk::YLeaf ha_state; //type: string
        ydk::YLeaf nsr_state; //type: string
        class Groupinfo; //type: Redundancy::Nodes::Node::Redundancy_::Groupinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node::Redundancy_::Groupinfo> > groupinfo;
        
}; // Redundancy::Nodes::Node::Redundancy_


class Redundancy::Nodes::Node::Redundancy_::Groupinfo : public ydk::Entity
{
    public:
        Groupinfo();
        ~Groupinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: string
        ydk::YLeaf standby; //type: string
        ydk::YLeaf ha_state; //type: string
        ydk::YLeaf nsr_state; //type: string

}; // Redundancy::Nodes::Node::Redundancy_::Groupinfo


class Redundancy::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf err_log; //type: string
        class RedPair; //type: Redundancy::Summary::RedPair

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary::RedPair> > red_pair;
        
}; // Redundancy::Summary


class Redundancy::Summary::RedPair : public ydk::Entity
{
    public:
        RedPair();
        ~RedPair();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: string
        ydk::YLeaf standby; //type: string
        ydk::YLeaf ha_state; //type: string
        ydk::YLeaf nsr_state; //type: string
        class Groupinfo; //type: Redundancy::Summary::RedPair::Groupinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary::RedPair::Groupinfo> > groupinfo;
        
}; // Redundancy::Summary::RedPair


class Redundancy::Summary::RedPair::Groupinfo : public ydk::Entity
{
    public:
        Groupinfo();
        ~Groupinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: string
        ydk::YLeaf standby; //type: string
        ydk::YLeaf ha_state; //type: string
        ydk::YLeaf nsr_state; //type: string

}; // Redundancy::Summary::RedPair::Groupinfo


}
}

#endif /* _CISCO_IOS_XR_INFRA_RMF_OPER_ */

