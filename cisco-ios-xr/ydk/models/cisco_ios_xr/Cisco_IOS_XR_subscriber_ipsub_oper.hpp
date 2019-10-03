#ifndef _CISCO_IOS_XR_SUBSCRIBER_IPSUB_OPER_
#define _CISCO_IOS_XR_SUBSCRIBER_IPSUB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_ipsub_oper {

class IpSubscriber : public ydk::Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

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

        class Nodes; //type: IpSubscriber::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes> nodes;
        
}; // IpSubscriber


class IpSubscriber::Nodes : public ydk::Entity
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

        class Node; //type: IpSubscriber::Nodes::Node

        ydk::YList node;
        
}; // IpSubscriber::Nodes


class IpSubscriber::Nodes::Node : public ydk::Entity
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
        class Summary; //type: IpSubscriber::Nodes::Node::Summary
        class Interfaces; //type: IpSubscriber::Nodes::Node::Interfaces
        class AccessInterfaces; //type: IpSubscriber::Nodes::Node::AccessInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces> access_interfaces;
        
}; // IpSubscriber::Nodes::Node


class IpSubscriber::Nodes::Node::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessInterfaceSummary; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary
        class InterfaceCounts; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts
        class Vrf; //type: IpSubscriber::Nodes::Node::Summary::Vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary> access_interface_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts> interface_counts;
        ydk::YList vrf;
        
}; // IpSubscriber::Nodes::Node::Summary


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary : public ydk::Entity
{
    public:
        AccessInterfaceSummary();
        ~AccessInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interfaces; //type: uint32
        class Initiators; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators
        class Ipv6Initiators; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators> initiators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators> ipv6_initiators;
        
}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators : public ydk::Entity
{
    public:
        Initiators();
        ~Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger> packet_trigger;
        
}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger : public ydk::Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators : public ydk::Entity
{
    public:
        Ipv6Initiators();
        ~Ipv6Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger> packet_trigger;
        
}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger : public ydk::Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::AccessInterfaceSummary::Ipv6Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiators; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators
        class Ipv6Initiators; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators> initiators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators> ipv6_initiators;
        
}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators : public ydk::Entity
{
    public:
        Initiators();
        ~Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger> packet_trigger;
        
}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalid; //type: uint32
        ydk::YLeaf initialized; //type: uint32
        ydk::YLeaf session_creation_started; //type: uint32
        ydk::YLeaf control_policy_executing; //type: uint32
        ydk::YLeaf control_policy_executed; //type: uint32
        ydk::YLeaf session_features_applied; //type: uint32
        ydk::YLeaf vrf_configured; //type: uint32
        ydk::YLeaf adding_adjacency; //type: uint32
        ydk::YLeaf adjacency_added; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf disconnecting; //type: uint32
        ydk::YLeaf disconnected; //type: uint32
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf total_interfaces; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger : public ydk::Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalid; //type: uint32
        ydk::YLeaf initialized; //type: uint32
        ydk::YLeaf session_creation_started; //type: uint32
        ydk::YLeaf control_policy_executing; //type: uint32
        ydk::YLeaf control_policy_executed; //type: uint32
        ydk::YLeaf session_features_applied; //type: uint32
        ydk::YLeaf vrf_configured; //type: uint32
        ydk::YLeaf adding_adjacency; //type: uint32
        ydk::YLeaf adjacency_added; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf disconnecting; //type: uint32
        ydk::YLeaf disconnected; //type: uint32
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf total_interfaces; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators : public ydk::Entity
{
    public:
        Ipv6Initiators();
        ~Ipv6Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dhcp; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger> packet_trigger;
        
}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalid; //type: uint32
        ydk::YLeaf initialized; //type: uint32
        ydk::YLeaf session_creation_started; //type: uint32
        ydk::YLeaf control_policy_executing; //type: uint32
        ydk::YLeaf control_policy_executed; //type: uint32
        ydk::YLeaf session_features_applied; //type: uint32
        ydk::YLeaf vrf_configured; //type: uint32
        ydk::YLeaf adding_adjacency; //type: uint32
        ydk::YLeaf adjacency_added; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf disconnecting; //type: uint32
        ydk::YLeaf disconnected; //type: uint32
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf total_interfaces; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::Dhcp


class IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger : public ydk::Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalid; //type: uint32
        ydk::YLeaf initialized; //type: uint32
        ydk::YLeaf session_creation_started; //type: uint32
        ydk::YLeaf control_policy_executing; //type: uint32
        ydk::YLeaf control_policy_executed; //type: uint32
        ydk::YLeaf session_features_applied; //type: uint32
        ydk::YLeaf vrf_configured; //type: uint32
        ydk::YLeaf adding_adjacency; //type: uint32
        ydk::YLeaf adjacency_added; //type: uint32
        ydk::YLeaf up; //type: uint32
        ydk::YLeaf down; //type: uint32
        ydk::YLeaf disconnecting; //type: uint32
        ydk::YLeaf disconnected; //type: uint32
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf total_interfaces; //type: uint32

}; // IpSubscriber::Nodes::Node::Summary::InterfaceCounts::Ipv6Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::Summary::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6vrf_name; //type: string
        ydk::YLeaf interfaces; //type: uint64
        ydk::YLeaf ipv6_interfaces; //type: uint64

}; // IpSubscriber::Nodes::Node::Summary::Vrf


class IpSubscriber::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: IpSubscriber::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // IpSubscriber::Nodes::Node::Interfaces


class IpSubscriber::Nodes::Node::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf access_interface; //type: string
        ydk::YLeaf subscriber_ipv4_address; //type: string
        ydk::YLeaf subscriber_ipv6_address; //type: string
        ydk::YLeaf subscriber_mac_addres; //type: string
        ydk::YLeaf subscriber_label; //type: uint32
        ydk::YLeaf interface_creation_time; //type: string
        ydk::YLeaf age; //type: string
        ydk::YLeaf initiator; //type: IpsubMaIntfInitiatorData
        ydk::YLeaf state; //type: IpsubMaIntfStateData
        ydk::YLeaf old_state; //type: IpsubMaIntfStateData
        ydk::YLeaf last_state_change_time; //type: string
        ydk::YLeaf current_change_age; //type: string
        ydk::YLeaf ipv6_initiator; //type: IpsubMaIntfInitiatorData
        ydk::YLeaf ipv6_state; //type: IpsubMaIntfStateData
        ydk::YLeaf ipv6_old_state; //type: IpsubMaIntfStateData
        ydk::YLeaf ipv6_last_state_change_time; //type: string
        ydk::YLeaf ipv6_current_change_age; //type: string
        ydk::YLeaf is_l2_connected; //type: boolean
        ydk::YLeaf session_type; //type: string
        class Vrf; //type: IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf
        class Ipv6vrf; //type: IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6vrf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf> vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6vrf> ipv6vrf;
        
}; // IpSubscriber::Nodes::Node::Interfaces::Interface


class IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_name; //type: string

}; // IpSubscriber::Nodes::Node::Interfaces::Interface::Vrf


class IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6vrf : public ydk::Entity
{
    public:
        Ipv6vrf();
        ~Ipv6vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf table_name; //type: string

}; // IpSubscriber::Nodes::Node::Interfaces::Interface::Ipv6vrf


