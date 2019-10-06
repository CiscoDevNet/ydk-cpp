#ifndef _CISCO_IOS_XR_L2VPN_OPER_0_
#define _CISCO_IOS_XR_L2VPN_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

class L2vpnForwarding : public ydk::Entity
{
    public:
        L2vpnForwarding();
        ~L2vpnForwarding();

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

        class Nodes; //type: L2vpnForwarding::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes> nodes;
        
}; // L2vpnForwarding


class L2vpnForwarding::Nodes : public ydk::Entity
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

        class Node; //type: L2vpnForwarding::Nodes::Node

        ydk::YList node;
        
}; // L2vpnForwarding::Nodes


class L2vpnForwarding::Nodes::Node : public ydk::Entity
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
        class L2fibxConLocals; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals
        class L2fibMrouteSummaries; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries
        class L2fibMessageSummary; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary
        class L2fibMroutes; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes
        class PbbBmacSa; //type: L2vpnForwarding::Nodes::Node::PbbBmacSa
        class L2fibMacLearning; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning
        class L2fibP2mp; //type: L2vpnForwarding::Nodes::Node::L2fibP2mp
        class L2fibEvpnInclMCastHardwareEgresses; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses
        class L2fibmacHardwareIngresses; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses
        class L2fibEvpnIp4macs; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs
        class L2fibPwheMainPorts; //type: L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts
        class L2fibDhcpBindingCount; //type: L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount
        class L2fibBridgeDomains; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomains
        class L2fibMstpSummaries; //type: L2vpnForwarding::Nodes::Node::L2fibMstpSummaries
        class L2fibResourceAvailability; //type: L2vpnForwarding::Nodes::Node::L2fibResourceAvailability
        class L2fibmacHardwareEgresses; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses
        class L2fibxConL2tpv2s; //type: L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s
        class L2fibMrouteIpv6s; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s
        class L2fibMonSessXCons; //type: L2vpnForwarding::Nodes::Node::L2fibMonSessXCons
        class L2fibMmrpSummaries; //type: L2vpnForwarding::Nodes::Node::L2fibMmrpSummaries
        class L2fibPwGroups; //type: L2vpnForwarding::Nodes::Node::L2fibPwGroups
        class L2fibEvpnInclMCastHardwareIngresses; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareIngresses
        class L2fibDhcpBindingDetails; //type: L2vpnForwarding::Nodes::Node::L2fibDhcpBindingDetails
        class L2fibxCons; //type: L2vpnForwarding::Nodes::Node::L2fibxCons
        class L2fibMainInterfaces; //type: L2vpnForwarding::Nodes::Node::L2fibMainInterfaces
        class L2fibMstpDetails; //type: L2vpnForwarding::Nodes::Node::L2fibMstpDetails
        class L2fibL2tp; //type: L2vpnForwarding::Nodes::Node::L2fibL2tp
        class L2fibG8032; //type: L2vpnForwarding::Nodes::Node::L2fibG8032
        class L2fibBridgePorts; //type: L2vpnForwarding::Nodes::Node::L2fibBridgePorts
        class L2fibmacDetails; //type: L2vpnForwarding::Nodes::Node::L2fibmacDetails
        class L2fibBridgeDomainNames; //type: L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames
        class L2fibMroutePorts; //type: L2vpnForwarding::Nodes::Node::L2fibMroutePorts
        class L2fibSummary; //type: L2vpnForwarding::Nodes::Node::L2fibSummary
        class L2fibNvePeers; //type: L2vpnForwarding::Nodes::Node::L2fibNvePeers
        class L2fibMmrps; //type: L2vpnForwarding::Nodes::Node::L2fibMmrps
        class L2fibEvpnIp6macs; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs
        class L2fibPwheMainPortHardwareEgresses; //type: L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses
        class L2fibDhcpBindingSummaries; //type: L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries
        class L2fibPwheMainPortHardwareIngresses; //type: L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses
        class L2fibEvpnInclMCasts; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals> l2fibx_con_locals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries> l2fib_mroute_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary> l2fib_message_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes> l2fib_mroutes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::PbbBmacSa> pbb_bmac_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning> l2fib_mac_learning;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibP2mp> l2fib_p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses> l2fib_evpn_incl_m_cast_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses> l2fibmac_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs> l2fib_evpn_ip4macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts> l2fib_pwhe_main_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount> l2fib_dhcp_binding_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomains> l2fib_bridge_domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMstpSummaries> l2fib_mstp_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibResourceAvailability> l2fib_resource_availability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses> l2fibmac_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s> l2fibx_con_l2tpv2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s> l2fib_mroute_ipv6s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMonSessXCons> l2fib_mon_sess_x_cons;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrpSummaries> l2fib_mmrp_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibPwGroups> l2fib_pw_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareIngresses> l2fib_evpn_incl_m_cast_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibDhcpBindingDetails> l2fib_dhcp_binding_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxCons> l2fibx_cons;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMainInterfaces> l2fib_main_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMstpDetails> l2fib_mstp_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibL2tp> l2fib_l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibG8032> l2fib_g8032;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgePorts> l2fib_bridge_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacDetails> l2fibmac_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames> l2fib_bridge_domain_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutePorts> l2fib_mroute_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibSummary> l2fib_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibNvePeers> l2fib_nve_peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMmrps> l2fib_mmrps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs> l2fib_evpn_ip6macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses> l2fib_pwhe_main_port_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries> l2fib_dhcp_binding_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses> l2fib_pwhe_main_port_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts> l2fib_evpn_incl_m_casts;
        
}; // L2vpnForwarding::Nodes::Node


class L2vpnForwarding::Nodes::Node::L2fibxConLocals : public ydk::Entity
{
    public:
        L2fibxConLocals();
        ~L2fibxConLocals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibxConLocal; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal

