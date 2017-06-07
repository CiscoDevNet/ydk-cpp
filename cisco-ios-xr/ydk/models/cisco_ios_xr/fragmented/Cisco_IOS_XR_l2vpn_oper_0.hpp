#ifndef _CISCO_IOS_XR_L2VPN_OPER_0_
#define _CISCO_IOS_XR_L2VPN_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

class L2VpnForwarding : public Entity
{
    public:
        L2VpnForwarding();
        ~L2VpnForwarding();

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

        class Nodes; //type: L2VpnForwarding::Nodes

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes> nodes;
        
}; // L2VpnForwarding


class L2VpnForwarding::Nodes : public Entity
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

        class Node; //type: L2VpnForwarding::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node> > node;
        
}; // L2VpnForwarding::Nodes


class L2VpnForwarding::Nodes::Node : public Entity
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

        YLeaf node_id; //type: string
        class L2FibxConLocals; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals
        class L2FibMrouteSummaries; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries
        class L2FibMessageSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary
        class L2FibMroutes; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes
        class PbbBmacSa; //type: L2VpnForwarding::Nodes::Node::PbbBmacSa
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames> l2fib_bridge_domain_names;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains> l2fib_bridge_domains;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgePorts> l2fib_bridge_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount> l2fib_dhcp_binding_count;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails> l2fib_dhcp_binding_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries> l2fib_dhcp_binding_summaries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses> l2fib_evpn_incl_m_cast_hardware_egresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses> l2fib_evpn_incl_m_cast_hardware_ingresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts> l2fib_evpn_incl_m_casts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs> l2fib_evpn_ip4macs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs> l2fib_evpn_ip6macs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibG8032> l2fib_g8032;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibL2Tp> l2fib_l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMainInterfaces> l2fib_main_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary> l2fib_message_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries> l2fib_mmrp_summaries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMmrps> l2fib_mmrps;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons> l2fib_mon_sess_x_cons;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S> l2fib_mroute_ipv6s;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutePorts> l2fib_mroute_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries> l2fib_mroute_summaries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes> l2fib_mroutes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpDetails> l2fib_mstp_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpSummaries> l2fib_mstp_summaries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibNvePeers> l2fib_nve_peers;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp> l2fib_p2mp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwGroups> l2fib_pw_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts> l2fib_pwhe_main_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibResourceAvailability> l2fib_resource_availability;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibSummary> l2fib_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacDetails> l2fibmac_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses> l2fibmac_hardware_egresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses> l2fibmac_hardware_ingresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S> l2fibx_con_l2tpv2s;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals> l2fibx_con_locals;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxCons> l2fibx_cons;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::PbbBmacSa> pbb_bmac_sa;
        
}; // L2VpnForwarding::Nodes::Node


