#ifndef _CISCO_IOS_XR_L2VPN_OPER_0_
#define _CISCO_IOS_XR_L2VPN_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

class GenericInterfaceListV2 : public ydk::Entity
{
    public:
        GenericInterfaceListV2();
        ~GenericInterfaceListV2();

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

        class Nodes; //type: GenericInterfaceListV2::Nodes
        class Standby; //type: GenericInterfaceListV2::Standby
        class Active; //type: GenericInterfaceListV2::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Standby> standby;
        
}; // GenericInterfaceListV2


class GenericInterfaceListV2::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class GenericInterfaces; //type: GenericInterfaceListV2::Active::GenericInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Active::GenericInterfaces> generic_interfaces;
        
}; // GenericInterfaceListV2::Active


class GenericInterfaceListV2::Active::GenericInterfaces : public ydk::Entity
{
    public:
        GenericInterfaces();
        ~GenericInterfaces();

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

        class GenericInterface; //type: GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface> > generic_interface;
        
}; // GenericInterfaceListV2::Active::GenericInterfaces


class GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface : public ydk::Entity
{
    public:
        GenericInterface();
        ~GenericInterface();

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

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        ydk::YLeaf items; //type: uint32
        ydk::YLeaf is_provisioned; //type: boolean
        ydk::YLeaf is_fib_downloaded; //type: boolean
        class Interface; //type: GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface> > interface;
        
}; // GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface


class GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface : public ydk::Entity
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
        ydk::YLeaf pending_replications; //type: uint32
        ydk::YLeaf not_supported_replications; //type: uint32
        ydk::YLeaf is_fib_downloaded; //type: boolean

}; // GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface


class GenericInterfaceListV2::Nodes : public ydk::Entity
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

        class Node; //type: GenericInterfaceListV2::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Nodes::Node> > node;
        
}; // GenericInterfaceListV2::Nodes


class GenericInterfaceListV2::Nodes::Node : public ydk::Entity
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
        class GenericInterfaces; //type: GenericInterfaceListV2::Nodes::Node::GenericInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Nodes::Node::GenericInterfaces> generic_interfaces;
        
}; // GenericInterfaceListV2::Nodes::Node


class GenericInterfaceListV2::Nodes::Node::GenericInterfaces : public ydk::Entity
{
    public:
        GenericInterfaces();
        ~GenericInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GenericInterface; //type: GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface> > generic_interface;
        
}; // GenericInterfaceListV2::Nodes::Node::GenericInterfaces


class GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface : public ydk::Entity
{
    public:
        GenericInterface();
        ~GenericInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        ydk::YLeaf items; //type: uint32
        ydk::YLeaf is_provisioned; //type: boolean
        ydk::YLeaf is_fib_downloaded; //type: boolean
        class Interface; //type: GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface> > interface;
        
}; // GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface


class GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface : public ydk::Entity
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
        ydk::YLeaf pending_replications; //type: uint32
        ydk::YLeaf not_supported_replications; //type: uint32
        ydk::YLeaf is_fib_downloaded; //type: boolean

}; // GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface


class GenericInterfaceListV2::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class GenericInterfaces; //type: GenericInterfaceListV2::Standby::GenericInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Standby::GenericInterfaces> generic_interfaces;
        
}; // GenericInterfaceListV2::Standby


class GenericInterfaceListV2::Standby::GenericInterfaces : public ydk::Entity
{
    public:
        GenericInterfaces();
        ~GenericInterfaces();

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

        class GenericInterface; //type: GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface> > generic_interface;
        
}; // GenericInterfaceListV2::Standby::GenericInterfaces


class GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface : public ydk::Entity
{
    public:
        GenericInterface();
        ~GenericInterface();

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

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        ydk::YLeaf items; //type: uint32
        ydk::YLeaf is_provisioned; //type: boolean
        ydk::YLeaf is_fib_downloaded; //type: boolean
        class Interface; //type: GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface> > interface;
        
}; // GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface


class GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface : public ydk::Entity
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
        ydk::YLeaf pending_replications; //type: uint32
        ydk::YLeaf not_supported_replications; //type: uint32
        ydk::YLeaf is_fib_downloaded; //type: boolean

}; // GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface

class L2VpnForwarding : public ydk::Entity
{
    public:
        L2VpnForwarding();
        ~L2VpnForwarding();

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

        class Nodes; //type: L2VpnForwarding::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes> nodes;
        
}; // L2VpnForwarding


class L2VpnForwarding::Nodes : public ydk::Entity
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

        class Node; //type: L2VpnForwarding::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node> > node;
        
}; // L2VpnForwarding::Nodes