        ydk::YList l2fibx_con_local;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal : public ydk::Entity
{
    public:
        L2fibxConLocal();
        ~L2fibxConLocal();

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
        ydk::YLeaf vsp_vlan_id; //type: uint32
        ydk::YLeaf xcon_name; //type: string
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf switching_type; //type: MgmtL2fibSwitching
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base
        class Segment1; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1
        class Segment2; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2> segment2;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1 : public ydk::Entity
{
    public:
        Segment1();
        ~Segment1();

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
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn
        class MonitorSession; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
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
        ydk::YLeaf vlan_id_count; //type: uint8
        ydk::YLeaf first_vlan_id; //type: uint16
        ydk::YLeaf second_vlan_id; //type: uint16
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base
        class PbbUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion> pbb_union;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion : public ydk::Entity
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
        class Edge; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge> edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core> core;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

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
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf bound; //type: boolean
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion : public ydk::Entity
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
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp : public ydk::Entity
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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire : public ydk::Entity
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
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2 : public ydk::Entity
{
    public:
        Segment2();
        ~Segment2();

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
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac
        class Bp; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp
        class Fxs; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs> fxs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
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
        ydk::YLeaf vlan_id_count; //type: uint8
        ydk::YLeaf first_vlan_id; //type: uint16
        ydk::YLeaf second_vlan_id; //type: uint16
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base
        class FxcNextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop> fxc_next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base
        class Oper; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper
        class P2mp; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper> oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp> p2mp;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper : public ydk::Entity
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
        class OperationalInformation; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation> operational_information;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation : public ydk::Entity
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
        class Feature; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature

        ydk::YList feature;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature : public ydk::Entity
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
        class Dhcp; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp : public ydk::Entity
{
    public:
        P2mp();
        ~P2mp();

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
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf p2mp_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf ptree_owner_lmrib; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs : public ydk::Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fxs_id; //type: uint32
        ydk::YLeaf segment_type; //type: uint8
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion : public ydk::Entity
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
        class Mpls; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls
        class L2tp; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp
        class L2tpv2; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2
        class L2tpIpv6Ts; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp> l2tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2> l2tpv2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts> l2tp_ipv6_ts;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp : public ydk::Entity
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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2 : public ydk::Entity
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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts : public ydk::Entity
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
        class Local; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local
        class Remote; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote> remote;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire : public ydk::Entity
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
        class Atom; //type: L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom> atom;
        
}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire


class L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom


class L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries : public ydk::Entity
{
    public:
        L2fibMrouteSummaries();
        ~L2fibMrouteSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMrouteSummary; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary

        ydk::YList l2fib_mroute_summary;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries


class L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary : public ydk::Entity
{
    public:
        L2fibMrouteSummary();
        ~L2fibMrouteSummary();

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
        class Message; //type: L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message

        ydk::YList message;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary


class L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary : public ydk::Entity
{
    public:
        L2fibMessageSummary();
        ~L2fibMessageSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventHistory; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory
        class RoundTripDelay; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay
        class Message; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay> round_trip_delay;
        ydk::YList message;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_neighbor_entry; //type: uint16
        ydk::YLeafList extra_information1; //type: list of  uint32
        ydk::YLeafList extra_information2; //type: list of  uint32
        class EventEntry; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry

        ydk::YList event_entry;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry : public ydk::Entity
{
    public:
        EventEntry();
        ~EventEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay : public ydk::Entity
{
    public:
        RoundTripDelay();
        ~RoundTripDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtd_max_obj_type; //type: uint32
        class BdxcRtd; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd
        class AgingRtd; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd
        class PuntRtd; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd
        class LockRtd; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd
        class PlatformInitRtd; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd
        class Create; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create
        class Modify; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify
        class Delete; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete
        class Bind; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind
        class Unbind; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind
        class MacFlush; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush
        class Pirtd; //type: L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd> bdxc_rtd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd> aging_rtd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd> punt_rtd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd> lock_rtd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd> platform_init_rtd;
        ydk::YList create;
        ydk::YList modify;
        ydk::YList delete_;
        ydk::YList bind;
        ydk::YList unbind;
        ydk::YList mac_flush;
        ydk::YList pirtd;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd : public ydk::Entity
{
    public:
        BdxcRtd();
        ~BdxcRtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd : public ydk::Entity
{
    public:
        AgingRtd();
        ~AgingRtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd : public ydk::Entity
{
    public:
        PuntRtd();
        ~PuntRtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd : public ydk::Entity
{
    public:
        LockRtd();
        ~LockRtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd : public ydk::Entity
{
    public:
        PlatformInitRtd();
        ~PlatformInitRtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create : public ydk::Entity
{
    public:
        Create();
        ~Create();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify : public ydk::Entity
{
    public:
        Modify();
        ~Modify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete : public ydk::Entity
{
    public:
        Delete();
        ~Delete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind : public ydk::Entity
{
    public:
        Bind();
        ~Bind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind : public ydk::Entity
{
    public:
        Unbind();
        ~Unbind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush : public ydk::Entity
{
    public:
        MacFlush();
        ~MacFlush();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd : public ydk::Entity
{
    public:
        Pirtd();
        ~Pirtd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd


class L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message : public ydk::Entity
{
    public:
        Message();
        ~Message();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message


class L2vpnForwarding::Nodes::Node::L2fibMroutes : public ydk::Entity
{
    public:
        L2fibMroutes();
        ~L2fibMroutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMroute; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute

        ydk::YList l2fib_mroute;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutes


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute : public ydk::Entity
{
    public:
        L2fibMroute();
        ~L2fibMroute();

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
        class MulticastBaseInformation; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation
        class SourcePrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix
        class DestinationPrefix; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix
        class ForwardStats; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats
        class IrbInfo; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix> source_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix> destination_prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats> forward_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo> irb_info;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats : public ydk::Entity
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

        class ForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat> forward_stat;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat : public ydk::Entity
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
        class Mulicast; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast> mulicast;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast : public ydk::Entity
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

        class MulticastForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo : public ydk::Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo


class L2vpnForwarding::Nodes::Node::PbbBmacSa : public ydk::Entity
{
    public:
        PbbBmacSa();
        ~PbbBmacSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf mac; //type: string
        ydk::YLeaf chassis_mac; //type: string

}; // L2vpnForwarding::Nodes::Node::PbbBmacSa


class L2vpnForwarding::Nodes::Node::L2fibMacLearning : public ydk::Entity
{
    public:
        L2fibMacLearning();
        ~L2fibMacLearning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMacLearningMacs; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs
        class L2fibMacLearningMacIpv4s; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s
        class L2fibMacLearningMacIpv6s; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs> l2fib_mac_learning_macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s> l2fib_mac_learning_mac_ipv4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s> l2fib_mac_learning_mac_ipv6s;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs : public ydk::Entity
{
    public:
        L2fibMacLearningMacs();
        ~L2fibMacLearningMacs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMacLearningMac; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac

        ydk::YList l2fib_mac_learning_mac;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac : public ydk::Entity
{
    public:
        L2fibMacLearningMac();
        ~L2fibMacLearningMac();

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
        ydk::YLeaf bdid; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf element_type; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf interface_handle_xr; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf generation; //type: uint8
        class Addr; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr
        class Nhaddr; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr> addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr> nhaddr;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s : public ydk::Entity
{
    public:
        L2fibMacLearningMacIpv4s();
        ~L2fibMacLearningMacIpv4s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMacLearningMacIpv4; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4

        ydk::YList l2fib_mac_learning_mac_ipv4;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4 : public ydk::Entity
{
    public:
        L2fibMacLearningMacIpv4();
        ~L2fibMacLearningMacIpv4();

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
        ydk::YLeaf bdid; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf element_type; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf interface_handle_xr; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf generation; //type: uint8
        class Addr; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr
        class Nhaddr; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr> addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr> nhaddr;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s : public ydk::Entity
{
    public:
        L2fibMacLearningMacIpv6s();
        ~L2fibMacLearningMacIpv6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibMacLearningMacIpv6; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6

        ydk::YList l2fib_mac_learning_mac_ipv6;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6 : public ydk::Entity
{
    public:
        L2fibMacLearningMacIpv6();
        ~L2fibMacLearningMacIpv6();

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
        ydk::YLeaf bdid; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf element_type; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf interface_handle_xr; //type: uint32
        ydk::YLeaf xcid; //type: uint32
        ydk::YLeaf generation; //type: uint8
        class Addr; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr
        class Nhaddr; //type: L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr> addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr> nhaddr;
        
}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr


class L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr


class L2vpnForwarding::Nodes::Node::L2fibP2mp : public ydk::Entity
{
    public:
        L2fibP2mp();
        ~L2fibP2mp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ptrees; //type: L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees> ptrees;
        
}; // L2vpnForwarding::Nodes::Node::L2fibP2mp


class L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees : public ydk::Entity
{
    public:
        Ptrees();
        ~Ptrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ptree; //type: L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree

        ydk::YList ptree;
        
}; // L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees


class L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree : public ydk::Entity
{
    public:
        Ptree();
        ~Ptree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ptree_type; //type: L2vpnp2mpPtree
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: uint32
        ydk::YLeaf lsm_id_xr; //type: uint32
        ydk::YLeaf tunnel_id_xr; //type: uint32
        ydk::YLeaf p2mp_id_xr; //type: uint32
        ydk::YLeaf extended_tunnel_id_xr; //type: string

}; // L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses : public ydk::Entity
{
    public:
        L2fibEvpnInclMCastHardwareEgresses();
        ~L2fibEvpnInclMCastHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibEvpnInclMCastHardwareEgress; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress

        ydk::YList l2fib_evpn_incl_m_cast_hardware_egress;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress : public ydk::Entity
{
    public:
        L2fibEvpnInclMCastHardwareEgress();
        ~L2fibEvpnInclMCastHardwareEgress();

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
        class McastReplicationList; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList
        class L2fibEvpnInclMCastOles; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList> mcast_replication_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles> l2fib_evpn_incl_m_cast_oles;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles : public ydk::Entity
{
    public:
        L2fibEvpnInclMCastOles();
        ~L2fibEvpnInclMCastOles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibEvpnInclMCastOle; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle

        ydk::YList l2fib_evpn_incl_m_cast_ole;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle : public ydk::Entity
{
    public:
        L2fibEvpnInclMCastOle();
        ~L2fibEvpnInclMCastOle();

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
        class McastOle; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle> mcast_ole;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop> next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle : public ydk::Entity
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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32
        ydk::YLeaf mcast_encapsulation; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop


class L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses : public ydk::Entity
{
    public:
        L2fibmacHardwareIngresses();
        ~L2fibmacHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibmacHardwareIngress; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress

        ydk::YList l2fibmac_hardware_ingress;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress : public ydk::Entity
{
    public:
        L2fibmacHardwareIngress();
        ~L2fibmacHardwareIngress();

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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base
        class Segment; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment
        class EvpnCtx; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx
        class NextHop; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment> segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx> evpn_ctx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop> next_hop;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment : public ydk::Entity
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
        class Ac; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac
        class Pbb; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb
        class Vni; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni
        class Evpn; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn
        class Pw; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac> ac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni> vni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn> evpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw> pw;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vsp_vlan; //type: uint16

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx : public ydk::Entity
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
        class McastOle; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle> mcast_ole;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle : public ydk::Entity
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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop_ipv6_addr; //type: string
        ydk::YLeaf mcast_label; //type: uint32
        ydk::YLeaf mcast_encapsulation; //type: uint32

}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop : public ydk::Entity
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
        class Base; //type: L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base> base;
        
}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop


class L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base : public ydk::Entity
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


}; // L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base


class L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs : public ydk::Entity
{
    public:
        L2fibEvpnIp4macs();
        ~L2fibEvpnIp4macs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibEvpnIp4mac; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac

        ydk::YList l2fib_evpn_ip4mac;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs


class L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac : public ydk::Entity
{
    public:
        L2fibEvpnIp4mac();
        ~L2fibEvpnIp4mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bdid; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf bdid_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf arp_nd_sync_pending; //type: boolean
        ydk::YLeaf arp_nd_probe_pending; //type: boolean
        ydk::YLeaf arp_nd_delete_pending; //type: boolean
        ydk::YLeaf is_local_xr; //type: boolean
        class IpAddressXr; //type: L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr> ip_address_xr;
        
}; // L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac


class L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr : public ydk::Entity
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

}; // L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr


class L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts : public ydk::Entity
{
    public:
        L2fibPwheMainPorts();
        ~L2fibPwheMainPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2fibPwheMainPort; //type: L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort

        ydk::YList l2fib_pwhe_main_port;
        
}; // L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts


class L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort : public ydk::Entity
{
    public:
        L2fibPwheMainPort();
        ~L2fibPwheMainPort();

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
        ydk::YLeaf next_hop_valid; //type: boolean
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf pseudo_wire_type; //type: uint32
        ydk::YLeaf generic_interface_list_id; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf control_word_enabled; //type: boolean

}; // L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort

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

        static int get_enum_value(const std::string & name) {
            if (name == "forwarding") return 0;
            if (name == "blocked") return 1;
            if (name == "mac-learning") return 2;
            if (name == "nack") return 3;
            if (name == "forwarning-not-useful") return 4;
            if (name == "blocked-not-useful") return 5;
            if (name == "mac-learning-not-useful") return 6;
            if (name == "blocked-data-only") return 7;
            if (name == "multicast-pe2ce-blocked") return 8;
            if (name == "multicast-blocked") return 9;
            if (name == "port-state-unknown") return 10;
            return -1;
        }
};

class L2vpnVniMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l2_dp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l3_dp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l2_cp;
        static const ydk::Enum::YLeaf l2vpn_vni_mode_l3_cp;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-vni-mode-l2-dp") return 0;
            if (name == "l2vpn-vni-mode-l3-dp") return 1;
            if (name == "l2vpn-vni-mode-l2-cp") return 2;
            if (name == "l2vpn-vni-mode-l3-cp") return 3;
            return -1;
        }
};

class L2fibStormControlRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kb_ps;

        static int get_enum_value(const std::string & name) {
            if (name == "pps") return 0;
            if (name == "kb-ps") return 1;
            return -1;
        }
};

class L2vpnAdVplsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_none;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_as;
        static const ydk::Enum::YLeaf l2vpn_ad_vpls_id_v4_addr;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-ad-vpls-id-none") return 0;
            if (name == "l2vpn-ad-vpls-id-auto") return 1;
            if (name == "l2vpn-ad-vpls-id-as") return 10;
            if (name == "l2vpn-ad-vpls-id-v4-addr") return 266;
            return -1;
        }
};

class L2vpnBagMacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf limit_none;
        static const ydk::Enum::YLeaf limit_flood;
        static const ydk::Enum::YLeaf limit_no_flood;
        static const ydk::Enum::YLeaf limit_shutdown;
        static const ydk::Enum::YLeaf limit_no_config;

        static int get_enum_value(const std::string & name) {
            if (name == "limit-none") return 0;
            if (name == "limit-flood") return 1;
            if (name == "limit-no-flood") return 2;
            if (name == "limit-shutdown") return 3;
            if (name == "limit-no-config") return 4;
            return -1;
        }
};

class L2vpnPwheIflistRepStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf not_supported;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "pending") return 1;
            if (name == "success") return 2;
            if (name == "failed") return 3;
            if (name == "not-supported") return 4;
            return -1;
        }
};

class L2fibL2tpSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv2;

        static int get_enum_value(const std::string & name) {
            if (name == "l2tpv3") return 0;
            if (name == "l2tpv2") return 1;
            return -1;
        }
};

class L2vpnVirtualportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vp_state_undefined;
        static const ydk::Enum::YLeaf l2vpn_vp_state_up;
        static const ydk::Enum::YLeaf l2vpn_vp_state_down;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-vp-state-undefined") return 0;
            if (name == "l2vpn-vp-state-up") return 1;
            if (name == "l2vpn-vp-state-down") return 2;
            return -1;
        }
};

class MgmtL2fibMacLimitNotify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_syslog;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_trap;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_notify_both;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-mac-limit-notify-none") return 0;
            if (name == "mgmt-l2fib-mac-limit-notify-syslog") return 1;
            if (name == "mgmt-l2fib-mac-limit-notify-trap") return 2;
            if (name == "mgmt-l2fib-mac-limit-notify-both") return 3;
            return -1;
        }
};

class L2vpnBagStormControlRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kb_ps;

        static int get_enum_value(const std::string & name) {
            if (name == "pps") return 0;
            if (name == "kb-ps") return 1;
            return -1;
        }
};

class L2vpnProtectionRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_protection_primary;
        static const ydk::Enum::YLeaf l2vpn_protection_backup;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-protection-primary") return 0;
            if (name == "l2vpn-protection-backup") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "msti-bag-stp-port-state-forwarding") return 0;
            if (name == "msti-bag-stp-port-state-blocked") return 1;
            if (name == "msti-bag-stp-port-state-mac-learning") return 2;
            if (name == "msti-bag-stp-port-state-nack") return 3;
            if (name == "msti-bag-stp-port-state-forwarding-not-useful") return 4;
            if (name == "msti-bag-stp-port-state-blocked-not-useful") return 5;
            if (name == "msti-bag-stp-port-state-mac-learning-not-useful") return 6;
            if (name == "msti-bag-erp-port-state-blocked-data-only") return 7;
            if (name == "msti-bag-erp-port-state-evpn-mcast-pe2ce-blocked") return 8;
            if (name == "msti-bag-erp-port-state-evpn-port-state-mcast-blocked") return 9;
            return -1;
        }
};

class MgmtL2fibData : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-data-type-min") return 0;
            if (name == "mgmt-l2fib-data-type-xcon") return 1;
            if (name == "mgmt-l2fib-data-type-ac") return 2;
            if (name == "mgmt-l2fib-data-type-span") return 3;
            if (name == "mgmt-l2fib-data-type-atom") return 4;
            if (name == "mgmt-l2fib-data-type-pbb") return 5;
            if (name == "mgmt-l2fib-data-type-vni") return 6;
            if (name == "mgmt-l2fib-data-type-n-hop") return 7;
            if (name == "mgmt-l2fib-data-type-l2tp") return 8;
            if (name == "mgmt-l2fib-data-type-l2tpv2") return 9;
            if (name == "mgmt-l2fib-data-type-bridge") return 10;
            if (name == "mgmt-l2fib-data-type-bridge-shg") return 11;
            if (name == "mgmt-l2fib-data-type-bridge-port") return 12;
            if (name == "mgmt-l2fib-data-type-bridge-mac") return 13;
            if (name == "mgmt-l2fib-data-type-mcast-table") return 14;
            if (name == "mgmt-l2fib-data-type-mcast-leaf") return 15;
            if (name == "mgmt-l2fib-data-type-mcast-xid") return 16;
            if (name == "mgmt-l2fib-data-type-dhcp") return 17;
            if (name == "mgmt-l2fib-data-type-l2tp-ipv6-ts") return 18;
            if (name == "mgmt-l2fib-data-type-pwhe-mp") return 19;
            if (name == "mgmt-l2fib-data-type-evpn") return 20;
            if (name == "mgmt-l2fib-data-type-fxs") return 21;
            if (name == "mgmt-l2fib-data-type-max") return 22;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "unconfigured") return 1;
            if (name == "unsynchronized") return 2;
            if (name == "operational") return 3;
            if (name == "failed") return 4;
            if (name == "reverting") return 5;
            return -1;
        }
};

class L2fibIpAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip_none;
        static const ydk::Enum::YLeaf v4;
        static const ydk::Enum::YLeaf v6;

        static int get_enum_value(const std::string & name) {
            if (name == "ip-none") return 0;
            if (name == "v4") return 4;
            if (name == "v6") return 6;
            return -1;
        }
};

class L2vpnp2mpPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

        static int get_enum_value(const std::string & name) {
            if (name == "rsvp-te") return 1;
            if (name == "mldp") return 2;
            return -1;
        }
};

class IflistRepStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf done;
        static const ydk::Enum::YLeaf not_supported;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "pending") return 1;
            if (name == "done") return 2;
            if (name == "not-supported") return 3;
            if (name == "failed") return 4;
            return -1;
        }
};

class L2vpnPwClassControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "unset") return 0;
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class L2vpnL2tpTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_l2tp_idle;
        static const ydk::Enum::YLeaf l2vpn_l2tp_wait_for_connecting;
        static const ydk::Enum::YLeaf l2vpn_l2tp_wait_for_connected;
        static const ydk::Enum::YLeaf l2vpn_l2tp_in_coming_call;
        static const ydk::Enum::YLeaf l2vpn_l2tp_connected;
        static const ydk::Enum::YLeaf l2vpn_l2tp_disconnected;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-l2tp-idle") return 0;
            if (name == "l2vpn-l2tp-wait-for-connecting") return 1;
            if (name == "l2vpn-l2tp-wait-for-connected") return 2;
            if (name == "l2vpn-l2tp-in-coming-call") return 3;
            if (name == "l2vpn-l2tp-connected") return 4;
            if (name == "l2vpn-l2tp-disconnected") return 5;
            return -1;
        }
};

class L2vpnBridgeCoupledState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "down") return 2;
            if (name == "up") return 3;
            return -1;
        }
};