class L2VpnForwarding::Nodes::Node::L2FibxConLocals : public Entity
{
    public:
        L2FibxConLocals();
        ~L2FibxConLocals();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibxConLocal; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal> > l2fibx_con_local;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal : public Entity
{
    public:
        L2FibxConLocal();
        ~L2FibxConLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf xcon_name; //type: string
        YLeaf bound; //type: boolean
        YLeaf switching_type; //type: MgmtL2FibSwitchingEnum
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2> segment2;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1 : public Entity
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
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn
        class MonitorSession; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion : public Entity
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
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion : public Entity
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
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp : public Entity
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public Entity
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire : public Entity
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
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2 : public Entity
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
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp> bp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs> fxs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper> oper;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp> p2mp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper : public Entity
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
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation : public Entity
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
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature : public Entity
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
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion : public Entity
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
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp : public Entity
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public Entity
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire : public Entity
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
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries : public Entity
{
    public:
        L2FibMrouteSummaries();
        ~L2FibMrouteSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMrouteSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary> > l2fib_mroute_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary : public Entity
{
    public:
        L2FibMrouteSummary();
        ~L2FibMrouteSummary();

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
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message> > message;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary : public Entity
{
    public:
        L2FibMessageSummary();
        ~L2FibMessageSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventHistory; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory
        class RoundTripDelay; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory> event_history;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message> > message;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay> round_trip_delay;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory : public Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_neighbor_entry; //type: uint16
        YLeafList extra_information1; //type: list of  uint32
        YLeafList extra_information2; //type: list of  uint32
        class EventEntry; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry> > event_entry;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry : public Entity
{
    public:
        EventEntry();
        ~EventEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_time; //type: string
        YLeaf event_type; //type: uint8
        YLeaf event_many; //type: boolean
        YLeaf event_sticky; //type: boolean
        YLeaf event_flags; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay : public Entity
{
    public:
        RoundTripDelay();
        ~RoundTripDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtd_max_obj_type; //type: uint32
        class BdxcRtd; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd
        class AgingRtd; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd
        class PuntRtd; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd
        class LockRtd; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd
        class PlatformInitRtd; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd
        class Create; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create
        class Modify; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify
        class Delete_; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_
        class Bind; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind
        class Unbind; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind
        class MacFlush; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush
        class Pirtd; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd> aging_rtd;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd> bdxc_rtd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind> > bind;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create> > create;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_> > delete_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd> lock_rtd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush> > mac_flush;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify> > modify;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd> > pirtd;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd> platform_init_rtd;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd> punt_rtd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind> > unbind;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd : public Entity
{
    public:
        BdxcRtd();
        ~BdxcRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd : public Entity
{
    public:
        AgingRtd();
        ~AgingRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd : public Entity
{
    public:
        PuntRtd();
        ~PuntRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd : public Entity
{
    public:
        LockRtd();
        ~LockRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd : public Entity
{
    public:
        PlatformInitRtd();
        ~PlatformInitRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create : public Entity
{
    public:
        Create();
        ~Create();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify : public Entity
{
    public:
        Modify();
        ~Modify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_ : public Entity
{
    public:
        Delete_();
        ~Delete_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind : public Entity
{
    public:
        Bind();
        ~Bind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind : public Entity
{
    public:
        Unbind();
        ~Unbind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush : public Entity
{
    public:
        MacFlush();
        ~MacFlush();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd : public Entity
{
    public:
        Pirtd();
        ~Pirtd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_pd_update; //type: uint32
        YLeaf number_pd_update_zero; //type: uint32
        YLeaf minimum_round_trip_delay; //type: uint64
        YLeaf maximum_round_trip_delay; //type: uint64
        YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibMroutes : public Entity
{
    public:
        L2FibMroutes();
        ~L2FibMroutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibMroute; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute> > l2fib_mroute;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute : public Entity
{
    public:
        L2FibMroute();
        ~L2FibMroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string
        YLeaf group; //type: string
        YLeaf bd_group_name; //type: string
        YLeaf bd_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf xid_count; //type: uint16
        YLeaf platform_data_length; //type: uint8
        YLeaf platform_data; //type: string
        YLeaf hardware_information; //type: string
        YLeaf bridge_domain_name; //type: string
        class MulticastBaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats
        class IrbInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix> destination_prefix;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats> forward_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo> irb_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix> source_prefix;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation : public Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix : public Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix : public Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats : public Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat : public Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibStatsDataEnum
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast : public Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo : public Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mxid_ac_interface_handle; //type: string
        YLeaf mxid_pw_id; //type: uint32
        YLeaf mxid_next_hop_address; //type: string
        YLeaf irb_plat_data_len; //type: uint16
        YLeafList irb_plat_data; //type: list of  uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo


class L2VpnForwarding::Nodes::Node::PbbBmacSa : public Entity
{
    public:
        PbbBmacSa();
        ~PbbBmacSa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured; //type: boolean
        YLeaf mac; //type: string
        YLeaf chassis_mac; //type: string

}; // L2VpnForwarding::Nodes::Node::PbbBmacSa


class L2VpnForwarding::Nodes::Node::L2FibP2Mp : public Entity
{
    public:
        L2FibP2Mp();
        ~L2FibP2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ptrees; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees> ptrees;
        
}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp


class L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees : public Entity
{
    public:
        Ptrees();
        ~Ptrees();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ptree; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree> > ptree;
        
}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees


class L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree : public Entity
{
    public:
        Ptree();
        ~Ptree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ptree_type; //type: L2Vpnp2MpPtreeEnum
        YLeaf lsm_id; //type: int32
        YLeaf tunnel_id; //type: int32
        YLeaf p2mp_id; //type: int32
        YLeaf extended_tunnel_id; //type: int32
        YLeaf lsm_id_xr; //type: uint32
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf p2mp_id_xr; //type: uint32
        YLeaf extended_tunnel_id_xr; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses : public Entity
{
    public:
        L2FibEvpnInclMCastHardwareEgresses();
        ~L2FibEvpnInclMCastHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnInclMCastHardwareEgress; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress> > l2fib_evpn_incl_m_cast_hardware_egress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress : public Entity
{
    public:
        L2FibEvpnInclMCastHardwareEgress();
        ~L2FibEvpnInclMCastHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles : public Entity
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

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public Entity
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
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses : public Entity
{
    public:
        L2FibmacHardwareIngresses();
        ~L2FibmacHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibmacHardwareIngress; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress> > l2fibmac_hardware_ingress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress : public Entity
{
    public:
        L2FibmacHardwareIngress();
        ~L2FibmacHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf group_name; //type: string
        YLeaf name; //type: string
        YLeaf platform_is_hw_learn; //type: uint8
        YLeaf node_id; //type: string
        YLeaf bridge_domain_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf bmac_configured; //type: boolean
        YLeaf vni_l3_flag; //type: boolean
        YLeaf pbb_bmac; //type: string
        YLeaf l3_encapsulationvlan_id; //type: uint16
        YLeaf next_hop_valid; //type: boolean
        YLeaf peer_vtep_ip; //type: string
        YLeaf flag_extension; //type: uint16
        YLeaf vni; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx> evpn_ctx;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment : public Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibDataEnum
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni> vni;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb : public Entity
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

        YLeaf xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni : public Entity
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

        YLeaf xcid; //type: uint32
        YLeaf parent_if; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn : public Entity
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

        YLeaf xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx : public Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtxEnum
        YLeaf esi_id; //type: uint16
        YLeaf local_label; //type: uint32
        YLeaf bp_ifh; //type: string
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop : public Entity
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs : public Entity
{
    public:
        L2FibEvpnIp4Macs();
        ~L2FibEvpnIp4Macs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibEvpnIp4Mac; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac> > l2fib_evpn_ip4mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac : public Entity
{
    public:
        L2FibEvpnIp4Mac();
        ~L2FibEvpnIp4Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bdid; //type: int32
        YLeaf ip_address; //type: string
        YLeaf is_local; //type: boolean
        YLeaf mac_address; //type: string
        YLeaf bdid_xr; //type: uint32
        YLeaf mac_address_xr; //type: string
        YLeaf arp_nd_sync_pending; //type: boolean
        YLeaf arp_nd_probe_pending; //type: boolean
        YLeaf arp_nd_delete_pending; //type: boolean
        YLeaf is_local_xr; //type: boolean
        class IpAddressXr; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr> ip_address_xr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr : public Entity
{
    public:
        IpAddressXr();
        ~IpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr_type; //type: L2FibIpAddrEnum
        YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr


class L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts : public Entity
{
    public:
        L2FibPwheMainPorts();
        ~L2FibPwheMainPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibPwheMainPort; //type: L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort> > l2fib_pwhe_main_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts


class L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort : public Entity
{
    public:
        L2FibPwheMainPort();
        ~L2FibPwheMainPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf next_hop_valid; //type: boolean
        YLeaf next_hop_address; //type: string
        YLeaf pseudo_wire_type; //type: uint32
        YLeaf generic_interface_list_id; //type: uint32
        YLeaf internal_label; //type: uint32
        YLeaf remote_label; //type: uint32
        YLeaf control_word_enabled; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort


class L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount : public Entity
{
    public:
        L2FibDhcpBindingCount();
        ~L2FibDhcpBindingCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bindings; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains : public Entity
{
    public:
        L2FibBridgeDomains();
        ~L2FibBridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2FibBridgeDomain; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain> > l2fib_bridge_domain;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain : public Entity
{
    public:
        L2FibBridgeDomain();
        ~L2FibBridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bd_group_name; //type: string
        YLeaf bd_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf bridge_port_count; //type: uint32
        YLeaf number_of_hwmac; //type: uint32
        YLeaf number_of_swmac; //type: uint32
        YLeaf bridge_name; //type: string
        YLeaf shg_count; //type: uint32
        YLeaf bridge_type; //type: MgmtL2FibBridgeEnum
        YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper
        class BdPbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion
        class BviInfo; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo
        class P2MppwInfo; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion> bd_pbb_union;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo> bvi_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper> oper;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo> p2mppw_info;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base : public Entity
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


}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper : public Entity
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
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation : public Entity
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
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature : public Entity
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
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld : public Entity
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

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion : public Entity
{
    public:
        BdPbbUnion();
        ~BdPbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pbb_type; //type: MgmtL2FibBridgeEnum
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge : public Entity
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

        YLeaf i_sid; //type: uint32
        YLeaf core_bd_name; //type: string
        YLeaf mirp_lite_rx; //type: uint64
        YLeaf mirp_lite_tx; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core : public Entity
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

        YLeaf nber_edge_bd; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core

class L2FibMainIfInstanceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf forwarding;
        static const Enum::YLeaf blocked;
        static const Enum::YLeaf mac_learning;
        static const Enum::YLeaf nack;
        static const Enum::YLeaf forwarning_not_useful;
        static const Enum::YLeaf blocked_not_useful;
        static const Enum::YLeaf mac_learning_not_useful;
        static const Enum::YLeaf blocked_data_only;
        static const Enum::YLeaf multicast_pe2ce_blocked;
        static const Enum::YLeaf multicast_blocked;
        static const Enum::YLeaf port_state_unknown;

};

class L2VpnVniModeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_vni_mode_l2_dp;
        static const Enum::YLeaf l2vpn_vni_mode_l3_dp;
        static const Enum::YLeaf l2vpn_vni_mode_l2_cp;
        static const Enum::YLeaf l2vpn_vni_mode_l3_cp;

};

class L2FibStormControlRateUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf pps;
        static const Enum::YLeaf kb_ps;

};

class L2VpnAdVplsIdEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_vpls_id_none;
        static const Enum::YLeaf l2vpn_ad_vpls_id_auto;
        static const Enum::YLeaf l2vpn_ad_vpls_id_as;
        static const Enum::YLeaf l2vpn_ad_vpls_id_v4_addr;

};

class L2VpnBagMacLimitActionEnum : public Enum
{
    public:
        static const Enum::YLeaf limit_none;
        static const Enum::YLeaf limit_flood;
        static const Enum::YLeaf limit_no_flood;
        static const Enum::YLeaf limit_shutdown;
        static const Enum::YLeaf limit_no_config;

};

class L2VpnPwheIflistRepStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf pending;
        static const Enum::YLeaf success;
        static const Enum::YLeaf failed;
        static const Enum::YLeaf not_supported;

};

class L2FibL2TpSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf l2tpv2;

};

class L2VpnVirtualportStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_vp_state_undefined;
        static const Enum::YLeaf l2vpn_vp_state_up;
        static const Enum::YLeaf l2vpn_vp_state_down;

};

class L2VpnBridgeStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bridge_init;
        static const Enum::YLeaf bridge_up;
        static const Enum::YLeaf bridge_down;
        static const Enum::YLeaf bridge_admin_down;

};

class L2VpnBagStormControlRateUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf pps;
        static const Enum::YLeaf kb_ps;

};

class L2VpnProtectionRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_protection_primary;
        static const Enum::YLeaf l2vpn_protection_backup;

};

class L2VpnMstiStateEnum : public Enum
{
    public:
        static const Enum::YLeaf msti_bag_stp_port_state_forwarding;
        static const Enum::YLeaf msti_bag_stp_port_state_blocked;
        static const Enum::YLeaf msti_bag_stp_port_state_mac_learning;
        static const Enum::YLeaf msti_bag_stp_port_state_nack;
        static const Enum::YLeaf msti_bag_stp_port_state_forwarding_not_useful;
        static const Enum::YLeaf msti_bag_stp_port_state_blocked_not_useful;
        static const Enum::YLeaf msti_bag_stp_port_state_mac_learning_not_useful;
        static const Enum::YLeaf msti_bag_erp_port_state_blocked_data_only;
        static const Enum::YLeaf msti_bag_erp_port_state_evpn_mcast_pe2ce_blocked;
        static const Enum::YLeaf msti_bag_erp_port_state_evpn_port_state_mcast_blocked;

};

class MgmtL2FibDataEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_data_type_min;
        static const Enum::YLeaf mgmt_l2fib_data_type_xcon;
        static const Enum::YLeaf mgmt_l2fib_data_type_ac;
        static const Enum::YLeaf mgmt_l2fib_data_type_span;
        static const Enum::YLeaf mgmt_l2fib_data_type_atom;
        static const Enum::YLeaf mgmt_l2fib_data_type_pbb;
        static const Enum::YLeaf mgmt_l2fib_data_type_vni;
        static const Enum::YLeaf mgmt_l2fib_data_type_n_hop;
        static const Enum::YLeaf mgmt_l2fib_data_type_l2tp;
        static const Enum::YLeaf mgmt_l2fib_data_type_l2tpv2;
        static const Enum::YLeaf mgmt_l2fib_data_type_bridge;
        static const Enum::YLeaf mgmt_l2fib_data_type_bridge_shg;
        static const Enum::YLeaf mgmt_l2fib_data_type_bridge_port;
        static const Enum::YLeaf mgmt_l2fib_data_type_bridge_mac;
        static const Enum::YLeaf mgmt_l2fib_data_type_mcast_table;
        static const Enum::YLeaf mgmt_l2fib_data_type_mcast_leaf;
        static const Enum::YLeaf mgmt_l2fib_data_type_mcast_xid;
        static const Enum::YLeaf mgmt_l2fib_data_type_dhcp;
        static const Enum::YLeaf mgmt_l2fib_data_type_l2tp_ipv6_ts;
        static const Enum::YLeaf mgmt_l2fib_data_type_pwhe_mp;
        static const Enum::YLeaf mgmt_l2fib_data_type_evpn;
        static const Enum::YLeaf mgmt_l2fib_data_type_fxs;
        static const Enum::YLeaf mgmt_l2fib_data_type_max;

};

class IccpSmPortStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf unconfigured;
        static const Enum::YLeaf unsynchronized;
        static const Enum::YLeaf operational;
        static const Enum::YLeaf failed;
        static const Enum::YLeaf reverting;

};

class L2FibIpAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf v4;
        static const Enum::YLeaf v6;

};

class L2Vpnp2MpPtreeEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_te;
        static const Enum::YLeaf mldp;

};

class IflistRepStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf pending;
        static const Enum::YLeaf done;
        static const Enum::YLeaf not_supported;
        static const Enum::YLeaf failed;

};

class L2VpnPwClassControlWordEnum : public Enum
{
    public:
        static const Enum::YLeaf unset;
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class L2VpnL2TpTunnelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_l2tp_idle;
        static const Enum::YLeaf l2vpn_l2tp_wait_for_connecting;
        static const Enum::YLeaf l2vpn_l2tp_wait_for_connected;
        static const Enum::YLeaf l2vpn_l2tp_in_coming_call;
        static const Enum::YLeaf l2vpn_l2tp_connected;
        static const Enum::YLeaf l2vpn_l2tp_disconnected;

};

class L2VpnBridgeCoupledStateEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class MgmtL2FibBridgeEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_bridge_type_default;
        static const Enum::YLeaf mgmt_l2fib_bridge_type_pbb_edge;
        static const Enum::YLeaf mgmt_l2fib_bridge_type_pbb_core;

};

class L2VpnSignallingProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_sig_not_specified;
        static const Enum::YLeaf l2vpn_pw_sig_none;
        static const Enum::YLeaf l2vpn_pw_sig_l2tpv3;
        static const Enum::YLeaf l2vpn_pw_sig_l2tpv2;
        static const Enum::YLeaf l2vpn_pw_sig_ldp;
        static const Enum::YLeaf l2vpn_pw_sig_bgp;

};

class L2VpnEncapMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_encaps_not_specified;
        static const Enum::YLeaf l2vpn_pw_encaps_l2tpv3;
        static const Enum::YLeaf l2vpn_pw_encaps_l2tpv2;
        static const Enum::YLeaf l2vpn_pw_encaps_mpls;
        static const Enum::YLeaf l2vpn_pw_encaps_unknown;

};

class L2FibG8032ApsPortStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf l2fib_aps_port_state_unknown;
        static const Enum::YLeaf l2fib_aps_port_state_unbound;
        static const Enum::YLeaf l2fib_aps_port_state_bound;

};

class EvpnMainInterfaceEnum : public Enum
{
    public:
        static const Enum::YLeaf evpn_main_interface_ac;
        static const Enum::YLeaf evpn_main_interface_nve;
        static const Enum::YLeaf evpn_main_interface_ac_vfi;
        static const Enum::YLeaf evpn_main_interface_ac_pw;

};

class L2VpnVniEncapsEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_vni_encap_vxlan;
        static const Enum::YLeaf l2vpn_vni_encap_softgre;

};

class L2VpnTransportModeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_transport_mode_not_specified;
        static const Enum::YLeaf l2vpn_transport_mode_ethernet;
        static const Enum::YLeaf l2vpn_transport_mode_vlan;
        static const Enum::YLeaf l2vpn_transport_mode_vlan_passthrough;

};

class MgmtL2FibMacLimitActionEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_mac_limit_action_type_none;
        static const Enum::YLeaf mgmt_l2fib_mac_limit_action_type_flood;
        static const Enum::YLeaf mgmt_l2fib_mac_limit_action_type_no_flood;
        static const Enum::YLeaf mgmt_l2fib_mac_limit_action_type_shutdown;

};

class L2VpnAdLsdErrEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_none;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_rw_create_abort_lbl_alloc;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_lbl_alloc_abort_rw_create;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_lbl_alloc_abort_lbl_alloc;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_lbl_alloc_lbl_ctx_mismatch;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_rw_create_fpi_size_mismatch;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_rw_create_fpi_version_mismatch;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_enospc;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_enomem;
        static const Enum::YLeaf l2vpn_ad_lsd_err_type_undefined;

};

class L2VpnPwControlWordEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_control_word_unknown;
        static const Enum::YLeaf l2vpn_pw_control_word_clear;
        static const Enum::YLeaf l2vpn_pw_control_word_set;
        static const Enum::YLeaf l2vpn_pw_control_word_mandatory;

};

class L2VpnMainIfProtectectedEnum : public Enum
{
    public:
        static const Enum::YLeaf erp_protected;
        static const Enum::YLeaf mstp_protected;
        static const Enum::YLeaf no_protected;

};

class L2VpnPrefpathOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_mpls_pref_path_not_specified;
        static const Enum::YLeaf l2vpn_pw_mpls_pref_path_next_hop_ip;
        static const Enum::YLeaf l2vpn_pw_mpls_pref_path_te_tunnel;
        static const Enum::YLeaf l2vpn_pw_mpls_pref_path_ip_tunnel;
        static const Enum::YLeaf l2vpn_pw_mpls_pref_path_tp_tunnel;

};

class L2VpnPwEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_type_unknown;
        static const Enum::YLeaf l2vpn_pw_type_frame_relay_dlci;
        static const Enum::YLeaf l2vpn_pw_type_atm_aal5_sdu;
        static const Enum::YLeaf l2vpn_pw_type_atm_trans_cell;
        static const Enum::YLeaf l2vpn_pw_type_ether_vlan;
        static const Enum::YLeaf l2vpn_pw_type_ether;
        static const Enum::YLeaf l2vpn_pw_type_hdlc;
        static const Enum::YLeaf l2vpn_pw_type_ppp;
        static const Enum::YLeaf l2vpn_pw_type_sonet_over_mpls;
        static const Enum::YLeaf l2vpn_pw_type_atm_n_vcc_cell;
        static const Enum::YLeaf l2vpn_pw_type_atm_n_vpc_cell;
        static const Enum::YLeaf l2vpn_pw_type_ip;
        static const Enum::YLeaf l2vpn_pw_type_atm_vcc_cell;
        static const Enum::YLeaf l2vpn_pw_type_atm_vpc_cell;
        static const Enum::YLeaf l2vpn_pw_type_atm_aal5_pdu;
        static const Enum::YLeaf l2vpn_pw_type_frame_relay;
        static const Enum::YLeaf l2vpn_pw_type_sonet;
        static const Enum::YLeaf l2vpn_pw_type_vpls;
        static const Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_e1;
        static const Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_t1;
        static const Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_e3;
        static const Enum::YLeaf l2vpn_pw_type_tdm_sa_to_p_t3;
        static const Enum::YLeaf l2vpn_pw_type_tdm_ce_so_psn;

};

class L2VpnP2MpPwPtreeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf rsvp_te;
        static const Enum::YLeaf mldp;

};

class L2VpnBridgeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_bridge_type_default;
        static const Enum::YLeaf l2vpn_bridge_type_pbb_edge;
        static const Enum::YLeaf l2vpn_bridge_type_pbb_core;

};

class L2VpnSrcAddressSetEnum : public Enum
{
    public:
        static const Enum::YLeaf unset;
        static const Enum::YLeaf set;

};

class L2VpnInterfaceEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_intf_type_unknown;
        static const Enum::YLeaf l2vpn_intf_type_ethernet;
        static const Enum::YLeaf l2vpn_intf_type_vlan;
        static const Enum::YLeaf l2vpn_intf_type_atm;
        static const Enum::YLeaf l2vpn_intf_type_frame_relay;
        static const Enum::YLeaf l2vpn_intf_type_hdlc;
        static const Enum::YLeaf l2vpn_intf_type_ppp;
        static const Enum::YLeaf l2vpn_intf_type_span;
        static const Enum::YLeaf l2vpn_intf_type_bvi;
        static const Enum::YLeaf l2vpn_intf_type_cem;
        static const Enum::YLeaf l2vpn_intf_type_pw_ether;
        static const Enum::YLeaf l2vpn_intf_type_pw_iw;
        static const Enum::YLeaf l2vpn_intf_type_vni;

};

class L2VpnG8032UncfgReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf reason_none;
        static const Enum::YLeaf ring_mp0_missing;
        static const Enum::YLeaf ring_mp1_missing;
        static const Enum::YLeaf inclusion_list_empty;
        static const Enum::YLeaf aps0_missing;
        static const Enum::YLeaf aps0bp_notfound;
        static const Enum::YLeaf aps0_no_ac_ctx;
        static const Enum::YLeaf aps0_not_in_inclusion_list;
        static const Enum::YLeaf aps0_mismatched;
        static const Enum::YLeaf aps1_missing;
        static const Enum::YLeaf aps1bp_notfound;
        static const Enum::YLeaf aps1_no_ac_ctx;
        static const Enum::YLeaf aps1_not_in_inclusion_list;
        static const Enum::YLeaf aps1_mismatched;
        static const Enum::YLeaf aps_unprovisioned;

};

class L2VpnAtmModeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_atm_port_mode;
        static const Enum::YLeaf l2vpn_atm_vp_mode;
        static const Enum::YLeaf l2vpn_atm_vc_mode;

};

class L2FibPwRedundancyRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf primary;
        static const Enum::YLeaf backup;

};

class L2VpnIdMgrAppEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_id_mgr_app_type_virtual_ac;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_ac;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_pw;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_bd;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_mp2mp;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_rd;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_pbb;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_if_list;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_atom;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_global;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_p_tree;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_pw_group;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_evpn;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_evpn_lbl;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_evpn_rd;
        static const Enum::YLeaf l2vpn_id_mgr_app_type_count;

};

class IccpSmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unresolved;
        static const Enum::YLeaf provisioned;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf synchronizing;
        static const Enum::YLeaf synchronized;

};

