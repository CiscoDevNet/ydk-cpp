#ifndef _CISCO_IOS_XR_IPV6_ND_OPER_
#define _CISCO_IOS_XR_IPV6_ND_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_nd_oper {

class Ipv6NodeDiscovery : public ydk::Entity
{
    public:
        Ipv6NodeDiscovery();
        ~Ipv6NodeDiscovery();

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

        class Nodes; //type: Ipv6NodeDiscovery::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes> nodes;
        
}; // Ipv6NodeDiscovery


class Ipv6NodeDiscovery::Nodes : public ydk::Entity
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

        class Node; //type: Ipv6NodeDiscovery::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node> > node;
        
}; // Ipv6NodeDiscovery::Nodes


class Ipv6NodeDiscovery::Nodes::Node : public ydk::Entity
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
        class NeighborInterfaces; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces
        class NeighborSummary; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary
        class BundleNodes; //type: Ipv6NodeDiscovery::Nodes::Node::BundleNodes
        class BundleInterfaces; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces
        class Interfaces; //type: Ipv6NodeDiscovery::Nodes::Node::Interfaces
        class NdVirtualRouters; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters
        class SlaacInterfaces; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces> neighbor_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary> neighbor_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes> bundle_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters> nd_virtual_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces> slaac_interfaces;
        
}; // Ipv6NodeDiscovery::Nodes::Node


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces : public ydk::Entity
{
    public:
        NeighborInterfaces();
        ~NeighborInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborInterface; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface> > neighbor_interface;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface : public ydk::Entity
{
    public:
        NeighborInterface();
        ~NeighborInterface();

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
        class HostAddresses; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses> host_addresses;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses : public ydk::Entity
{
    public:
        HostAddresses();
        ~HostAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostAddress; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress> > host_address;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress : public ydk::Entity
{
    public:
        HostAddress();
        ~HostAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_address; //type: string
        ydk::YLeaf reachability_state; //type: Ipv6NdShState
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf encapsulation; //type: Ipv6NdMediaEncap
        ydk::YLeaf selected_encapsulation; //type: Ipv6NdMediaEncap
        ydk::YLeaf origin_encapsulation; //type: Ipv6NdNeighborOrigin
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf is_router; //type: boolean
        ydk::YLeaf serg_flags; //type: uint32
        class LastReachedTime; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime> last_reached_time;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress


class Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime : public ydk::Entity
{
    public:
        LastReachedTime();
        ~LastReachedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_neighbor_entries; //type: uint32
        class Multicast; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast
        class Static; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static
        class Dynamic; //type: Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static> static_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic> dynamic;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete_entries; //type: uint32
        ydk::YLeaf reachable_entries; //type: uint32
        ydk::YLeaf stale_entries; //type: uint32
        ydk::YLeaf delayed_entries; //type: uint32
        ydk::YLeaf probe_entries; //type: uint32
        ydk::YLeaf deleted_entries; //type: uint32
        ydk::YLeaf subtotal_neighbor_entries; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete_entries; //type: uint32
        ydk::YLeaf reachable_entries; //type: uint32
        ydk::YLeaf stale_entries; //type: uint32
        ydk::YLeaf delayed_entries; //type: uint32
        ydk::YLeaf probe_entries; //type: uint32
        ydk::YLeaf deleted_entries; //type: uint32
        ydk::YLeaf subtotal_neighbor_entries; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static


class Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete_entries; //type: uint32
        ydk::YLeaf reachable_entries; //type: uint32
        ydk::YLeaf stale_entries; //type: uint32
        ydk::YLeaf delayed_entries; //type: uint32
        ydk::YLeaf probe_entries; //type: uint32
        ydk::YLeaf deleted_entries; //type: uint32
        ydk::YLeaf subtotal_neighbor_entries; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic


class Ipv6NodeDiscovery::Nodes::Node::BundleNodes : public ydk::Entity
{
    public:
        BundleNodes();
        ~BundleNodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleNode; //type: Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode> > bundle_node;
        
}; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes


class Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode : public ydk::Entity
{
    public:
        BundleNode();
        ~BundleNode();

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
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf sent_sequence_number; //type: uint32
        ydk::YLeaf received_sequence_number; //type: uint32
        ydk::YLeaf state; //type: Ipv6NdBndlState
        ydk::YLeaf state_changes; //type: uint32
        ydk::YLeaf sent_packets; //type: uint32
        ydk::YLeaf received_packets; //type: uint32
        class Age; //type: Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age> age;
        
}; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode


class Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age : public ydk::Entity
{
    public:
        Age();
        ~Age();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces : public ydk::Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleInterface; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;
        
}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface : public ydk::Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

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
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf iftype; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf etype; //type: uint32
        ydk::YLeaf vlan_tag; //type: uint16
        ydk::YLeaf mac_addr_size; //type: uint32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf is_interface_enabled; //type: boolean
        ydk::YLeaf is_ipv6_enabled; //type: boolean
        ydk::YLeaf is_mpls_enabled; //type: boolean
        ydk::YLeafList member_link; //type: list of  uint32
        class NdParameters; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters
        class LocalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress
        class GlobalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress
        class MemberNode; //type: Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters> nd_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress> local_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress> > global_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode> > member_node;
        
}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters : public ydk::Entity
{
    public:
        NdParameters();
        ~NdParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_dad_enabled; //type: boolean
        ydk::YLeaf dad_attempts; //type: uint32
        ydk::YLeaf is_icm_pv6_redirect; //type: boolean
        ydk::YLeaf is_dhcp_managed; //type: boolean
        ydk::YLeaf is_route_address_managed; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        ydk::YLeaf send_unicast_ra; //type: boolean
        ydk::YLeaf nd_retransmit_interval; //type: uint32
        ydk::YLeaf nd_min_transmit_interval; //type: uint32
        ydk::YLeaf nd_max_transmit_interval; //type: uint32
        ydk::YLeaf nd_advertisement_lifetime; //type: uint32
        ydk::YLeaf nd_reachable_time; //type: uint32
        ydk::YLeaf nd_cache_limit; //type: uint32
        ydk::YLeaf complete_protocol_count; //type: uint32
        ydk::YLeaf complete_glean_count; //type: uint32
        ydk::YLeaf incomplete_protocol_count; //type: uint32
        ydk::YLeaf incomplete_glean_count; //type: uint32
        ydk::YLeaf dropped_protocol_req_count; //type: uint32
        ydk::YLeaf dropped_glean_req_count; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress : public ydk::Entity
{
    public:
        GlobalAddress();
        ~GlobalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress


class Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode : public ydk::Entity
{
    public:
        MemberNode();
        ~MemberNode();

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
        ydk::YLeaf total_links; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode


class Ipv6NodeDiscovery::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface> > interface;
        
}; // Ipv6NodeDiscovery::Nodes::Node::Interfaces


class Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf is_dad_enabled; //type: boolean
        ydk::YLeaf dad_attempts; //type: uint32
        ydk::YLeaf is_icm_pv6_redirect; //type: boolean
        ydk::YLeaf is_dhcp_managed; //type: boolean
        ydk::YLeaf is_route_address_managed; //type: boolean
        ydk::YLeaf is_suppressed; //type: boolean
        ydk::YLeaf send_unicast_ra; //type: boolean
        ydk::YLeaf nd_retransmit_interval; //type: uint32
        ydk::YLeaf nd_min_transmit_interval; //type: uint32
        ydk::YLeaf nd_max_transmit_interval; //type: uint32
        ydk::YLeaf nd_advertisement_lifetime; //type: uint32
        ydk::YLeaf nd_reachable_time; //type: uint32
        ydk::YLeaf nd_cache_limit; //type: uint32
        ydk::YLeaf complete_protocol_count; //type: uint32
        ydk::YLeaf complete_glean_count; //type: uint32
        ydk::YLeaf incomplete_protocol_count; //type: uint32
        ydk::YLeaf incomplete_glean_count; //type: uint32
        ydk::YLeaf dropped_protocol_req_count; //type: uint32
        ydk::YLeaf dropped_glean_req_count; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters : public ydk::Entity
{
    public:
        NdVirtualRouters();
        ~NdVirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NdVirtualRouter; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter> > nd_virtual_router;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter : public ydk::Entity
{
    public:
        NdVirtualRouter();
        ~NdVirtualRouter();

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
        ydk::YLeaf link_layer_address; //type: string
        ydk::YLeaf context; //type: uint32
        ydk::YLeaf state; //type: Ipv6NdShVrState
        ydk::YLeaf flags; //type: Ipv6NdShVrFlags
        ydk::YLeaf vr_gl_addr_ct; //type: uint32
        class LocalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress
        class VrGlobalAddress; //type: Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress> local_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress> > vr_global_address;
        
}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress


class Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress : public ydk::Entity
{
    public:
        VrGlobalAddress();
        ~VrGlobalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces : public ydk::Entity
{
    public:
        SlaacInterfaces();
        ~SlaacInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlaacInterface; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface> > slaac_interface;
        
}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface : public ydk::Entity
{
    public:
        SlaacInterface();
        ~SlaacInterface();

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
        class RouterAdvertDetail; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail> router_advert_detail;
        
}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail : public ydk::Entity
{
    public:
        RouterAdvertDetail();
        ~RouterAdvertDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idb; //type: string
        class Ra; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra> > ra;
        
}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra : public ydk::Entity
{
    public:
        Ra();
        ~Ra();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf hops; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf err_msg; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf u6_tbl_id; //type: uint32
        ydk::YLeaf rib_protoid; //type: uint16
        ydk::YLeaf default_router; //type: boolean
        ydk::YLeaf reachability; //type: uint32
        class ElapsedRaTime; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime
        class ReachableTime; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime
        class RetransTime; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime
        class PrefixQ; //type: Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime> elapsed_ra_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime> reachable_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime> retrans_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ> > prefix_q;
        
}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime : public ydk::Entity
{
    public:
        ElapsedRaTime();
        ~ElapsedRaTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ElapsedRaTime


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime : public ydk::Entity
{
    public:
        ReachableTime();
        ~ReachableTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::ReachableTime


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime : public ydk::Entity
{
    public:
        RetransTime();
        ~RetransTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::RetransTime


class Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ : public ydk::Entity
{
    public:
        PrefixQ();
        ~PrefixQ();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_address; //type: string
        ydk::YLeaf eui64; //type: string
        ydk::YLeaf valid_life_time; //type: uint32
        ydk::YLeaf preferred_life_time; //type: uint32
        ydk::YLeaf prefix_len; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf pfx_flags; //type: uint32

}; // Ipv6NodeDiscovery::Nodes::Node::SlaacInterfaces::SlaacInterface::RouterAdvertDetail::Ra::PrefixQ

class Ipv6NdShVrFlags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_flags;
        static const ydk::Enum::YLeaf final_ra;

};

class Ipv6NdShVrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf standby;
        static const ydk::Enum::YLeaf active;

};

class Ipv6NdBndlState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf run;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf wait;

};

class Ipv6NdNeighborOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};

class Ipv6NdMediaEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf arpa;
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf ieee802_1q;
        static const ydk::Enum::YLeaf srp;
        static const ydk::Enum::YLeaf srpa;
        static const ydk::Enum::YLeaf srpb;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf hdlc;
        static const ydk::Enum::YLeaf chdlc;
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf fr;
        static const ydk::Enum::YLeaf gre;

};

class Ipv6NdShState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf reachable;
        static const ydk::Enum::YLeaf stale;
        static const ydk::Enum::YLeaf glean;
        static const ydk::Enum::YLeaf delay;
        static const ydk::Enum::YLeaf probe;
        static const ydk::Enum::YLeaf delete_;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_OPER_ */