class L2VpnForwarding::Nodes::Node : public ydk::Entity
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
        class L2FibxConLocals; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals
        class L2FibMrouteSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries
        class L2FibMessageSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary
        class L2FibMroutes; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes
        class PbbBmacSa; //type: L2VpnForwarding::Nodes::Node::PbbBmacSa
        class L2FibMacLearning; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning
        class L2FibP2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp
        class L2FibEvpnInclMCastHardwareEgresses; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses
        class L2FibmacHardwareIngresses; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses
        class L2FibEvpnIp4Macs; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs
        class L2FibPwheMainPorts; //type: L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts
        class L2FibDhcpBindingCount; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount
        class L2FibBridgeDomains; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains
        class L2FibMstpSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibMstpSummaries
        class L2FibResourceAvailability; //type: L2VpnForwarding::Nodes::Node::L2FibResourceAvailability
        class L2FibmacHardwareEgresses; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses
        class L2FibxConL2Tpv2S; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S
        class L2FibMrouteIpv6S; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S
        class L2FibMonSessXCons; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons
        class L2FibMmrpSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries
        class L2FibPwGroups; //type: L2VpnForwarding::Nodes::Node::L2FibPwGroups
        class L2FibEvpnInclMCastHardwareIngresses; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses
        class L2FibDhcpBindingDetails; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails
        class L2FibxCons; //type: L2VpnForwarding::Nodes::Node::L2FibxCons
        class L2FibMainInterfaces; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces
        class L2FibMstpDetails; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails
        class L2FibL2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp
        class L2FibG8032; //type: L2VpnForwarding::Nodes::Node::L2FibG8032
        class L2FibBridgePorts; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts
        class L2FibmacDetails; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails
        class L2FibBridgeDomainNames; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames
        class L2FibMroutePorts; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts
        class L2FibSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary
        class L2FibNvePeers; //type: L2VpnForwarding::Nodes::Node::L2FibNvePeers
        class L2FibMmrps; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps
        class L2FibEvpnIp6Macs; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs
        class L2FibDhcpBindingSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries
        class L2FibEvpnInclMCasts; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames> l2fib_bridge_domain_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains> l2fib_bridge_domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts> l2fib_bridge_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount> l2fib_dhcp_binding_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails> l2fib_dhcp_binding_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries> l2fib_dhcp_binding_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses> l2fib_evpn_incl_m_cast_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses> l2fib_evpn_incl_m_cast_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts> l2fib_evpn_incl_m_casts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs> l2fib_evpn_ip4macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs> l2fib_evpn_ip6macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032> l2fib_g8032;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp> l2fib_l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning> l2fib_mac_learning;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces> l2fib_main_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary> l2fib_message_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries> l2fib_mmrp_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps> l2fib_mmrps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons> l2fib_mon_sess_x_cons;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S> l2fib_mroute_ipv6s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts> l2fib_mroute_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries> l2fib_mroute_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes> l2fib_mroutes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails> l2fib_mstp_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpSummaries> l2fib_mstp_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibNvePeers> l2fib_nve_peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp> l2fib_p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwGroups> l2fib_pw_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts> l2fib_pwhe_main_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibResourceAvailability> l2fib_resource_availability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary> l2fib_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails> l2fibmac_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses> l2fibmac_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses> l2fibmac_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S> l2fibx_con_l2tpv2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals> l2fibx_con_locals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons> l2fibx_cons;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::PbbBmacSa> pbb_bmac_sa;
        
}; // L2VpnForwarding::Nodes::Node


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames : public ydk::Entity
{
    public:
        L2FibBridgeDomainNames();
        ~L2FibBridgeDomainNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibBridgeDomainName; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName> > l2fib_bridge_domain_name;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName : public ydk::Entity
{
    public:
        L2FibBridgeDomainName();
        ~L2FibBridgeDomainName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: MgmtL2FibMacLimitAction
        ydk::YLeaf flood_disabled; //type: boolean
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf number_of_shg; //type: uint32
        ydk::YLeaf number_of_hwmac; //type: uint32
        ydk::YLeaf number_of_swmac; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf aging_time_out; //type: uint32
        ydk::YLeaf msti; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames::L2FibBridgeDomainName


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains : public ydk::Entity
{
    public:
        L2FibBridgeDomains();
        ~L2FibBridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibBridgeDomain; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain> > l2fib_bridge_domain;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain : public ydk::Entity
{
    public:
        L2FibBridgeDomain();
        ~L2FibBridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf number_of_hwmac; //type: uint32
        ydk::YLeaf number_of_swmac; //type: uint32
        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf shg_count; //type: uint32
        ydk::YLeaf bridge_type; //type: MgmtL2FibBridge
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper
        class BdPbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion
        class BviInfo; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo
        class P2MppwInfo; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion> bd_pbb_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo> bvi_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo> p2mppw_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion : public ydk::Entity
{
    public:
        BdPbbUnion();
        ~BdPbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2FibBridge
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core> core;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nber_edge_bd; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf i_sid; //type: uint32
        ydk::YLeaf core_bd_name; //type: string
        ydk::YLeaf mirp_lite_rx; //type: uint64
        ydk::YLeaf mirp_lite_tx; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo : public ydk::Entity
{
    public:
        BviInfo();
        ~BviInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bvi_ifh; //type: string
        ydk::YLeaf bvi_xid; //type: uint32
        ydk::YLeaf bvi_name; //type: string
        ydk::YLeaf bvi_shg_id; //type: uint32
        ydk::YLeaf irb_plat_data_len; //type: uint32
        ydk::YLeaf irb_plat_data; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf number_of_macs; //type: uint32
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_limit_action; //type: MgmtL2FibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2FibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf dhcp_enabled; //type: boolean
        ydk::YLeaf dhcp_trusted; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_ipsg_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_profile_enabled; //type: boolean
        ydk::YLeaf igmp_flood_forward_enabled; //type: boolean
        ydk::YLeaf igmp_mroute_port_enabled; //type: boolean
        ydk::YLeaf igmp_route_guard_enabled; //type: boolean
        ydk::YLeaf mld_snoop_enabled; //type: boolean
        ydk::YLeaf mld_snoop_profile_enabled; //type: boolean
        ydk::YLeaf mld_flood_forward_enabled; //type: boolean
        ydk::YLeaf mld_mroute_port_enabled; //type: boolean
        ydk::YLeaf mld_route_guard_enabled; //type: boolean
        ydk::YLeaf stp_participating; //type: boolean
        ydk::YLeaf bvi_configured; //type: boolean
        ydk::YLeaf is_bvi_up; //type: boolean
        ydk::YLeaf is_vni_enabled; //type: boolean
        ydk::YLeaf is_evpn_enabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2fibFeature
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo : public ydk::Entity
{
    public:
        P2MppwInfo();
        ~P2MppwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf p2mp_te_interface; //type: string
        ydk::YLeaf parent_nh_valid; //type: boolean
        ydk::YLeaf parent_nh_bound; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        class ParentNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop> parent_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop : public ydk::Entity
{
    public:
        ParentNextHop();
        ~ParentNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts : public ydk::Entity
{
    public:
        L2FibBridgePorts();
        ~L2FibBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibBridgePort; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort> > l2fib_bridge_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort : public ydk::Entity
{
    public:
        L2FibBridgePort();
        ~L2FibBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf xc_uint_id; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf shg_id; //type: uint32
        ydk::YLeaf xc_id; //type: uint32
        ydk::YLeaf number_of_hw_mac; //type: uint32
        ydk::YLeaf number_of_sw_mac; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: MgmtL2FibMacLimitAction
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf aging_time_out; //type: uint32
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment
        class BridgePortOperationalInfo; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo> bridge_port_operational_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo : public ydk::Entity
{
    public:
        BridgePortOperationalInfo();
        ~BridgePortOperationalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf number_of_macs; //type: uint32
        ydk::YLeaf admin_disabled; //type: boolean
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_limit_action; //type: MgmtL2FibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2FibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2fibStormControlRateUnit
        ydk::YLeaf dhcp_enabled; //type: boolean
        ydk::YLeaf dhcp_trusted; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_ipsg_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_enabled; //type: boolean
        ydk::YLeaf igmp_snoop_profile_enabled; //type: boolean
        ydk::YLeaf igmp_flood_forward_enabled; //type: boolean
        ydk::YLeaf igmp_mroute_port_enabled; //type: boolean
        ydk::YLeaf igmp_route_guard_enabled; //type: boolean
        ydk::YLeaf mld_snoop_enabled; //type: boolean
        ydk::YLeaf mld_snoop_profile_enabled; //type: boolean
        ydk::YLeaf mld_flood_forward_enabled; //type: boolean
        ydk::YLeaf mld_mroute_port_enabled; //type: boolean
        ydk::YLeaf mld_route_guard_enabled; //type: boolean
        ydk::YLeaf stp_participating; //type: boolean
        ydk::YLeaf bvi_configured; //type: boolean
        ydk::YLeaf is_bvi_up; //type: boolean
        ydk::YLeaf is_vni_enabled; //type: boolean
        ydk::YLeaf is_evpn_enabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2fibFeature
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw> pw;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_handle; //type: string
        ydk::YLeaf attachment_circuit_id; //type: uint32
        ydk::YLeaf attachment_circuit_mtu; //type: uint16
        ydk::YLeaf actype; //type: uint8
        ydk::YLeaf inter_working_mode; //type: uint8
        ydk::YLeaf adjacency_valid; //type: boolean
        ydk::YLeaf adjacency_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf ip_inter_working_mac; //type: string
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf evpn_internal_label; //type: uint32
        ydk::YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion : public ydk::Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2FibBridge
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core> core;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_configured; //type: boolean
        ydk::YLeaf mac; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf signal_capability_flags; //type: uint32
        ydk::YLeaf context; //type: uint16
        ydk::YLeaf sequence_resync_threshold; //type: uint16
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf backup_configured; //type: boolean
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2fibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2fibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2fibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32
        ydk::YLeaf secondary_cookie_size; //type: uint8
        ydk::YLeaf secondary_cookie_low_value; //type: uint32
        ydk::YLeaf secondary_cookie_high_value; //type: uint32
        ydk::YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf cookie_size; //type: uint8
        ydk::YLeaf cookie_low_value; //type: uint32
        ydk::YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_flags; //type: uint8
        ydk::YLeaf tos_val; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf path_mtu; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf rem_udp_port; //type: uint16
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_label; //type: uint32
        ydk::YLeaf pw_local_label; //type: uint32
        ydk::YLeaf pw_tunnel_interface; //type: uint32
        ydk::YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mcastip; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf parent_if; //type: string
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf source_vtep_if; //type: string
        ydk::YLeaf any_cast_ip; //type: string
        ydk::YLeaf anycast_mcast_ip; //type: string
        ydk::YLeaf ingress_replication; //type: boolean
        ydk::YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount : public ydk::Entity
{
    public:
        L2FibDhcpBindingCount();
        ~L2FibDhcpBindingCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bindings; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails : public ydk::Entity
{
    public:
        L2FibDhcpBindingDetails();
        ~L2FibDhcpBindingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibDhcpBindingDetail; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail> > l2fib_dhcp_binding_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail : public ydk::Entity
{
    public:
        L2FibDhcpBindingDetail();
        ~L2FibDhcpBindingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base
        class Port; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port> port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries : public ydk::Entity
{
    public:
        L2FibDhcpBindingSummaries();
        ~L2FibDhcpBindingSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibDhcpBindingSummary; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary> > l2fib_dhcp_binding_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary : public ydk::Entity
{
    public:
        L2FibDhcpBindingSummary();
        ~L2FibDhcpBindingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: string
        ydk::YLeaf bindings; //type: uint32
        class Port; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port> port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Ac


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_id_type; //type: L2fibPwId

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries::L2FibDhcpBindingSummary::Port::Pw


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareEgresses();
        ~L2FibEvpnInclMCastHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastHardwareEgress; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress> > l2fib_evpn_incl_m_cast_hardware_egress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareEgress();
        ~L2FibEvpnInclMCastHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf is_bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList : public ydk::Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareIngresses();
        ~L2FibEvpnInclMCastHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastHardwareIngress; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress> > l2fib_evpn_incl_m_cast_hardware_ingress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareIngress();
        ~L2FibEvpnInclMCastHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf is_bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList : public ydk::Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts : public ydk::Entity
{
    public:
        L2FibEvpnInclMCasts();
        ~L2FibEvpnInclMCasts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCast; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast> > l2fib_evpn_incl_m_cast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast : public ydk::Entity
{
    public:
        L2FibEvpnInclMCast();
        ~L2FibEvpnInclMCast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf is_bound; //type: boolean
        ydk::YLeaf next_hop_valid; //type: boolean
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_address_v6; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf ecd_plaformt_data_valid; //type: boolean
        ydk::YLeaf ecd_platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList : public ydk::Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts::L2FibEvpnInclMCast::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs : public ydk::Entity
{
    public:
        L2FibEvpnIp4Macs();
        ~L2FibEvpnIp4Macs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnIp4Mac; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac> > l2fib_evpn_ip4mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac : public ydk::Entity
{
    public:
        L2FibEvpnIp4Mac();
        ~L2FibEvpnIp4Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bdid; //type: int32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf bdid_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf arp_nd_sync_pending; //type: boolean
        ydk::YLeaf arp_nd_probe_pending; //type: boolean
        ydk::YLeaf arp_nd_delete_pending; //type: boolean
        ydk::YLeaf is_local_xr; //type: boolean
        class IpAddressXr; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr> ip_address_xr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr : public ydk::Entity
{
    public:
        IpAddressXr();
        ~IpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs : public ydk::Entity
{
    public:
        L2FibEvpnIp6Macs();
        ~L2FibEvpnIp6Macs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnIp6Mac; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac> > l2fib_evpn_ip6mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac : public ydk::Entity
{
    public:
        L2FibEvpnIp6Mac();
        ~L2FibEvpnIp6Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bdid; //type: int32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf bdid_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf arp_nd_sync_pending; //type: boolean
        ydk::YLeaf arp_nd_probe_pending; //type: boolean
        ydk::YLeaf arp_nd_delete_pending; //type: boolean
        ydk::YLeaf is_local_xr; //type: boolean
        class IpAddressXr; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr> ip_address_xr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr : public ydk::Entity
{
    public:
        IpAddressXr();
        ~IpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs::L2FibEvpnIp6Mac::IpAddressXr


class L2VpnForwarding::Nodes::Node::L2FibG8032 : public ydk::Entity
{
    public:
        L2FibG8032();
        ~L2FibG8032();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibG8032Rings; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings> l2fib_g8032_rings;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings : public ydk::Entity
{
    public:
        L2FibG8032Rings();
        ~L2FibG8032Rings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibG8032Ring; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring> > l2fib_g8032_ring;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring : public ydk::Entity
{
    public:
        L2FibG8032Ring();
        ~L2FibG8032Ring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ring_name; //type: string
        class L2FibG8032RingDetail; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail
        class L2FibG8032RingSummary; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary
        class L2FibG8032RingInstanceSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries
        class L2FibG8032RingInstanceDetails; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail> l2fib_g8032_ring_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails> l2fib_g8032_ring_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries> l2fib_g8032_ring_instance_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary> l2fib_g8032_ring_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail : public ydk::Entity
{
    public:
        L2FibG8032RingDetail();
        ~L2FibG8032RingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ring_name; //type: string
        ydk::YLeaf port0; //type: string
        ydk::YLeaf port1; //type: string
        ydk::YLeaf monitor0; //type: string
        ydk::YLeaf monitor1; //type: string
        ydk::YLeaf is_open_ring; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingDetail


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails : public ydk::Entity
{
    public:
        L2FibG8032RingInstanceDetails();
        ~L2FibG8032RingInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibG8032RingInstanceDetail; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail> > l2fib_g8032_ring_instance_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail : public ydk::Entity
{
    public:
        L2FibG8032RingInstanceDetail();
        ~L2FibG8032RingInstanceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: int32
        ydk::YLeaf ring_instance; //type: uint32
        ydk::YLeaf vlan_ids; //type: string
        ydk::YLeaf ring_profile; //type: string
        ydk::YLeaf rpl; //type: L2fibG8032Rpl
        ydk::YLeaf aps_port0; //type: string
        ydk::YLeaf aps_port1; //type: string
        ydk::YLeaf aps_port_status0; //type: L2fibG8032ApsPortStatus
        ydk::YLeaf aps_port_status1; //type: L2fibG8032ApsPortStatus
        ydk::YLeaf aps_channel_level; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails::L2FibG8032RingInstanceDetail


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries : public ydk::Entity
{
    public:
        L2FibG8032RingInstanceSummaries();
        ~L2FibG8032RingInstanceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibG8032RingInstanceSummary; //type: L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary> > l2fib_g8032_ring_instance_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary : public ydk::Entity
{
    public:
        L2FibG8032RingInstanceSummary();
        ~L2FibG8032RingInstanceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: int32
        ydk::YLeaf ring_instance; //type: uint32
        ydk::YLeaf aps_port0; //type: string
        ydk::YLeaf aps_port1; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries::L2FibG8032RingInstanceSummary


class L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary : public ydk::Entity
{
    public:
        L2FibG8032RingSummary();
        ~L2FibG8032RingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ring_name; //type: string
        ydk::YLeaf port0; //type: string
        ydk::YLeaf port1; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary


class L2VpnForwarding::Nodes::Node::L2FibL2Tp : public ydk::Entity
{
    public:
        L2FibL2Tp();
        ~L2FibL2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Tpv3Sessions; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions
        class L2Tpv2Sessions; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions> l2tpv2_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions> l2tpv3_sessions;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions : public ydk::Entity
{
    public:
        L2Tpv2Sessions();
        ~L2Tpv2Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Tpv2Session; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session> > l2tpv2_session;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session : public ydk::Entity
{
    public:
        L2Tpv2Session();
        ~L2Tpv2Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: int32
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf ipv4_table_id; //type: uint32
        ydk::YLeaf ipv6_table_id; //type: uint32
        ydk::YLeaf nhop_ip_addr; //type: string
        ydk::YLeaf session_type; //type: L2fibL2TpSession
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions::L2Tpv2Session::Base


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions : public ydk::Entity
{
    public:
        L2Tpv3Sessions();
        ~L2Tpv3Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Tpv3Session; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session> > l2tpv3_session;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session : public ydk::Entity
{
    public:
        L2Tpv3Session();
        ~L2Tpv3Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: int32
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf ipv4_table_id; //type: uint32
        ydk::YLeaf ipv6_table_id; //type: uint32
        ydk::YLeaf nhop_ip_addr; //type: string
        ydk::YLeaf session_type; //type: L2fibL2TpSession
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session::Base


class L2VpnForwarding::Nodes::Node::L2FibMacLearning : public ydk::Entity
{
    public:
        L2FibMacLearning();
        ~L2FibMacLearning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMacs; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs
        class L2FibMacLearningMacIpv4S; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S
        class L2FibMacLearningMacIpv6S; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S> l2fib_mac_learning_mac_ipv4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S> l2fib_mac_learning_mac_ipv6s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs> l2fib_mac_learning_macs;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv4S();
        ~L2FibMacLearningMacIpv4S();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMacIpv4; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4> > l2fib_mac_learning_mac_ipv4;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4 : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv4();
        ~L2FibMacLearningMacIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf bdid; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf element_type; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf interface_handle_xr; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf generation; //type: uint8
        class Addr; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr
        class Nhaddr; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr> addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr> nhaddr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr : public ydk::Entity
{
    public:
        Nhaddr();
        ~Nhaddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv6S();
        ~L2FibMacLearningMacIpv6S();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMacIpv6; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6> > l2fib_mac_learning_mac_ipv6;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6 : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv6();
        ~L2FibMacLearningMacIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf bdid; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf element_type; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf interface_handle_xr; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf generation; //type: uint8
        class Addr; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr
        class Nhaddr; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr> addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr> nhaddr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr : public ydk::Entity
{
    public:
        Nhaddr();
        ~Nhaddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs : public ydk::Entity
{
    public:
        L2FibMacLearningMacs();
        ~L2FibMacLearningMacs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMac; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac> > l2fib_mac_learning_mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac : public ydk::Entity
{
    public:
        L2FibMacLearningMac();
        ~L2FibMacLearningMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf bdid; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf element_type; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf interface_handle_xr; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf generation; //type: uint8
        class Addr; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr
        class Nhaddr; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr> addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr> nhaddr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr : public ydk::Entity
{
    public:
        Nhaddr();
        ~Nhaddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2fibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces : public ydk::Entity
{
    public:
        L2FibMainInterfaces();
        ~L2FibMainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMainInterface; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface> > l2fib_main_interface;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface : public ydk::Entity
{
    public:
        L2FibMainInterface();
        ~L2FibMainInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface_id; //type: int32
        ydk::YLeaf main_interface_type; //type: EvpnMainInterface
        class L2FibMainInterfaceHardwareEgressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo
        class L2FibMainInterfaceHardwareEgressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo
        class L2FibMainInterfaceInstances; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances
        class L2FibMainInterfaceInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo
        class L2FibMainInterfaceDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo
        class L2FibMainInterfaceHardwareIngressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo
        class L2FibMainInterfaceHardwareIngressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo> l2fib_main_interface_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo> l2fib_main_interface_hardware_egress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo> l2fib_main_interface_hardware_egress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo> l2fib_main_interface_hardware_ingress_detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo> l2fib_main_interface_hardware_ingress_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo> l2fib_main_interface_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances> l2fib_main_interface_instances;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceDetailInfo();
        ~L2FibMainInterfaceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf evpn_shg_local_label; //type: uint32
        class InstanceId; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId
        class InstancesState; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState
        class InstancesProvisioned; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned
        class BridgePortCountInstance; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance
        class EthernetSegmentIdentifier; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier
        class EvpnShgRemoteInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance> > bridge_port_count_instance;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned> > instances_provisioned;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState> > instances_state;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance : public ydk::Entity
{
    public:
        BridgePortCountInstance();
        ~BridgePortCountInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier

class MgmtL2FibBridgeMacEvpnCtx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_esi_id;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_local_label;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_moi;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh;

};

class PreferredPathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_tunnel;
        static const ydk::Enum::YLeaf ip_tunnel;
        static const ydk::Enum::YLeaf tp_tunnel;
        static const ydk::Enum::YLeaf sr_te_policy;
        static const ydk::Enum::YLeaf mldp_tunnel;
        static const ydk::Enum::YLeaf mte_tunnel;

};

class L2fibG8032ApsPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2fib_aps_port_state_unknown;
        static const ydk::Enum::YLeaf l2fib_aps_port_state_unbound;
        static const ydk::Enum::YLeaf l2fib_aps_port_state_bound;

};

class EvpnMainInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_main_interface_ac;
        static const ydk::Enum::YLeaf evpn_main_interface_nve;
        static const ydk::Enum::YLeaf evpn_main_interface_ac_vfi;
        static const ydk::Enum::YLeaf evpn_main_interface_ac_pw;

};

class MgmtL2FibSwitching : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_unknown;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_ac_ac;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_ac_atom;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_ac_vfi;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_ac_l2tp;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_atom_atom;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_vfi_atom;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_vfi_l2tp;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_l2tp_atom;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_l2tp_l2tp;
        static const ydk::Enum::YLeaf mgmt_l2fib_switching_type_max;

};

class MgmtL2FibStatsData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_stats_type_unknown;
        static const ydk::Enum::YLeaf mgmt_l2fib_stats_type_mcast;

};

class L2vpnSegmentState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_segment_state_unresolved;
        static const ydk::Enum::YLeaf l2vpn_segment_state_up;
        static const ydk::Enum::YLeaf l2vpn_segment_state_down;
        static const ydk::Enum::YLeaf l2vpn_segment_state_admin_down;
        static const ydk::Enum::YLeaf l2vpn_segment_state_local_up;
        static const ydk::Enum::YLeaf l2vpn_segment_state_remote_up;
        static const ydk::Enum::YLeaf l2vpn_segment_state_connected;
        static const ydk::Enum::YLeaf l2vpn_segment_state_standby;
        static const ydk::Enum::YLeaf l2vpn_segment_state_standby_ready;

};

class L2vpnBagMacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf limit_none;
        static const ydk::Enum::YLeaf limit_flood;
        static const ydk::Enum::YLeaf limit_no_flood;
        static const ydk::Enum::YLeaf limit_shutdown;
        static const ydk::Enum::YLeaf limit_no_config;

};

class L2fibStormControlRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kb_ps;

};

class L2vpnBridgeCoupledState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class L2vpnG8032Rpl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpl_unknown;
        static const ydk::Enum::YLeaf port0_owner;
        static const ydk::Enum::YLeaf port0_neighbor;
        static const ydk::Enum::YLeaf port0_next_neighbor;
        static const ydk::Enum::YLeaf port1_owner;
        static const ydk::Enum::YLeaf port1_neighbor;
        static const ydk::Enum::YLeaf port1_next_neighbor;

};

class L2vpnAdRd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rd_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_v4_addr;

};

class L2vpnPeer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf internal_label;

};

class L2vpnBagAdEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_not_specified;
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_ether_vlan;
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_ether;

};

class L2vpnPwClassControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class L2vpnTdmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ce_so_psn;
        static const ydk::Enum::YLeaf sa_to_p_e1;
        static const ydk::Enum::YLeaf sa_to_p_t1;
        static const ydk::Enum::YLeaf sa_to_p_e3;
        static const ydk::Enum::YLeaf sa_to_p_t3;

};

class L2vpnLoadBal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_supported;
        static const ydk::Enum::YLeaf source_dest_mac;
        static const ydk::Enum::YLeaf source_dest_ip;
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf pseudowire_label;

};

class L2vpnAdLsdErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_none;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_rw_create_abort_lbl_alloc;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_lbl_alloc_abort_rw_create;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_lbl_alloc_abort_lbl_alloc;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_lbl_alloc_lbl_ctx_mismatch;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_rw_create_fpi_size_mismatch;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_rw_create_fpi_version_mismatch;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_enospc;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_enomem;
        static const ydk::Enum::YLeaf l2vpn_ad_lsd_err_type_undefined;

};

class L2fibL2TpSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv2;

};

class L2vpnG8032UncfgReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reason_none;
        static const ydk::Enum::YLeaf ring_mp0_missing;
        static const ydk::Enum::YLeaf ring_mp1_missing;
        static const ydk::Enum::YLeaf inclusion_list_empty;
        static const ydk::Enum::YLeaf aps0_missing;
        static const ydk::Enum::YLeaf aps0bp_notfound;
        static const ydk::Enum::YLeaf aps0_no_ac_ctx;
        static const ydk::Enum::YLeaf aps0_not_in_inclusion_list;
        static const ydk::Enum::YLeaf aps0_mismatched;
        static const ydk::Enum::YLeaf aps1_missing;
        static const ydk::Enum::YLeaf aps1bp_notfound;
        static const ydk::Enum::YLeaf aps1_no_ac_ctx;
        static const ydk::Enum::YLeaf aps1_not_in_inclusion_list;
        static const ydk::Enum::YLeaf aps1_mismatched;
        static const ydk::Enum::YLeaf aps_unprovisioned;

};

class L2fibG8032Rpl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rpl_unknown;
        static const ydk::Enum::YLeaf port0_owner;
        static const ydk::Enum::YLeaf port0_neighbor;
        static const ydk::Enum::YLeaf port0_next_neighbor;
        static const ydk::Enum::YLeaf port1_owner;
        static const ydk::Enum::YLeaf port1_neighbor;
        static const ydk::Enum::YLeaf port1_next_neighbor;

};

class L2vpnVfiP2MpTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;

};

class L2vpnPrefpathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_next_hop_ip;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_te_tunnel;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_ip_tunnel;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_tp_tunnel;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_sr_te;

};

class L2vpnVfiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;

};

class L2vpnXcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_xc_state_unresolved;
        static const ydk::Enum::YLeaf l2vpn_xc_state_down;
        static const ydk::Enum::YLeaf l2vpn_xc_state_up;

};

class L2vpnProtectionRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_protection_primary;
        static const ydk::Enum::YLeaf l2vpn_protection_backup;

};

class L2vpnBagMacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};

class L2vpnMainIfInstanceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf mac_learning;
        static const ydk::Enum::YLeaf nack;
        static const ydk::Enum::YLeaf forwarning_not_useful;
        static const ydk::Enum::YLeaf blocked_not_useful;
        static const ydk::Enum::YLeaf mac_learning_not_useful;
        static const ydk::Enum::YLeaf blocked_data_only;
        static const ydk::Enum::YLeaf mcast_pe2_ce_blocked;
        static const ydk::Enum::YLeaf port_state_unknown;

};

class L2vpnAtmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_atm_port_mode;
        static const ydk::Enum::YLeaf l2vpn_atm_vp_mode;
        static const ydk::Enum::YLeaf l2vpn_atm_vc_mode;

};

class L2vpnSignallingProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_sig_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_none;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_l2tpv3;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_l2tpv2;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_ldp;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_bgp;

};

class MgmtL2FibData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_min;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_xcon;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_ac;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_span;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_atom;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_pbb;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_vni;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_n_hop;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_l2tp;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_l2tpv2;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_bridge;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_bridge_shg;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_bridge_port;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_bridge_mac;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_mcast_table;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_mcast_leaf;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_mcast_xid;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_dhcp;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_l2tp_ipv6_ts;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_pwhe_mp;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_evpn;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_fxs;
        static const ydk::Enum::YLeaf mgmt_l2fib_data_type_max;

};

class L2vpnPwFlowLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf both;

};

class L2vpnIdMgrApp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_virtual_ac;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_ac;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_pw;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_bd;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_fxc;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_mp2mp;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_rd;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_pbb;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_if_list;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_atom;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_global;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_p_tree;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_pw_group;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_evpn;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_evpn_lbl;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_evpn_rd;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_count;

};

class L2vpnMirpLiteProtocolInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan0;
        static const ydk::Enum::YLeaf none;

};

class L2vpnBriefPsn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf atom;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf unknown_psn;

};

class L2vpnInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_intf_type_unknown;
        static const ydk::Enum::YLeaf l2vpn_intf_type_ethernet;
        static const ydk::Enum::YLeaf l2vpn_intf_type_vlan;
        static const ydk::Enum::YLeaf l2vpn_intf_type_atm;
        static const ydk::Enum::YLeaf l2vpn_intf_type_frame_relay;
        static const ydk::Enum::YLeaf l2vpn_intf_type_hdlc;
        static const ydk::Enum::YLeaf l2vpn_intf_type_ppp;
        static const ydk::Enum::YLeaf l2vpn_intf_type_span;
        static const ydk::Enum::YLeaf l2vpn_intf_type_bvi;
        static const ydk::Enum::YLeaf l2vpn_intf_type_cem;
        static const ydk::Enum::YLeaf l2vpn_intf_type_pw_ether;
        static const ydk::Enum::YLeaf l2vpn_intf_type_pw_iw;
        static const ydk::Enum::YLeaf l2vpn_intf_type_vni;

};

class L2vpnVfiP2MpSignaling : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bgp;

};

class MgmtL2FibBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_default;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_pbb_edge;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_pbb_core;

};

class L2vpnFrMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_fr_port_mode;
        static const ydk::Enum::YLeaf l2vpn_fr_dlci_mode;

};

class L2vpnPreferred : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_tunnel;
        static const ydk::Enum::YLeaf ip_tunnel;
        static const ydk::Enum::YLeaf tp_tunnel;
        static const ydk::Enum::YLeaf mte_tunnel;
        static const ydk::Enum::YLeaf mldp_tunnel;
        static const ydk::Enum::YLeaf sr_te_policy;

};

class L2fibFeature : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2fib_feature_dhcp_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_igmp_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_mld_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_max;

};

class L2vpnTosMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_ip_tos_none;
        static const ydk::Enum::YLeaf l2vpn_pw_ip_tos_reflect;

};

class L2vpnPwState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_state_unresolved;
        static const ydk::Enum::YLeaf l2vpn_pw_state_idle;
        static const ydk::Enum::YLeaf l2vpn_pw_state_provisioned;
        static const ydk::Enum::YLeaf l2vpn_pw_state_remote_standby;
        static const ydk::Enum::YLeaf l2vpn_pw_state_local_ready;
        static const ydk::Enum::YLeaf l2vpn_pw_state_all_ready;
        static const ydk::Enum::YLeaf l2vpn_pw_state_established;

};

class L2vpnBagMacWithdrawOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac_withdraw_option_state_up;
        static const ydk::Enum::YLeaf mac_withdraw_option_state_down;
        static const ydk::Enum::YLeaf mac_withdraw_option_optimize;

};

class L2vpnRgState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class L2vpnp2mpPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

};

class MgmtL2FibMacLimitNotify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_syslog;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_trap;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_both;

};

class L2vpnAdVplsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_none;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_as;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_v4_addr;

};

class L2vpnPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

};

class L2vpnP2MpPwPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

};

