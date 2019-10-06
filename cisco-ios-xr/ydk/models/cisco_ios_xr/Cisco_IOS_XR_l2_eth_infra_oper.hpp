#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_OPER_
#define _CISCO_IOS_XR_L2_ETH_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2_eth_infra_oper {

class MacAccounting : public ydk::Entity
{
    public:
        MacAccounting();
        ~MacAccounting();

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

        class Interfaces; //type: MacAccounting::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces> interfaces;
        
}; // MacAccounting


class MacAccounting::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: MacAccounting::Interfaces::Interface

        ydk::YList interface;
        
}; // MacAccounting::Interfaces


class MacAccounting::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        class State; //type: MacAccounting::Interfaces::Interface::State
        class IngressStatistic; //type: MacAccounting::Interfaces::Interface::IngressStatistic
        class EgressStatistic; //type: MacAccounting::Interfaces::Interface::EgressStatistic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::State> state;
        ydk::YList ingress_statistic;
        ydk::YList egress_statistic;
        
}; // MacAccounting::Interfaces::Interface


class MacAccounting::Interfaces::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ingress_enabled; //type: boolean
        ydk::YLeaf is_egress_enabled; //type: boolean
        ydk::YLeaf number_available_ingress; //type: uint32
        ydk::YLeaf number_available_egress; //type: uint32
        ydk::YLeaf number_available_on_node; //type: uint32

}; // MacAccounting::Interfaces::Interface::State


class MacAccounting::Interfaces::Interface::IngressStatistic : public ydk::Entity
{
    public:
        IngressStatistic();
        ~IngressStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // MacAccounting::Interfaces::Interface::IngressStatistic


class MacAccounting::Interfaces::Interface::EgressStatistic : public ydk::Entity
{
    public:
        EgressStatistic();
        ~EgressStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // MacAccounting::Interfaces::Interface::EgressStatistic

class Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        class Nodes; //type: Vlan::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes> nodes;
        
}; // Vlan


class Vlan::Nodes : public ydk::Entity
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

        class Node; //type: Vlan::Nodes::Node

        ydk::YList node;
        
}; // Vlan::Nodes


class Vlan::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        class Trunks; //type: Vlan::Nodes::Node::Trunks
        class Interfaces; //type: Vlan::Nodes::Node::Interfaces
        class TagAllocations; //type: Vlan::Nodes::Node::TagAllocations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks> trunks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations> tag_allocations;
        
}; // Vlan::Nodes::Node


class Vlan::Nodes::Node::Trunks : public ydk::Entity
{
    public:
        Trunks();
        ~Trunks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trunk; //type: Vlan::Nodes::Node::Trunks::Trunk

        ydk::YList trunk;
        
}; // Vlan::Nodes::Node::Trunks


class Vlan::Nodes::Node::Trunks::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_xr; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf qinq_outer_ether_type; //type: VlanQinqOuterEtype
        ydk::YLeaf dot1ad_count; //type: uint32
        ydk::YLeaf untagged_interface; //type: string
        ydk::YLeaf mac_filtering; //type: EthFiltering
        class Layer2SubInterfaces; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces
        class Layer3SubInterfaces; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces
        class VlanSwitched; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces> layer2_sub_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces> layer3_sub_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched> vlan_switched;
        
}; // Vlan::Nodes::Node::Trunks::Trunk


class Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces : public ydk::Entity
{
    public:
        Layer2SubInterfaces();
        ~Layer2SubInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf dot1q_count; //type: uint32
        ydk::YLeaf qin_q_count; //type: uint32
        ydk::YLeaf qin_any_count; //type: uint32
        ydk::YLeaf untagged_count; //type: uint32
        class StateCounters; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters> state_counters;
        
}; // Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces


class Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters : public ydk::Entity
{
    public:
        StateCounters();
        ~StateCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf admin_down; //type: uint32

}; // Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters


class Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces : public ydk::Entity
{
    public:
        Layer3SubInterfaces();
        ~Layer3SubInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf dot1q_count; //type: uint32
        ydk::YLeaf qin_q_count; //type: uint32
        ydk::YLeaf untagged_count; //type: uint32
        ydk::YLeaf native_vlan; //type: uint16
        class StateCounters; //type: Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters> state_counters;
        
}; // Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces


class Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters : public ydk::Entity
{
    public:
        StateCounters();
        ~StateCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf admin_down; //type: uint32

}; // Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched : public ydk::Entity
{
    public:
        VlanSwitched();
        ~VlanSwitched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: VlanSwitchedMode
        ydk::YLeaf access_vlan; //type: uint16
        class TrunkVlanRanges; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges> trunk_vlan_ranges;
        
}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges : public ydk::Entity
{
    public:
        TrunkVlanRanges();
        ~TrunkVlanRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_ethertype; //type: EfpPayloadEtype
        ydk::YLeaf tags_popped; //type: uint16
        ydk::YLeaf is_exact_match; //type: boolean
        ydk::YLeaf is_native_vlan; //type: boolean
        ydk::YLeaf is_native_preserving; //type: boolean
        ydk::YLeaf source_mac_match; //type: string
        ydk::YLeaf destination_mac_match; //type: string
        class LocalTrafficStack; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack
        class TagsToMatch; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::TagsToMatch
        class Pushe; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::Pushe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack> local_traffic_stack;
        ydk::YList tags_to_match;
        ydk::YList pushe;
        
}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack : public ydk::Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalTrafficTag; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack::LocalTrafficTag

        ydk::YList local_traffic_tag;
        
}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack::LocalTrafficTag : public ydk::Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::LocalTrafficStack::LocalTrafficTag


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::TagsToMatch : public ydk::Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf priority; //type: EfpTagPriority
        class VlanRange; //type: Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::TagsToMatch::VlanRange

        ydk::YList vlan_range;
        
}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::TagsToMatch


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::TagsToMatch::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id_low; //type: uint16
        ydk::YLeaf vlan_id_high; //type: uint16

}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::TagsToMatch::VlanRange


class Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::Pushe : public ydk::Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Vlan::Nodes::Node::Trunks::Trunk::VlanSwitched::TrunkVlanRanges::Pushe


class Vlan::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: Vlan::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // Vlan::Nodes::Node::Interfaces


class Vlan::Nodes::Node::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_xr; //type: string
        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf service; //type: VlanService
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf switched_mtu; //type: uint16
        class EncapsulationDetails; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails> encapsulation_details;
        
}; // Vlan::Nodes::Node::Interfaces::Interface


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails : public ydk::Entity
{
    public:
        EncapsulationDetails();
        ~EncapsulationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_encapsulation; //type: VlanEncaps
        ydk::YLeaf tag; //type: uint16
        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf native_tag; //type: uint16
        ydk::YLeaf dot1ad_tag; //type: uint16
        ydk::YLeaf dot1ad_native_tag; //type: uint16
        ydk::YLeaf dot1ad_outer_tag; //type: uint16
        class Stack; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack
        class ServiceInstanceDetails; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails
        class Dot1adDot1qStack; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack> stack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack> dot1ad_dot1q_stack;
        
}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf second_tag; //type: uint16

}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails : public ydk::Entity
{
    public:
        ServiceInstanceDetails();
        ~ServiceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_ethertype; //type: EfpPayloadEtype
        ydk::YLeaf tags_popped; //type: uint16
        ydk::YLeaf is_exact_match; //type: boolean
        ydk::YLeaf is_native_vlan; //type: boolean
        ydk::YLeaf is_native_preserving; //type: boolean
        ydk::YLeaf source_mac_match; //type: string
        ydk::YLeaf destination_mac_match; //type: string
        class LocalTrafficStack; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack
        class TagsToMatch; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch
        class Pushe; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
        ydk::YList tags_to_match;
        ydk::YList pushe;
        
}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack : public ydk::Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalTrafficTag; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag

        ydk::YList local_traffic_tag;
        
}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag : public ydk::Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch : public ydk::Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf priority; //type: EfpTagPriority
        class VlanRange; //type: Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange

        ydk::YList vlan_range;
        
}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id_low; //type: uint16
        ydk::YLeaf vlan_id_high; //type: uint16

}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe : public ydk::Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe


class Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack : public ydk::Entity
{
    public:
        Dot1adDot1qStack();
        ~Dot1adDot1qStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf second_tag; //type: uint16

}; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1adDot1qStack


class Vlan::Nodes::Node::TagAllocations : public ydk::Entity
{
    public:
        TagAllocations();
        ~TagAllocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TagAllocation; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation

        ydk::YList tag_allocation;
        
}; // Vlan::Nodes::Node::TagAllocations


