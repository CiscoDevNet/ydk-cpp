#ifndef _CISCO_IOS_XR_L2VPN_OPER_0_
#define _CISCO_IOS_XR_L2VPN_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

class L2VpnForwarding : public ydk::Entity
{
    public:
        L2VpnForwarding();
        ~L2VpnForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes> nodes;
        
}; // L2VpnForwarding


class L2VpnForwarding::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: L2VpnForwarding::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node> > node;
        
}; // L2VpnForwarding::Nodes


class L2VpnForwarding::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning> l2fib_mac_learning;
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


class L2VpnForwarding::Nodes::Node::L2FibxConLocals : public ydk::Entity
{
    public:
        L2FibxConLocals();
        ~L2FibxConLocals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibxConLocal; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal> > l2fibx_con_local;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal : public ydk::Entity
{
    public:
        L2FibxConLocal();
        ~L2FibxConLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf xcon_name; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf switching_type; //type: MgmtL2FibSwitching
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2> segment2;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1 : public ydk::Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
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


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf plaformt_data_valid; //type: boolean
        ydk::YLeaf platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf core_pbb_evpn_enabled; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion : public ydk::Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_type; //type: MgmtL2FibBridge
        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge> edge;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_configured; //type: boolean
        ydk::YLeaf mac; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf vx_lan_mode; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bound; //type: boolean
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf redundancy_role; //type: L2FibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2FibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2FibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2FibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf plaformt_data_valid; //type: boolean
        ydk::YLeaf platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2FibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2FibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2FibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2 : public ydk::Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp> bp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs> fxs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw> pw;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop : public ydk::Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf plaformt_data_valid; //type: boolean
        ydk::YLeaf platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf shg_id; //type: uint32
        ydk::YLeaf msti_pointer; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        ydk::YLeaf mvrp_sequence_number; //type: uint16
        ydk::YLeaf learn_key; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper> oper;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp> p2mp;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation : public ydk::Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf mac_learning_disabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_disabled; //type: boolean
        ydk::YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotify
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: MgmtL2FibMacSecAction
        ydk::YLeaf is_mac_secure_accept_shutdown; //type: boolean
        ydk::YLeaf mac_aging_type; //type: boolean
        ydk::YLeaf storm_control_unicast_enabled; //type: boolean
        ydk::YLeaf storm_control_broadcast_enabled; //type: boolean
        ydk::YLeaf storm_control_multicast_enabled; //type: boolean
        ydk::YLeaf storm_control_unicast_rate_unit; //type: L2FibStormControlRateUnit
        ydk::YLeaf storm_control_broadcast_rate_unit; //type: L2FibStormControlRateUnit
        ydk::YLeaf storm_control_multicast_rate_unit; //type: L2FibStormControlRateUnit
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
        ydk::YLeaf host_routing_enabled; //type: boolean
        ydk::YLeaf is_pbbevpn_enabled; //type: boolean
        ydk::YLeaf is_swmac_learning; //type: boolean
        ydk::YLeaf is_evpn_flow_label; //type: boolean
        ydk::YLeaf is_evpn_cw_disable; //type: boolean
        ydk::YLeaf msti; //type: uint32
        ydk::YLeaf is_p2mp_pw_enabled; //type: boolean
        ydk::YLeaf is_igmp_snoop_enabled; //type: boolean
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf feature_type; //type: L2FibFeature
        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp : public ydk::Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2VpnPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf p2mp_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf ptree_owner_lmrib; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs : public ydk::Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fxs_id; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf redundancy_role; //type: L2FibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf pseudo_wire_id_type; //type: L2FibPwId
        ydk::YLeaf pw_load_balance_type; //type: L2FibLoadBal
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2FibGroupState
        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf forward_class; //type: uint8
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf plaformt_data_valid; //type: boolean
        ydk::YLeaf platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion : public ydk::Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public ydk::Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire : public ydk::Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_next_hop; //type: string
        ydk::YLeaf backup_pseudo_wire_id_type; //type: L2FibPwId
        ydk::YLeaf backup_pseudo_wire_id; //type: uint32
        ydk::YLeaf redundancy_role; //type: L2FibPwRedundancyRole
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf pw_flow_label_tx; //type: boolean
        ydk::YLeaf grouping_supported; //type: boolean
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf group_state; //type: L2FibGroupState
        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom : public ydk::Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries : public ydk::Entity
{
    public:
        L2FibMrouteSummaries();
        ~L2FibMrouteSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMrouteSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary> > l2fib_mroute_summary;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary : public ydk::Entity
{
    public:
        L2FibMrouteSummary();
        ~L2FibMrouteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_group_name; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf multicast_update; //type: uint32
        ydk::YLeaf multicast_update_dropped; //type: uint32
        ydk::YLeaf number_of_routes; //type: uint32
        ydk::YLeaf number_of_routes_with_ole_offload; //type: uint32
        ydk::YLeaf number_of_mroute_add; //type: uint32
        ydk::YLeaf number_mroute_deleted; //type: uint32
        ydk::YLeaf number_mroutes_deleted_all; //type: uint32
        ydk::YLeaf number_mroute_delete_drop; //type: uint32
        ydk::YLeaf number_mroute_all_delete_drop; //type: uint32
        ydk::YLeaf number_xid_add; //type: uint32
        ydk::YLeaf number_xid_deleted; //type: uint32
        ydk::YLeaf number_of_xid; //type: uint32
        ydk::YLeaf stale_deleted; //type: uint32
        ydk::YLeaf stale_xid_deleted; //type: uint32
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message> > message;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary


class L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf messgae_count; //type: uint32
        ydk::YLeaf time; //type: string
        ydk::YLeaf information1; //type: uint32
        ydk::YLeaf information2; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary : public ydk::Entity
{
    public:
        L2FibMessageSummary();
        ~L2FibMessageSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventHistory; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory
        class RoundTripDelay; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay
        class Message; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory> event_history;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message> > message;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay> round_trip_delay;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_neighbor_entry; //type: uint16
        ydk::YLeafList extra_information1; //type: list of  uint32
        ydk::YLeafList extra_information2; //type: list of  uint32
        class EventEntry; //type: L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry> > event_entry;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry : public ydk::Entity
{
    public:
        EventEntry();
        ~EventEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_time; //type: string
        ydk::YLeaf event_type; //type: uint8
        ydk::YLeaf event_many; //type: boolean
        ydk::YLeaf event_sticky; //type: boolean
        ydk::YLeaf event_flags; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay : public ydk::Entity
{
    public:
        RoundTripDelay();
        ~RoundTripDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtd_max_obj_type; //type: uint32
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


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd : public ydk::Entity
{
    public:
        BdxcRtd();
        ~BdxcRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd : public ydk::Entity
{
    public:
        AgingRtd();
        ~AgingRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd : public ydk::Entity
{
    public:
        PuntRtd();
        ~PuntRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd : public ydk::Entity
{
    public:
        LockRtd();
        ~LockRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd : public ydk::Entity
{
    public:
        PlatformInitRtd();
        ~PlatformInitRtd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create : public ydk::Entity
{
    public:
        Create();
        ~Create();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify : public ydk::Entity
{
    public:
        Modify();
        ~Modify();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_ : public ydk::Entity
{
    public:
        Delete_();
        ~Delete_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind : public ydk::Entity
{
    public:
        Bind();
        ~Bind();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind : public ydk::Entity
{
    public:
        Unbind();
        ~Unbind();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush : public ydk::Entity
{
    public:
        MacFlush();
        ~MacFlush();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd : public ydk::Entity
{
    public:
        Pirtd();
        ~Pirtd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_pd_update; //type: uint32
        ydk::YLeaf number_pd_update_zero; //type: uint32
        ydk::YLeaf minimum_round_trip_delay; //type: uint64
        ydk::YLeaf maximum_round_trip_delay; //type: uint64
        ydk::YLeaf average_round_trip_delay; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd


class L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf messgae_count; //type: uint32
        ydk::YLeaf time; //type: string
        ydk::YLeaf information1; //type: uint32
        ydk::YLeaf information2; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message


class L2VpnForwarding::Nodes::Node::L2FibMroutes : public ydk::Entity
{
    public:
        L2FibMroutes();
        ~L2FibMroutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMroute; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute> > l2fib_mroute;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute : public ydk::Entity
{
    public:
        L2FibMroute();
        ~L2FibMroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation : public ydk::Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix : public ydk::Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix : public ydk::Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: uint8
        ydk::YLeaf prefix_length; //type: uint16
        ydk::YLeaf prefix; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats : public ydk::Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat> forward_stat;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat : public ydk::Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibStatsData
        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo : public ydk::Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mxid_ac_interface_handle; //type: string
        ydk::YLeaf mxid_pw_id; //type: uint32
        ydk::YLeaf mxid_next_hop_address; //type: string
        ydk::YLeaf irb_plat_data_len; //type: uint16
        ydk::YLeafList irb_plat_data; //type: list of  uint32

}; // L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo


class L2VpnForwarding::Nodes::Node::PbbBmacSa : public ydk::Entity
{
    public:
        PbbBmacSa();
        ~PbbBmacSa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf mac; //type: string
        ydk::YLeaf chassis_mac; //type: string

}; // L2VpnForwarding::Nodes::Node::PbbBmacSa


class L2VpnForwarding::Nodes::Node::L2FibMacLearning : public ydk::Entity
{
    public:
        L2FibMacLearning();
        ~L2FibMacLearning();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMacs; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs
        class L2FibMacLearningMacIpv4S; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S
        class L2FibMacLearningMacIpv6S; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S> l2fib_mac_learning_mac_ipv4s;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S> l2fib_mac_learning_mac_ipv6s;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs> l2fib_mac_learning_macs;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs : public ydk::Entity
{
    public:
        L2FibMacLearningMacs();
        ~L2FibMacLearningMacs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMac; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac> > l2fib_mac_learning_mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac : public ydk::Entity
{
    public:
        L2FibMacLearningMac();
        ~L2FibMacLearningMac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr> addr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr> nhaddr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Addr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr : public ydk::Entity
{
    public:
        Nhaddr();
        ~Nhaddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacs::L2FibMacLearningMac::Nhaddr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv4S();
        ~L2FibMacLearningMacIpv4S();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMacIpv4; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4> > l2fib_mac_learning_mac_ipv4;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4 : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv4();
        ~L2FibMacLearningMacIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr> addr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr> nhaddr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Addr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr : public ydk::Entity
{
    public:
        Nhaddr();
        ~Nhaddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv4S::L2FibMacLearningMacIpv4::Nhaddr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv6S();
        ~L2FibMacLearningMacIpv6S();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibMacLearningMacIpv6; //type: L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6> > l2fib_mac_learning_mac_ipv6;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6 : public ydk::Entity
{
    public:
        L2FibMacLearningMacIpv6();
        ~L2FibMacLearningMacIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr> addr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr> nhaddr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Addr


class L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr : public ydk::Entity
{
    public:
        Nhaddr();
        ~Nhaddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibMacLearning::L2FibMacLearningMacIpv6S::L2FibMacLearningMacIpv6::Nhaddr


class L2VpnForwarding::Nodes::Node::L2FibP2Mp : public ydk::Entity
{
    public:
        L2FibP2Mp();
        ~L2FibP2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ptrees; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees> ptrees;
        
}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp


class L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees : public ydk::Entity
{
    public:
        Ptrees();
        ~Ptrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ptree; //type: L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree> > ptree;
        
}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees


class L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree : public ydk::Entity
{
    public:
        Ptree();
        ~Ptree();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2Vpnp2MpPtree
        ydk::YLeaf lsm_id; //type: int32
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: int32
        ydk::YLeaf lsm_id_xr; //type: uint32
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf p2mp_id_xr; //type: uint32
        ydk::YLeaf extended_tunnel_id_xr; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareEgresses();
        ~L2FibEvpnInclMCastHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastHardwareEgress; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress> > l2fib_evpn_incl_m_cast_hardware_egress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastHardwareEgress();
        ~L2FibEvpnInclMCastHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_name; //type: string
        class McastReplicationList; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList
        class L2FibEvpnInclMCastOles; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList> mcast_replication_list;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList : public ydk::Entity
{
    public:
        McastReplicationList();
        ~McastReplicationList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf is_bound; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOles();
        ~L2FibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnInclMCastOle; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle> > l2fib_evpn_incl_m_cast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle : public ydk::Entity
{
    public:
        L2FibEvpnInclMCastOle();
        ~L2FibEvpnInclMCastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf plaformt_data_valid; //type: boolean
        ydk::YLeaf platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop


class L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses : public ydk::Entity
{
    public:
        L2FibmacHardwareIngresses();
        ~L2FibmacHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibmacHardwareIngress; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress> > l2fibmac_hardware_ingress;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress : public ydk::Entity
{
    public:
        L2FibmacHardwareIngress();
        ~L2FibmacHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx> evpn_ctx;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment> segment;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: MgmtL2FibData
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


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac : public ydk::Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb : public ydk::Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni : public ydk::Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf parent_if; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xcid; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_id; //type: uint64
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_id_type; //type: L2FibPwId

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx : public ydk::Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle> mcast_ole;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle : public ydk::Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32

}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_hop_internal_label; //type: uint32
        ydk::YLeaf plaformt_data_valid; //type: boolean
        ydk::YLeaf platform_data_length; //type: uint32
        ydk::YLeaf children_count; //type: uint32
        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base> base;
        
}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs : public ydk::Entity
{
    public:
        L2FibEvpnIp4Macs();
        ~L2FibEvpnIp4Macs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibEvpnIp4Mac; //type: L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac> > l2fib_evpn_ip4mac;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac : public ydk::Entity
{
    public:
        L2FibEvpnIp4Mac();
        ~L2FibEvpnIp4Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr> ip_address_xr;
        
}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac


class L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr : public ydk::Entity
{
    public:
        IpAddressXr();
        ~IpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_type; //type: L2FibIpAddr
        ydk::YLeaf ip; //type: string

}; // L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr


class L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts : public ydk::Entity
{
    public:
        L2FibPwheMainPorts();
        ~L2FibPwheMainPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2FibPwheMainPort; //type: L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort> > l2fib_pwhe_main_port;
        
}; // L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts


class L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort : public ydk::Entity
{
    public:
        L2FibPwheMainPort();
        ~L2FibPwheMainPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_type; //type: uint32
        ydk::YLeaf generic_interface_list_id; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf control_word_enabled; //type: boolean

}; // L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort

class L2VpnPwClassControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class L2VpnProcRole : public ydk::Enum
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

class L2VpnPwFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_fec_128;
        static const ydk::Enum::YLeaf l2vpn_pw_fec_129;
        static const ydk::Enum::YLeaf l2vpn_pw_fec_not_applicable;

};

class L2VpnVniMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l2_dp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l3_dp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l2_cp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l3_cp;

};

class L2VpnVfiP2MpSignaling : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bgp;

};

class L2VpnRgState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class L2VpnTosMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_ip_tos_none;
        static const ydk::Enum::YLeaf l2vpn_pw_ip_tos_reflect;

};

class L2VpnMainIfProtectected : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erp_protected;
        static const ydk::Enum::YLeaf mstp_protected;
        static const ydk::Enum::YLeaf no_protected;

};

class L2VpnProtectionRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_protection_primary;
        static const ydk::Enum::YLeaf l2vpn_protection_backup;

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

class MgmtL2FibBridgeMacEvpnCtx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_esi_id;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_local_label;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_moi;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh;

};

class PwhePortImState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class L2FibMainIfInstanceState : public ydk::Enum
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

class L2VpnAdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rt_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const ydk::Enum::YLeaf es_import;

};

class L2FibPwId : public ydk::Enum
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

class L2VpnMirpLiteStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf not_supported;

};

class L2VpnEncapMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_l2tpv3;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_l2tpv2;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_mpls;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_unknown;

};

class L2VpnInterworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_iw_type_none;
        static const ydk::Enum::YLeaf l2vpn_iw_type_ethernet;
        static const ydk::Enum::YLeaf l2vpn_iw_type_ppp;
        static const ydk::Enum::YLeaf l2vpn_iw_type_ipv4;
        static const ydk::Enum::YLeaf l2vpn_iw_type_voluntary;
        static const ydk::Enum::YLeaf l2vpn_iw_type_frf8;

};

class L2VpnPeer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf internal_label;

};

class MgmtL2FibStatsData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_stats_type_unknown;
        static const ydk::Enum::YLeaf mgmt_l2fib_stats_type_mcast;

};

class L2VpnTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_transport_mode_not_specified;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_ethernet;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_vlan;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_vlan_passthrough;

};

class L2VpnIdMgrApp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_virtual_ac;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_ac;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_pw;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_type_bd;
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

class L2Vpnp2MpPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

};

class L2VpnMirpLiteProtocolInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan0;
        static const ydk::Enum::YLeaf none;

};

class L2VpnPwheIntf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pseudowire_ether;
        static const ydk::Enum::YLeaf pseudowire_iw;

};

class P2MpTransportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf tunnel_down;
        static const ydk::Enum::YLeaf max_tunnels_reached;

};

class L2VpnInterface : public ydk::Enum
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

class MgmtL2FibMacSecAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};

class L2VpnPwSequence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_off;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_xmit;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_recv;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_trans;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_both;

};

class L2VpnBriefPsn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf atom;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf unknown_psn;

};

class L2VpnXcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_xc_state_unresolved;
        static const ydk::Enum::YLeaf l2vpn_xc_state_down;
        static const ydk::Enum::YLeaf l2vpn_xc_state_up;

};

class L2VpnG8032Rpl : public ydk::Enum
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

class L2FibStormControlRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kb_ps;

};

class L2FibG8032ApsPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2fib_aps_port_state_unknown;
        static const ydk::Enum::YLeaf l2fib_aps_port_state_unbound;
        static const ydk::Enum::YLeaf l2fib_aps_port_state_bound;

};

class L2VpnIpcTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf unknown;

};

class L2VpnBagMacWithdrawOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac_withdraw_option_state_up;
        static const ydk::Enum::YLeaf mac_withdraw_option_state_down;
        static const ydk::Enum::YLeaf mac_withdraw_option_optimize;

};

class L2VpnLoadBal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_supported;
        static const ydk::Enum::YLeaf source_dest_mac;
        static const ydk::Enum::YLeaf source_dest_ip;
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf pseudowire_label;

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

class L2VpnMemoryState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf memory_state_unknown;
        static const ydk::Enum::YLeaf memory_state_normal;
        static const ydk::Enum::YLeaf memory_state_minor;
        static const ydk::Enum::YLeaf memory_state_severe;
        static const ydk::Enum::YLeaf memory_state_critical;
        static const ydk::Enum::YLeaf memory_state_invalid;

};

class L2VpnPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

};

class L2VpnBagMacAgingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aging_none;
        static const ydk::Enum::YLeaf aging_absolute;
        static const ydk::Enum::YLeaf aging_inactivity;

};

class L2VpnSegmentState : public ydk::Enum
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

class L2FibLoadBal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_undef;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_dst_ip;
        static const ydk::Enum::YLeaf vc;

};

class L2VpnSrcAddressSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf set;

};

class MgmtL2FibMacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_flood;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_no_flood;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_shutdown;

};