class L2VpnPwFlowLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;
        static const Enum::YLeaf both;

};

class MgmtL2FibBridgeMacEvpnCtxEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_none;
        static const Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_esi_id;
        static const Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_local_label;
        static const Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_moi;
        static const Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh;

};

class L2VpnRgStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf active;
        static const Enum::YLeaf standby;

};

class L2VpnSyncStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_ready;
        static const Enum::YLeaf ready;

};

class L2VpnTimeStampModeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf differential;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf none;

};

class L2VpnAdSigMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_sig_method_none;
        static const Enum::YLeaf l2vpn_ad_sig_method_bgp;
        static const Enum::YLeaf l2vpn_ad_sig_method_ldp;

};

class L2VpnPwFecEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_fec_128;
        static const Enum::YLeaf l2vpn_pw_fec_129;
        static const Enum::YLeaf l2vpn_pw_fec_not_applicable;

};

class L2VpnBagMacSecureActionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf none;
        static const Enum::YLeaf shutdown;

};

class L2VpnMainIfInstanceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf forwarding;
        static const Enum::YLeaf blocked;
        static const Enum::YLeaf mac_learning;
        static const Enum::YLeaf nack;
        static const Enum::YLeaf forwarning_not_useful;
        static const Enum::YLeaf blocked_not_useful;
        static const Enum::YLeaf mac_learning_not_useful;
        static const Enum::YLeaf blocked_data_only;
        static const Enum::YLeaf mcast_pe2_ce_blocked;
        static const Enum::YLeaf port_state_unknown;

};