class L2vpnPw : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_type_unknown;
        static const ydk::Enum::YLeaf l2vpn_pw_type_frame_relay_dlci;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_aal5_sdu;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_trans_cell;
        static const ydk::Enum::YLeaf l2vpn_pw_type_ether_vlan;
        static const ydk::Enum::YLeaf l2vpn_pw_type_ether;
        static const ydk::Enum::YLeaf l2vpn_pw_type_hdlc;
        static const ydk::Enum::YLeaf l2vpn_pw_type_ppp;
        static const ydk::Enum::YLeaf l2vpn_pw_type_sonet_over_mpls;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_n_vcc_cell;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_n_vpc_cell;
        static const ydk::Enum::YLeaf l2vpn_pw_type_ip;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_vcc_cell;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_vpc_cell;
        static const ydk::Enum::YLeaf l2vpn_pw_type_atm_aal5_pdu;
        static const ydk::Enum::YLeaf l2vpn_pw_type_frame_relay;
        static const ydk::Enum::YLeaf l2vpn_pw_type_sonet;
        static const ydk::Enum::YLeaf l2vpn_pw_type_vpls;
        static const ydk::Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_e1;
        static const ydk::Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_t1;
        static const ydk::Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_e3;
        static const ydk::Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_t3;
        static const ydk::Enum::YLeaf l2vpn_pw_type_tdm_ce_so_psn;

};