class L2VpnMstiState : public ydk::Enum
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

class L2VpnAdSigMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_none;
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_bgp;
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_ldp;

};

class L2VpnAdRd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rd_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_v4_addr;

};

class L2VpnTimeStampMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf differential;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf none;

};

class L2FibIpAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip_none;
        static const ydk::Enum::YLeaf v4;
        static const ydk::Enum::YLeaf v6;

};

class L2VpnPwState : public ydk::Enum
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

class L2VpnBagMacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf limit_none;
        static const ydk::Enum::YLeaf limit_flood;
        static const ydk::Enum::YLeaf limit_no_flood;
        static const ydk::Enum::YLeaf limit_shutdown;
        static const ydk::Enum::YLeaf limit_no_config;

};

class L2VpnPwControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_unknown;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_clear;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_set;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_mandatory;

};

class L2FibPwRedundancyRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf backup;

};

class L2VpnAtmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_atm_port_mode;
        static const ydk::Enum::YLeaf l2vpn_atm_vp_mode;
        static const ydk::Enum::YLeaf l2vpn_atm_vc_mode;

};

class L2VpnSignallingProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_sig_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_none;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_l2tpv3;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_l2tpv2;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_ldp;
        static const ydk::Enum::YLeaf l2vpn_pw_sig_bgp;

};