class L2VpnProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_protection_unknown;
        static const Enum::YLeaf l2vpn_protection_interface;
        static const Enum::YLeaf l2vpn_protection_pseudowire;
        static const Enum::YLeaf l2vpn_protection_group;

};

class L2VpnBagMacWithdrawOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf mac_withdraw_option_state_up;
        static const Enum::YLeaf mac_withdraw_option_state_down;
        static const Enum::YLeaf mac_withdraw_option_optimize;

};

class L2VpnVfiP2MpTransportEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf rsvp_te;

};

class MgmtL2FibMacLimitNotifyEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_mac_limit_notify_none;
        static const Enum::YLeaf mgmt_l2fib_mac_limit_notify_syslog;
        static const Enum::YLeaf mgmt_l2fib_mac_limit_notify_trap;
        static const Enum::YLeaf mgmt_l2fib_mac_limit_notify_both;

};

class PwhePortImStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class L2VpnpwEnum : public Enum
{
    public:
        static const Enum::YLeaf manual;
        static const Enum::YLeaf vpls_autodiscovered;
        static const Enum::YLeaf vpws_autodiscovered;
        static const Enum::YLeaf vpls_autodiscovered_ldp;

};

class MgmtL2FibStatsDataEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_stats_type_unknown;
        static const Enum::YLeaf mgmt_l2fib_stats_type_mcast;

};