class MgmtL2fibBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_default;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_pbb_edge;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_type_pbb_core;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-bridge-type-default") return 0;
            if (name == "mgmt-l2fib-bridge-type-pbb-edge") return 1;
            if (name == "mgmt-l2fib-bridge-type-pbb-core") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-sig-not-specified") return 0;
            if (name == "l2vpn-pw-sig-none") return 1;
            if (name == "l2vpn-pw-sig-l2tpv3") return 2;
            if (name == "l2vpn-pw-sig-l2tpv2") return 3;
            if (name == "l2vpn-pw-sig-ldp") return 4;
            if (name == "l2vpn-pw-sig-bgp") return 5;
            return -1;
        }
};

class L2vpnEncapMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_not_specified;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_l2tpv3;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_l2tpv2;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_mpls;
        static const ydk::Enum::YLeaf l2vpn_pw_encaps_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-encaps-not-specified") return 0;
            if (name == "l2vpn-pw-encaps-l2tpv3") return 1;
            if (name == "l2vpn-pw-encaps-l2tpv2") return 2;
            if (name == "l2vpn-pw-encaps-mpls") return 3;
            if (name == "l2vpn-pw-encaps-unknown") return 4;
            return -1;
        }
};

class L2fibG8032ApsPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2fib_aps_port_state_unknown;
        static const ydk::Enum::YLeaf l2fib_aps_port_state_unbound;
        static const ydk::Enum::YLeaf l2fib_aps_port_state_bound;

        static int get_enum_value(const std::string & name) {
            if (name == "l2fib-aps-port-state-unknown") return 0;
            if (name == "l2fib-aps-port-state-unbound") return 1;
            if (name == "l2fib-aps-port-state-bound") return 2;
            return -1;
        }
};

class EvpnMainInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_main_interface_ac;
        static const ydk::Enum::YLeaf evpn_main_interface_nve;
        static const ydk::Enum::YLeaf evpn_main_interface_ac_vfi;
        static const ydk::Enum::YLeaf evpn_main_interface_ac_pw;

        static int get_enum_value(const std::string & name) {
            if (name == "evpn-main-interface-ac") return 1;
            if (name == "evpn-main-interface-nve") return 2;
            if (name == "evpn-main-interface-ac-vfi") return 3;
            if (name == "evpn-main-interface-ac-pw") return 4;
            return -1;
        }
};

class L2vpnVniEncaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_vni_encap_vxlan;
        static const ydk::Enum::YLeaf l2vpn_vni_encap_softgre;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-vni-encap-vxlan") return 0;
            if (name == "l2vpn-vni-encap-softgre") return 1;
            return -1;
        }
};

class L2vpnTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_transport_mode_not_specified;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_ethernet;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_vlan;
        static const ydk::Enum::YLeaf l2vpn_transport_mode_vlan_passthrough;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-transport-mode-not-specified") return 0;
            if (name == "l2vpn-transport-mode-ethernet") return 1;
            if (name == "l2vpn-transport-mode-vlan") return 2;
            if (name == "l2vpn-transport-mode-vlan-passthrough") return 3;
            return -1;
        }
};