class L2VpnBridgeCoupledState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class L2VpnPwheIflistRepStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf not_supported;

};

class L2VpnBagMacLimitNotify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac_limit_notify_none;
        static const ydk::Enum::YLeaf mac_limit_notify_syslog;
        static const ydk::Enum::YLeaf mac_limit_notify_trap;
        static const ydk::Enum::YLeaf mac_limit_notify_syslog_trap;
        static const ydk::Enum::YLeaf mac_limit_notify_no_config;

};

class L2VpnAdLsdErr : public ydk::Enum
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

class L2VpnPrefpathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_next_hop_ip;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_te_tunnel;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_ip_tunnel;
        static const ydk::Enum::YLeaf l2vpn_pw_mpls_pref_path_tp_tunnel;

};

class EvpnMainInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_main_interface_ac;
        static const ydk::Enum::YLeaf evpn_main_interface_nve;
        static const ydk::Enum::YLeaf evpn_main_interface_ac_vfi;
        static const ydk::Enum::YLeaf evpn_main_interface_ac_pw;

};

class L2VpnSegment : public ydk::Enum
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

class L2VpnVniEncaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vni_encap_vxlan;
        static const ydk::Enum::YLeaf l2vpn_vni_encap_softgre;

};

class L2VpnTdmRtpOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf absent;

};