class L2FibGroupStateEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class L2VpnPeerEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf internal_label;

};

class L2VpnPwheIntfEnum : public Enum
{
    public:
        static const Enum::YLeaf pseudowire_ether;
        static const Enum::YLeaf pseudowire_iw;

};

class L2VpnAcEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown_encap;
        static const Enum::YLeaf vlan;
        static const Enum::YLeaf qinq;
        static const Enum::YLeaf qin_any;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf atm_aal0;
        static const Enum::YLeaf atm_aal5;
        static const Enum::YLeaf atm_vp;
        static const Enum::YLeaf atm_port;
        static const Enum::YLeaf hdlc;
        static const Enum::YLeaf fr_dlci;
        static const Enum::YLeaf fr_dlci_local;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf tdm_sa_to_p_e1;
        static const Enum::YLeaf tdm_sa_to_p_t1;
        static const Enum::YLeaf tdm_sa_to_p_e3;
        static const Enum::YLeaf tdm_sa_to_p_t3;
        static const Enum::YLeaf tdm_ce_so_psn;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf vlan_encap;
        static const Enum::YLeaf dot1ad;
        static const Enum::YLeaf efp;
        static const Enum::YLeaf bvi;
        static const Enum::YLeaf monitor_session;
        static const Enum::YLeaf pseudowire_ether;
        static const Enum::YLeaf pseudowire_iw;
        static const Enum::YLeaf multi_segment_pseudowire;
        static const Enum::YLeaf pseudowire_l2_subinterface;
        static const Enum::YLeaf virtual_network_interface;
        static const Enum::YLeaf encap_types_max;

};