class IpSubscriber::Nodes::Node::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessInterface; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface

        ydk::YList access_interface;
        
}; // IpSubscriber::Nodes::Node::AccessInterfaces


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf interface_creation_time; //type: string
        ydk::YLeaf age; //type: string
        ydk::YLeaf interface_type; //type: string
        ydk::YLeaf state; //type: IpsubMaParentIntfStateData
        ydk::YLeaf ipv6_state; //type: IpsubMaParentIntfStateData
        ydk::YLeaf vlan_type; //type: IpsubMaParentIntfVlan
        class Initiators; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators
        class Ipv6Initiators; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators
        class SessionLimit; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators> initiators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators> ipv6_initiators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit> session_limit;
        
}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators : public ydk::Entity
{
    public:
        Initiators();
        ~Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dhcp; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger> packet_trigger;
        
}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf unique_ip_check; //type: boolean
        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets; //type: uint32
        ydk::YLeaf fsol_dropped_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets_flow; //type: uint32
        ydk::YLeaf fsol_dropped_packets_session_limit; //type: uint32
        ydk::YLeaf fsol_dropped_packets_dup_addr; //type: uint32

}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::Dhcp


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger : public ydk::Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf unique_ip_check; //type: boolean
        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets; //type: uint32
        ydk::YLeaf fsol_dropped_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets_flow; //type: uint32
        ydk::YLeaf fsol_dropped_packets_session_limit; //type: uint32
        ydk::YLeaf fsol_dropped_packets_dup_addr; //type: uint32

}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators : public ydk::Entity
{
    public:
        Ipv6Initiators();
        ~Ipv6Initiators();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dhcp; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp
        class PacketTrigger; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger> packet_trigger;
        
}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf unique_ip_check; //type: boolean
        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets; //type: uint32
        ydk::YLeaf fsol_dropped_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets_flow; //type: uint32
        ydk::YLeaf fsol_dropped_packets_session_limit; //type: uint32
        ydk::YLeaf fsol_dropped_packets_dup_addr; //type: uint32

}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::Dhcp


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger : public ydk::Entity
{
    public:
        PacketTrigger();
        ~PacketTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf unique_ip_check; //type: boolean
        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf fsol_packets; //type: uint32
        ydk::YLeaf fsol_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets; //type: uint32
        ydk::YLeaf fsol_dropped_bytes; //type: uint32
        ydk::YLeaf fsol_dropped_packets_flow; //type: uint32
        ydk::YLeaf fsol_dropped_packets_session_limit; //type: uint32
        ydk::YLeaf fsol_dropped_packets_dup_addr; //type: uint32

}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::Ipv6Initiators::PacketTrigger


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit : public ydk::Entity
{
    public:
        SessionLimit();
        ~SessionLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnclassifiedSource; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource
        class Total; //type: IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource> unclassified_source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_ipsub_oper::IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total> total;
        
}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource : public ydk::Entity
{
    public:
        UnclassifiedSource();
        ~UnclassifiedSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_vlan; //type: uint32

}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::UnclassifiedSource


class IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_vlan; //type: uint32

}; // IpSubscriber::Nodes::Node::AccessInterfaces::AccessInterface::SessionLimit::Total

class IpsubMaIntfStateData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf session_creation_started;
        static const ydk::Enum::YLeaf control_policy_executing;
        static const ydk::Enum::YLeaf control_policy_executed;
        static const ydk::Enum::YLeaf session_features_applied;
        static const ydk::Enum::YLeaf vrf_configured;
        static const ydk::Enum::YLeaf adding_adjacency;
        static const ydk::Enum::YLeaf adjacency_added;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf address_family_down;
        static const ydk::Enum::YLeaf address_family_down_complete;
        static const ydk::Enum::YLeaf disconnecting;
        static const ydk::Enum::YLeaf disconnected;
        static const ydk::Enum::YLeaf error;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "initialized") return 1;
            if (name == "session-creation-started") return 2;
            if (name == "control-policy-executing") return 3;
            if (name == "control-policy-executed") return 4;
            if (name == "session-features-applied") return 5;
            if (name == "vrf-configured") return 6;
            if (name == "adding-adjacency") return 7;
            if (name == "adjacency-added") return 8;
            if (name == "up") return 9;
            if (name == "down") return 10;
            if (name == "address-family-down") return 11;
            if (name == "address-family-down-complete") return 12;
            if (name == "disconnecting") return 13;
            if (name == "disconnected") return 14;
            if (name == "error") return 15;
            return -1;
        }
};

class IpsubMaParentIntfVlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plain;
        static const ydk::Enum::YLeaf ambiguous;

        static int get_enum_value(const std::string & name) {
            if (name == "plain") return 0;
            if (name == "ambiguous") return 1;
            return -1;
        }
};

class IpsubMaParentIntfStateData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "deleted") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class IpsubMaIntfInitiatorData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf packet_trigger;
        static const ydk::Enum::YLeaf invalid_trigger;

        static int get_enum_value(const std::string & name) {
            if (name == "dhcp") return 0;
            if (name == "packet-trigger") return 1;
            if (name == "invalid-trigger") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_IPSUB_OPER_ */

