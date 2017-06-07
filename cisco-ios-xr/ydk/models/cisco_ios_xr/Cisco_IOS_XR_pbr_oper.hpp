#ifndef _CISCO_IOS_XR_PBR_OPER_
#define _CISCO_IOS_XR_PBR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_pbr_oper {

class Pbr : public Entity
{
    public:
        Pbr();
        ~Pbr();

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

        class Nodes; //type: Pbr::Nodes

        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes> nodes;
        
}; // Pbr


class Pbr::Nodes : public Entity
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

        class Node; //type: Pbr::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node> > node;
        
}; // Pbr::Nodes


class Pbr::Nodes::Node : public Entity
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
        class PolicyMap; //type: Pbr::Nodes::Node::PolicyMap

        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap> policy_map;
        
}; // Pbr::Nodes::Node


class Pbr::Nodes::Node::PolicyMap : public Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: Pbr::Nodes::Node::PolicyMap::Interfaces

        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces> interfaces;
        
}; // Pbr::Nodes::Node::PolicyMap


class Pbr::Nodes::Node::PolicyMap::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface> > interface;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Direction; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction

        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction> direction;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction : public Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input

        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input> input;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf policy_name; //type: string
        YLeaf state; //type: PolicyStateEnum
        YLeaf state_description; //type: string
        class ClassStat; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat> > class_stat;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat : public Entity
{
    public:
        ClassStat();
        ~ClassStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter_validity_bitmask; //type: uint64
        YLeaf class_name; //type: string
        YLeaf class_id; //type: uint32
        class GeneralStats; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats
        class HttprStats; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats

        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats> general_stats;
        std::shared_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats> httpr_stats;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats : public Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets; //type: uint64
        YLeaf transmit_bytes; //type: uint64
        YLeaf total_drop_packets; //type: uint64
        YLeaf total_drop_bytes; //type: uint64
        YLeaf total_drop_rate; //type: uint32
        YLeaf match_data_rate; //type: uint32
        YLeaf total_transmit_rate; //type: uint32
        YLeaf pre_policy_matched_packets; //type: uint64
        YLeaf pre_policy_matched_bytes; //type: uint64

}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats : public Entity
{
    public:
        HttprStats();
        ~HttprStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rqst_rcvd_packets; //type: uint64
        YLeaf rqst_rcvd_bytes; //type: uint64
        YLeaf drop_packets; //type: uint64
        YLeaf drop_bytes; //type: uint64
        YLeaf resp_sent_packets; //type: uint64
        YLeaf resp_sent_bytes; //type: uint64

}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats

class PolicyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf suspended;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_OPER_ */