class MgmtL2fibMacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_flood;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_no_flood;
        static const ydk::Enum::YLeaf mgmt_l2fib_mac_limit_action_type_shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-mac-limit-action-type-none") return 0;
            if (name == "mgmt-l2fib-mac-limit-action-type-flood") return 1;
            if (name == "mgmt-l2fib-mac-limit-action-type-no-flood") return 2;
            if (name == "mgmt-l2fib-mac-limit-action-type-shutdown") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-ad-lsd-err-type-none") return 0;
            if (name == "l2vpn-ad-lsd-err-type-rw-create-abort-lbl-alloc") return 1;
            if (name == "l2vpn-ad-lsd-err-type-lbl-alloc-abort-rw-create") return 2;
            if (name == "l2vpn-ad-lsd-err-type-lbl-alloc-abort-lbl-alloc") return 3;
            if (name == "l2vpn-ad-lsd-err-type-lbl-alloc-lbl-ctx-mismatch") return 4;
            if (name == "l2vpn-ad-lsd-err-type-rw-create-fpi-size-mismatch") return 5;
            if (name == "l2vpn-ad-lsd-err-type-rw-create-fpi-version-mismatch") return 6;
            if (name == "l2vpn-ad-lsd-err-type-enospc") return 7;
            if (name == "l2vpn-ad-lsd-err-type-enomem") return 8;
            if (name == "l2vpn-ad-lsd-err-type-undefined") return 9;
            return -1;
        }
};

class L2vpnPwControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_unknown;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_clear;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_set;
        static const ydk::Enum::YLeaf l2vpn_pw_control_word_mandatory;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-control-word-unknown") return 0;
            if (name == "l2vpn-pw-control-word-clear") return 1;
            if (name == "l2vpn-pw-control-word-set") return 2;
            if (name == "l2vpn-pw-control-word-mandatory") return 3;
            return -1;
        }
};

class L2vpnBriefPsn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf atom;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf unknown_psn;

        static int get_enum_value(const std::string & name) {
            if (name == "ls") return 0;
            if (name == "atom") return 1;
            if (name == "l2tpv3") return 2;
            if (name == "unknown-psn") return 3;
            return -1;
        }
};

class L2vpnMainIfProtectected : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erp_protected;
        static const ydk::Enum::YLeaf mstp_protected;
        static const ydk::Enum::YLeaf no_protected;

        static int get_enum_value(const std::string & name) {
            if (name == "erp-protected") return 0;
            if (name == "mstp-protected") return 1;
            if (name == "no-protected") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-mpls-pref-path-not-specified") return 0;
            if (name == "l2vpn-pw-mpls-pref-path-next-hop-ip") return 1;
            if (name == "l2vpn-pw-mpls-pref-path-te-tunnel") return 2;
            if (name == "l2vpn-pw-mpls-pref-path-ip-tunnel") return 3;
            if (name == "l2vpn-pw-mpls-pref-path-tp-tunnel") return 4;
            if (name == "l2vpn-pw-mpls-pref-path-sr-te") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-type-unknown") return 0;
            if (name == "l2vpn-pw-type-frame-relay-dlci") return 1;
            if (name == "l2vpn-pw-type-atm-aal5-sdu") return 2;
            if (name == "l2vpn-pw-type-atm-trans-cell") return 3;
            if (name == "l2vpn-pw-type-ether-vlan") return 4;
            if (name == "l2vpn-pw-type-ether") return 5;
            if (name == "l2vpn-pw-type-hdlc") return 6;
            if (name == "l2vpn-pw-type-ppp") return 7;
            if (name == "l2vpn-pw-type-sonet-over-mpls") return 8;
            if (name == "l2vpn-pw-type-atm-n-vcc-cell") return 9;
            if (name == "l2vpn-pw-type-atm-n-vpc-cell") return 10;
            if (name == "l2vpn-pw-type-ip") return 11;
            if (name == "l2vpn-pw-type-atm-vcc-cell") return 12;
            if (name == "l2vpn-pw-type-atm-vpc-cell") return 13;
            if (name == "l2vpn-pw-type-atm-aal5-pdu") return 14;
            if (name == "l2vpn-pw-type-frame-relay") return 15;
            if (name == "l2vpn-pw-type-sonet") return 16;
            if (name == "l2vpn-pw-type-vpls") return 17;
            if (name == "l2vpn-pw-type-tdm-sa-to-p-e1") return 18;
            if (name == "l2vpn-pw-type-tdm-sa-to-p-t1") return 19;
            if (name == "l2vpn-pw-type-tdm-sa-to-p-e3") return 20;
            if (name == "l2vpn-pw-type-tdm-sa-to-p-t3") return 21;
            if (name == "l2vpn-pw-type-tdm-ce-so-psn") return 22;
            return -1;
        }
};

class L2vpnP2mpPwPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "rsvp-te") return 1;
            if (name == "mldp") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "memory-state-unknown") return 0;
            if (name == "memory-state-normal") return 1;
            if (name == "memory-state-minor") return 2;
            if (name == "memory-state-severe") return 3;
            if (name == "memory-state-critical") return 4;
            if (name == "memory-state-invalid") return 5;
            return -1;
        }
};

class L2vpnSrcAddressSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unset;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "unset") return 0;
            if (name == "set") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-intf-type-unknown") return 0;
            if (name == "l2vpn-intf-type-ethernet") return 1;
            if (name == "l2vpn-intf-type-vlan") return 2;
            if (name == "l2vpn-intf-type-atm") return 3;
            if (name == "l2vpn-intf-type-frame-relay") return 4;
            if (name == "l2vpn-intf-type-hdlc") return 5;
            if (name == "l2vpn-intf-type-ppp") return 6;
            if (name == "l2vpn-intf-type-span") return 7;
            if (name == "l2vpn-intf-type-bvi") return 8;
            if (name == "l2vpn-intf-type-cem") return 9;
            if (name == "l2vpn-intf-type-pw-ether") return 10;
            if (name == "l2vpn-intf-type-pw-iw") return 11;
            if (name == "l2vpn-intf-type-vni") return 12;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "reason-none") return 0;
            if (name == "ring-mp0-missing") return 1;
            if (name == "ring-mp1-missing") return 2;
            if (name == "inclusion-list-empty") return 3;
            if (name == "aps0-missing") return 4;
            if (name == "aps0bp-notfound") return 5;
            if (name == "aps0-no-ac-ctx") return 6;
            if (name == "aps0-not-in-inclusion-list") return 7;
            if (name == "aps0-mismatched") return 8;
            if (name == "aps1-missing") return 9;
            if (name == "aps1bp-notfound") return 10;
            if (name == "aps1-no-ac-ctx") return 11;
            if (name == "aps1-not-in-inclusion-list") return 12;
            if (name == "aps1-mismatched") return 13;
            if (name == "aps-unprovisioned") return 14;
            return -1;
        }
};

