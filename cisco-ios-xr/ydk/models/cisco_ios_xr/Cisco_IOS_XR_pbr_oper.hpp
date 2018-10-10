#ifndef _CISCO_IOS_XR_PBR_OPER_
#define _CISCO_IOS_XR_PBR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_oper {

class Pbr : public ydk::Entity
{
    public:
        Pbr();
        ~Pbr();

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

        class Nodes; //type: Pbr::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes> nodes;
        
}; // Pbr


class Pbr::Nodes : public ydk::Entity
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

        class Node; //type: Pbr::Nodes::Node

        ydk::YList node;
        
}; // Pbr::Nodes


class Pbr::Nodes::Node : public ydk::Entity
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
        class PolicyMap; //type: Pbr::Nodes::Node::PolicyMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap> policy_map;
        
}; // Pbr::Nodes::Node


class Pbr::Nodes::Node::PolicyMap : public ydk::Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: Pbr::Nodes::Node::PolicyMap::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces> interfaces;
        
}; // Pbr::Nodes::Node::PolicyMap


class Pbr::Nodes::Node::PolicyMap::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface

        ydk::YList interface;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Direction; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction> direction;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input> input;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        class ClassStat; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat

        ydk::YList class_stat;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat : public ydk::Entity
{
    public:
        ClassStat();
        ~ClassStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf class_id; //type: uint32
        class GeneralStats; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats
        class HttprStats; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats
        class HttpEnrichStats; //type: Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats> httpr_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats> http_enrich_stats;
        
}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats : public ydk::Entity
{
    public:
        HttprStats();
        ~HttprStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rqst_rcvd_packets; //type: uint64
        ydk::YLeaf rqst_rcvd_bytes; //type: uint64
        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf resp_sent_packets; //type: uint64
        ydk::YLeaf resp_sent_bytes; //type: uint64

}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats


class Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats : public ydk::Entity
{
    public:
        HttpEnrichStats();
        ~HttpEnrichStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rqst_rcvd_packets; //type: uint64
        ydk::YLeaf rqst_rcvd_bytes; //type: uint64
        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf resp_sent_packets; //type: uint64
        ydk::YLeaf resp_sent_bytes; //type: uint64
        ydk::YLeaf req_sent_packets; //type: uint64
        ydk::YLeaf tcp_sent_packets; //type: uint64

}; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttpEnrichStats

class PolicyState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf suspended;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_OPER_ */