class L2VpnG8032RplEnum : public Enum
{
    public:
        static const Enum::YLeaf rpl_unknown;
        static const Enum::YLeaf port0_owner;
        static const Enum::YLeaf port0_neighbor;
        static const Enum::YLeaf port0_next_neighbor;
        static const Enum::YLeaf port1_owner;
        static const Enum::YLeaf port1_neighbor;
        static const Enum::YLeaf port1_next_neighbor;

};

class L2VpnXcStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_xc_state_unresolved;
        static const Enum::YLeaf l2vpn_xc_state_down;
        static const Enum::YLeaf l2vpn_xc_state_up;

};

class L2VpnMirpLiteProtocolInfoEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan0;
        static const Enum::YLeaf none;

};

class L2VpnVfiStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf admin_down;

};

class L2VpnBagAdEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_bag_ad_encap_not_specified;
        static const Enum::YLeaf l2vpn_bag_ad_encap_ether_vlan;
        static const Enum::YLeaf l2vpn_bag_ad_encap_ether;

};

class L2VpnTosModeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_ip_tos_none;
        static const Enum::YLeaf l2vpn_pw_ip_tos_reflect;

};

class L2VpnIpcTransportModeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf unknown;

};

class P2MpTransportStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ok;
        static const Enum::YLeaf error;
        static const Enum::YLeaf tunnel_down;
        static const Enum::YLeaf max_tunnels_reached;

};