class L2FibFeature : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2fib_feature_dhcp_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_igmp_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_mld_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_max;

};

class L2VpnG8032UncfgReason : public ydk::Enum
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

class L2VpnVirtualportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vp_state_undefined;
        static const ydk::Enum::YLeaf l2vpn_vp_state_up;
        static const ydk::Enum::YLeaf l2vpn_vp_state_down;

};

class MgmtL2FibBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_default;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_pbb_edge;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_pbb_core;

};

class L2VpnP2MpPwPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

};

class L2VpnProcNsrNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf collab_time_out;
        static const ydk::Enum::YLeaf collab_conntection_idt;
        static const ydk::Enum::YLeaf nsr_peer_not_connected;
        static const ydk::Enum::YLeaf nsr_peer_not_in_sync;

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

class L2FibL2TpSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv2;

};

class L2VpnService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vpws;
        static const ydk::Enum::YLeaf vpls;

};

class L2VpnAdVplsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_none;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_as;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_v4_addr;

};

class L2VpnBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_bridge_type_default;
        static const ydk::Enum::YLeaf l2vpn_bridge_type_pbb_edge;
        static const ydk::Enum::YLeaf l2vpn_bridge_type_pbb_core;

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

class L2VpnBagAdEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_not_specified;
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_ether_vlan;
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_ether;

};

