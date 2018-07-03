#ifndef _CISCO_IOS_XR_L2VPN_OPER_3_
#define _CISCO_IOS_XR_L2VPN_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper : public ydk::Entity
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
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation : public ydk::Entity
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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
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
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePortDetails::L2fibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceInfo();
        ~L2fibMainInterfaceInstanceInfo();

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
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf instance_provisioned; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareIngressDetailInfo();
        ~L2fibMainInterfaceInstanceHardwareIngressDetailInfo();

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
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf instance_provisioned; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareEgressInfo();
        ~L2fibMainInterfaceInstanceHardwareEgressInfo();

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
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf instance_provisioned; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareIngressInfo();
        ~L2fibMainInterfaceInstanceHardwareIngressInfo();

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
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf instance_provisioned; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareIngressInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceBridgePorts();
        ~L2fibMainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMainInterfaceInstanceBridgePort; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts::L2fibMainInterfaceInstanceBridgePort

        ydk::YList l2fib_main_interface_instance_bridge_port;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts::L2fibMainInterfaceInstanceBridgePort : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceBridgePort();
        ~L2fibMainInterfaceInstanceBridgePort();

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
        ydk::YLeaf bridge_port_id; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf main_if_type; //type: uint8
        ydk::YLeaf virtual_if_name; //type: string
        ydk::YLeaf bp_type; //type: uint8

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceBridgePorts::L2fibMainInterfaceInstanceBridgePort


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInstanceHardwareEgressDetailInfo();
        ~L2fibMainInterfaceInstanceHardwareEgressDetailInfo();

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
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf state; //type: L2fibMainIfInstanceState
        ydk::YLeaf bridge_port_count; //type: uint32
        ydk::YLeaf instance_provisioned; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInstances::L2fibMainInterfaceInstance::L2fibMainInterfaceInstanceHardwareEgressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceInfo();
        ~L2fibMainInterfaceInfo();

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
        class InstanceId; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstanceId
        class InstancesState; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstancesState
        class InstancesProvisioned; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstancesProvisioned

        ydk::YList instance_id;
        ydk::YList instances_state;
        ydk::YList instances_provisioned;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstanceId


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstancesState : public ydk::Entity
{
    public:
        InstancesState();
        ~InstancesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: L2fibMainIfInstanceState

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstancesState


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstancesProvisioned : public ydk::Entity
{
    public:
        InstancesProvisioned();
        ~InstancesProvisioned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceInfo::InstancesProvisioned


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceDetailInfo();
        ~L2fibMainInterfaceDetailInfo();

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
        class InstanceId; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstanceId
        class InstancesState; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstancesState
        class InstancesProvisioned; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstancesProvisioned
        class BridgePortCountInstance; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::BridgePortCountInstance
        class EthernetSegmentIdentifier; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EthernetSegmentIdentifier
        class EvpnShgRemoteInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo

        ydk::YList instance_id;
        ydk::YList instances_state;
        ydk::YList instances_provisioned;
        ydk::YList bridge_port_count_instance;
        ydk::YList ethernet_segment_identifier;
        ydk::YList evpn_shg_remote_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstanceId


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstancesState : public ydk::Entity
{
    public:
        InstancesState();
        ~InstancesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: L2fibMainIfInstanceState

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstancesState


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstancesProvisioned : public ydk::Entity
{
    public:
        InstancesProvisioned();
        ~InstancesProvisioned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::InstancesProvisioned


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::BridgePortCountInstance : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::BridgePortCountInstance


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EthernetSegmentIdentifier : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EthernetSegmentIdentifier


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
{
    public:
        EvpnShgRemoteInfo();
        ~EvpnShgRemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteSplitHorizonGroupLabel; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceHardwareIngressDetailInfo();
        ~L2fibMainInterfaceHardwareIngressDetailInfo();

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
        class InstanceId; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstanceId
        class InstancesState; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstancesState
        class InstancesProvisioned; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned
        class BridgePortCountInstance; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance
        class EthernetSegmentIdentifier; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier
        class EvpnShgRemoteInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo

        ydk::YList instance_id;
        ydk::YList instances_state;
        ydk::YList instances_provisioned;
        ydk::YList bridge_port_count_instance;
        ydk::YList ethernet_segment_identifier;
        ydk::YList evpn_shg_remote_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstanceId


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstancesState : public ydk::Entity
{
    public:
        InstancesState();
        ~InstancesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: L2fibMainIfInstanceState

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstancesState


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned : public ydk::Entity
{
    public:
        InstancesProvisioned();
        ~InstancesProvisioned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
{
    public:
        EvpnShgRemoteInfo();
        ~EvpnShgRemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteSplitHorizonGroupLabel; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo : public ydk::Entity
{
    public:
        L2fibMainInterfaceHardwareIngressInfo();
        ~L2fibMainInterfaceHardwareIngressInfo();

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
        class InstanceId; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstanceId
        class InstancesState; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstancesState
        class InstancesProvisioned; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstancesProvisioned

        ydk::YList instance_id;
        ydk::YList instances_state;
        ydk::YList instances_provisioned;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstanceId : public ydk::Entity
{
    public:
        InstanceId();
        ~InstanceId();

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

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstanceId


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstancesState : public ydk::Entity
{
    public:
        InstancesState();
        ~InstancesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: L2fibMainIfInstanceState

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstancesState


class L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstancesProvisioned : public ydk::Entity
{
    public:
        InstancesProvisioned();
        ~InstancesProvisioned();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibMainInterfaces::L2fibMainInterface::L2fibMainInterfaceHardwareIngressInfo::InstancesProvisioned


class L2vpnForwarding::Nodes::Node::L2fibMstpDetails : public ydk::Entity
{
    public:
        L2fibMstpDetails();
        ~L2fibMstpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMstpDetail; //type: L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail

        ydk::YList l2fib_mstp_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMstpDetails


class L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail : public ydk::Entity
{
    public:
        L2fibMstpDetail();
        ~L2fibMstpDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf parent_interface_xr; //type: string
        ydk::YLeaf msti_xr; //type: uint32
        ydk::YLeaf internal_msti; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::Base
        class BridgePortArray; //type: L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::BridgePortArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::Base> base;
        ydk::YList bridge_port_array;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail


class L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::Base


class L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::BridgePortArray : public ydk::Entity
{
    public:
        BridgePortArray();
        ~BridgePortArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMstpDetails::L2fibMstpDetail::BridgePortArray


class L2vpnForwarding::Nodes::Node::L2fibL2tp : public ydk::Entity
{
    public:
        L2fibL2tp();
        ~L2fibL2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2tpv3Sessions; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions
        class L2tpv2Sessions; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions> l2tpv3_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions> l2tpv2_sessions;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions : public ydk::Entity
{
    public:
        L2tpv3Sessions();
        ~L2tpv3Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2tpv3Session; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session

        ydk::YList l2tpv3_session;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session : public ydk::Entity
{
    public:
        L2tpv3Session();
        ~L2tpv3Session();

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
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf ipv4_table_id; //type: uint32
        ydk::YLeaf ipv6_table_id; //type: uint32
        ydk::YLeaf nhop_ip_addr; //type: string
        ydk::YLeaf session_type; //type: L2fibL2tpSession
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv3Sessions::L2tpv3Session::Base


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions : public ydk::Entity
{
    public:
        L2tpv2Sessions();
        ~L2tpv2Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2tpv2Session; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session

        ydk::YList l2tpv2_session;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session : public ydk::Entity
{
    public:
        L2tpv2Session();
        ~L2tpv2Session();

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
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf ipv4_table_id; //type: uint32
        ydk::YLeaf ipv6_table_id; //type: uint32
        ydk::YLeaf nhop_ip_addr; //type: string
        ydk::YLeaf session_type; //type: L2fibL2tpSession
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session


class L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibL2tp::L2tpv2Sessions::L2tpv2Session::Base


class L2vpnForwarding::Nodes::Node::L2fibG8032 : public ydk::Entity
{
    public:
        L2fibG8032();
        ~L2fibG8032();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032Rings; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings> l2fib_g8032_rings;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings : public ydk::Entity
{
    public:
        L2fibG8032Rings();
        ~L2fibG8032Rings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032Ring; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring

        ydk::YList l2fib_g8032_ring;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring : public ydk::Entity
{
    public:
        L2fibG8032Ring();
        ~L2fibG8032Ring();

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
        class L2fibG8032RingDetail; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail
        class L2fibG8032RingSummary; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary
        class L2fibG8032RingInstanceSummaries; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries
        class L2fibG8032RingInstanceDetails; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail> l2fib_g8032_ring_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary> l2fib_g8032_ring_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries> l2fib_g8032_ring_instance_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails> l2fib_g8032_ring_instance_details;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail : public ydk::Entity
{
    public:
        L2fibG8032RingDetail();
        ~L2fibG8032RingDetail();

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

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingDetail


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary : public ydk::Entity
{
    public:
        L2fibG8032RingSummary();
        ~L2fibG8032RingSummary();

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

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingSummary


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceSummaries();
        ~L2fibG8032RingInstanceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032RingInstanceSummary; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries::L2fibG8032RingInstanceSummary

        ydk::YList l2fib_g8032_ring_instance_summary;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries::L2fibG8032RingInstanceSummary : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceSummary();
        ~L2fibG8032RingInstanceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ring_instance; //type: uint32
        ydk::YLeaf aps_port0; //type: string
        ydk::YLeaf aps_port1; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceSummaries::L2fibG8032RingInstanceSummary


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceDetails();
        ~L2fibG8032RingInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibG8032RingInstanceDetail; //type: L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails::L2fibG8032RingInstanceDetail

        ydk::YList l2fib_g8032_ring_instance_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails


class L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails::L2fibG8032RingInstanceDetail : public ydk::Entity
{
    public:
        L2fibG8032RingInstanceDetail();
        ~L2fibG8032RingInstanceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf ring_instance; //type: uint32
        ydk::YLeaf vlan_ids; //type: string
        ydk::YLeaf ring_profile; //type: string
        ydk::YLeaf rpl; //type: L2fibG8032Rpl
        ydk::YLeaf aps_port0; //type: string
        ydk::YLeaf aps_port1; //type: string
        ydk::YLeaf aps_port_status0; //type: L2fibG8032ApsPortStatus
        ydk::YLeaf aps_port_status1; //type: L2fibG8032ApsPortStatus
        ydk::YLeaf aps_channel_level; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibG8032::L2fibG8032Rings::L2fibG8032Ring::L2fibG8032RingInstanceDetails::L2fibG8032RingInstanceDetail


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts : public ydk::Entity
{
    public:
        L2fibBridgePorts();
        ~L2fibBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibBridgePort; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort

        ydk::YList l2fib_bridge_port;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort : public ydk::Entity
{
    public:
        L2fibBridgePort();
        ~L2fibBridgePort();

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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf flooding_disabled; //type: boolean
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf aging_time_out; //type: uint32
        class Segment; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment
        class BridgePortOperationalInfo; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo> bridge_port_operational_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::Base
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Ac::FxcNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::Base
        class PbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion> pbb_union;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion : public ydk::Entity
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

        ydk::YLeaf pbb_type; //type: MgmtL2fibBridge
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pbb::PbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Vni::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Evpn::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::Base
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
{
    public:
        L2tpIpv6Ts();
        ~L2tpIpv6Ts();

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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire : public ydk::Entity
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
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::Segment::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo : public ydk::Entity
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
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation : public ydk::Entity
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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2fibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2fibMacSecAction
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
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgePorts::L2fibBridgePort::BridgePortOperationalInfo::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibmacDetails : public ydk::Entity
{
    public:
        L2fibmacDetails();
        ~L2fibmacDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibmacDetail; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail

        ydk::YList l2fibmac_detail;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail : public ydk::Entity
{
    public:
        L2fibmacDetail();
        ~L2fibmacDetail();

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
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf platform_is_hw_learn; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf bmac_configured; //type: boolean
        ydk::YLeaf vni_l3_flag; //type: boolean
        ydk::YLeaf pbb_bmac; //type: string
        ydk::YLeaf l3_encapsulationvlan_id; //type: uint16
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf peer_vtep_ip; //type: string
        ydk::YLeaf flag_extension; //type: uint16
        ydk::YLeaf vni; //type: uint32
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Base
        class Segment; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment
        class EvpnCtx; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop> next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Base


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2fibData
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Ac


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb : public ydk::Entity
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

        ydk::YLeaf xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pbb


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni : public ydk::Entity
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

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf parent_if; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Vni


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn : public ydk::Entity
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

        ydk::YLeaf xcid; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Evpn


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::Segment::Pw


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx : public ydk::Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle> mcast_ole;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::EvpnCtx::McastOle


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop


class L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibmacDetails::L2fibmacDetail::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames : public ydk::Entity
{
    public:
        L2fibBridgeDomainNames();
        ~L2fibBridgeDomainNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibBridgeDomainName; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames::L2fibBridgeDomainName

        ydk::YList l2fib_bridge_domain_name;
        
}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames


class L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames::L2fibBridgeDomainName : public ydk::Entity
{
    public:
        L2fibBridgeDomainName();
        ~L2fibBridgeDomainName();

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
        ydk::YLeaf mac_limit_action; //type: MgmtL2fibMacLimitAction
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

}; // L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames::L2fibBridgeDomainName


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts : public ydk::Entity
{
    public:
        L2fibMroutePorts();
        ~L2fibMroutePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMroutePort; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort

        ydk::YList l2fib_mroute_port;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort : public ydk::Entity
{
    public:
        L2fibMroutePort();
        ~L2fibMroutePort();

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
        ydk::YLeaf xcid; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf ac_interface_handle; //type: string
        ydk::YLeaf leaf_pointer; //type: uint32
        ydk::YLeaf pw_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf isid; //type: uint32
        ydk::YLeaf csfl; //type: uint32
        ydk::YLeaf sat_id; //type: uint16
        ydk::YLeaf is_ole_offloaded; //type: boolean
        ydk::YLeaf is_ole_master; //type: boolean
        ydk::YLeaf is_topo_hub_and_spoke; //type: boolean
        class BaseInformation; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::BaseInformation
        class ForwardStats; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats
        class SourcePrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix
        class DestinationPrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::BaseInformation> base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix> source_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix> destination_prefix;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::BaseInformation : public ydk::Entity
{
    public:
        BaseInformation();
        ~BaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::BaseInformation


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats : public ydk::Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat> forward_stat;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat : public ydk::Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2fibStatsData
        class Mulicast; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix


class L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix


class L2vpnForwarding::Nodes::Node::L2fibSummary : public ydk::Entity
{
    public:
        L2fibSummary();
        ~L2fibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XconnectSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary
        class NextHopSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary
        class L2tpDispositionSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary
        class BridgeDomainSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary
        class MacSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary
        class QueueSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary
        class EvpnSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary
        class GlobalCfg; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg
        class PtreeSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary
        class PwGroupSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary
        class PwheMpSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary> xconnect_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary> next_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary> l2tp_disposition_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary> bridge_domain_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary> mac_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary> queue_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary> evpn_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg> global_cfg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary> ptree_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary> pw_group_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary> pwhe_mp_summary;
        
}; // L2vpnForwarding::Nodes::Node::L2fibSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary : public ydk::Entity
{
    public:
        XconnectSummary();
        ~XconnectSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xconnect_count; //type: uint32
        ydk::YLeaf xconnect_up_count; //type: uint32
        ydk::YLeaf xconnect_down_count; //type: uint32
        ydk::YLeaf ac_to_pw_count_mpls; //type: uint32
        ydk::YLeaf ac_to_pw_count_l2tp; //type: uint32
        ydk::YLeaf ac_to_pw_count_l2tp_ip_v6; //type: uint32
        ydk::YLeaf ac_to_pw_count_l2tpv2; //type: uint32
        ydk::YLeaf ac_to_ac_count; //type: uint32
        ydk::YLeaf ac_to_unknown_count; //type: uint32
        ydk::YLeaf mon_sess_to_pw_count; //type: uint32
        ydk::YLeaf mon_sess_to_unknown_count; //type: uint32
        ydk::YLeaf ac_to_bp_count; //type: uint32
        ydk::YLeaf pw_to_bp_count; //type: uint32
        ydk::YLeaf pw_to_unknown_count; //type: uint32
        ydk::YLeaf pbb_to_bp_count; //type: uint32
        ydk::YLeaf pbb_to_unknown_count; //type: uint32
        ydk::YLeaf vni_to_bp_count; //type: uint32
        ydk::YLeaf vni_to_unknown_count; //type: uint32
        ydk::YLeaf evpn_to_bp_count; //type: uint32
        ydk::YLeaf evpn_to_unknown_count; //type: uint32
        ydk::YLeaf ac_down_count_aib; //type: uint32
        ydk::YLeaf ac_down_count_l2vpn; //type: uint32
        ydk::YLeaf ac_down_count_l3fib; //type: uint32
        ydk::YLeaf ac_down_count_vpdn; //type: uint32
        ydk::YLeaf vpws_pw_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf vpls_pw_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf virtual_ac_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf pbb_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf vni_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf evpn_invalid_xid_drop_count; //type: uint32
        ydk::YLeaf vpls_pw_max_exceeded_drop_cnt; //type: uint32
        ydk::YLeaf bundle_ac_max_exceeded_drop_cnt; //type: uint32
        ydk::YLeaf p2p_count; //type: uint32
        ydk::YLeaf bp_count; //type: uint32
        ydk::YLeaf pwhe_l2_if_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary : public ydk::Entity
{
    public:
        NextHopSummary();
        ~NextHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsIl; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp
        class Lsm; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm
        class P2mpTunnels; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl> mpls_il;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm> lsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels> p2mp_tunnels;
        
}; // L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl : public ydk::Entity
{
    public:
        MplsIl();
        ~MplsIl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl


class L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls : public ydk::Entity
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

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls


class L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp


class L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm : public ydk::Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm


class L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels : public ydk::Entity
{
    public:
        P2mpTunnels();
        ~P2mpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels


class L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary : public ydk::Entity
{
    public:
        L2tpDispositionSummary();
        ~L2tpDispositionSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_disposition_session_count; //type: uint32
        ydk::YLeaf bound_l2tp_disposition_session_count; //type: uint32
        ydk::YLeaf unbound_l2tp_disposition_session_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary : public ydk::Entity
{
    public:
        BridgeDomainSummary();
        ~BridgeDomainSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_count; //type: uint32
        ydk::YLeaf bridge_domain_drop_count; //type: uint32
        ydk::YLeaf bridge_domain_with_bvi_count; //type: uint32
        ydk::YLeaf bridge_domain_with_p2mp_enabled; //type: uint32
        ydk::YLeaf bridge_domain_with_pbbevpn_enabled; //type: uint32
        ydk::YLeaf bridge_domain_with_evpn_enabled; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary : public ydk::Entity
{
    public:
        MacSummary();
        ~MacSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_counts_invalid; //type: boolean
        ydk::YLeaf local_mac_count; //type: uint32
        ydk::YLeaf remote_mac_count; //type: uint32
        ydk::YLeaf static_mac_count; //type: uint32
        ydk::YLeaf routed_mac_count; //type: uint32
        ydk::YLeaf mac_count; //type: uint32
        ydk::YLeaf sbmac_count; //type: uint32
        ydk::YLeaf bmac_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary : public ydk::Entity
{
    public:
        QueueSummary();
        ~QueueSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inline_cnt; //type: uint32
        ydk::YLeaf retry_cnt; //type: uint32
        ydk::YLeaf update_cnt; //type: uint32
        ydk::YLeaf del_cnt; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary : public ydk::Entity
{
    public:
        EvpnSummary();
        ~EvpnSummary();

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
        ydk::YLeaf isid_count; //type: uint32
        ydk::YLeaf default_count; //type: uint32
        ydk::YLeaf stitching_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg : public ydk::Entity
{
    public:
        GlobalCfg();
        ~GlobalCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_balance_type; //type: L2fibLoadBal
        ydk::YLeaf evpn_imc_label_block_base; //type: uint32
        ydk::YLeaf evpn_imc_label_block_size; //type: uint16
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg


class L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::Base


class L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary : public ydk::Entity
{
    public:
        PtreeSummary();
        ~PtreeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_ptree_count; //type: uint32
        ydk::YLeaf mldp_enabled_ptree_count; //type: uint32
        ydk::YLeaf lmrib_mldp_ptree_count; //type: uint32
        ydk::YLeaf rsvp_te_enabled_ptree_count; //type: uint32
        ydk::YLeaf lmrib_rsvp_te_ptree_count; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary : public ydk::Entity
{
    public:
        PwGroupSummary();
        ~PwGroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plat_grouping_supported; //type: boolean
        ydk::YLeaf total_pw_groups; //type: uint32
        ydk::YLeaf pw_groups_down; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary


class L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary : public ydk::Entity
{
    public:
        PwheMpSummary();
        ~PwheMpSummary();

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

}; // L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary


class L2vpnForwarding::Nodes::Node::L2fibNvePeers : public ydk::Entity
{
    public:
        L2fibNvePeers();
        ~L2fibNvePeers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibNvePeer; //type: L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer

        ydk::YList l2fib_nve_peer;
        
}; // L2vpnForwarding::Nodes::Node::L2fibNvePeers


class L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer : public ydk::Entity
{
    public:
        L2fibNvePeer();
        ~L2fibNvePeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xc_uint_id; //type: string
        ydk::YLeaf vniid; //type: string
        ydk::YLeaf vtep_address; //type: string
        ydk::YLeaf nve_if; //type: string
        ydk::YLeaf vn_iid; //type: uint32
        ydk::YLeaf vte_pip; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer


class L2vpnForwarding::Nodes::Node::L2fibMmrps : public ydk::Entity
{
    public:
        L2fibMmrps();
        ~L2fibMmrps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMmrp; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp

        ydk::YList l2fib_mmrp;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMmrps


class L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp : public ydk::Entity
{
    public:
        L2fibMmrp();
        ~L2fibMmrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf xid_count; //type: uint16
        ydk::YLeaf platform_data_length; //type: uint8
        ydk::YLeaf platform_data; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        class MulticastBaseInformation; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::MulticastBaseInformation
        class SourcePrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix
        class DestinationPrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix
        class ForwardStats; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats
        class IrbInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix> source_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo> irb_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp


class L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::MulticastBaseInformation : public ydk::Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::MulticastBaseInformation


class L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix


class L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_3_ */