class L2vpnPwControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_unknown;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_clear;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_set;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_mandatory;

};

class L2vpnMemoryState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf memory_state_unknown;
        static const ydk::Enum::YLeaf memory_state_normal;
        static const ydk::Enum::YLeaf memory_state_minor;
        static const ydk::Enum::YLeaf memory_state_severe;
        static const ydk::Enum::YLeaf memory_state_critical;
        static const ydk::Enum::YLeaf memory_state_invalid;

};

class L2vpnSrcAddressSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf set;

};

class L2vpnVniMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l2_dp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l3_dp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l2_cp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l3_cp;

};

class IccpSmPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unconfigured;
        static const ydk::Enum::YLeaf unsynchronized;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf reverting;

};

class L2vpnMainIfProtectected : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erp_protected;
        static const ydk::Enum::YLeaf mstp_protected;
        static const ydk::Enum::YLeaf no_protected;

};

class L2vpnAcEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown_encap;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf qinq;
        static const ydk::Enum::YLeaf qin_any;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf atm_aal0;
        static const ydk::Enum::YLeaf atm_aal5;
        static const ydk::Enum::YLeaf atm_vp;
        static const ydk::Enum::YLeaf atm_port;
        static const ydk::Enum::YLeaf hdlc;
        static const ydk::Enum::YLeaf fr_dlci;
        static const ydk::Enum::YLeaf fr_dlci_local;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf tdm_sa_to_p_e1;
        static const ydk::Enum::YLeaf tdm_sa_to_p_t1;
        static const ydk::Enum::YLeaf tdm_sa_to_p_e3;
        static const ydk::Enum::YLeaf tdm_sa_to_p_t3;
        static const ydk::Enum::YLeaf tdm_ce_so_psn;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf vlan_encap;
        static const ydk::Enum::YLeaf dot1ad;
        static const ydk::Enum::YLeaf efp;
        static const ydk::Enum::YLeaf bvi;
        static const ydk::Enum::YLeaf monitor_session;
        static const ydk::Enum::YLeaf pseudowire_ether;
        static const ydk::Enum::YLeaf pseudowire_iw;
        static const ydk::Enum::YLeaf multi_segment_pseudowire;
        static const ydk::Enum::YLeaf pseudowire_l2_subinterface;
        static const ydk::Enum::YLeaf virtual_network_interface;
        static const ydk::Enum::YLeaf encap_types_max;

};

