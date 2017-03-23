#ifndef _CISCO_IOS_XR_ASR9K_LPTS_OPER_
#define _CISCO_IOS_XR_ASR9K_LPTS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lpts_oper {

class PlatformLptspIfib : public Entity
{
    public:
        PlatformLptspIfib();
        ~PlatformLptspIfib();

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



        class Nodes; //type: PlatformLptspIfib::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes> nodes;


}; // PlatformLptspIfib


class PlatformLptspIfib::Nodes : public Entity
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



        class Node; //type: PlatformLptspIfib::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node> > node;


}; // PlatformLptspIfib::Nodes


class PlatformLptspIfib::Nodes::Node : public Entity
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

        class Police; //type: PlatformLptspIfib::Nodes::Node::Police
        class Stats; //type: PlatformLptspIfib::Nodes::Node::Stats

        std::shared_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Police> police;
        std::shared_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Stats> stats;


}; // PlatformLptspIfib::Nodes::Node


class PlatformLptspIfib::Nodes::Node::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceInfo; //type: PlatformLptspIfib::Nodes::Node::Police::PoliceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Police::PoliceInfo> > police_info;


}; // PlatformLptspIfib::Nodes::Node::Police


class PlatformLptspIfib::Nodes::Node::Police::PoliceInfo : public Entity
{
    public:
        PoliceInfo();
        ~PoliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf avgrate; //type: uint32
        YLeaf burst; //type: uint32
        YLeaf static_avgrate; //type: uint32
        YLeaf avgrate_type; //type: string
        YLeaf flow_type; //type: string
        YLeaf accepted_stats; //type: uint64
        YLeaf dropped_stats; //type: uint64
        YLeaf policer; //type: uint32
        YLeaf iptos_value; //type: uint8
        YLeaf change_type; //type: uint8
        YLeaf acl_config; //type: uint8
        YLeaf acl_str; //type: string
        YLeaf np; //type: uint8



}; // PlatformLptspIfib::Nodes::Node::Police::PoliceInfo


class PlatformLptspIfib::Nodes::Node::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf accepted; //type: uint64
        YLeaf dropped; //type: uint64
        YLeaf clear_ts; //type: uint64
        YLeaf no_stats_mem_err; //type: uint64



}; // PlatformLptspIfib::Nodes::Node::Stats


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LPTS_OPER_ */

