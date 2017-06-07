#ifndef _CISCO_IOS_XR_L2VPN_OPER_2_
#define _CISCO_IOS_XR_L2VPN_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation : public Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_limit; //type: uint32
        YLeaf number_of_macs; //type: uint32
        YLeaf admin_disabled; //type: boolean
        YLeaf flooding_disabled; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotifyEnum
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf mac_secure_action; //type: MgmtL2FibMacSecActionEnum
        YLeaf is_mac_secure_accept_shutdown; //type: boolean
        YLeaf mac_aging_type; //type: boolean
        YLeaf storm_control_unicast_enabled; //type: boolean
        YLeaf storm_control_broadcast_enabled; //type: boolean
        YLeaf storm_control_multicast_enabled; //type: boolean
        YLeaf storm_control_unicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_broadcast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_multicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf dhcp_enabled; //type: boolean
        YLeaf dhcp_trusted; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_ipsg_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        YLeaf igmp_snoop_enabled; //type: boolean
        YLeaf igmp_snoop_profile_enabled; //type: boolean
        YLeaf igmp_flood_forward_enabled; //type: boolean
        YLeaf igmp_mroute_port_enabled; //type: boolean
        YLeaf igmp_route_guard_enabled; //type: boolean
        YLeaf mld_snoop_enabled; //type: boolean
        YLeaf mld_snoop_profile_enabled; //type: boolean
        YLeaf mld_flood_forward_enabled; //type: boolean
        YLeaf mld_mroute_port_enabled; //type: boolean
        YLeaf mld_route_guard_enabled; //type: boolean
        YLeaf stp_participating; //type: boolean
        YLeaf bvi_configured; //type: boolean
        YLeaf is_bvi_up; //type: boolean
        YLeaf is_vni_enabled; //type: boolean
        YLeaf is_evpn_enabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf host_routing_enabled; //type: boolean
        YLeaf is_pbbevpn_enabled; //type: boolean
        YLeaf is_swmac_learning; //type: boolean
        YLeaf is_evpn_flow_label; //type: boolean
        YLeaf is_evpn_cw_disable; //type: boolean
        YLeaf msti; //type: uint32
        YLeaf is_p2mp_pw_enabled; //type: boolean
        YLeaf is_igmp_snoop_enabled; //type: boolean
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature : public Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf feature_type; //type: L2FibFeatureEnum
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp : public Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ptree_type; //type: L2VpnPtreeEnum
        YLeaf lsm_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf p2mp_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string
        YLeaf ptree_owner_lmrib; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs : public Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fxs_id; //type: uint32
        YLeaf segment_type; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries : public Entity
{
    public:
        L2FibMmrpSummaries();
        ~L2FibMmrpSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMmrpSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary> > l2fib_mmrp_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries


class L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary : public Entity
{
    public:
        L2FibMmrpSummary();
        ~L2FibMmrpSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_group_name; //type: string
        YLeaf bd_name; //type: string
        YLeaf bridge_domain_name; //type: string
        YLeaf bridge_domain_id; //type: uint32
        YLeaf multicast_update; //type: uint32
        YLeaf multicast_update_dropped; //type: uint32
        YLeaf number_of_routes; //type: uint32
        YLeaf number_of_routes_with_ole_offload; //type: uint32
        YLeaf number_of_mroute_add; //type: uint32
        YLeaf number_mroute_deleted; //type: uint32
        YLeaf number_mroutes_deleted_all; //type: uint32
        YLeaf number_mroute_delete_drop; //type: uint32
        YLeaf number_mroute_all_delete_drop; //type: uint32
        YLeaf number_xid_add; //type: uint32
        YLeaf number_xid_deleted; //type: uint32
        YLeaf number_of_xid; //type: uint32
        YLeaf stale_deleted; //type: uint32
        YLeaf stale_xid_deleted; //type: uint32
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message> > message;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary


class L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message : public Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf messgae_count; //type: uint32
        YLeaf time; //type: string
        YLeaf information1; //type: uint32
        YLeaf information2; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries::L2FibMmrpSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibPwGroups : public Entity
{
    public:
        L2FibPwGroups();
        ~L2FibPwGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibPwGroup; //type: L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup> > l2fib_pw_group;
        
}; // L2VpnForwarding::Nodes::Node::L2FibPwGroups


class L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup : public Entity
{
    public:
        L2FibPwGroup();
        ~L2FibPwGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf group_id; //type: int32
        YLeaf tunnel_if_handle; //type: int32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf pw_list_count; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibPwGroups::L2FibPwGroup


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses : public Entity
{
    public:
        L2FibEvpnInclMCastHardwareIngresses();
        ~L2FibEvpnInclMCastHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnInclMCastHardwareIngress; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress> > l2fib_evpn_incl_m_cast_hardware_ingress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress : public Entity
{
    public:
        L2FibEvpnInclMCastHardwareIngress();
        ~L2FibEvpnInclMCastHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList : public Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_domain_name; //type: string
        YLeaf bridge_domain_id; //type: uint32
        YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles : public Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf is_bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_ipv6_addr; //type: string
        YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses::L2FibEvpnInclMCastHardwareIngress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails : public Entity
{
    public:
        L2FibDhcpBindingDetails();
        ~L2FibDhcpBindingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibDhcpBindingDetail; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail> > l2fib_dhcp_binding_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail : public Entity
{
    public:
        L2FibDhcpBindingDetail();
        ~L2FibDhcpBindingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xcid; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf address; //type: string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base
        class Port; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port> port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Ac


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf next_hop_address; //type: string
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails::L2FibDhcpBindingDetail::Port::Pw


class L2VpnForwarding::Nodes::Node::L2FibxCons : public Entity
{
    public:
        L2FibxCons();
        ~L2FibxCons();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibxCon; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon> > l2fibx_con;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon : public Entity
{
    public:
        L2FibxCon();
        ~L2FibxCon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xcid; //type: string
        YLeaf xcon_name; //type: string
        YLeaf bound; //type: boolean
        YLeaf switching_type; //type: MgmtL2FibSwitchingEnum
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2> segment2;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1 : public Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn
        class MonitorSession; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb : public Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bound; //type: boolean
        YLeaf forward_class; //type: uint8
        YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion : public Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pbb_type; //type: MgmtL2FibBridgeEnum
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_configured; //type: boolean
        YLeaf mac; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core : public Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srcip; //type: string
        YLeaf mcastip; //type: string
        YLeaf bound; //type: boolean
        YLeaf parent_if; //type: string
        YLeaf encap; //type: uint32
        YLeaf udp_port; //type: uint32
        YLeaf source_vtep_if; //type: string
        YLeaf any_cast_ip; //type: string
        YLeaf anycast_mcast_ip; //type: string
        YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bound; //type: boolean
        YLeaf evi; //type: uint32
        YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession : public Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xcid; //type: uint32
        YLeaf session_name; //type: string
        YLeaf hardware_information; //type: string
        YLeaf bound; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2 : public Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp> bp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs> fxs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp : public Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_id; //type: uint32
        YLeaf shg_id; //type: uint32
        YLeaf msti_pointer; //type: uint32
        YLeaf segment_type; //type: uint8
        YLeaf mvrp_sequence_number; //type: uint16
        YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper> oper;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp> p2mp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper : public Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation : public Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_limit; //type: uint32
        YLeaf number_of_macs; //type: uint32
        YLeaf admin_disabled; //type: boolean
        YLeaf flooding_disabled; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotifyEnum
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf mac_secure_action; //type: MgmtL2FibMacSecActionEnum
        YLeaf is_mac_secure_accept_shutdown; //type: boolean
        YLeaf mac_aging_type; //type: boolean
        YLeaf storm_control_unicast_enabled; //type: boolean
        YLeaf storm_control_broadcast_enabled; //type: boolean
        YLeaf storm_control_multicast_enabled; //type: boolean
        YLeaf storm_control_unicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_broadcast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_multicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf dhcp_enabled; //type: boolean
        YLeaf dhcp_trusted; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_ipsg_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        YLeaf igmp_snoop_enabled; //type: boolean
        YLeaf igmp_snoop_profile_enabled; //type: boolean
        YLeaf igmp_flood_forward_enabled; //type: boolean
        YLeaf igmp_mroute_port_enabled; //type: boolean
        YLeaf igmp_route_guard_enabled; //type: boolean
        YLeaf mld_snoop_enabled; //type: boolean
        YLeaf mld_snoop_profile_enabled; //type: boolean
        YLeaf mld_flood_forward_enabled; //type: boolean
        YLeaf mld_mroute_port_enabled; //type: boolean
        YLeaf mld_route_guard_enabled; //type: boolean
        YLeaf stp_participating; //type: boolean
        YLeaf bvi_configured; //type: boolean
        YLeaf is_bvi_up; //type: boolean
        YLeaf is_vni_enabled; //type: boolean
        YLeaf is_evpn_enabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf host_routing_enabled; //type: boolean
        YLeaf is_pbbevpn_enabled; //type: boolean
        YLeaf is_swmac_learning; //type: boolean
        YLeaf is_evpn_flow_label; //type: boolean
        YLeaf is_evpn_cw_disable; //type: boolean
        YLeaf msti; //type: uint32
        YLeaf is_p2mp_pw_enabled; //type: boolean
        YLeaf is_igmp_snoop_enabled; //type: boolean
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature : public Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf feature_type; //type: L2FibFeatureEnum
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp : public Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ptree_type; //type: L2VpnPtreeEnum
        YLeaf lsm_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf p2mp_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string
        YLeaf ptree_owner_lmrib; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs : public Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fxs_id; //type: uint32
        YLeaf segment_type; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxCons::L2FibxCon::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces : public Entity
{
    public:
        L2FibMainInterfaces();
        ~L2FibMainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMainInterface; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface> > l2fib_main_interface;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface : public Entity
{
    public:
        L2FibMainInterface();
        ~L2FibMainInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface_id; //type: int32
        YLeaf main_interface_type; //type: EvpnMainInterfaceEnum
        class L2FibMainInterfaceHardwareEgressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo
        class L2FibMainInterfaceHardwareEgressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo
        class L2FibMainInterfaceInstances; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances
        class L2FibMainInterfaceInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo
        class L2FibMainInterfaceDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo
        class L2FibMainInterfaceHardwareIngressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo
        class L2FibMainInterfaceHardwareIngressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo> l2fib_main_interface_detail_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo> l2fib_main_interface_hardware_egress_detail_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo> l2fib_main_interface_hardware_egress_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo> l2fib_main_interface_hardware_ingress_detail_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo> l2fib_main_interface_hardware_ingress_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo> l2fib_main_interface_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances> l2fib_main_interface_instances;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo : public Entity
{
    public:
        L2FibMainInterfaceHardwareEgressDetailInfo();
        ~L2FibMainInterfaceHardwareEgressDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf mac; //type: string
        YLeaf esi_id; //type: uint16
        YLeaf evpn_shg_local_label; //type: uint32
        YLeafList instance_id; //type: list of  uint32
        YLeafList instances_state; //type: list of  L2FibMainIfInstanceStateEnum
        YLeafList instances_provisioned; //type: list of  boolean
        YLeafList bridge_port_count_instance; //type: list of  uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        class EvpnShgRemoteInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo : public Entity
{
    public:
        EvpnShgRemoteInfo();
        ~EvpnShgRemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteSplitHorizonGroupLabel; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo : public Entity
{
    public:
        L2FibMainInterfaceHardwareEgressInfo();
        ~L2FibMainInterfaceHardwareEgressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeafList instance_id; //type: list of  uint32
        YLeafList instances_state; //type: list of  L2FibMainIfInstanceStateEnum
        YLeafList instances_provisioned; //type: list of  boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareEgressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances : public Entity
{
    public:
        L2FibMainInterfaceInstances();
        ~L2FibMainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMainInterfaceInstance; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance> > l2fib_main_interface_instance;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance : public Entity
{
    public:
        L2FibMainInterfaceInstance();
        ~L2FibMainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance; //type: int32
        class L2FibMainInterfaceInstanceDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo
        class L2FibMainInterfaceInstanceBridgePortDetails; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails
        class L2FibMainInterfaceInstanceInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo
        class L2FibMainInterfaceInstanceHardwareIngressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo
        class L2FibMainInterfaceInstanceHardwareEgressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo
        class L2FibMainInterfaceInstanceHardwareIngressInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo
        class L2FibMainInterfaceInstanceBridgePorts; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts
        class L2FibMainInterfaceInstanceHardwareEgressDetailInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails> l2fib_main_interface_instance_bridge_port_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts> l2fib_main_interface_instance_bridge_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo> l2fib_main_interface_instance_detail_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo> l2fib_main_interface_instance_hardware_egress_detail_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo> l2fib_main_interface_instance_hardware_egress_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo> l2fib_main_interface_instance_hardware_ingress_detail_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo> l2fib_main_interface_instance_hardware_ingress_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo> l2fib_main_interface_instance_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo : public Entity
{
    public:
        L2FibMainInterfaceInstanceDetailInfo();
        ~L2FibMainInterfaceInstanceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf instance; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf bridge_port_count; //type: uint32
        YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails : public Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePortDetails();
        ~L2FibMainInterfaceInstanceBridgePortDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMainInterfaceInstanceBridgePortDetail; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail> > l2fib_main_interface_instance_bridge_port_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail : public Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePortDetail();
        ~L2FibMainInterfaceInstanceBridgePortDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_port; //type: string
        YLeaf bridge_port_id; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf bp_type; //type: uint8
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper> oper;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper : public Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation : public Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_limit; //type: uint32
        YLeaf number_of_macs; //type: uint32
        YLeaf admin_disabled; //type: boolean
        YLeaf flooding_disabled; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotifyEnum
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf mac_secure_action; //type: MgmtL2FibMacSecActionEnum
        YLeaf is_mac_secure_accept_shutdown; //type: boolean
        YLeaf mac_aging_type; //type: boolean
        YLeaf storm_control_unicast_enabled; //type: boolean
        YLeaf storm_control_broadcast_enabled; //type: boolean
        YLeaf storm_control_multicast_enabled; //type: boolean
        YLeaf storm_control_unicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_broadcast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_multicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf dhcp_enabled; //type: boolean
        YLeaf dhcp_trusted; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_ipsg_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        YLeaf igmp_snoop_enabled; //type: boolean
        YLeaf igmp_snoop_profile_enabled; //type: boolean
        YLeaf igmp_flood_forward_enabled; //type: boolean
        YLeaf igmp_mroute_port_enabled; //type: boolean
        YLeaf igmp_route_guard_enabled; //type: boolean
        YLeaf mld_snoop_enabled; //type: boolean
        YLeaf mld_snoop_profile_enabled; //type: boolean
        YLeaf mld_flood_forward_enabled; //type: boolean
        YLeaf mld_mroute_port_enabled; //type: boolean
        YLeaf mld_route_guard_enabled; //type: boolean
        YLeaf stp_participating; //type: boolean
        YLeaf bvi_configured; //type: boolean
        YLeaf is_bvi_up; //type: boolean
        YLeaf is_vni_enabled; //type: boolean
        YLeaf is_evpn_enabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf host_routing_enabled; //type: boolean
        YLeaf is_pbbevpn_enabled; //type: boolean
        YLeaf is_swmac_learning; //type: boolean
        YLeaf is_evpn_flow_label; //type: boolean
        YLeaf is_evpn_cw_disable; //type: boolean
        YLeaf msti; //type: uint32
        YLeaf is_p2mp_pw_enabled; //type: boolean
        YLeaf is_igmp_snoop_enabled; //type: boolean
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature : public Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf feature_type; //type: L2FibFeatureEnum
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePortDetails::L2FibMainInterfaceInstanceBridgePortDetail::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo : public Entity
{
    public:
        L2FibMainInterfaceInstanceInfo();
        ~L2FibMainInterfaceInstanceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf instance; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf bridge_port_count; //type: uint32
        YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo : public Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareIngressDetailInfo();
        ~L2FibMainInterfaceInstanceHardwareIngressDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf instance; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf bridge_port_count; //type: uint32
        YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo : public Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareEgressInfo();
        ~L2FibMainInterfaceInstanceHardwareEgressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf instance; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf bridge_port_count; //type: uint32
        YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo : public Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareIngressInfo();
        ~L2FibMainInterfaceInstanceHardwareIngressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf instance; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf bridge_port_count; //type: uint32
        YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareIngressInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts : public Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePorts();
        ~L2FibMainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMainInterfaceInstanceBridgePort; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort> > l2fib_main_interface_instance_bridge_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort : public Entity
{
    public:
        L2FibMainInterfaceInstanceBridgePort();
        ~L2FibMainInterfaceInstanceBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_port; //type: string
        YLeaf bridge_port_id; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf bp_type; //type: uint8

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceBridgePorts::L2FibMainInterfaceInstanceBridgePort


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo : public Entity
{
    public:
        L2FibMainInterfaceInstanceHardwareEgressDetailInfo();
        ~L2FibMainInterfaceInstanceHardwareEgressDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf instance; //type: uint32
        YLeaf state; //type: L2FibMainIfInstanceStateEnum
        YLeaf bridge_port_count; //type: uint32
        YLeaf instance_provisioned; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInstances::L2FibMainInterfaceInstance::L2FibMainInterfaceInstanceHardwareEgressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo : public Entity
{
    public:
        L2FibMainInterfaceInfo();
        ~L2FibMainInterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeafList instance_id; //type: list of  uint32
        YLeafList instances_state; //type: list of  L2FibMainIfInstanceStateEnum
        YLeafList instances_provisioned; //type: list of  boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo : public Entity
{
    public:
        L2FibMainInterfaceDetailInfo();
        ~L2FibMainInterfaceDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf mac; //type: string
        YLeaf esi_id; //type: uint16
        YLeaf evpn_shg_local_label; //type: uint32
        YLeafList instance_id; //type: list of  uint32
        YLeafList instances_state; //type: list of  L2FibMainIfInstanceStateEnum
        YLeafList instances_provisioned; //type: list of  boolean
        YLeafList bridge_port_count_instance; //type: list of  uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        class EvpnShgRemoteInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo : public Entity
{
    public:
        EvpnShgRemoteInfo();
        ~EvpnShgRemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteSplitHorizonGroupLabel; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo : public Entity
{
    public:
        L2FibMainInterfaceHardwareIngressDetailInfo();
        ~L2FibMainInterfaceHardwareIngressDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeaf mac; //type: string
        YLeaf esi_id; //type: uint16
        YLeaf evpn_shg_local_label; //type: uint32
        YLeafList instance_id; //type: list of  uint32
        YLeafList instances_state; //type: list of  L2FibMainIfInstanceStateEnum
        YLeafList instances_provisioned; //type: list of  boolean
        YLeafList bridge_port_count_instance; //type: list of  uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        class EvpnShgRemoteInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo> > evpn_shg_remote_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo : public Entity
{
    public:
        EvpnShgRemoteInfo();
        ~EvpnShgRemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteSplitHorizonGroupLabel; //type: L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel> remote_split_horizon_group_label;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressDetailInfo::EvpnShgRemoteInfo::RemoteSplitHorizonGroupLabel


class L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo : public Entity
{
    public:
        L2FibMainInterfaceHardwareIngressInfo();
        ~L2FibMainInterfaceHardwareIngressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface; //type: string
        YLeaf main_if_type; //type: uint8
        YLeaf virtual_if_name; //type: string
        YLeafList instance_id; //type: list of  uint32
        YLeafList instances_state; //type: list of  L2FibMainIfInstanceStateEnum
        YLeafList instances_provisioned; //type: list of  boolean

}; // L2VpnForwarding::Nodes::Node::L2FibMainInterfaces::L2FibMainInterface::L2FibMainInterfaceHardwareIngressInfo


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails : public Entity
{
    public:
        L2FibMstpDetails();
        ~L2FibMstpDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMstpDetail; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail> > l2fib_mstp_detail;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail : public Entity
{
    public:
        L2FibMstpDetail();
        ~L2FibMstpDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf parent_interface; //type: string
        YLeaf msti; //type: int32
        YLeaf parent_interface_xr; //type: string
        YLeaf msti_xr; //type: uint32
        YLeaf internal_msti; //type: uint32
        YLeaf state; //type: uint32
        YLeaf learn_key; //type: uint8
        YLeafList bridge_port_array; //type: list of  string
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail


class L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMstpDetails::L2FibMstpDetail::Base


class L2VpnForwarding::Nodes::Node::L2FibL2Tp : public Entity
{
    public:
        L2FibL2Tp();
        ~L2FibL2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Tpv3Sessions; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions
        class L2Tpv2Sessions; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv2Sessions> l2tpv2_sessions;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions> l2tpv3_sessions;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp


class L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions : public Entity
{
    public:
        L2Tpv3Sessions();
        ~L2Tpv3Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Tpv3Session; //type: L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions::L2Tpv3Session> > l2tpv3_session;
        
}; // L2VpnForwarding::Nodes::Node::L2FibL2Tp::L2Tpv3Sessions


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_2_ */