class L2vpnL2TpTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_l2tp_idle;
        static const ydk::Enum::YLeaf l2vpn_l2tp_wait_for_connecting;
        static const ydk::Enum::YLeaf l2vpn_l2tp_wait_for_connected;
        static const ydk::Enum::YLeaf l2vpn_l2tp_in_coming_call;
        static const ydk::Enum::YLeaf l2vpn_l2tp_connected;
        static const ydk::Enum::YLeaf l2vpn_l2tp_disconnected;

};

class L2vpnpw : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf vpls_autodiscovered;
        static const ydk::Enum::YLeaf vpws_autodiscovered;
        static const ydk::Enum::YLeaf vpls_autodiscovered_ldp;

};

class L2fibPwRedundancyRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf backup;

};

class MgmtL2FibMacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_flood;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_no_flood;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_shutdown;

};

class L2vpnVniEncaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vni_encap_vxlan;
        static const ydk::Enum::YLeaf l2vpn_vni_encap_softgre;

};

class L2vpnSegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_segment_type_unresolved;
        static const ydk::Enum::YLeaf l2vpn_segment_type_ac;
        static const ydk::Enum::YLeaf l2vpn_segment_type_pw;
        static const ydk::Enum::YLeaf l2vpn_segment_type_bd_ac;
        static const ydk::Enum::YLeaf l2vpn_segment_type_vfi;
        static const ydk::Enum::YLeaf l2vpn_segment_type_bd_pw;
        static const ydk::Enum::YLeaf l2vpn_segment_type_bd_pbb;
        static const ydk::Enum::YLeaf l2vpn_segment_type_bd_evpn;
        static const ydk::Enum::YLeaf l2vpn_segment_type_vni;

};

class IflistRepStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf done;
        static const ydk::Enum::YLeaf not_supported;
        static const ydk::Enum::YLeaf failed;

};

class L2vpnProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_protection_unknown;
        static const ydk::Enum::YLeaf l2vpn_protection_interface;
        static const ydk::Enum::YLeaf l2vpn_protection_pseudowire;
        static const ydk::Enum::YLeaf l2vpn_protection_group;

};

class L2vpnMstiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_forwarding;
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_blocked;
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_mac_learning;
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_nack;
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_forwarding_not_useful;
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_blocked_not_useful;
        static const ydk::Enum::YLeaf msti_bag_stp_port_state_mac_learning_not_useful;
        static const ydk::Enum::YLeaf msti_bag_erp_port_state_blocked_data_only;
        static const ydk::Enum::YLeaf msti_bag_erp_port_state_evpn_mcast_pe2ce_blocked;
        static const ydk::Enum::YLeaf msti_bag_erp_port_state_evpn_port_state_mcast_blocked;

};

class L2vpnSyncStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf ready;

};

class L2fibMainIfInstanceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf mac_learning;
        static const ydk::Enum::YLeaf nack;
        static const ydk::Enum::YLeaf forwarning_not_useful;
        static const ydk::Enum::YLeaf blocked_not_useful;
        static const ydk::Enum::YLeaf mac_learning_not_useful;
        static const ydk::Enum::YLeaf blocked_data_only;
        static const ydk::Enum::YLeaf multicast_pe2ce_blocked;
        static const ydk::Enum::YLeaf multicast_blocked;
        static const ydk::Enum::YLeaf port_state_unknown;

};

