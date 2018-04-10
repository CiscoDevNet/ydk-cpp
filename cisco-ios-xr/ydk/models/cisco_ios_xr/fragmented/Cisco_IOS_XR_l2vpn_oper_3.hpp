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


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper : public ydk::Entity
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
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation : public ydk::Entity
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
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceInfo();
        ~L2FibMainInterfaceInstanceInfo();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareIngressDetailInfo();
        ~L2FibMainInterfaceInstanceHardwareIngressDetailInfo();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareEgressInfo();
        ~L2FibMainInterfaceInstanceHardwareEgressInfo();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareIngressInfo();
        ~L2FibMainInterfaceInstanceHardwareIngressInfo();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePorts();
        ~L2FibMainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMainInterfaceInstanceBridgePort; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort> > l2fib_main_interface_instance_bridge_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePort();
        ~L2FibMainInterfaceInstanceBridgePort();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareEgressDetailInfo();
        ~L2FibMainInterfaceInstanceHardwareEgressDetailInfo();

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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceInfo();
        ~L2FibMainInterfaceInfo();

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
        class InstanceId; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId
        class InstancesState; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState
        class InstancesProvisioned; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState> > instances_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned> > instances_provisioned;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstanceId


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesState


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo::InstancesProvisioned


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState> > instances_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned> > instances_provisioned;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::BridgePortCountInstance> > bridge_port_count_instance;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstanceId


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesState


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::InstancesProvisioned


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


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
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

        class RemoteSplitHorizonGroupLabel; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceHardwareIngressDetailInfo();
        ~L2FibMainInterfaceHardwareIngressDetailInfo();

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
        class InstanceId; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId
        class InstancesState; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState
        class InstancesProvisioned; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned
        class BridgePortCountInstance; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance
        class EthernetSegmentIdentifier; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier
        class EvpnShgRemoteInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState> > instances_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned> > instances_provisioned;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance> > bridge_port_count_instance;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstanceId


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesState


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::InstancesProvisioned


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::BridgePortCountInstance


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EthernetSegmentIdentifier


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo : public ydk::Entity
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

        class RemoteSplitHorizonGroupLabel; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo : public ydk::Entity
{
    public:
        L2FibMainInterfaceHardwareIngressInfo();
        ~L2FibMainInterfaceHardwareIngressInfo();

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
        class InstanceId; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId
        class InstancesState; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState
        class InstancesProvisioned; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId> > instance_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState> > instances_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned> > instances_provisioned;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstanceId


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesState


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo::InstancesProvisioned


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails : public ydk::Entity
{
    public:
        L2FibMstpDetails();
        ~L2FibMstpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMstpDetail; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail> > l2fib_mstp_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail : public ydk::Entity
{
    public:
        L2FibMstpDetail();
        ~L2FibMstpDetail();

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
        ydk::YLeaf msti; //type: int32
        ydk::YLeaf parent_interface_xr; //type: string
        ydk::YLeaf msti_xr; //type: uint32
        ydk::YLeaf internal_msti; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base
        class BridgePortArray; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base> base;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray> > bridge_port_array;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::BridgePortArray


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions> l2tpv3_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions> l2tpv2_sessions;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingSummary> l2fib_g8032_ring_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceSummaries> l2fib_g8032_ring_instance_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032::L2FibG8032Rings::L2FibG8032Ring::L2FibG8032RingInstanceDetails> l2fib_g8032_ring_instance_details;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::BridgePortOperationalInfo> bridge_port_operational_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw> pw;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion::Core> core;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pbb::PbbUnion


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgePorts::L2FibBridgePort::Segment::Pw::PseudoWireUnion


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


class L2VpnForwarding::Nodes::Node::L2FibmacDetails : public ydk::Entity
{
    public:
        L2FibmacDetails();
        ~L2FibmacDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibmacDetail; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail> > l2fibmac_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail : public ydk::Entity
{
    public:
        L2FibmacDetail();
        ~L2FibmacDetail();

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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment : public ydk::Entity
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
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtx
        ydk::YLeaf esi_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf bp_ifh; //type: string
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacDetails::L2FibmacDetail::NextHop::Base


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


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts : public ydk::Entity
{
    public:
        L2FibMroutePorts();
        ~L2FibMroutePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMroutePort; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort> > l2fib_mroute_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort : public ydk::Entity
{
    public:
        L2FibMroutePort();
        ~L2FibMroutePort();

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
        class BaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation> base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix> source_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix> destination_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::BaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats : public ydk::Entity
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

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat : public ydk::Entity
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

        ydk::YLeaf data_type; //type: MgmtL2FibStatsData
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
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

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMroutePorts::L2FibMroutePort::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibSummary : public ydk::Entity
{
    public:
        L2FibSummary();
        ~L2FibSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XconnectSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary
        class NextHopSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary
        class L2TpDispositionSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary
        class BridgeDomainSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary
        class MacSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary
        class QueueSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary
        class EvpnSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary
        class GlobalCfg; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg
        class PtreeSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary
        class PwGroupSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary
        class PwheMpSummary; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary> xconnect_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary> next_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary> l2tp_disposition_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary> bridge_domain_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary> mac_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary> queue_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary> evpn_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg> global_cfg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary> ptree_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary> pw_group_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary> pwhe_mp_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::XconnectSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary : public ydk::Entity
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

        class MplsIl; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp
        class Lsm; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm
        class P2MpTunnels; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl> mpls_il;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm> lsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels> p2mp_tunnels;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::MplsIl


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Mpls


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp : public ydk::Entity
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

        ydk::YLeaf next_hop_count; //type: uint32
        ydk::YLeaf bound_next_hop_count; //type: uint32
        ydk::YLeaf unbound_next_hop_count; //type: uint32
        ydk::YLeaf next_hop_pending_registration_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::Lsm


class L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels : public ydk::Entity
{
    public:
        P2MpTunnels();
        ~P2MpTunnels();

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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::NextHopSummary::P2MpTunnels


class L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary : public ydk::Entity
{
    public:
        L2TpDispositionSummary();
        ~L2TpDispositionSummary();

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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::L2TpDispositionSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::BridgeDomainSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::MacSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::QueueSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::EvpnSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg : public ydk::Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg


class L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibSummary::GlobalCfg::Base


class L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PtreeSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PwGroupSummary


class L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibSummary::PwheMpSummary


class L2VpnForwarding::Nodes::Node::L2FibNvePeers : public ydk::Entity
{
    public:
        L2FibNvePeers();
        ~L2FibNvePeers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibNvePeer; //type: L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer> > l2fib_nve_peer;
        
}; // L2VpnForwarding::Nodes::Node::L2FibNvePeers


class L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer : public ydk::Entity
{
    public:
        L2FibNvePeer();
        ~L2FibNvePeer();

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

}; // L2VpnForwarding::Nodes::Node::L2FibNvePeers::L2FibNvePeer


class L2VpnForwarding::Nodes::Node::L2FibMmrps : public ydk::Entity
{
    public:
        L2FibMmrps();
        ~L2FibMmrps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMmrp; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp> > l2fib_mmrp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp : public ydk::Entity
{
    public:
        L2FibMmrp();
        ~L2FibMmrp();

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
        class MulticastBaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats
        class IrbInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix> source_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::IrbInfo> irb_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation : public ydk::Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix : public ydk::Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMmrps::L2FibMmrp::DestinationPrefix


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_3_ */