class L2vpnAtmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_atm_port_mode;
        static const ydk::Enum::YLeaf l2vpn_atm_vp_mode;
        static const ydk::Enum::YLeaf l2vpn_atm_vc_mode;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-atm-port-mode") return 0;
            if (name == "l2vpn-atm-vp-mode") return 1;
            if (name == "l2vpn-atm-vc-mode") return 2;
            return -1;
        }
};

class L2fibPwRedundancyRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf backup;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 0;
            if (name == "backup") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unresolved") return 0;
            if (name == "provisioned") return 1;
            if (name == "connecting") return 2;
            if (name == "connected") return 3;
            if (name == "synchronizing") return 4;
            if (name == "synchronized") return 5;
            return -1;
        }
};

class MgmtL2fibBridgeMacEvpnCtx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_none;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_esi_id;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_local_label;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_moi;
        static const ydk::Enum::YLeaf mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-bridge-mac-evpn-ctx-none") return 0;
            if (name == "mgmt-l2fib-bridge-mac-evpn-ctx-esi-id") return 1;
            if (name == "mgmt-l2fib-bridge-mac-evpn-ctx-local-label") return 2;
            if (name == "mgmt-l2fib-bridge-mac-evpn-ctx-moi") return 3;
            if (name == "mgmt-l2fib-bridge-mac-evpn-ctx-bp-ifh") return 4;
            return -1;
        }
};

class L2vpnHaNsrNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf collab_time_out;
        static const ydk::Enum::YLeaf collab_conntection_idt;
        static const ydk::Enum::YLeaf nsr_peer_not_connected;
        static const ydk::Enum::YLeaf nsr_peer_not_in_sync;

        static int get_enum_value(const std::string & name) {
            if (name == "collab-time-out") return 0;
            if (name == "collab-conntection-idt") return 1;
            if (name == "nsr-peer-not-connected") return 2;
            if (name == "nsr-peer-not-in-sync") return 3;
            return -1;
        }
};

class L2vpnRgState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "active") return 1;
            if (name == "standby") return 2;
            return -1;
        }
};

class L2vpnSyncStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf ready;

        static int get_enum_value(const std::string & name) {
            if (name == "not-ready") return 0;
            if (name == "ready") return 1;
            return -1;
        }
};

class L2vpnTimeStampMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf differential;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "differential") return 1;
            if (name == "absolute") return 2;
            if (name == "none") return 3;
            return -1;
        }
};

class L2vpnAdSigMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_none;
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_bgp;
        static const ydk::Enum::YLeaf l2vpn_ad_sig_method_ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-ad-sig-method-none") return 0;
            if (name == "l2vpn-ad-sig-method-bgp") return 1;
            if (name == "l2vpn-ad-sig-method-ldp") return 2;
            return -1;
        }
};

class L2vpnPwFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_fec_128;
        static const ydk::Enum::YLeaf l2vpn_pw_fec_129;
        static const ydk::Enum::YLeaf l2vpn_pw_fec_not_applicable;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-fec-128") return 0;
            if (name == "l2vpn-pw-fec-129") return 1;
            if (name == "l2vpn-pw-fec-not-applicable") return 268435455;
            return -1;
        }
};

class L2vpnBagMacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "restrict") return 1;
            if (name == "none") return 2;
            if (name == "shutdown") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "forwarding") return 0;
            if (name == "blocked") return 1;
            if (name == "mac-learning") return 2;
            if (name == "nack") return 3;
            if (name == "forwarning-not-useful") return 4;
            if (name == "blocked-not-useful") return 5;
            if (name == "mac-learning-not-useful") return 6;
            if (name == "blocked-data-only") return 7;
            if (name == "mcast-pe2-ce-blocked") return 8;
            if (name == "port-state-unknown") return 9;
            return -1;
        }
};

class L2vpnProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_protection_unknown;
        static const ydk::Enum::YLeaf l2vpn_protection_interface;
        static const ydk::Enum::YLeaf l2vpn_protection_pseudowire;
        static const ydk::Enum::YLeaf l2vpn_protection_group;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-protection-unknown") return 0;
            if (name == "l2vpn-protection-interface") return 1;
            if (name == "l2vpn-protection-pseudowire") return 2;
            if (name == "l2vpn-protection-group") return 3;
            return -1;
        }
};

class L2vpnBagMacWithdrawOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac_withdraw_option_state_up;
        static const ydk::Enum::YLeaf mac_withdraw_option_state_down;
        static const ydk::Enum::YLeaf mac_withdraw_option_optimize;

        static int get_enum_value(const std::string & name) {
            if (name == "mac-withdraw-option-state-up") return 0;
            if (name == "mac-withdraw-option-state-down") return 1;
            if (name == "mac-withdraw-option-optimize") return 2;
            return -1;
        }
};

class L2vpnVfiP2mpTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "rsvp-te") return 1;
            return -1;
        }
};

class L2vpnBridgeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bridge_init;
        static const ydk::Enum::YLeaf bridge_up;
        static const ydk::Enum::YLeaf bridge_down;
        static const ydk::Enum::YLeaf bridge_admin_down;

        static int get_enum_value(const std::string & name) {
            if (name == "bridge-init") return 0;
            if (name == "bridge-up") return 1;
            if (name == "bridge-down") return 2;
            if (name == "bridge-admin-down") return 3;
            return -1;
        }
};

class PwhePortImState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class L2vpnpw : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf vpls_autodiscovered;
        static const ydk::Enum::YLeaf vpws_autodiscovered;
        static const ydk::Enum::YLeaf vpls_autodiscovered_ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "manual") return 1;
            if (name == "vpls-autodiscovered") return 2;
            if (name == "vpws-autodiscovered") return 3;
            if (name == "vpls-autodiscovered-ldp") return 4;
            return -1;
        }
};

class MgmtL2fibStatsData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_l2fib_stats_type_unknown;
        static const ydk::Enum::YLeaf mgmt_l2fib_stats_type_mcast;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-stats-type-unknown") return 0;
            if (name == "mgmt-l2fib-stats-type-mcast") return 1;
            return -1;
        }
};

class L2fibGroupState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class L2vpnPeer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf internal_label;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "internal-label") return 3;
            return -1;
        }
};