class Vlan::Nodes::Node::TagAllocations::TagAllocation : public ydk::Entity
{
    public:
        TagAllocation();
        ~TagAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf first_tag; //type: uint32
        ydk::YLeaf second_tag; //type: one of uint32, enumeration
        ydk::YLeaf interface_xr; //type: string
        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf service; //type: VlanService
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf switched_mtu; //type: uint16
        class EncapsulationDetails; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails> encapsulation_details;
        
}; // Vlan::Nodes::Node::TagAllocations::TagAllocation


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails : public ydk::Entity
{
    public:
        EncapsulationDetails();
        ~EncapsulationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_encapsulation; //type: VlanEncaps
        ydk::YLeaf tag; //type: uint16
        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf native_tag; //type: uint16
        ydk::YLeaf dot1ad_tag; //type: uint16
        ydk::YLeaf dot1ad_native_tag; //type: uint16
        ydk::YLeaf dot1ad_outer_tag; //type: uint16
        class Stack; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack
        class ServiceInstanceDetails; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails
        class Dot1adDot1qStack; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack> stack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack> dot1ad_dot1q_stack;
        
}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf second_tag; //type: uint16

}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails : public ydk::Entity
{
    public:
        ServiceInstanceDetails();
        ~ServiceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_ethertype; //type: EfpPayloadEtype
        ydk::YLeaf tags_popped; //type: uint16
        ydk::YLeaf is_exact_match; //type: boolean
        ydk::YLeaf is_native_vlan; //type: boolean
        ydk::YLeaf is_native_preserving; //type: boolean
        ydk::YLeaf source_mac_match; //type: string
        ydk::YLeaf destination_mac_match; //type: string
        class LocalTrafficStack; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack
        class TagsToMatch; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch
        class Pushe; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
        ydk::YList tags_to_match;
        ydk::YList pushe;
        
}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack : public ydk::Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalTrafficTag; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag

        ydk::YList local_traffic_tag;
        
}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag : public ydk::Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch : public ydk::Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf priority; //type: EfpTagPriority
        class VlanRange; //type: Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange

        ydk::YList vlan_range;
        
}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id_low; //type: uint16
        ydk::YLeaf vlan_id_high; //type: uint16

}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe : public ydk::Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe


class Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack : public ydk::Entity
{
    public:
        Dot1adDot1qStack();
        ~Dot1adDot1qStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf second_tag; //type: uint16

}; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1adDot1qStack

class EthernetEncapsulation : public ydk::Entity
{
    public:
        EthernetEncapsulation();
        ~EthernetEncapsulation();

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

        class Nodes; //type: EthernetEncapsulation::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes> nodes;
        
}; // EthernetEncapsulation


class EthernetEncapsulation::Nodes : public ydk::Entity
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

        class Node; //type: EthernetEncapsulation::Nodes::Node

        ydk::YList node;
        
}; // EthernetEncapsulation::Nodes


class EthernetEncapsulation::Nodes::Node : public ydk::Entity
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
        class UnicastMacFilters; //type: EthernetEncapsulation::Nodes::Node::UnicastMacFilters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters> unicast_mac_filters;
        
}; // EthernetEncapsulation::Nodes::Node


class EthernetEncapsulation::Nodes::Node::UnicastMacFilters : public ydk::Entity
{
    public:
        UnicastMacFilters();
        ~UnicastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnicastMacFilter; //type: EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter

        ydk::YList unicast_mac_filter;
        
}; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters


class EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter : public ydk::Entity
{
    public:
        UnicastMacFilter();
        ~UnicastMacFilter();

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
        class UnicastFilter; //type: EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter

        ydk::YList unicast_filter;
        
}; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter


class EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter : public ydk::Entity
{
    public:
        UnicastFilter();
        ~UnicastFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mode; //type: EthCapsUcastMacMode

}; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter

class VlanEncaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_encapsulation;
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf qinq;
        static const ydk::Enum::YLeaf qin_any;
        static const ydk::Enum::YLeaf dot1q_native;
        static const ydk::Enum::YLeaf dot1ad;
        static const ydk::Enum::YLeaf dot1ad_native;
        static const ydk::Enum::YLeaf service_instance;
        static const ydk::Enum::YLeaf dot1ad_dot1q;
        static const ydk::Enum::YLeaf dot1ad_any;

        static int get_enum_value(const std::string & name) {
            if (name == "no-encapsulation") return 0;
            if (name == "dot1q") return 1;
            if (name == "qinq") return 2;
            if (name == "qin-any") return 3;
            if (name == "dot1q-native") return 4;
            if (name == "dot1ad") return 5;
            if (name == "dot1ad-native") return 6;
            if (name == "service-instance") return 7;
            if (name == "dot1ad-dot1q") return 8;
            if (name == "dot1ad-any") return 9;
            return -1;
        }
};

class VlanSwitchedMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trunk_port;
        static const ydk::Enum::YLeaf access_port;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "trunk-port") return 1;
            if (name == "access-port") return 2;
            return -1;
        }
};

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

        static int get_enum_value(const std::string & name) {
            if (name == "im-state-not-ready") return 0;
            if (name == "im-state-admin-down") return 1;
            if (name == "im-state-down") return 2;
            if (name == "im-state-up") return 3;
            if (name == "im-state-shutdown") return 4;
            if (name == "im-state-err-disable") return 5;
            if (name == "im-state-down-immediate") return 6;
            if (name == "im-state-down-immediate-admin") return 7;
            if (name == "im-state-down-graceful") return 8;
            if (name == "im-state-begin-shutdown") return 9;
            if (name == "im-state-end-shutdown") return 10;
            if (name == "im-state-begin-error-disable") return 11;
            if (name == "im-state-end-error-disable") return 12;
            if (name == "im-state-begin-down-graceful") return 13;
            if (name == "im-state-reset") return 14;
            if (name == "im-state-operational") return 15;
            if (name == "im-state-not-operational") return 16;
            if (name == "im-state-unknown") return 17;
            if (name == "im-state-last") return 18;
            return -1;
        }
};

class EfpTagPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf priority0;
        static const ydk::Enum::YLeaf priority1;
        static const ydk::Enum::YLeaf priority2;
        static const ydk::Enum::YLeaf priority3;
        static const ydk::Enum::YLeaf priority4;
        static const ydk::Enum::YLeaf priority5;
        static const ydk::Enum::YLeaf priority6;
        static const ydk::Enum::YLeaf priority7;
        static const ydk::Enum::YLeaf priority_any;

        static int get_enum_value(const std::string & name) {
            if (name == "priority0") return 0;
            if (name == "priority1") return 1;
            if (name == "priority2") return 2;
            if (name == "priority3") return 3;
            if (name == "priority4") return 4;
            if (name == "priority5") return 5;
            if (name == "priority6") return 6;
            if (name == "priority7") return 7;
            if (name == "priority-any") return 8;
            return -1;
        }
};

class EfpTagEtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf untagged;
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf dot1ad;

        static int get_enum_value(const std::string & name) {
            if (name == "untagged") return 0;
            if (name == "dot1q") return 33024;
            if (name == "dot1ad") return 34984;
            return -1;
        }
};

class VlanService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_service_l2;
        static const ydk::Enum::YLeaf vlan_service_l3;

        static int get_enum_value(const std::string & name) {
            if (name == "vlan-service-l2") return 1;
            if (name == "vlan-service-l3") return 2;
            return -1;
        }
};

class EfpPayloadEtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf payload_ethertype_any;
        static const ydk::Enum::YLeaf payload_ethertype_ip;
        static const ydk::Enum::YLeaf payload_ethertype_pppoe;

        static int get_enum_value(const std::string & name) {
            if (name == "payload-ethertype-any") return 0;
            if (name == "payload-ethertype-ip") return 1;
            if (name == "payload-ethertype-pppoe") return 2;
            return -1;
        }
};

class VlanQinqOuterEtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ether_type8100;
        static const ydk::Enum::YLeaf ether_type9100;
        static const ydk::Enum::YLeaf ether_type9200;

        static int get_enum_value(const std::string & name) {
            if (name == "ether-type8100") return 33024;
            if (name == "ether-type9100") return 37120;
            if (name == "ether-type9200") return 37376;
            return -1;
        }
};

class EthCapsUcastMacMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "reserved") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class EthFiltering : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_filtering;
        static const ydk::Enum::YLeaf dot1q_filtering;
        static const ydk::Enum::YLeaf dot1ad_filtering;
        static const ydk::Enum::YLeaf two_port_mac_relay_filtering;

        static int get_enum_value(const std::string & name) {
            if (name == "no-filtering") return 0;
            if (name == "dot1q-filtering") return 1;
            if (name == "dot1ad-filtering") return 2;
            if (name == "two-port-mac-relay-filtering") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_OPER_ */