class L2VpnServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf vpws;
        static const Enum::YLeaf vpls;

};

class L2VpnSegmentEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_segment_type_unresolved;
        static const Enum::YLeaf l2vpn_segment_type_ac;
        static const Enum::YLeaf l2vpn_segment_type_pw;
        static const Enum::YLeaf l2vpn_segment_type_bd_ac;
        static const Enum::YLeaf l2vpn_segment_type_vfi;
        static const Enum::YLeaf l2vpn_segment_type_bd_pw;
        static const Enum::YLeaf l2vpn_segment_type_bd_pbb;
        static const Enum::YLeaf l2vpn_segment_type_bd_evpn;
        static const Enum::YLeaf l2vpn_segment_type_vni;

};

class MgmtL2FibMacSecActionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf none;
        static const Enum::YLeaf shutdown;

};

class L2FibG8032RplEnum : public Enum
{
    public:
        static const Enum::YLeaf rpl_unknown;
        static const Enum::YLeaf port0_owner;
        static const Enum::YLeaf port0_neighbor;
        static const Enum::YLeaf port0_next_neighbor;
        static const Enum::YLeaf port1_owner;
        static const Enum::YLeaf port1_neighbor;
        static const Enum::YLeaf port1_next_neighbor;

};

class L2VpnProcNsrNotReadyReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf collab_time_out;
        static const Enum::YLeaf collab_conntection_idt;
        static const Enum::YLeaf nsr_peer_not_connected;
        static const Enum::YLeaf nsr_peer_not_in_sync;

};

class L2VpnBagMacLimitNotifyEnum : public Enum
{
    public:
        static const Enum::YLeaf mac_limit_notify_none;
        static const Enum::YLeaf mac_limit_notify_syslog;
        static const Enum::YLeaf mac_limit_notify_trap;
        static const Enum::YLeaf mac_limit_notify_syslog_trap;
        static const Enum::YLeaf mac_limit_notify_no_config;

};

class L2VpnLoadBalEnum : public Enum
{
    public:
        static const Enum::YLeaf not_supported;
        static const Enum::YLeaf source_dest_mac;
        static const Enum::YLeaf source_dest_ip;
        static const Enum::YLeaf undefined;
        static const Enum::YLeaf pseudowire_label;

};

class L2VpnFrModeEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_fr_port_mode;
        static const Enum::YLeaf l2vpn_fr_dlci_mode;

};

class L2VpnTdmRtpOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf present;
        static const Enum::YLeaf absent;

};

class L2VpnMirpLiteStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf not_supported;

};

class L2VpnPtreeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf rsvp_te;
        static const Enum::YLeaf mldp;

};