class L2vpnPwheIntf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pseudowire_ether;
        static const ydk::Enum::YLeaf pseudowire_iw;

        static int get_enum_value(const std::string & name) {
            if (name == "pseudowire-ether") return 0;
            if (name == "pseudowire-iw") return 1;
            return -1;
        }
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
        static const ydk::Enum::YLeaf vlan_switched_port;
        static const ydk::Enum::YLeaf vlan_switched_port_vlan;
        static const ydk::Enum::YLeaf encap_types_max;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown-encap") return 0;
            if (name == "vlan") return 1;
            if (name == "qinq") return 2;
            if (name == "qin-any") return 3;
            if (name == "ethernet") return 4;
            if (name == "atm-aal0") return 5;
            if (name == "atm-aal5") return 6;
            if (name == "atm-vp") return 7;
            if (name == "atm-port") return 8;
            if (name == "hdlc") return 9;
            if (name == "fr-dlci") return 10;
            if (name == "fr-dlci-local") return 11;
            if (name == "ppp") return 12;
            if (name == "tdm-sa-to-p-e1") return 13;
            if (name == "tdm-sa-to-p-t1") return 14;
            if (name == "tdm-sa-to-p-e3") return 15;
            if (name == "tdm-sa-to-p-t3") return 16;
            if (name == "tdm-ce-so-psn") return 17;
            if (name == "ip") return 18;
            if (name == "vlan-encap") return 19;
            if (name == "dot1ad") return 20;
            if (name == "efp") return 21;
            if (name == "bvi") return 22;
            if (name == "monitor-session") return 23;
            if (name == "pseudowire-ether") return 24;
            if (name == "pseudowire-iw") return 25;
            if (name == "multi-segment-pseudowire") return 26;
            if (name == "pseudowire-l2-subinterface") return 27;
            if (name == "virtual-network-interface") return 28;
            if (name == "vlan-switched-port") return 29;
            if (name == "vlan-switched-port-vlan") return 30;
            if (name == "encap-types-max") return 31;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "rpl-unknown") return 0;
            if (name == "port0-owner") return 1;
            if (name == "port0-neighbor") return 2;
            if (name == "port0-next-neighbor") return 3;
            if (name == "port1-owner") return 4;
            if (name == "port1-neighbor") return 5;
            if (name == "port1-next-neighbor") return 6;
            return -1;
        }
};

class L2vpnXcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_xc_state_unresolved;
        static const ydk::Enum::YLeaf l2vpn_xc_state_down;
        static const ydk::Enum::YLeaf l2vpn_xc_state_up;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-xc-state-unresolved") return 0;
            if (name == "l2vpn-xc-state-down") return 1;
            if (name == "l2vpn-xc-state-up") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "te-tunnel") return 0;
            if (name == "ip-tunnel") return 1;
            if (name == "tp-tunnel") return 2;
            if (name == "mte-tunnel") return 3;
            if (name == "mldp-tunnel") return 4;
            if (name == "sr-te-policy") return 5;
            return -1;
        }
};

class L2vpnIdMgrAppBag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_virtual_ac;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_ac;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_pw;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_bd;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_fxc;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_mp2mp;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_rd;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_pbb;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_if_list;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_atom;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_global;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_pw_group;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_evpn;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_evpn_lbl;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_evpn_rd;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_ital;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_bp;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_evpn_tep;
        static const ydk::Enum::YLeaf l2vpn_id_mgr_app_bag_type_count;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-id-mgr-app-bag-type-virtual-ac") return 0;
            if (name == "l2vpn-id-mgr-app-bag-type-ac") return 1;
            if (name == "l2vpn-id-mgr-app-bag-type-pw") return 2;
            if (name == "l2vpn-id-mgr-app-bag-type-bd") return 3;
            if (name == "l2vpn-id-mgr-app-bag-type-fxc") return 4;
            if (name == "l2vpn-id-mgr-app-bag-type-mp2mp") return 5;
            if (name == "l2vpn-id-mgr-app-bag-type-rd") return 6;
            if (name == "l2vpn-id-mgr-app-bag-type-pbb") return 7;
            if (name == "l2vpn-id-mgr-app-bag-type-if-list") return 8;
            if (name == "l2vpn-id-mgr-app-bag-type-atom") return 9;
            if (name == "l2vpn-id-mgr-app-bag-type-global") return 10;
            if (name == "l2vpn-id-mgr-app-bag-type-pw-group") return 11;
            if (name == "l2vpn-id-mgr-app-bag-type-evpn") return 12;
            if (name == "l2vpn-id-mgr-app-bag-type-evpn-lbl") return 13;
            if (name == "l2vpn-id-mgr-app-bag-type-evpn-rd") return 14;
            if (name == "l2vpn-id-mgr-app-bag-type-ital") return 15;
            if (name == "l2vpn-id-mgr-app-bag-type-bp") return 16;
            if (name == "l2vpn-id-mgr-app-bag-type-evpn-tep") return 17;
            if (name == "l2vpn-id-mgr-app-bag-type-count") return 18;
            return -1;
        }
};

class L2vpnMirpLiteProtocolInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan0;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "vlan0") return 0;
            if (name == "none") return 1;
            return -1;
        }
};

class L2vpnVfiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "admin-down") return 3;
            return -1;
        }
};

class L2vpnBagAdEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_not_specified;
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_ether_vlan;
        static const ydk::Enum::YLeaf l2vpn_bag_ad_encap_ether;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-bag-ad-encap-not-specified") return 0;
            if (name == "l2vpn-bag-ad-encap-ether-vlan") return 1;
            if (name == "l2vpn-bag-ad-encap-ether") return 2;
            return -1;
        }
};

class L2vpnTosMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_ip_tos_none;
        static const ydk::Enum::YLeaf l2vpn_pw_ip_tos_reflect;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-ip-tos-none") return 0;
            if (name == "l2vpn-pw-ip-tos-reflect") return 1;
            return -1;
        }
};

class L2vpnIpcTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "broadcast") return 1;
            if (name == "unknown") return 2;
            return -1;
        }
};

class P2mpTransportState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf tunnel_down;
        static const ydk::Enum::YLeaf max_tunnels_reached;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ok") return 1;
            if (name == "error") return 2;
            if (name == "tunnel-down") return 3;
            if (name == "max-tunnels-reached") return 4;
            return -1;
        }
};

class L2vpnService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vpws;
        static const ydk::Enum::YLeaf vpls;

        static int get_enum_value(const std::string & name) {
            if (name == "vpws") return 0;
            if (name == "vpls") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-segment-type-unresolved") return 0;
            if (name == "l2vpn-segment-type-ac") return 1;
            if (name == "l2vpn-segment-type-pw") return 2;
            if (name == "l2vpn-segment-type-bd-ac") return 3;
            if (name == "l2vpn-segment-type-vfi") return 4;
            if (name == "l2vpn-segment-type-bd-pw") return 5;
            if (name == "l2vpn-segment-type-bd-pbb") return 6;
            if (name == "l2vpn-segment-type-bd-evpn") return 7;
            if (name == "l2vpn-segment-type-vni") return 8;
            return -1;
        }
};

class MgmtL2fibMacSecAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "restrict") return 1;
            if (name == "none") return 2;
            if (name == "shutdown") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "rpl-unknown") return 0;
            if (name == "port0-owner") return 1;
            if (name == "port0-neighbor") return 2;
            if (name == "port0-next-neighbor") return 3;
            if (name == "port1-owner") return 4;
            if (name == "port1-neighbor") return 5;
            if (name == "port1-next-neighbor") return 6;
            return -1;
        }
};

class L2vpnBagMacLimitNotify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mac_limit_notify_none;
        static const ydk::Enum::YLeaf mac_limit_notify_syslog;
        static const ydk::Enum::YLeaf mac_limit_notify_trap;
        static const ydk::Enum::YLeaf mac_limit_notify_syslog_trap;
        static const ydk::Enum::YLeaf mac_limit_notify_no_config;

        static int get_enum_value(const std::string & name) {
            if (name == "mac-limit-notify-none") return 0;
            if (name == "mac-limit-notify-syslog") return 1;
            if (name == "mac-limit-notify-trap") return 2;
            if (name == "mac-limit-notify-syslog-trap") return 3;
            if (name == "mac-limit-notify-no-config") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-id-type-manual") return 1;
            if (name == "l2vpn-pw-id-type-ad-vpls") return 2;
            if (name == "l2vpn-pw-id-type-ad-vpws") return 3;
            if (name == "l2vpn-pw-id-type-ad-vpls-ldp") return 4;
            if (name == "l2vpn-pw-id-type-pwr") return 5;
            if (name == "l2vpn-pw-id-type-evpn") return 6;
            return -1;
        }
};