class L2vpnInterworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_iw_type_none;
        static const ydk::Enum::YLeaf l2vpn_iw_type_ethernet;
        static const ydk::Enum::YLeaf l2vpn_iw_type_ppp;
        static const ydk::Enum::YLeaf l2vpn_iw_type_ipv4;
        static const ydk::Enum::YLeaf l2vpn_iw_type_voluntary;
        static const ydk::Enum::YLeaf l2vpn_iw_type_frf8;

};

class L2vpnPwId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_id_type_manual;
        static const ydk::Enum::YLeaf l2vpn_pw_id_type_ad_vpls;
        static const ydk::Enum::YLeaf l2vpn_pw_id_type_ad_vpws;
        static const ydk::Enum::YLeaf l2vpn_pw_id_type_ad_vpls_ldp;
        static const ydk::Enum::YLeaf l2vpn_pw_id_type_pwr;
        static const ydk::Enum::YLeaf l2vpn_pw_id_type_evpn;

};

class L2fibPwId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf vpls;
        static const ydk::Enum::YLeaf vpws;
        static const ydk::Enum::YLeaf vpls_ldp;
        static const ydk::Enum::YLeaf l2fib_pw_id_type_pwr;
        static const ydk::Enum::YLeaf l2fib_pw_id_type_evpn;

};