class L2VpnSegmentStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_segment_state_unresolved;
        static const Enum::YLeaf l2vpn_segment_state_up;
        static const Enum::YLeaf l2vpn_segment_state_down;
        static const Enum::YLeaf l2vpn_segment_state_admin_down;
        static const Enum::YLeaf l2vpn_segment_state_local_up;
        static const Enum::YLeaf l2vpn_segment_state_remote_up;
        static const Enum::YLeaf l2vpn_segment_state_connected;
        static const Enum::YLeaf l2vpn_segment_state_standby;
        static const Enum::YLeaf l2vpn_segment_state_standby_ready;

};

class L2FibPwIdEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf manual;
        static const Enum::YLeaf vpls;
        static const Enum::YLeaf vpws;
        static const Enum::YLeaf vpls_ldp;
        static const Enum::YLeaf l2fib_pw_id_type_pwr;
        static const Enum::YLeaf l2fib_pw_id_type_evpn;

};

class L2FibFeatureEnum : public Enum
{
    public:
        static const Enum::YLeaf l2fib_feature_dhcp_snooping;
        static const Enum::YLeaf l2fib_feature_igmp_snooping;
        static const Enum::YLeaf l2fib_feature_mld_snooping;
        static const Enum::YLeaf l2fib_feature_max;

};

class L2VpnInterworkingEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_iw_type_none;
        static const Enum::YLeaf l2vpn_iw_type_ethernet;
        static const Enum::YLeaf l2vpn_iw_type_ppp;
        static const Enum::YLeaf l2vpn_iw_type_ipv4;
        static const Enum::YLeaf l2vpn_iw_type_voluntary;
        static const Enum::YLeaf l2vpn_iw_type_frf8;

};

class MgmtL2FibSwitchingEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_l2fib_switching_type_unknown;
        static const Enum::YLeaf mgmt_l2fib_switching_type_ac_ac;
        static const Enum::YLeaf mgmt_l2fib_switching_type_ac_atom;
        static const Enum::YLeaf mgmt_l2fib_switching_type_ac_vfi;
        static const Enum::YLeaf mgmt_l2fib_switching_type_ac_l2tp;
        static const Enum::YLeaf mgmt_l2fib_switching_type_atom_atom;
        static const Enum::YLeaf mgmt_l2fib_switching_type_vfi_atom;
        static const Enum::YLeaf mgmt_l2fib_switching_type_vfi_l2tp;
        static const Enum::YLeaf mgmt_l2fib_switching_type_l2tp_atom;
        static const Enum::YLeaf mgmt_l2fib_switching_type_l2tp_l2tp;
        static const Enum::YLeaf mgmt_l2fib_switching_type_max;

};

class L2VpnMemoryStateEnum : public Enum
{
    public:
        static const Enum::YLeaf memory_state_unknown;
        static const Enum::YLeaf memory_state_normal;
        static const Enum::YLeaf memory_state_minor;
        static const Enum::YLeaf memory_state_severe;
        static const Enum::YLeaf memory_state_critical;
        static const Enum::YLeaf memory_state_invalid;

};

class L2VpnTdmModeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ce_so_psn;
        static const Enum::YLeaf sa_to_p_e1;
        static const Enum::YLeaf sa_to_p_t1;
        static const Enum::YLeaf sa_to_p_e3;
        static const Enum::YLeaf sa_to_p_t3;

};

class L2VpnProcRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf v1_active;
        static const Enum::YLeaf v1_standby;
        static const Enum::YLeaf v2_active;
        static const Enum::YLeaf v2_standby;
        static const Enum::YLeaf v1_active_post_big_bang;
        static const Enum::YLeaf v1_standby_post_big_bang;
        static const Enum::YLeaf count;

};

class L2VpnBagMacAgingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf aging_none;
        static const Enum::YLeaf aging_absolute;
        static const Enum::YLeaf aging_inactivity;

};

class L2VpnVfiP2MpSignalingEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf bgp;

};

class L2VpnPwSequenceEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_sequence_off;
        static const Enum::YLeaf l2vpn_pw_sequence_xmit;
        static const Enum::YLeaf l2vpn_pw_sequence_recv;
        static const Enum::YLeaf l2vpn_pw_sequence_trans;
        static const Enum::YLeaf l2vpn_pw_sequence_both;

};

class L2FibLoadBalEnum : public Enum
{
    public:
        static const Enum::YLeaf flow_undef;
        static const Enum::YLeaf src_dst_mac;
        static const Enum::YLeaf src_dst_ip;
        static const Enum::YLeaf vc;

};

class L2VpnAdRtEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_rt_none;
        static const Enum::YLeaf l2vpn_ad_rt_as;
        static const Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const Enum::YLeaf es_import;

};

class L2VpnAdRdEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_ad_rd_none;
        static const Enum::YLeaf l2vpn_ad_rd_auto;
        static const Enum::YLeaf l2vpn_ad_rd_as;
        static const Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const Enum::YLeaf l2vpn_ad_rd_v4_addr;

};

class L2VpnPwStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l2vpn_pw_state_unresolved;
        static const Enum::YLeaf l2vpn_pw_state_idle;
        static const Enum::YLeaf l2vpn_pw_state_provisioned;
        static const Enum::YLeaf l2vpn_pw_state_remote_standby;
        static const Enum::YLeaf l2vpn_pw_state_local_ready;
        static const Enum::YLeaf l2vpn_pw_state_all_ready;
        static const Enum::YLeaf l2vpn_pw_state_established;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_0_ */