class L2vpnLoadBal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_supported;
        static const ydk::Enum::YLeaf source_dest_mac;
        static const ydk::Enum::YLeaf source_dest_ip;
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf pseudowire_label;

        static int get_enum_value(const std::string & name) {
            if (name == "not-supported") return 0;
            if (name == "source-dest-mac") return 1;
            if (name == "source-dest-ip") return 2;
            if (name == "undefined") return 3;
            if (name == "pseudowire-label") return 4;
            return -1;
        }
};

class L2vpnFrMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_fr_port_mode;
        static const ydk::Enum::YLeaf l2vpn_fr_dlci_mode;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-fr-port-mode") return 0;
            if (name == "l2vpn-fr-dlci-mode") return 1;
            return -1;
        }
};

class L2vpnTdmRtpOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf absent;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "present") return 1;
            if (name == "absent") return 2;
            return -1;
        }
};

class L2vpnMirpLiteStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf not_supported;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 0;
            if (name == "not-supported") return 1;
            return -1;
        }
};

class L2vpnPtree : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf mldp;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "rsvp-te") return 1;
            if (name == "mldp") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-segment-state-unresolved") return 0;
            if (name == "l2vpn-segment-state-up") return 1;
            if (name == "l2vpn-segment-state-down") return 2;
            if (name == "l2vpn-segment-state-admin-down") return 3;
            if (name == "l2vpn-segment-state-local-up") return 4;
            if (name == "l2vpn-segment-state-remote-up") return 5;
            if (name == "l2vpn-segment-state-connected") return 6;
            if (name == "l2vpn-segment-state-standby") return 7;
            if (name == "l2vpn-segment-state-standby-ready") return 8;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "manual") return 1;
            if (name == "vpls") return 2;
            if (name == "vpws") return 3;
            if (name == "vpls-ldp") return 4;
            if (name == "l2fib-pw-id-type-pwr") return 5;
            if (name == "l2fib-pw-id-type-evpn") return 6;
            return -1;
        }
};

class L2fibFeature : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2fib_feature_dhcp_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_igmp_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_mld_snooping;
        static const ydk::Enum::YLeaf l2fib_feature_max;

        static int get_enum_value(const std::string & name) {
            if (name == "l2fib-feature-dhcp-snooping") return 0;
            if (name == "l2fib-feature-igmp-snooping") return 1;
            if (name == "l2fib-feature-mld-snooping") return 2;
            if (name == "l2fib-feature-max") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-iw-type-none") return 0;
            if (name == "l2vpn-iw-type-ethernet") return 1;
            if (name == "l2vpn-iw-type-ppp") return 2;
            if (name == "l2vpn-iw-type-ipv4") return 3;
            if (name == "l2vpn-iw-type-voluntary") return 4;
            if (name == "l2vpn-iw-type-frf8") return 5;
            return -1;
        }
};

class MgmtL2fibSwitching : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-l2fib-switching-type-unknown") return 0;
            if (name == "mgmt-l2fib-switching-type-ac-ac") return 1;
            if (name == "mgmt-l2fib-switching-type-ac-atom") return 2;
            if (name == "mgmt-l2fib-switching-type-ac-vfi") return 3;
            if (name == "mgmt-l2fib-switching-type-ac-l2tp") return 4;
            if (name == "mgmt-l2fib-switching-type-atom-atom") return 5;
            if (name == "mgmt-l2fib-switching-type-vfi-atom") return 6;
            if (name == "mgmt-l2fib-switching-type-vfi-l2tp") return 7;
            if (name == "mgmt-l2fib-switching-type-l2tp-atom") return 8;
            if (name == "mgmt-l2fib-switching-type-l2tp-l2tp") return 9;
            if (name == "mgmt-l2fib-switching-type-max") return 10;
            return -1;
        }
};

class L2vpnBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_bridge_type_default;
        static const ydk::Enum::YLeaf l2vpn_bridge_type_pbb_edge;
        static const ydk::Enum::YLeaf l2vpn_bridge_type_pbb_core;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-bridge-type-default") return 0;
            if (name == "l2vpn-bridge-type-pbb-edge") return 1;
            if (name == "l2vpn-bridge-type-pbb-core") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ce-so-psn") return 1;
            if (name == "sa-to-p-e1") return 2;
            if (name == "sa-to-p-t1") return 3;
            if (name == "sa-to-p-e3") return 4;
            if (name == "sa-to-p-t3") return 5;
            return -1;
        }
};

class L2vpnPwFlowLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "receive") return 1;
            if (name == "transmit") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class L2vpnBagMacAgingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aging_none;
        static const ydk::Enum::YLeaf aging_absolute;
        static const ydk::Enum::YLeaf aging_inactivity;

        static int get_enum_value(const std::string & name) {
            if (name == "aging-none") return 0;
            if (name == "aging-absolute") return 1;
            if (name == "aging-inactivity") return 2;
            return -1;
        }
};

class L2vpnVfiP2mpSignaling : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bgp;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "bgp") return 1;
            return -1;
        }
};

class L2vpnPwSequence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_off;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_xmit;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_recv;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_trans;
        static const ydk::Enum::YLeaf l2vpn_pw_sequence_both;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-sequence-off") return 0;
            if (name == "l2vpn-pw-sequence-xmit") return 1;
            if (name == "l2vpn-pw-sequence-recv") return 2;
            if (name == "l2vpn-pw-sequence-trans") return 3;
            if (name == "l2vpn-pw-sequence-both") return 4;
            return -1;
        }
};

class L2fibLoadBal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_undef;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_dst_ip;
        static const ydk::Enum::YLeaf vc;

        static int get_enum_value(const std::string & name) {
            if (name == "flow-undef") return 0;
            if (name == "src-dst-mac") return 1;
            if (name == "src-dst-ip") return 2;
            if (name == "vc") return 3;
            return -1;
        }
};

class L2vpnAdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rt_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const ydk::Enum::YLeaf es_import;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-ad-rt-none") return 0;
            if (name == "l2vpn-ad-rt-as") return 1;
            if (name == "l2vpn-ad-rt-4byte-as") return 2;
            if (name == "l2vpn-ad-rt-v4-addr") return 3;
            if (name == "es-import") return 1538;
            return -1;
        }
};

class L2vpnAdRd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rd_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_v4_addr;

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-ad-rd-none") return 0;
            if (name == "l2vpn-ad-rd-auto") return 1;
            if (name == "l2vpn-ad-rd-as") return 2;
            if (name == "l2vpn-ad-rd-4byte-as") return 3;
            if (name == "l2vpn-ad-rd-v4-addr") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "l2vpn-pw-state-unresolved") return 0;
            if (name == "l2vpn-pw-state-idle") return 1;
            if (name == "l2vpn-pw-state-provisioned") return 2;
            if (name == "l2vpn-pw-state-remote-standby") return 3;
            if (name == "l2vpn-pw-state-local-ready") return 4;
            if (name == "l2vpn-pw-state-all-ready") return 5;
            if (name == "l2vpn-pw-state-established") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "te-tunnel") return 2;
            if (name == "ip-tunnel") return 3;
            if (name == "tp-tunnel") return 4;
            if (name == "sr-te-policy") return 5;
            if (name == "mldp-tunnel") return 6;
            if (name == "mte-tunnel") return 7;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_0_ */