class L2VpnPw : public ydk::Enum
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

class L2VpnSyncStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf ready;

};

class L2VpnProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_protection_unknown;
        static const ydk::Enum::YLeaf l2vpn_protection_interface;
        static const ydk::Enum::YLeaf l2vpn_protection_pseudowire;
        static const ydk::Enum::YLeaf l2vpn_protection_group;

};

class L2FibGroupState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class L2VpnFrMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_fr_port_mode;
        static const ydk::Enum::YLeaf l2vpn_fr_dlci_mode;

};

class L2VpnMainIfInstanceState : public ydk::Enum
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

class L2VpnVfiP2MpTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;

};

class L2VpnL2TpTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_l2tp_idle;
        static const ydk::Enum::YLeaf l2vpn_l2tp_wait_for_connecting;
        static const ydk::Enum::YLeaf l2vpn_l2tp_wait_for_connected;
        static const ydk::Enum::YLeaf l2vpn_l2tp_in_coming_call;
        static const ydk::Enum::YLeaf l2vpn_l2tp_connected;
        static const ydk::Enum::YLeaf l2vpn_l2tp_disconnected;

};

class L2FibG8032Rpl : public ydk::Enum
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

class L2VpnBridgeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bridge_init;
        static const ydk::Enum::YLeaf bridge_up;
        static const ydk::Enum::YLeaf bridge_down;
        static const ydk::Enum::YLeaf bridge_admin_down;

};

class L2Vpnpw : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf vpls_autodiscovered;
        static const ydk::Enum::YLeaf vpws_autodiscovered;
        static const ydk::Enum::YLeaf vpls_autodiscovered_ldp;

};

class L2VpnPwFlowLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf both;

};

class MgmtL2FibMacLimitNotify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_syslog;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_trap;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_both;

};

class L2VpnTdmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ce_so_psn;
        static const ydk::Enum::YLeaf sa_to_p_e1;
        static const ydk::Enum::YLeaf sa_to_p_t1;
        static const ydk::Enum::YLeaf sa_to_p_e3;
        static const ydk::Enum::YLeaf sa_to_p_t3;

};

class L2VpnBagMacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};

class L2VpnAcEncap : public ydk::Enum
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

class L2VpnVfiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;

};

class L2VpnBagStormControlRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kb_ps;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_0_ */

