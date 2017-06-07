#ifndef _CISCO_IOS_XR_INFRA_RMF_OPER_
#define _CISCO_IOS_XR_INFRA_RMF_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_rmf_oper {

class Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

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

        class Nodes; //type: Redundancy::Nodes
        class Summary; //type: Redundancy::Summary

        std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary> summary;
        
}; // Redundancy


class Redundancy::Nodes : public Entity
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

        class Node; //type: Redundancy::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node> > node;
        
}; // Redundancy::Nodes


class Redundancy::Nodes::Node : public Entity
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

        YLeaf node_id; //type: string
        YLeaf log; //type: string
        YLeaf active_reboot_reason; //type: string
        YLeaf standby_reboot_reason; //type: string
        YLeaf err_log; //type: string
        class Redundancy_; //type: Redundancy::Nodes::Node::Redundancy_

        std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node::Redundancy_> redundancy;
        
}; // Redundancy::Nodes::Node


class Redundancy::Nodes::Node::Redundancy_ : public Entity
{
    public:
        Redundancy_();
        ~Redundancy_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: string
        YLeaf standby; //type: string
        YLeaf ha_state; //type: string
        YLeaf nsr_state; //type: string
        class Groupinfo; //type: Redundancy::Nodes::Node::Redundancy_::Groupinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node::Redundancy_::Groupinfo> > groupinfo;
        
}; // Redundancy::Nodes::Node::Redundancy_


class Redundancy::Nodes::Node::Redundancy_::Groupinfo : public Entity
{
    public:
        Groupinfo();
        ~Groupinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: string
        YLeaf standby; //type: string
        YLeaf ha_state; //type: string
        YLeaf nsr_state; //type: string

}; // Redundancy::Nodes::Node::Redundancy_::Groupinfo


class Redundancy::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf err_log; //type: string
        class RedPair; //type: Redundancy::Summary::RedPair

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary::RedPair> > red_pair;
        
}; // Redundancy::Summary


class Redundancy::Summary::RedPair : public Entity
{
    public:
        RedPair();
        ~RedPair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: string
        YLeaf standby; //type: string
        YLeaf ha_state; //type: string
        YLeaf nsr_state; //type: string
        class Groupinfo; //type: Redundancy::Summary::RedPair::Groupinfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary::RedPair::Groupinfo> > groupinfo;
        
}; // Redundancy::Summary::RedPair


class Redundancy::Summary::RedPair::Groupinfo : public Entity
{
    public:
        Groupinfo();
        ~Groupinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: string
        YLeaf standby; //type: string
        YLeaf ha_state; //type: string
        YLeaf nsr_state; //type: string

}; // Redundancy::Summary::RedPair::Groupinfo


}
}

#endif /* _CISCO_IOS_XR_INFRA_RMF_OPER_ */