class L2vpnProcRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf v1_active;
        static const ydk::Enum::YLeaf v1_standby;
        static const ydk::Enum::YLeaf v2_active;
        static const ydk::Enum::YLeaf v2_standby;
        static const ydk::Enum::YLeaf v1_active_post_big_bang;
        static const ydk::Enum::YLeaf v1_standby_post_big_bang;
        static const ydk::Enum::YLeaf count;

};

class L2vpnTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_transport_mode_not_specified;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_ethernet;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_vlan;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_vlan_passthrough;

};

class L2vpnMirpLiteStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf not_supported;

};

class L2vpnTimeStampMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf differential;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf none;

};

class L2vpnAdSigMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_none;
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_bgp;
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_ldp;

};

class L2vpnIpcTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf unknown;

};

class L2vpnAdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rt_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const ydk::Enum::YLeaf es_import;

};

class L2vpnTdmRtpOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf absent;

};

class L2vpnBridgeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bridge_init;
        static const ydk::Enum::YLeaf bridge_up;
        static const ydk::Enum::YLeaf bridge_down;
        static const ydk::Enum::YLeaf bridge_admin_down;

};

class L2vpnProcNsrNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf collab_time_out;
        static const ydk::Enum::YLeaf collab_conntection_idt;
        static const ydk::Enum::YLeaf nsr_peer_not_connected;
        static const ydk::Enum::YLeaf nsr_peer_not_in_sync;

};

class L2fibGroupState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class IccpSmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unresolved;
        static const ydk::Enum::YLeaf provisioned;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf synchronizing;
        static const ydk::Enum::YLeaf synchronized;

};

class L2vpnVirtualportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vp_state_undefined;
        static const ydk::Enum::YLeaf l2vpn_vp_state_up;
        static const ydk::Enum::YLeaf l2vpn_vp_state_down;

};

class L2fibLoadBal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_undef;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_dst_ip;
        static const ydk::Enum::YLeaf vc;

};

class L2vpnPwSequence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_off;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_xmit;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_recv;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_trans;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_both;

};

class P2mpTransportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf tunnel_down;
        static const ydk::Enum::YLeaf max_tunnels_reached;

};

class L2vpnBagMacAgingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aging_none;
        static const ydk::Enum::YLeaf aging_absolute;
        static const ydk::Enum::YLeaf aging_inactivity;

};

class MgmtL2FibMacSecAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};

class L2vpnPwFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_fec_128;
        static const ydk::Enum::YLeaf l2vpn_pw_fec_129;
        static const ydk::Enum::YLeaf l2vpn_pw_fec_not_applicable;

};

class L2vpnBagMacLimitNotify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac_limit_notify_none;
        static const ydk::Enum::YLeaf mac_limit_notify_syslog;
        static const ydk::Enum::YLeaf mac_limit_notify_trap;
        static const ydk::Enum::YLeaf mac_limit_notify_syslog_trap;
        static const ydk::Enum::YLeaf mac_limit_notify_no_config;

};

class L2vpnEncapMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_l2tpv3;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_l2tpv2;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_mpls;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_unknown;

};

class L2vpnBagStormControlRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kb_ps;

};

class L2fibIpAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip_none;
        static const ydk::Enum::YLeaf v4;
        static const ydk::Enum::YLeaf v6;

};

class L2vpnBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_bridge_type_default;
        static const ydk::Enum::YLeaf l2vpn_bridge_type_pbb_edge;
        static const ydk::Enum::YLeaf l2vpn_bridge_type_pbb_core;

};

class L2vpnService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vpws;
        static const ydk::Enum::YLeaf vpls;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_0_ */

