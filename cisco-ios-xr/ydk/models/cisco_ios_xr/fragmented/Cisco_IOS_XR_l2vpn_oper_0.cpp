
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2vpnForwarding::L2vpnForwarding()
    :
    nodes(std::make_shared<L2vpnForwarding::Nodes>())
{
    nodes->parent = this;

    yang_name = "l2vpn-forwarding"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

L2vpnForwarding::~L2vpnForwarding()
{
}

bool L2vpnForwarding::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool L2vpnForwarding::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string L2vpnForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<L2vpnForwarding::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void L2vpnForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> L2vpnForwarding::clone_ptr() const
{
    return std::make_shared<L2vpnForwarding>();
}

std::string L2vpnForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2vpnForwarding::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2vpnForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2vpnForwarding::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2vpnForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "l2vpn-forwarding"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnForwarding::Nodes::~Nodes()
{
}

bool L2vpnForwarding::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnForwarding::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    l2fibx_con_locals(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals>())
    , l2fib_mroute_summaries(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries>())
    , l2fib_message_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary>())
    , l2fib_mroutes(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes>())
    , pbb_bmac_sa(std::make_shared<L2vpnForwarding::Nodes::Node::PbbBmacSa>())
    , l2fib_mac_learning(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning>())
    , l2fib_p2mp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibP2mp>())
    , l2fib_evpn_incl_m_cast_hardware_egresses(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses>())
    , l2fibmac_hardware_ingresses(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses>())
    , l2fib_evpn_ip4macs(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs>())
    , l2fib_pwhe_main_ports(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts>())
    , l2fib_dhcp_binding_count(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount>())
    , l2fib_bridge_domains(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains>())
    , l2fib_mstp_summaries(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpSummaries>())
    , l2fib_resource_availability(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibResourceAvailability>())
    , l2fibmac_hardware_egresses(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses>())
    , l2fibx_con_l2tpv2s(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s>())
    , l2fib_mroute_ipv6s(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s>())
    , l2fib_mon_sess_x_cons(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons>())
    , l2fib_mmrp_summaries(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrpSummaries>())
    , l2fib_pw_groups(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwGroups>())
    , l2fib_evpn_incl_m_cast_hardware_ingresses(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareIngresses>())
    , l2fib_dhcp_binding_details(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingDetails>())
    , l2fibx_cons(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxCons>())
    , l2fib_main_interfaces(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMainInterfaces>())
    , l2fib_mstp_details(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpDetails>())
    , l2fib_l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibL2tp>())
    , l2fib_g8032(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibG8032>())
    , l2fib_bridge_ports(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgePorts>())
    , l2fibmac_details(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacDetails>())
    , l2fib_bridge_domain_names(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames>())
    , l2fib_mroute_ports(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts>())
    , l2fib_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary>())
    , l2fib_nve_peers(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibNvePeers>())
    , l2fib_mmrps(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps>())
    , l2fib_evpn_ip6macs(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs>())
    , l2fib_dhcp_binding_summaries(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries>())
    , l2fib_evpn_incl_m_casts(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts>())
{
    l2fibx_con_locals->parent = this;
    l2fib_mroute_summaries->parent = this;
    l2fib_message_summary->parent = this;
    l2fib_mroutes->parent = this;
    pbb_bmac_sa->parent = this;
    l2fib_mac_learning->parent = this;
    l2fib_p2mp->parent = this;
    l2fib_evpn_incl_m_cast_hardware_egresses->parent = this;
    l2fibmac_hardware_ingresses->parent = this;
    l2fib_evpn_ip4macs->parent = this;
    l2fib_pwhe_main_ports->parent = this;
    l2fib_dhcp_binding_count->parent = this;
    l2fib_bridge_domains->parent = this;
    l2fib_mstp_summaries->parent = this;
    l2fib_resource_availability->parent = this;
    l2fibmac_hardware_egresses->parent = this;
    l2fibx_con_l2tpv2s->parent = this;
    l2fib_mroute_ipv6s->parent = this;
    l2fib_mon_sess_x_cons->parent = this;
    l2fib_mmrp_summaries->parent = this;
    l2fib_pw_groups->parent = this;
    l2fib_evpn_incl_m_cast_hardware_ingresses->parent = this;
    l2fib_dhcp_binding_details->parent = this;
    l2fibx_cons->parent = this;
    l2fib_main_interfaces->parent = this;
    l2fib_mstp_details->parent = this;
    l2fib_l2tp->parent = this;
    l2fib_g8032->parent = this;
    l2fib_bridge_ports->parent = this;
    l2fibmac_details->parent = this;
    l2fib_bridge_domain_names->parent = this;
    l2fib_mroute_ports->parent = this;
    l2fib_summary->parent = this;
    l2fib_nve_peers->parent = this;
    l2fib_mmrps->parent = this;
    l2fib_evpn_ip6macs->parent = this;
    l2fib_dhcp_binding_summaries->parent = this;
    l2fib_evpn_incl_m_casts->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnForwarding::Nodes::Node::~Node()
{
}

bool L2vpnForwarding::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (l2fibx_con_locals !=  nullptr && l2fibx_con_locals->has_data())
	|| (l2fib_mroute_summaries !=  nullptr && l2fib_mroute_summaries->has_data())
	|| (l2fib_message_summary !=  nullptr && l2fib_message_summary->has_data())
	|| (l2fib_mroutes !=  nullptr && l2fib_mroutes->has_data())
	|| (pbb_bmac_sa !=  nullptr && pbb_bmac_sa->has_data())
	|| (l2fib_mac_learning !=  nullptr && l2fib_mac_learning->has_data())
	|| (l2fib_p2mp !=  nullptr && l2fib_p2mp->has_data())
	|| (l2fib_evpn_incl_m_cast_hardware_egresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_egresses->has_data())
	|| (l2fibmac_hardware_ingresses !=  nullptr && l2fibmac_hardware_ingresses->has_data())
	|| (l2fib_evpn_ip4macs !=  nullptr && l2fib_evpn_ip4macs->has_data())
	|| (l2fib_pwhe_main_ports !=  nullptr && l2fib_pwhe_main_ports->has_data())
	|| (l2fib_dhcp_binding_count !=  nullptr && l2fib_dhcp_binding_count->has_data())
	|| (l2fib_bridge_domains !=  nullptr && l2fib_bridge_domains->has_data())
	|| (l2fib_mstp_summaries !=  nullptr && l2fib_mstp_summaries->has_data())
	|| (l2fib_resource_availability !=  nullptr && l2fib_resource_availability->has_data())
	|| (l2fibmac_hardware_egresses !=  nullptr && l2fibmac_hardware_egresses->has_data())
	|| (l2fibx_con_l2tpv2s !=  nullptr && l2fibx_con_l2tpv2s->has_data())
	|| (l2fib_mroute_ipv6s !=  nullptr && l2fib_mroute_ipv6s->has_data())
	|| (l2fib_mon_sess_x_cons !=  nullptr && l2fib_mon_sess_x_cons->has_data())
	|| (l2fib_mmrp_summaries !=  nullptr && l2fib_mmrp_summaries->has_data())
	|| (l2fib_pw_groups !=  nullptr && l2fib_pw_groups->has_data())
	|| (l2fib_evpn_incl_m_cast_hardware_ingresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_ingresses->has_data())
	|| (l2fib_dhcp_binding_details !=  nullptr && l2fib_dhcp_binding_details->has_data())
	|| (l2fibx_cons !=  nullptr && l2fibx_cons->has_data())
	|| (l2fib_main_interfaces !=  nullptr && l2fib_main_interfaces->has_data())
	|| (l2fib_mstp_details !=  nullptr && l2fib_mstp_details->has_data())
	|| (l2fib_l2tp !=  nullptr && l2fib_l2tp->has_data())
	|| (l2fib_g8032 !=  nullptr && l2fib_g8032->has_data())
	|| (l2fib_bridge_ports !=  nullptr && l2fib_bridge_ports->has_data())
	|| (l2fibmac_details !=  nullptr && l2fibmac_details->has_data())
	|| (l2fib_bridge_domain_names !=  nullptr && l2fib_bridge_domain_names->has_data())
	|| (l2fib_mroute_ports !=  nullptr && l2fib_mroute_ports->has_data())
	|| (l2fib_summary !=  nullptr && l2fib_summary->has_data())
	|| (l2fib_nve_peers !=  nullptr && l2fib_nve_peers->has_data())
	|| (l2fib_mmrps !=  nullptr && l2fib_mmrps->has_data())
	|| (l2fib_evpn_ip6macs !=  nullptr && l2fib_evpn_ip6macs->has_data())
	|| (l2fib_dhcp_binding_summaries !=  nullptr && l2fib_dhcp_binding_summaries->has_data())
	|| (l2fib_evpn_incl_m_casts !=  nullptr && l2fib_evpn_incl_m_casts->has_data());
}

bool L2vpnForwarding::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (l2fibx_con_locals !=  nullptr && l2fibx_con_locals->has_operation())
	|| (l2fib_mroute_summaries !=  nullptr && l2fib_mroute_summaries->has_operation())
	|| (l2fib_message_summary !=  nullptr && l2fib_message_summary->has_operation())
	|| (l2fib_mroutes !=  nullptr && l2fib_mroutes->has_operation())
	|| (pbb_bmac_sa !=  nullptr && pbb_bmac_sa->has_operation())
	|| (l2fib_mac_learning !=  nullptr && l2fib_mac_learning->has_operation())
	|| (l2fib_p2mp !=  nullptr && l2fib_p2mp->has_operation())
	|| (l2fib_evpn_incl_m_cast_hardware_egresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_egresses->has_operation())
	|| (l2fibmac_hardware_ingresses !=  nullptr && l2fibmac_hardware_ingresses->has_operation())
	|| (l2fib_evpn_ip4macs !=  nullptr && l2fib_evpn_ip4macs->has_operation())
	|| (l2fib_pwhe_main_ports !=  nullptr && l2fib_pwhe_main_ports->has_operation())
	|| (l2fib_dhcp_binding_count !=  nullptr && l2fib_dhcp_binding_count->has_operation())
	|| (l2fib_bridge_domains !=  nullptr && l2fib_bridge_domains->has_operation())
	|| (l2fib_mstp_summaries !=  nullptr && l2fib_mstp_summaries->has_operation())
	|| (l2fib_resource_availability !=  nullptr && l2fib_resource_availability->has_operation())
	|| (l2fibmac_hardware_egresses !=  nullptr && l2fibmac_hardware_egresses->has_operation())
	|| (l2fibx_con_l2tpv2s !=  nullptr && l2fibx_con_l2tpv2s->has_operation())
	|| (l2fib_mroute_ipv6s !=  nullptr && l2fib_mroute_ipv6s->has_operation())
	|| (l2fib_mon_sess_x_cons !=  nullptr && l2fib_mon_sess_x_cons->has_operation())
	|| (l2fib_mmrp_summaries !=  nullptr && l2fib_mmrp_summaries->has_operation())
	|| (l2fib_pw_groups !=  nullptr && l2fib_pw_groups->has_operation())
	|| (l2fib_evpn_incl_m_cast_hardware_ingresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_ingresses->has_operation())
	|| (l2fib_dhcp_binding_details !=  nullptr && l2fib_dhcp_binding_details->has_operation())
	|| (l2fibx_cons !=  nullptr && l2fibx_cons->has_operation())
	|| (l2fib_main_interfaces !=  nullptr && l2fib_main_interfaces->has_operation())
	|| (l2fib_mstp_details !=  nullptr && l2fib_mstp_details->has_operation())
	|| (l2fib_l2tp !=  nullptr && l2fib_l2tp->has_operation())
	|| (l2fib_g8032 !=  nullptr && l2fib_g8032->has_operation())
	|| (l2fib_bridge_ports !=  nullptr && l2fib_bridge_ports->has_operation())
	|| (l2fibmac_details !=  nullptr && l2fibmac_details->has_operation())
	|| (l2fib_bridge_domain_names !=  nullptr && l2fib_bridge_domain_names->has_operation())
	|| (l2fib_mroute_ports !=  nullptr && l2fib_mroute_ports->has_operation())
	|| (l2fib_summary !=  nullptr && l2fib_summary->has_operation())
	|| (l2fib_nve_peers !=  nullptr && l2fib_nve_peers->has_operation())
	|| (l2fib_mmrps !=  nullptr && l2fib_mmrps->has_operation())
	|| (l2fib_evpn_ip6macs !=  nullptr && l2fib_evpn_ip6macs->has_operation())
	|| (l2fib_dhcp_binding_summaries !=  nullptr && l2fib_dhcp_binding_summaries->has_operation())
	|| (l2fib_evpn_incl_m_casts !=  nullptr && l2fib_evpn_incl_m_casts->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnForwarding::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibx-con-locals")
    {
        if(l2fibx_con_locals == nullptr)
        {
            l2fibx_con_locals = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals>();
        }
        return l2fibx_con_locals;
    }

    if(child_yang_name == "l2fib-mroute-summaries")
    {
        if(l2fib_mroute_summaries == nullptr)
        {
            l2fib_mroute_summaries = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries>();
        }
        return l2fib_mroute_summaries;
    }

    if(child_yang_name == "l2fib-message-summary")
    {
        if(l2fib_message_summary == nullptr)
        {
            l2fib_message_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary>();
        }
        return l2fib_message_summary;
    }

    if(child_yang_name == "l2fib-mroutes")
    {
        if(l2fib_mroutes == nullptr)
        {
            l2fib_mroutes = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes>();
        }
        return l2fib_mroutes;
    }

    if(child_yang_name == "pbb-bmac-sa")
    {
        if(pbb_bmac_sa == nullptr)
        {
            pbb_bmac_sa = std::make_shared<L2vpnForwarding::Nodes::Node::PbbBmacSa>();
        }
        return pbb_bmac_sa;
    }

    if(child_yang_name == "l2fib-mac-learning")
    {
        if(l2fib_mac_learning == nullptr)
        {
            l2fib_mac_learning = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning>();
        }
        return l2fib_mac_learning;
    }

    if(child_yang_name == "l2fib-p2mp")
    {
        if(l2fib_p2mp == nullptr)
        {
            l2fib_p2mp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibP2mp>();
        }
        return l2fib_p2mp;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-egresses")
    {
        if(l2fib_evpn_incl_m_cast_hardware_egresses == nullptr)
        {
            l2fib_evpn_incl_m_cast_hardware_egresses = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses>();
        }
        return l2fib_evpn_incl_m_cast_hardware_egresses;
    }

    if(child_yang_name == "l2fibmac-hardware-ingresses")
    {
        if(l2fibmac_hardware_ingresses == nullptr)
        {
            l2fibmac_hardware_ingresses = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses>();
        }
        return l2fibmac_hardware_ingresses;
    }

    if(child_yang_name == "l2fib-evpn-ip4macs")
    {
        if(l2fib_evpn_ip4macs == nullptr)
        {
            l2fib_evpn_ip4macs = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs>();
        }
        return l2fib_evpn_ip4macs;
    }

    if(child_yang_name == "l2fib-pwhe-main-ports")
    {
        if(l2fib_pwhe_main_ports == nullptr)
        {
            l2fib_pwhe_main_ports = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts>();
        }
        return l2fib_pwhe_main_ports;
    }

    if(child_yang_name == "l2fib-dhcp-binding-count")
    {
        if(l2fib_dhcp_binding_count == nullptr)
        {
            l2fib_dhcp_binding_count = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingCount>();
        }
        return l2fib_dhcp_binding_count;
    }

    if(child_yang_name == "l2fib-bridge-domains")
    {
        if(l2fib_bridge_domains == nullptr)
        {
            l2fib_bridge_domains = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomains>();
        }
        return l2fib_bridge_domains;
    }

    if(child_yang_name == "l2fib-mstp-summaries")
    {
        if(l2fib_mstp_summaries == nullptr)
        {
            l2fib_mstp_summaries = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpSummaries>();
        }
        return l2fib_mstp_summaries;
    }

    if(child_yang_name == "l2fib-resource-availability")
    {
        if(l2fib_resource_availability == nullptr)
        {
            l2fib_resource_availability = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibResourceAvailability>();
        }
        return l2fib_resource_availability;
    }

    if(child_yang_name == "l2fibmac-hardware-egresses")
    {
        if(l2fibmac_hardware_egresses == nullptr)
        {
            l2fibmac_hardware_egresses = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareEgresses>();
        }
        return l2fibmac_hardware_egresses;
    }

    if(child_yang_name == "l2fibx-con-l2tpv2s")
    {
        if(l2fibx_con_l2tpv2s == nullptr)
        {
            l2fibx_con_l2tpv2s = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConL2tpv2s>();
        }
        return l2fibx_con_l2tpv2s;
    }

    if(child_yang_name == "l2fib-mroute-ipv6s")
    {
        if(l2fib_mroute_ipv6s == nullptr)
        {
            l2fib_mroute_ipv6s = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteIpv6s>();
        }
        return l2fib_mroute_ipv6s;
    }

    if(child_yang_name == "l2fib-mon-sess-x-cons")
    {
        if(l2fib_mon_sess_x_cons == nullptr)
        {
            l2fib_mon_sess_x_cons = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMonSessXCons>();
        }
        return l2fib_mon_sess_x_cons;
    }

    if(child_yang_name == "l2fib-mmrp-summaries")
    {
        if(l2fib_mmrp_summaries == nullptr)
        {
            l2fib_mmrp_summaries = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrpSummaries>();
        }
        return l2fib_mmrp_summaries;
    }

    if(child_yang_name == "l2fib-pw-groups")
    {
        if(l2fib_pw_groups == nullptr)
        {
            l2fib_pw_groups = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwGroups>();
        }
        return l2fib_pw_groups;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-ingresses")
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingresses == nullptr)
        {
            l2fib_evpn_incl_m_cast_hardware_ingresses = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareIngresses>();
        }
        return l2fib_evpn_incl_m_cast_hardware_ingresses;
    }

    if(child_yang_name == "l2fib-dhcp-binding-details")
    {
        if(l2fib_dhcp_binding_details == nullptr)
        {
            l2fib_dhcp_binding_details = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingDetails>();
        }
        return l2fib_dhcp_binding_details;
    }

    if(child_yang_name == "l2fibx-cons")
    {
        if(l2fibx_cons == nullptr)
        {
            l2fibx_cons = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxCons>();
        }
        return l2fibx_cons;
    }

    if(child_yang_name == "l2fib-main-interfaces")
    {
        if(l2fib_main_interfaces == nullptr)
        {
            l2fib_main_interfaces = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMainInterfaces>();
        }
        return l2fib_main_interfaces;
    }

    if(child_yang_name == "l2fib-mstp-details")
    {
        if(l2fib_mstp_details == nullptr)
        {
            l2fib_mstp_details = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMstpDetails>();
        }
        return l2fib_mstp_details;
    }

    if(child_yang_name == "l2fib-l2tp")
    {
        if(l2fib_l2tp == nullptr)
        {
            l2fib_l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibL2tp>();
        }
        return l2fib_l2tp;
    }

    if(child_yang_name == "l2fib-g8032")
    {
        if(l2fib_g8032 == nullptr)
        {
            l2fib_g8032 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibG8032>();
        }
        return l2fib_g8032;
    }

    if(child_yang_name == "l2fib-bridge-ports")
    {
        if(l2fib_bridge_ports == nullptr)
        {
            l2fib_bridge_ports = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgePorts>();
        }
        return l2fib_bridge_ports;
    }

    if(child_yang_name == "l2fibmac-details")
    {
        if(l2fibmac_details == nullptr)
        {
            l2fibmac_details = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacDetails>();
        }
        return l2fibmac_details;
    }

    if(child_yang_name == "l2fib-bridge-domain-names")
    {
        if(l2fib_bridge_domain_names == nullptr)
        {
            l2fib_bridge_domain_names = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibBridgeDomainNames>();
        }
        return l2fib_bridge_domain_names;
    }

    if(child_yang_name == "l2fib-mroute-ports")
    {
        if(l2fib_mroute_ports == nullptr)
        {
            l2fib_mroute_ports = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts>();
        }
        return l2fib_mroute_ports;
    }

    if(child_yang_name == "l2fib-summary")
    {
        if(l2fib_summary == nullptr)
        {
            l2fib_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary>();
        }
        return l2fib_summary;
    }

    if(child_yang_name == "l2fib-nve-peers")
    {
        if(l2fib_nve_peers == nullptr)
        {
            l2fib_nve_peers = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibNvePeers>();
        }
        return l2fib_nve_peers;
    }

    if(child_yang_name == "l2fib-mmrps")
    {
        if(l2fib_mmrps == nullptr)
        {
            l2fib_mmrps = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps>();
        }
        return l2fib_mmrps;
    }

    if(child_yang_name == "l2fib-evpn-ip6macs")
    {
        if(l2fib_evpn_ip6macs == nullptr)
        {
            l2fib_evpn_ip6macs = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs>();
        }
        return l2fib_evpn_ip6macs;
    }

    if(child_yang_name == "l2fib-dhcp-binding-summaries")
    {
        if(l2fib_dhcp_binding_summaries == nullptr)
        {
            l2fib_dhcp_binding_summaries = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries>();
        }
        return l2fib_dhcp_binding_summaries;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-casts")
    {
        if(l2fib_evpn_incl_m_casts == nullptr)
        {
            l2fib_evpn_incl_m_casts = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts>();
        }
        return l2fib_evpn_incl_m_casts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2fibx_con_locals != nullptr)
    {
        _children["l2fibx-con-locals"] = l2fibx_con_locals;
    }

    if(l2fib_mroute_summaries != nullptr)
    {
        _children["l2fib-mroute-summaries"] = l2fib_mroute_summaries;
    }

    if(l2fib_message_summary != nullptr)
    {
        _children["l2fib-message-summary"] = l2fib_message_summary;
    }

    if(l2fib_mroutes != nullptr)
    {
        _children["l2fib-mroutes"] = l2fib_mroutes;
    }

    if(pbb_bmac_sa != nullptr)
    {
        _children["pbb-bmac-sa"] = pbb_bmac_sa;
    }

    if(l2fib_mac_learning != nullptr)
    {
        _children["l2fib-mac-learning"] = l2fib_mac_learning;
    }

    if(l2fib_p2mp != nullptr)
    {
        _children["l2fib-p2mp"] = l2fib_p2mp;
    }

    if(l2fib_evpn_incl_m_cast_hardware_egresses != nullptr)
    {
        _children["l2fib-evpn-incl-m-cast-hardware-egresses"] = l2fib_evpn_incl_m_cast_hardware_egresses;
    }

    if(l2fibmac_hardware_ingresses != nullptr)
    {
        _children["l2fibmac-hardware-ingresses"] = l2fibmac_hardware_ingresses;
    }

    if(l2fib_evpn_ip4macs != nullptr)
    {
        _children["l2fib-evpn-ip4macs"] = l2fib_evpn_ip4macs;
    }

    if(l2fib_pwhe_main_ports != nullptr)
    {
        _children["l2fib-pwhe-main-ports"] = l2fib_pwhe_main_ports;
    }

    if(l2fib_dhcp_binding_count != nullptr)
    {
        _children["l2fib-dhcp-binding-count"] = l2fib_dhcp_binding_count;
    }

    if(l2fib_bridge_domains != nullptr)
    {
        _children["l2fib-bridge-domains"] = l2fib_bridge_domains;
    }

    if(l2fib_mstp_summaries != nullptr)
    {
        _children["l2fib-mstp-summaries"] = l2fib_mstp_summaries;
    }

    if(l2fib_resource_availability != nullptr)
    {
        _children["l2fib-resource-availability"] = l2fib_resource_availability;
    }

    if(l2fibmac_hardware_egresses != nullptr)
    {
        _children["l2fibmac-hardware-egresses"] = l2fibmac_hardware_egresses;
    }

    if(l2fibx_con_l2tpv2s != nullptr)
    {
        _children["l2fibx-con-l2tpv2s"] = l2fibx_con_l2tpv2s;
    }

    if(l2fib_mroute_ipv6s != nullptr)
    {
        _children["l2fib-mroute-ipv6s"] = l2fib_mroute_ipv6s;
    }

    if(l2fib_mon_sess_x_cons != nullptr)
    {
        _children["l2fib-mon-sess-x-cons"] = l2fib_mon_sess_x_cons;
    }

    if(l2fib_mmrp_summaries != nullptr)
    {
        _children["l2fib-mmrp-summaries"] = l2fib_mmrp_summaries;
    }

    if(l2fib_pw_groups != nullptr)
    {
        _children["l2fib-pw-groups"] = l2fib_pw_groups;
    }

    if(l2fib_evpn_incl_m_cast_hardware_ingresses != nullptr)
    {
        _children["l2fib-evpn-incl-m-cast-hardware-ingresses"] = l2fib_evpn_incl_m_cast_hardware_ingresses;
    }

    if(l2fib_dhcp_binding_details != nullptr)
    {
        _children["l2fib-dhcp-binding-details"] = l2fib_dhcp_binding_details;
    }

    if(l2fibx_cons != nullptr)
    {
        _children["l2fibx-cons"] = l2fibx_cons;
    }

    if(l2fib_main_interfaces != nullptr)
    {
        _children["l2fib-main-interfaces"] = l2fib_main_interfaces;
    }

    if(l2fib_mstp_details != nullptr)
    {
        _children["l2fib-mstp-details"] = l2fib_mstp_details;
    }

    if(l2fib_l2tp != nullptr)
    {
        _children["l2fib-l2tp"] = l2fib_l2tp;
    }

    if(l2fib_g8032 != nullptr)
    {
        _children["l2fib-g8032"] = l2fib_g8032;
    }

    if(l2fib_bridge_ports != nullptr)
    {
        _children["l2fib-bridge-ports"] = l2fib_bridge_ports;
    }

    if(l2fibmac_details != nullptr)
    {
        _children["l2fibmac-details"] = l2fibmac_details;
    }

    if(l2fib_bridge_domain_names != nullptr)
    {
        _children["l2fib-bridge-domain-names"] = l2fib_bridge_domain_names;
    }

    if(l2fib_mroute_ports != nullptr)
    {
        _children["l2fib-mroute-ports"] = l2fib_mroute_ports;
    }

    if(l2fib_summary != nullptr)
    {
        _children["l2fib-summary"] = l2fib_summary;
    }

    if(l2fib_nve_peers != nullptr)
    {
        _children["l2fib-nve-peers"] = l2fib_nve_peers;
    }

    if(l2fib_mmrps != nullptr)
    {
        _children["l2fib-mmrps"] = l2fib_mmrps;
    }

    if(l2fib_evpn_ip6macs != nullptr)
    {
        _children["l2fib-evpn-ip6macs"] = l2fib_evpn_ip6macs;
    }

    if(l2fib_dhcp_binding_summaries != nullptr)
    {
        _children["l2fib-dhcp-binding-summaries"] = l2fib_dhcp_binding_summaries;
    }

    if(l2fib_evpn_incl_m_casts != nullptr)
    {
        _children["l2fib-evpn-incl-m-casts"] = l2fib_evpn_incl_m_casts;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibx-con-locals" || name == "l2fib-mroute-summaries" || name == "l2fib-message-summary" || name == "l2fib-mroutes" || name == "pbb-bmac-sa" || name == "l2fib-mac-learning" || name == "l2fib-p2mp" || name == "l2fib-evpn-incl-m-cast-hardware-egresses" || name == "l2fibmac-hardware-ingresses" || name == "l2fib-evpn-ip4macs" || name == "l2fib-pwhe-main-ports" || name == "l2fib-dhcp-binding-count" || name == "l2fib-bridge-domains" || name == "l2fib-mstp-summaries" || name == "l2fib-resource-availability" || name == "l2fibmac-hardware-egresses" || name == "l2fibx-con-l2tpv2s" || name == "l2fib-mroute-ipv6s" || name == "l2fib-mon-sess-x-cons" || name == "l2fib-mmrp-summaries" || name == "l2fib-pw-groups" || name == "l2fib-evpn-incl-m-cast-hardware-ingresses" || name == "l2fib-dhcp-binding-details" || name == "l2fibx-cons" || name == "l2fib-main-interfaces" || name == "l2fib-mstp-details" || name == "l2fib-l2tp" || name == "l2fib-g8032" || name == "l2fib-bridge-ports" || name == "l2fibmac-details" || name == "l2fib-bridge-domain-names" || name == "l2fib-mroute-ports" || name == "l2fib-summary" || name == "l2fib-nve-peers" || name == "l2fib-mmrps" || name == "l2fib-evpn-ip6macs" || name == "l2fib-dhcp-binding-summaries" || name == "l2fib-evpn-incl-m-casts" || name == "node-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocals()
    :
    l2fibx_con_local(this, {})
{

    yang_name = "l2fibx-con-locals"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::~L2fibxConLocals()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fibx_con_local.len(); index++)
    {
        if(l2fibx_con_local[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::has_operation() const
{
    for (std::size_t index=0; index<l2fibx_con_local.len(); index++)
    {
        if(l2fibx_con_local[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-locals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibx-con-local")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal>();
        ent_->parent = this;
        l2fibx_con_local.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fibx_con_local.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibx-con-local")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::L2fibxConLocal()
    :
    interface_name{YType::str, "interface-name"},
    vsp_vlan_id{YType::uint32, "vsp-vlan-id"},
    xcon_name{YType::str, "xcon-name"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base>())
    , segment1(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1>())
    , segment2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2>())
{
    base->parent = this;
    segment1->parent = this;
    segment2->parent = this;

    yang_name = "l2fibx-con-local"; yang_parent_name = "l2fibx-con-locals"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::~L2fibxConLocal()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vsp_vlan_id.is_set
	|| xcon_name.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vsp_vlan_id.yfilter)
	|| ydk::is_set(xcon_name.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(switching_type.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-local";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vsp_vlan_id.is_set || is_set(vsp_vlan_id.yfilter)) leaf_name_data.push_back(vsp_vlan_id.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.yfilter)) leaf_name_data.push_back(xcon_name.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.yfilter)) leaf_name_data.push_back(switching_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(segment1 != nullptr)
    {
        _children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        _children["segment2"] = segment2;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsp-vlan-id")
    {
        vsp_vlan_id = value;
        vsp_vlan_id.value_namespace = name_space;
        vsp_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
        xcon_name.value_namespace = name_space;
        xcon_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
        switching_type.value_namespace = name_space;
        switching_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vsp-vlan-id")
    {
        vsp_vlan_id.yfilter = yfilter;
    }
    if(value_path == "xcon-name")
    {
        xcon_name.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "switching-type")
    {
        switching_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment1" || name == "segment2" || name == "interface-name" || name == "vsp-vlan-id" || name == "xcon-name" || name == "bound" || name == "switching-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibx-con-local"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac>())
    , pbb(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb>())
    , vni(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni>())
    , evpn(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn>())
    , monitor_session(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    monitor_session->parent = this;
    pw->parent = this;

    yang_name = "segment1"; yang_parent_name = "l2fibx-con-local"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::~Segment1()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session == nullptr)
        {
            monitor_session = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession>();
        }
        return monitor_session;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        _children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        _children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    if(monitor_session != nullptr)
    {
        _children["monitor-session"] = monitor_session;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "monitor-session" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_handle{YType::str, "sub-interface-handle"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    actype{YType::uint8, "actype"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    adjacency_address{YType::str, "adjacency-address"},
    bound{YType::boolean, "bound"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    vlan_id_count{YType::uint8, "vlan-id-count"},
    first_vlan_id{YType::uint16, "first-vlan-id"},
    second_vlan_id{YType::uint16, "second-vlan-id"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base>())
    , fxc_next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| sub_interface_handle.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| actype.is_set
	|| inter_working_mode.is_set
	|| adjacency_valid.is_set
	|| adjacency_address.is_set
	|| bound.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| vlan_id_count.is_set
	|| first_vlan_id.is_set
	|| second_vlan_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(vlan_id_count.yfilter)
	|| ydk::is_set(first_vlan_id.yfilter)
	|| ydk::is_set(second_vlan_id.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (vlan_id_count.is_set || is_set(vlan_id_count.yfilter)) leaf_name_data.push_back(vlan_id_count.get_name_leafdata());
    if (first_vlan_id.is_set || is_set(first_vlan_id.yfilter)) leaf_name_data.push_back(first_vlan_id.get_name_leafdata());
    if (second_vlan_id.is_set || is_set(second_vlan_id.yfilter)) leaf_name_data.push_back(second_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        _children["fxc-next-hop"] = fxc_next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count = value;
        vlan_id_count.value_namespace = name_space;
        vlan_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id = value;
        first_vlan_id.value_namespace = name_space;
        first_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id = value;
        second_vlan_id.value_namespace = name_space;
        second_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count.yfilter = yfilter;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id.yfilter = yfilter;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "interface-name" || name == "sub-interface-handle" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "actype" || name == "inter-working-mode" || name == "adjacency-valid" || name == "adjacency-address" || name == "bound" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "vlan-id-count" || name == "first-vlan-id" || name == "second-vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    forward_class{YType::uint8, "forward-class"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base>())
    , pbb_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;
    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::~Pbb()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::has_data() const
{
    if (is_presence_container) return true;
    return bound.is_set
	|| forward_class.is_set
	|| core_pbb_evpn_enabled.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(core_pbb_evpn_enabled.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.yfilter)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        _children["pbb-union"] = pbb_union;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
        core_pbb_evpn_enabled.value_namespace = name_space;
        core_pbb_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "pbb-union" || name == "bound" || name == "forward-class" || name == "core-pbb-evpn-enabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
        ,
    edge(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge>())
    , core(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core>())
{
    edge->parent = this;
    core->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::has_data() const
{
    if (is_presence_container) return true;
    return pbb_type.is_set
	|| (edge !=  nullptr && edge->has_data())
	|| (core !=  nullptr && core->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_type.yfilter)
	|| (edge !=  nullptr && edge->has_operation())
	|| (core !=  nullptr && core->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.yfilter)) leaf_name_data.push_back(pbb_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(edge != nullptr)
    {
        _children["edge"] = edge;
    }

    if(core != nullptr)
    {
        _children["core"] = core;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
        pbb_type.value_namespace = name_space;
        pbb_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-type")
    {
        pbb_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "core" || name == "pbb-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac_configured{YType::boolean, "mac-configured"},
    mac{YType::str, "mac"}
{

    yang_name = "edge"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    if (is_presence_container) return true;
    return mac_configured.is_set
	|| mac.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_configured.yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_configured.is_set || is_set(mac_configured.yfilter)) leaf_name_data.push_back(mac_configured.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-configured")
    {
        mac_configured = value;
        mac_configured.value_namespace = name_space;
        mac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-configured")
    {
        mac_configured.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-configured" || name == "mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{

    yang_name = "core"; yang_parent_name = "pbb-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pbb::PbbUnion::Core::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Vni()
    :
    srcip{YType::str, "srcip"},
    mcastip{YType::str, "mcastip"},
    bound{YType::boolean, "bound"},
    parent_if{YType::str, "parent-if"},
    encap{YType::uint32, "encap"},
    udp_port{YType::uint32, "udp-port"},
    source_vtep_if{YType::str, "source-vtep-if"},
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    ingress_replication{YType::boolean, "ingress-replication"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::~Vni()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| mcastip.is_set
	|| bound.is_set
	|| parent_if.is_set
	|| encap.is_set
	|| udp_port.is_set
	|| source_vtep_if.is_set
	|| any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| ingress_replication.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mcastip.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(parent_if.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(source_vtep_if.yfilter)
	|| ydk::is_set(any_cast_ip.yfilter)
	|| ydk::is_set(anycast_mcast_ip.yfilter)
	|| ydk::is_set(ingress_replication.yfilter)
	|| ydk::is_set(vx_lan_mode.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.yfilter)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.yfilter)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (any_cast_ip.is_set || is_set(any_cast_ip.yfilter)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.yfilter)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (ingress_replication.is_set || is_set(ingress_replication.yfilter)) leaf_name_data.push_back(ingress_replication.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.yfilter)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
        mcastip.value_namespace = name_space;
        mcastip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
        source_vtep_if.value_namespace = name_space;
        source_vtep_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
        any_cast_ip.value_namespace = name_space;
        any_cast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
        anycast_mcast_ip.value_namespace = name_space;
        anycast_mcast_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication = value;
        ingress_replication.value_namespace = name_space;
        ingress_replication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
        vx_lan_mode.value_namespace = name_space;
        vx_lan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mcastip")
    {
        mcastip.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if.yfilter = yfilter;
    }
    if(value_path == "any-cast-ip")
    {
        any_cast_ip.yfilter = yfilter;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip.yfilter = yfilter;
    }
    if(value_path == "ingress-replication")
    {
        ingress_replication.yfilter = yfilter;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "srcip" || name == "mcastip" || name == "bound" || name == "parent-if" || name == "encap" || name == "udp-port" || name == "source-vtep-if" || name == "any-cast-ip" || name == "anycast-mcast-ip" || name == "ingress-replication" || name == "vx-lan-mode")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::Base()
{

    yang_name = "base"; yang_parent_name = "vni"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Vni::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::~Evpn()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "bound" || name == "evi" || name == "forward-class")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::Base()
{

    yang_name = "base"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Evpn::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::MonitorSession()
    :
    xcid{YType::uint32, "xcid"},
    session_name{YType::str, "session-name"},
    hardware_information{YType::str, "hardware-information"},
    bound{YType::boolean, "bound"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base>())
{
    base->parent = this;

    yang_name = "monitor-session"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set
	|| session_name.is_set
	|| hardware_information.is_set
	|| bound.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "xcid" || name == "session-name" || name == "hardware-information" || name == "bound")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::Base()
{

    yang_name = "base"; yang_parent_name = "monitor-session"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::MonitorSession::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"},
    context{YType::uint16, "context"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    bound{YType::boolean, "bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    backup_configured{YType::boolean, "backup-configured"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    global_id{YType::uint32, "global-id"},
    ac_id{YType::uint32, "ac-id"},
    forward_class{YType::uint8, "forward-class"},
    next_hop_address{YType::str, "next-hop-address"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop>())
    , pseudo_wire_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion>())
    , backup_pseudo_wire(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire>())
{
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;
    backup_pseudo_wire->parent = this;

    yang_name = "pw"; yang_parent_name = "segment1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| signal_capability_flags.is_set
	|| context.is_set
	|| sequence_resync_threshold.is_set
	|| bound.is_set
	|| next_hop_valid.is_set
	|| backup_configured.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_load_balance_type.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| global_id.is_set
	|| ac_id.is_set
	|| forward_class.is_set
	|| next_hop_address.is_set
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        _children["pseudo-wire-union"] = pseudo_wire_union;
    }

    if(backup_pseudo_wire != nullptr)
    {
        _children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "backup-pseudo-wire" || name == "pw-id" || name == "signal-capability-flags" || name == "context" || name == "sequence-resync-threshold" || name == "bound" || name == "next-hop-valid" || name == "backup-configured" || name == "redundancy-role" || name == "active" || name == "pseudo-wire-id-type" || name == "pw-load-balance-type" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state" || name == "global-id" || name == "ac-id" || name == "forward-class" || name == "next-hop-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mpls(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls>())
    , l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp>())
    , l2tpv2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2>())
    , l2tp_ipv6_ts(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts>())
{
    mpls->parent = this;
    l2tp->parent = this;
    l2tpv2->parent = this;
    l2tp_ipv6_ts->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(l2tpv2 != nullptr)
    {
        _children["l2tpv2"] = l2tpv2;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        _children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "l2tp" || name == "l2tpv2" || name == "l2tp-ipv6-ts" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::L2tp()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::~L2tp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::L2tpv2()
    :
    pw_flags{YType::uint8, "pw-flags"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    xconnect_id{YType::uint32, "xconnect-id"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::~L2tpv2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return pw_flags.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| rem_udp_port.is_set
	|| xconnect_id.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "pw-flags" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "protocol" || name == "rem-udp-port" || name == "xconnect-id" || name == "next-hop-address" || name == "source-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::L2tpIpv6Ts()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::~L2tpIpv6Ts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::Local()
    :
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_data() const
{
    if (is_presence_container) return true;
    return cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set
	|| secondary_cookie_size.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_high_value.is_set
	|| session_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value" || name == "secondary-cookie-size" || name == "secondary-cookie-low-value" || name == "secondary-cookie-high-value" || name == "session-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    bound{YType::boolean, "bound"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"}
        ,
    atom(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::has_data() const
{
    if (is_presence_container) return true;
    return backup_next_hop.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| backup_pseudo_wire_id.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| bound.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atom != nullptr)
    {
        _children["atom"] = atom;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "backup-next-hop" || name == "backup-pseudo-wire-id-type" || name == "backup-pseudo-wire-id" || name == "redundancy-role" || name == "active" || name == "bound" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Segment2()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac>())
    , bp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp>())
    , fxs(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw>())
{
    ac->parent = this;
    bp->parent = this;
    fxs->parent = this;
    pw->parent = this;

    yang_name = "segment2"; yang_parent_name = "l2fibx-con-local"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::~Segment2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (fxs !=  nullptr && fxs->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (fxs !=  nullptr && fxs->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "fxs")
    {
        if(fxs == nullptr)
        {
            fxs = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs>();
        }
        return fxs;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(bp != nullptr)
    {
        _children["bp"] = bp;
    }

    if(fxs != nullptr)
    {
        _children["fxs"] = fxs;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "bp" || name == "fxs" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_handle{YType::str, "sub-interface-handle"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    actype{YType::uint8, "actype"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    adjacency_address{YType::str, "adjacency-address"},
    bound{YType::boolean, "bound"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    vlan_id_count{YType::uint8, "vlan-id-count"},
    first_vlan_id{YType::uint16, "first-vlan-id"},
    second_vlan_id{YType::uint16, "second-vlan-id"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base>())
    , fxc_next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop>())
{
    base->parent = this;
    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| sub_interface_handle.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| actype.is_set
	|| inter_working_mode.is_set
	|| adjacency_valid.is_set
	|| adjacency_address.is_set
	|| bound.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| vlan_id_count.is_set
	|| first_vlan_id.is_set
	|| second_vlan_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_handle.yfilter)
	|| ydk::is_set(attachment_circuit_id.yfilter)
	|| ydk::is_set(attachment_circuit_mtu.yfilter)
	|| ydk::is_set(actype.yfilter)
	|| ydk::is_set(inter_working_mode.yfilter)
	|| ydk::is_set(adjacency_valid.yfilter)
	|| ydk::is_set(adjacency_address.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(ip_inter_working_mac.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| ydk::is_set(fxc_next_hop_valid.yfilter)
	|| ydk::is_set(vlan_id_count.yfilter)
	|| ydk::is_set(first_vlan_id.yfilter)
	|| ydk::is_set(second_vlan_id.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.yfilter)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.yfilter)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.yfilter)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (actype.is_set || is_set(actype.yfilter)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.yfilter)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.yfilter)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.yfilter)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.yfilter)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.yfilter)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (vlan_id_count.is_set || is_set(vlan_id_count.yfilter)) leaf_name_data.push_back(vlan_id_count.get_name_leafdata());
    if (first_vlan_id.is_set || is_set(first_vlan_id.yfilter)) leaf_name_data.push_back(first_vlan_id.get_name_leafdata());
    if (second_vlan_id.is_set || is_set(second_vlan_id.yfilter)) leaf_name_data.push_back(second_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        _children["fxc-next-hop"] = fxc_next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
        sub_interface_handle.value_namespace = name_space;
        sub_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
        attachment_circuit_id.value_namespace = name_space;
        attachment_circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
        attachment_circuit_mtu.value_namespace = name_space;
        attachment_circuit_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actype")
    {
        actype = value;
        actype.value_namespace = name_space;
        actype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
        inter_working_mode.value_namespace = name_space;
        inter_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
        adjacency_valid.value_namespace = name_space;
        adjacency_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
        adjacency_address.value_namespace = name_space;
        adjacency_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
        ip_inter_working_mac.value_namespace = name_space;
        ip_inter_working_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
        fxc_next_hop_valid.value_namespace = name_space;
        fxc_next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count = value;
        vlan_id_count.value_namespace = name_space;
        vlan_id_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id = value;
        first_vlan_id.value_namespace = name_space;
        first_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id = value;
        second_vlan_id.value_namespace = name_space;
        second_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id.yfilter = yfilter;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu.yfilter = yfilter;
    }
    if(value_path == "actype")
    {
        actype.yfilter = yfilter;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode.yfilter = yfilter;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid.yfilter = yfilter;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "vlan-id-count")
    {
        vlan_id_count.yfilter = yfilter;
    }
    if(value_path == "first-vlan-id")
    {
        first_vlan_id.yfilter = yfilter;
    }
    if(value_path == "second-vlan-id")
    {
        second_vlan_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxc-next-hop" || name == "interface-name" || name == "sub-interface-handle" || name == "attachment-circuit-id" || name == "attachment-circuit-mtu" || name == "actype" || name == "inter-working-mode" || name == "adjacency-valid" || name == "adjacency-address" || name == "bound" || name == "ip-inter-working-mac" || name == "redundancy-group-id" || name == "redundancy-object-id" || name == "evpn-internal-label" || name == "fxc-next-hop-valid" || name == "vlan-id-count" || name == "first-vlan-id" || name == "second-vlan-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::Base()
{

    yang_name = "base"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::FxcNextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxc-next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Ac::FxcNextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Bp()
    :
    bridge_id{YType::uint32, "bridge-id"},
    shg_id{YType::uint32, "shg-id"},
    msti_pointer{YType::uint32, "msti-pointer"},
    segment_type{YType::uint8, "segment-type"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"},
    learn_key{YType::uint8, "learn-key"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base>())
    , oper(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper>())
    , p2mp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp>())
{
    base->parent = this;
    oper->parent = this;
    p2mp->parent = this;

    yang_name = "bp"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::~Bp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| shg_id.is_set
	|| msti_pointer.is_set
	|| segment_type.is_set
	|| mvrp_sequence_number.is_set
	|| learn_key.is_set
	|| (base !=  nullptr && base->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(shg_id.yfilter)
	|| ydk::is_set(msti_pointer.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter)
	|| ydk::is_set(learn_key.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.yfilter)) leaf_name_data.push_back(shg_id.get_name_leafdata());
    if (msti_pointer.is_set || is_set(msti_pointer.yfilter)) leaf_name_data.push_back(msti_pointer.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.yfilter)) leaf_name_data.push_back(learn_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base>();
        }
        return base;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp == nullptr)
        {
            p2mp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp>();
        }
        return p2mp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    if(p2mp != nullptr)
    {
        _children["p2mp"] = p2mp;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
        shg_id.value_namespace = name_space;
        shg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer = value;
        msti_pointer.value_namespace = name_space;
        msti_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
        learn_key.value_namespace = name_space;
        learn_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "shg-id")
    {
        shg_id.yfilter = yfilter;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "learn-key")
    {
        learn_key.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "oper" || name == "p2mp" || name == "bridge-id" || name == "shg-id" || name == "msti-pointer" || name == "segment-type" || name == "mvrp-sequence-number" || name == "learn-key")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::Base()
{

    yang_name = "base"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::Oper()
    :
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"}
        ,
    operational_information(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::~Oper()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::has_data() const
{
    if (is_presence_container) return true;
    return unicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast_storm_control_pps.yfilter)
	|| ydk::is_set(unicast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(broadcast_storm_control_pps.yfilter)
	|| ydk::is_set(broadcast_storm_control_kb_ps.yfilter)
	|| ydk::is_set(multicast_storm_control_pps.yfilter)
	|| ydk::is_set(multicast_storm_control_kb_ps.yfilter)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.yfilter)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.yfilter)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.yfilter)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operational_information != nullptr)
    {
        _children["operational-information"] = operational_information;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
        unicast_storm_control_pps.value_namespace = name_space;
        unicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
        unicast_storm_control_kb_ps.value_namespace = name_space;
        unicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
        broadcast_storm_control_pps.value_namespace = name_space;
        broadcast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
        broadcast_storm_control_kb_ps.value_namespace = name_space;
        broadcast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
        multicast_storm_control_pps.value_namespace = name_space;
        multicast_storm_control_pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
        multicast_storm_control_kb_ps.value_namespace = name_space;
        multicast_storm_control_kb_ps.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps.yfilter = yfilter;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operational-information" || name == "unicast-storm-control-pps" || name == "unicast-storm-control-kb-ps" || name == "broadcast-storm-control-pps" || name == "broadcast-storm-control-kb-ps" || name == "multicast-storm-control-pps" || name == "multicast-storm-control-kb-ps")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::OperationalInformation()
    :
    mtu{YType::uint32, "mtu"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_limit{YType::uint32, "mac-limit"},
    number_of_macs{YType::uint32, "number-of-macs"},
    admin_disabled{YType::boolean, "admin-disabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_threshold_enabled{YType::boolean, "is-mac-secure-threshold-enabled"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    stp_participating{YType::boolean, "stp-participating"},
    bvi_configured{YType::boolean, "bvi-configured"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    msti{YType::uint32, "msti"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"}
        ,
    feature(this, {})
{

    yang_name = "operational-information"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return mtu.is_set
	|| mac_aging_time.is_set
	|| mac_limit.is_set
	|| number_of_macs.is_set
	|| admin_disabled.is_set
	|| flooding_disabled.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| mac_limit_action.is_set
	|| mac_limit_threshold.is_set
	|| mac_learning_disabled.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_limit_notification_type.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| mac_secure_action.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_threshold_enabled.is_set
	|| mac_aging_type.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| is_dai_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| stp_participating.is_set
	|| bvi_configured.is_set
	|| is_bvi_up.is_set
	|| is_vni_enabled.is_set
	|| is_evpn_enabled.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_evpn_flow_label.is_set
	|| is_evpn_cw_disable.is_set
	|| msti.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_igmp_snoop_enabled.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.len(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mac_aging_time.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(number_of_macs.yfilter)
	|| ydk::is_set(admin_disabled.yfilter)
	|| ydk::is_set(flooding_disabled.yfilter)
	|| ydk::is_set(flood_unknown_unicast_enabled.yfilter)
	|| ydk::is_set(mac_limit_action.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mac_learning_disabled.yfilter)
	|| ydk::is_set(mac_port_down_flush_disabled.yfilter)
	|| ydk::is_set(mac_limit_notification_type.yfilter)
	|| ydk::is_set(is_mac_secure_enabled.yfilter)
	|| ydk::is_set(is_mac_secure_logging_enabled.yfilter)
	|| ydk::is_set(mac_secure_action.yfilter)
	|| ydk::is_set(is_mac_secure_accept_shutdown.yfilter)
	|| ydk::is_set(is_mac_secure_threshold_enabled.yfilter)
	|| ydk::is_set(mac_aging_type.yfilter)
	|| ydk::is_set(storm_control_unicast_enabled.yfilter)
	|| ydk::is_set(storm_control_broadcast_enabled.yfilter)
	|| ydk::is_set(storm_control_multicast_enabled.yfilter)
	|| ydk::is_set(storm_control_unicast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_broadcast_rate_unit.yfilter)
	|| ydk::is_set(storm_control_multicast_rate_unit.yfilter)
	|| ydk::is_set(dhcp_enabled.yfilter)
	|| ydk::is_set(dhcp_trusted.yfilter)
	|| ydk::is_set(is_dai_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_ipv4_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_source_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)
	|| ydk::is_set(is_dai_logging_enabled.yfilter)
	|| ydk::is_set(is_ipsg_enabled.yfilter)
	|| ydk::is_set(is_ipsg_logging_enabled.yfilter)
	|| ydk::is_set(is_vpls_flood_optimization_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_enabled.yfilter)
	|| ydk::is_set(igmp_snoop_profile_enabled.yfilter)
	|| ydk::is_set(igmp_flood_forward_enabled.yfilter)
	|| ydk::is_set(igmp_mroute_port_enabled.yfilter)
	|| ydk::is_set(igmp_route_guard_enabled.yfilter)
	|| ydk::is_set(mld_snoop_enabled.yfilter)
	|| ydk::is_set(mld_snoop_profile_enabled.yfilter)
	|| ydk::is_set(mld_flood_forward_enabled.yfilter)
	|| ydk::is_set(mld_mroute_port_enabled.yfilter)
	|| ydk::is_set(mld_route_guard_enabled.yfilter)
	|| ydk::is_set(stp_participating.yfilter)
	|| ydk::is_set(bvi_configured.yfilter)
	|| ydk::is_set(is_bvi_up.yfilter)
	|| ydk::is_set(is_vni_enabled.yfilter)
	|| ydk::is_set(is_evpn_enabled.yfilter)
	|| ydk::is_set(unknown_unicast_flooding_disabled.yfilter)
	|| ydk::is_set(is_pbbevpn_enabled.yfilter)
	|| ydk::is_set(is_swmac_learning.yfilter)
	|| ydk::is_set(is_evpn_flow_label.yfilter)
	|| ydk::is_set(is_evpn_cw_disable.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(is_p2mp_pw_enabled.yfilter)
	|| ydk::is_set(is_igmp_snoop_enabled.yfilter)
	|| ydk::is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.yfilter)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.yfilter)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (admin_disabled.is_set || is_set(admin_disabled.yfilter)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.yfilter)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.yfilter)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.yfilter)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.yfilter)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.yfilter)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.yfilter)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.yfilter)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.yfilter)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_threshold_enabled.is_set || is_set(is_mac_secure_threshold_enabled.yfilter)) leaf_name_data.push_back(is_mac_secure_threshold_enabled.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.yfilter)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.yfilter)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.yfilter)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.yfilter)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.yfilter)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.yfilter)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.yfilter)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.yfilter)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.yfilter)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.yfilter)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.yfilter)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.yfilter)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.yfilter)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.yfilter)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.yfilter)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.yfilter)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.yfilter)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.yfilter)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.yfilter)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.yfilter)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.yfilter)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.yfilter)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.yfilter)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.yfilter)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.yfilter)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.yfilter)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.yfilter)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.yfilter)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.yfilter)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.yfilter)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature>();
        ent_->parent = this;
        feature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : feature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
        mac_aging_time.value_namespace = name_space;
        mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
        number_of_macs.value_namespace = name_space;
        number_of_macs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
        admin_disabled.value_namespace = name_space;
        admin_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
        flooding_disabled.value_namespace = name_space;
        flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
        flood_unknown_unicast_enabled.value_namespace = name_space;
        flood_unknown_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
        mac_limit_action.value_namespace = name_space;
        mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
        mac_learning_disabled.value_namespace = name_space;
        mac_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
        mac_port_down_flush_disabled.value_namespace = name_space;
        mac_port_down_flush_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
        mac_limit_notification_type.value_namespace = name_space;
        mac_limit_notification_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
        is_mac_secure_enabled.value_namespace = name_space;
        is_mac_secure_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
        is_mac_secure_logging_enabled.value_namespace = name_space;
        is_mac_secure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
        mac_secure_action.value_namespace = name_space;
        mac_secure_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
        is_mac_secure_accept_shutdown.value_namespace = name_space;
        is_mac_secure_accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled = value;
        is_mac_secure_threshold_enabled.value_namespace = name_space;
        is_mac_secure_threshold_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
        mac_aging_type.value_namespace = name_space;
        mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
        storm_control_unicast_enabled.value_namespace = name_space;
        storm_control_unicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
        storm_control_broadcast_enabled.value_namespace = name_space;
        storm_control_broadcast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
        storm_control_multicast_enabled.value_namespace = name_space;
        storm_control_multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
        storm_control_unicast_rate_unit.value_namespace = name_space;
        storm_control_unicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
        storm_control_broadcast_rate_unit.value_namespace = name_space;
        storm_control_broadcast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
        storm_control_multicast_rate_unit.value_namespace = name_space;
        storm_control_multicast_rate_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
        dhcp_enabled.value_namespace = name_space;
        dhcp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
        dhcp_trusted.value_namespace = name_space;
        dhcp_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
        is_dai_enabled.value_namespace = name_space;
        is_dai_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
        is_dai_addr_validation_ipv4_enabled.value_namespace = name_space;
        is_dai_addr_validation_ipv4_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
        is_dai_addr_validation_source_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_source_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
        is_dai_addr_validation_destination_mac_enabled.value_namespace = name_space;
        is_dai_addr_validation_destination_mac_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
        is_dai_logging_enabled.value_namespace = name_space;
        is_dai_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
        is_ipsg_enabled.value_namespace = name_space;
        is_ipsg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
        is_ipsg_logging_enabled.value_namespace = name_space;
        is_ipsg_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
        is_vpls_flood_optimization_enabled.value_namespace = name_space;
        is_vpls_flood_optimization_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
        igmp_snoop_enabled.value_namespace = name_space;
        igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
        igmp_snoop_profile_enabled.value_namespace = name_space;
        igmp_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
        igmp_flood_forward_enabled.value_namespace = name_space;
        igmp_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
        igmp_mroute_port_enabled.value_namespace = name_space;
        igmp_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
        igmp_route_guard_enabled.value_namespace = name_space;
        igmp_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
        mld_snoop_enabled.value_namespace = name_space;
        mld_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
        mld_snoop_profile_enabled.value_namespace = name_space;
        mld_snoop_profile_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
        mld_flood_forward_enabled.value_namespace = name_space;
        mld_flood_forward_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
        mld_mroute_port_enabled.value_namespace = name_space;
        mld_mroute_port_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
        mld_route_guard_enabled.value_namespace = name_space;
        mld_route_guard_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
        stp_participating.value_namespace = name_space;
        stp_participating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
        bvi_configured.value_namespace = name_space;
        bvi_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
        is_bvi_up.value_namespace = name_space;
        is_bvi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
        is_vni_enabled.value_namespace = name_space;
        is_vni_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
        is_evpn_enabled.value_namespace = name_space;
        is_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
        unknown_unicast_flooding_disabled.value_namespace = name_space;
        unknown_unicast_flooding_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
        is_pbbevpn_enabled.value_namespace = name_space;
        is_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
        is_swmac_learning.value_namespace = name_space;
        is_swmac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
        is_evpn_flow_label.value_namespace = name_space;
        is_evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
        is_evpn_cw_disable.value_namespace = name_space;
        is_evpn_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
        is_p2mp_pw_enabled.value_namespace = name_space;
        is_p2mp_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
        is_igmp_snoop_enabled.value_namespace = name_space;
        is_igmp_snoop_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace = name_space;
        nv_satellite_offload_ipv4_multicast_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs.yfilter = yfilter;
    }
    if(value_path == "admin-disabled")
    {
        admin_disabled.yfilter = yfilter;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled.yfilter = yfilter;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "is-mac-secure-threshold-enabled")
    {
        is_mac_secure_threshold_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit.yfilter = yfilter;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled.yfilter = yfilter;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted.yfilter = yfilter;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled.yfilter = yfilter;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled.yfilter = yfilter;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled.yfilter = yfilter;
    }
    if(value_path == "stp-participating")
    {
        stp_participating.yfilter = yfilter;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured.yfilter = yfilter;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up.yfilter = yfilter;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled.yfilter = yfilter;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled.yfilter = yfilter;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning.yfilter = yfilter;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label.yfilter = yfilter;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled.yfilter = yfilter;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature" || name == "mtu" || name == "mac-aging-time" || name == "mac-limit" || name == "number-of-macs" || name == "admin-disabled" || name == "flooding-disabled" || name == "flood-unknown-unicast-enabled" || name == "mac-limit-action" || name == "mac-limit-threshold" || name == "mac-learning-disabled" || name == "mac-port-down-flush-disabled" || name == "mac-limit-notification-type" || name == "is-mac-secure-enabled" || name == "is-mac-secure-logging-enabled" || name == "mac-secure-action" || name == "is-mac-secure-accept-shutdown" || name == "is-mac-secure-threshold-enabled" || name == "mac-aging-type" || name == "storm-control-unicast-enabled" || name == "storm-control-broadcast-enabled" || name == "storm-control-multicast-enabled" || name == "storm-control-unicast-rate-unit" || name == "storm-control-broadcast-rate-unit" || name == "storm-control-multicast-rate-unit" || name == "dhcp-enabled" || name == "dhcp-trusted" || name == "is-dai-enabled" || name == "is-dai-addr-validation-ipv4-enabled" || name == "is-dai-addr-validation-source-mac-enabled" || name == "is-dai-addr-validation-destination-mac-enabled" || name == "is-dai-logging-enabled" || name == "is-ipsg-enabled" || name == "is-ipsg-logging-enabled" || name == "is-vpls-flood-optimization-enabled" || name == "igmp-snoop-enabled" || name == "igmp-snoop-profile-enabled" || name == "igmp-flood-forward-enabled" || name == "igmp-mroute-port-enabled" || name == "igmp-route-guard-enabled" || name == "mld-snoop-enabled" || name == "mld-snoop-profile-enabled" || name == "mld-flood-forward-enabled" || name == "mld-mroute-port-enabled" || name == "mld-route-guard-enabled" || name == "stp-participating" || name == "bvi-configured" || name == "is-bvi-up" || name == "is-vni-enabled" || name == "is-evpn-enabled" || name == "unknown-unicast-flooding-disabled" || name == "is-pbbevpn-enabled" || name == "is-swmac-learning" || name == "is-evpn-flow-label" || name == "is-evpn-cw-disable" || name == "msti" || name == "is-p2mp-pw-enabled" || name == "is-igmp-snoop-enabled" || name == "nv-satellite-offload-ipv4-multicast-disabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
        ,
    dhcp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>())
    , igmp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>())
    , mld(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;
    igmp->parent = this;
    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::has_data() const
{
    if (is_presence_container) return true;
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_type.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.yfilter)) leaf_name_data.push_back(feature_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        _children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        _children["mld"] = mld;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
        feature_type.value_namespace = name_space;
        feature_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-type")
    {
        feature_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "igmp" || name == "mld" || name == "feature-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::P2mp()
    :
    ptree_type{YType::enumeration, "ptree-type"},
    lsm_id{YType::uint32, "lsm-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    p2mp_id{YType::uint16, "p2mp-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    ptree_owner_lmrib{YType::boolean, "ptree-owner-lmrib"}
{

    yang_name = "p2mp"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::~P2mp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::has_data() const
{
    if (is_presence_container) return true;
    return ptree_type.is_set
	|| lsm_id.is_set
	|| tunnel_id.is_set
	|| p2mp_id.is_set
	|| extended_tunnel_id.is_set
	|| ptree_owner_lmrib.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(ptree_owner_lmrib.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (ptree_owner_lmrib.is_set || is_set(ptree_owner_lmrib.yfilter)) leaf_name_data.push_back(ptree_owner_lmrib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib = value;
        ptree_owner_lmrib.value_namespace = name_space;
        ptree_owner_lmrib.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Bp::P2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptree-type" || name == "lsm-id" || name == "tunnel-id" || name == "p2mp-id" || name == "extended-tunnel-id" || name == "ptree-owner-lmrib")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Fxs()
    :
    fxs_id{YType::uint32, "fxs-id"},
    segment_type{YType::uint8, "segment-type"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base>())
{
    base->parent = this;

    yang_name = "fxs"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::~Fxs()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::has_data() const
{
    if (is_presence_container) return true;
    return fxs_id.is_set
	|| segment_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fxs_id.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxs_id.is_set || is_set(fxs_id.yfilter)) leaf_name_data.push_back(fxs_id.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fxs-id")
    {
        fxs_id = value;
        fxs_id.value_namespace = name_space;
        fxs_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fxs-id")
    {
        fxs_id.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "fxs-id" || name == "segment-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::Base()
{

    yang_name = "base"; yang_parent_name = "fxs"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Fxs::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"},
    context{YType::uint16, "context"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    bound{YType::boolean, "bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    backup_configured{YType::boolean, "backup-configured"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    global_id{YType::uint32, "global-id"},
    ac_id{YType::uint32, "ac-id"},
    forward_class{YType::uint8, "forward-class"},
    next_hop_address{YType::str, "next-hop-address"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop>())
    , pseudo_wire_union(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion>())
    , backup_pseudo_wire(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire>())
{
    base->parent = this;
    next_hop->parent = this;
    pseudo_wire_union->parent = this;
    backup_pseudo_wire->parent = this;

    yang_name = "pw"; yang_parent_name = "segment2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| signal_capability_flags.is_set
	|| context.is_set
	|| sequence_resync_threshold.is_set
	|| bound.is_set
	|| next_hop_valid.is_set
	|| backup_configured.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_load_balance_type.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| global_id.is_set
	|| ac_id.is_set
	|| forward_class.is_set
	|| next_hop_address.is_set
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(signal_capability_flags.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(sequence_resync_threshold.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(backup_configured.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter)
	|| ydk::is_set(pw_load_balance_type.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(ac_id.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation())
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.yfilter)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.yfilter)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.yfilter)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.yfilter)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (ac_id.is_set || is_set(ac_id.yfilter)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        _children["pseudo-wire-union"] = pseudo_wire_union;
    }

    if(backup_pseudo_wire != nullptr)
    {
        _children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
        signal_capability_flags.value_namespace = name_space;
        signal_capability_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
        sequence_resync_threshold.value_namespace = name_space;
        sequence_resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
        backup_configured.value_namespace = name_space;
        backup_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
        pw_load_balance_type.value_namespace = name_space;
        pw_load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-id")
    {
        ac_id = value;
        ac_id.value_namespace = name_space;
        ac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "backup-configured")
    {
        backup_configured.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "ac-id")
    {
        ac_id.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop" || name == "pseudo-wire-union" || name == "backup-pseudo-wire" || name == "pw-id" || name == "signal-capability-flags" || name == "context" || name == "sequence-resync-threshold" || name == "bound" || name == "next-hop-valid" || name == "backup-configured" || name == "redundancy-role" || name == "active" || name == "pseudo-wire-id-type" || name == "pw-load-balance-type" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state" || name == "global-id" || name == "ac-id" || name == "forward-class" || name == "next-hop-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::Base()
{

    yang_name = "base"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mpls(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls>())
    , l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp>())
    , l2tpv2(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2>())
    , l2tp_ipv6_ts(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts>())
{
    mpls->parent = this;
    l2tp->parent = this;
    l2tpv2->parent = this;
    l2tp_ipv6_ts->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(l2tpv2 != nullptr)
    {
        _children["l2tpv2"] = l2tpv2;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        _children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "l2tp" || name == "l2tpv2" || name == "l2tp-ipv6-ts" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::L2tp()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::~L2tp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "local"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tp::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::L2tpv2()
    :
    pw_flags{YType::uint8, "pw-flags"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    xconnect_id{YType::uint32, "xconnect-id"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::~L2tpv2()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return pw_flags.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| rem_udp_port.is_set
	|| xconnect_id.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_flags.yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rem_udp_port.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_flags.is_set || is_set(pw_flags.yfilter)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.yfilter)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-flags")
    {
        pw_flags = value;
        pw_flags.value_namespace = name_space;
        pw_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
        rem_udp_port.value_namespace = name_space;
        rem_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-flags")
    {
        pw_flags.yfilter = yfilter;
    }
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "pw-flags" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "protocol" || name == "rem-udp-port" || name == "xconnect-id" || name == "next-hop-address" || name == "source-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "local"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "remote"; yang_parent_name = "l2tpv2"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpv2::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "tunnel-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::L2tpIpv6Ts()
    :
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
        ,
    local(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>())
    , remote(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>())
{
    local->parent = this;
    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::~L2tpIpv6Ts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::has_data() const
{
    if (is_presence_container) return true;
    return tos_val.is_set
	|| ttl.is_set
	|| path_mtu.is_set
	|| sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_val.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(path_mtu.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_val.is_set || is_set(tos_val.yfilter)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.yfilter)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-val")
    {
        tos_val = value;
        tos_val.value_namespace = name_space;
        tos_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
        path_mtu.value_namespace = name_space;
        path_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-val")
    {
        tos_val.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "path-mtu")
    {
        path_mtu.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote" || name == "tos-val" || name == "ttl" || name == "path-mtu" || name == "sequence-number-sent" || name == "sequence-number-expected" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::Local()
    :
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::~Local()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_data() const
{
    if (is_presence_container) return true;
    return cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set
	|| secondary_cookie_size.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_high_value.is_set
	|| session_id.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter)
	|| ydk::is_set(secondary_cookie_size.yfilter)
	|| ydk::is_set(secondary_cookie_low_value.yfilter)
	|| ydk::is_set(secondary_cookie_high_value.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.yfilter)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
        secondary_cookie_size.value_namespace = name_space;
        secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
        secondary_cookie_low_value.value_namespace = name_space;
        secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
        secondary_cookie_high_value.value_namespace = name_space;
        secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value" || name == "secondary-cookie-size" || name == "secondary-cookie-low-value" || name == "secondary-cookie-high-value" || name == "session-id")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    cookie_size{YType::uint8, "cookie-size"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_high_value{YType::uint32, "cookie-high-value"}
{

    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::~Remote()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| cookie_size.is_set
	|| cookie_low_value.is_set
	|| cookie_high_value.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(cookie_low_value.yfilter)
	|| ydk::is_set(cookie_high_value.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.yfilter)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_high_value.is_set || is_set(cookie_high_value.yfilter)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
        cookie_low_value.value_namespace = name_space;
        cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
        cookie_high_value.value_namespace = name_space;
        cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "cookie-high-value")
    {
        cookie_high_value.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::PseudoWireUnion::L2tpIpv6Ts::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "cookie-size" || name == "cookie-low-value" || name == "cookie-high-value")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    active{YType::boolean, "active"},
    bound{YType::boolean, "bound"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    grouping_supported{YType::boolean, "grouping-supported"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"}
        ,
    atom(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::has_data() const
{
    if (is_presence_container) return true;
    return backup_next_hop.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| backup_pseudo_wire_id.is_set
	|| redundancy_role.is_set
	|| active.is_set
	|| bound.is_set
	|| pw_flow_label_tx.is_set
	|| grouping_supported.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_next_hop.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id_type.yfilter)
	|| ydk::is_set(backup_pseudo_wire_id.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(pw_flow_label_tx.yfilter)
	|| ydk::is_set(grouping_supported.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_state.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_next_hop.is_set || is_set(backup_next_hop.yfilter)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.yfilter)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.yfilter)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.yfilter)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.yfilter)) leaf_name_data.push_back(group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atom != nullptr)
    {
        _children["atom"] = atom;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
        backup_next_hop.value_namespace = name_space;
        backup_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
        backup_pseudo_wire_id_type.value_namespace = name_space;
        backup_pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
        backup_pseudo_wire_id.value_namespace = name_space;
        backup_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
        pw_flow_label_tx.value_namespace = name_space;
        pw_flow_label_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
        grouping_supported.value_namespace = name_space;
        grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-state")
    {
        group_state = value;
        group_state.value_namespace = name_space;
        group_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-next-hop")
    {
        backup_next_hop.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type.yfilter = yfilter;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx.yfilter = yfilter;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-state")
    {
        group_state.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "backup-next-hop" || name == "backup-pseudo-wire-id-type" || name == "backup-pseudo-wire-id" || name == "redundancy-role" || name == "active" || name == "bound" || name == "pw-flow-label-tx" || name == "grouping-supported" || name == "group-id" || name == "group-state")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{

    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::has_data() const
{
    if (is_presence_container) return true;
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_label.yfilter)
	|| ydk::is_set(pw_local_label.yfilter)
	|| ydk::is_set(pw_tunnel_interface.yfilter)
	|| ydk::is_set(pw_xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.yfilter)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.yfilter)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.yfilter)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.yfilter)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
        pw_label.value_namespace = name_space;
        pw_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
        pw_local_label.value_namespace = name_space;
        pw_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
        pw_tunnel_interface.value_namespace = name_space;
        pw_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
        pw_xcid.value_namespace = name_space;
        pw_xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-label")
    {
        pw_label.yfilter = yfilter;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label.yfilter = yfilter;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibxConLocals::L2fibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-label" || name == "pw-local-label" || name == "pw-tunnel-interface" || name == "pw-xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummaries()
    :
    l2fib_mroute_summary(this, {})
{

    yang_name = "l2fib-mroute-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::~L2fibMrouteSummaries()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mroute_summary.len(); index++)
    {
        if(l2fib_mroute_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_summary.len(); index++)
    {
        if(l2fib_mroute_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-summary")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary>();
        ent_->parent = this;
        l2fib_mroute_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mroute_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-summary")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::L2fibMrouteSummary()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    multicast_update{YType::uint32, "multicast-update"},
    multicast_update_dropped{YType::uint32, "multicast-update-dropped"},
    number_of_routes{YType::uint32, "number-of-routes"},
    number_of_routes_with_ole_offload{YType::uint32, "number-of-routes-with-ole-offload"},
    number_of_mroute_add{YType::uint32, "number-of-mroute-add"},
    number_mroute_deleted{YType::uint32, "number-mroute-deleted"},
    number_mroutes_deleted_all{YType::uint32, "number-mroutes-deleted-all"},
    number_mroute_delete_drop{YType::uint32, "number-mroute-delete-drop"},
    number_mroute_all_delete_drop{YType::uint32, "number-mroute-all-delete-drop"},
    number_xid_add{YType::uint32, "number-xid-add"},
    number_xid_deleted{YType::uint32, "number-xid-deleted"},
    number_of_xid{YType::uint32, "number-of-xid"},
    stale_deleted{YType::uint32, "stale-deleted"},
    stale_xid_deleted{YType::uint32, "stale-xid-deleted"}
        ,
    message(this, {})
{

    yang_name = "l2fib-mroute-summary"; yang_parent_name = "l2fib-mroute-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::~L2fibMrouteSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_name.is_set
	|| bridge_domain_id.is_set
	|| multicast_update.is_set
	|| multicast_update_dropped.is_set
	|| number_of_routes.is_set
	|| number_of_routes_with_ole_offload.is_set
	|| number_of_mroute_add.is_set
	|| number_mroute_deleted.is_set
	|| number_mroutes_deleted_all.is_set
	|| number_mroute_delete_drop.is_set
	|| number_mroute_all_delete_drop.is_set
	|| number_xid_add.is_set
	|| number_xid_deleted.is_set
	|| number_of_xid.is_set
	|| stale_deleted.is_set
	|| stale_xid_deleted.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::has_operation() const
{
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(multicast_update.yfilter)
	|| ydk::is_set(multicast_update_dropped.yfilter)
	|| ydk::is_set(number_of_routes.yfilter)
	|| ydk::is_set(number_of_routes_with_ole_offload.yfilter)
	|| ydk::is_set(number_of_mroute_add.yfilter)
	|| ydk::is_set(number_mroute_deleted.yfilter)
	|| ydk::is_set(number_mroutes_deleted_all.yfilter)
	|| ydk::is_set(number_mroute_delete_drop.yfilter)
	|| ydk::is_set(number_mroute_all_delete_drop.yfilter)
	|| ydk::is_set(number_xid_add.yfilter)
	|| ydk::is_set(number_xid_deleted.yfilter)
	|| ydk::is_set(number_of_xid.yfilter)
	|| ydk::is_set(stale_deleted.yfilter)
	|| ydk::is_set(stale_xid_deleted.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (multicast_update.is_set || is_set(multicast_update.yfilter)) leaf_name_data.push_back(multicast_update.get_name_leafdata());
    if (multicast_update_dropped.is_set || is_set(multicast_update_dropped.yfilter)) leaf_name_data.push_back(multicast_update_dropped.get_name_leafdata());
    if (number_of_routes.is_set || is_set(number_of_routes.yfilter)) leaf_name_data.push_back(number_of_routes.get_name_leafdata());
    if (number_of_routes_with_ole_offload.is_set || is_set(number_of_routes_with_ole_offload.yfilter)) leaf_name_data.push_back(number_of_routes_with_ole_offload.get_name_leafdata());
    if (number_of_mroute_add.is_set || is_set(number_of_mroute_add.yfilter)) leaf_name_data.push_back(number_of_mroute_add.get_name_leafdata());
    if (number_mroute_deleted.is_set || is_set(number_mroute_deleted.yfilter)) leaf_name_data.push_back(number_mroute_deleted.get_name_leafdata());
    if (number_mroutes_deleted_all.is_set || is_set(number_mroutes_deleted_all.yfilter)) leaf_name_data.push_back(number_mroutes_deleted_all.get_name_leafdata());
    if (number_mroute_delete_drop.is_set || is_set(number_mroute_delete_drop.yfilter)) leaf_name_data.push_back(number_mroute_delete_drop.get_name_leafdata());
    if (number_mroute_all_delete_drop.is_set || is_set(number_mroute_all_delete_drop.yfilter)) leaf_name_data.push_back(number_mroute_all_delete_drop.get_name_leafdata());
    if (number_xid_add.is_set || is_set(number_xid_add.yfilter)) leaf_name_data.push_back(number_xid_add.get_name_leafdata());
    if (number_xid_deleted.is_set || is_set(number_xid_deleted.yfilter)) leaf_name_data.push_back(number_xid_deleted.get_name_leafdata());
    if (number_of_xid.is_set || is_set(number_of_xid.yfilter)) leaf_name_data.push_back(number_of_xid.get_name_leafdata());
    if (stale_deleted.is_set || is_set(stale_deleted.yfilter)) leaf_name_data.push_back(stale_deleted.get_name_leafdata());
    if (stale_xid_deleted.is_set || is_set(stale_xid_deleted.yfilter)) leaf_name_data.push_back(stale_xid_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message>();
        ent_->parent = this;
        message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-update")
    {
        multicast_update = value;
        multicast_update.value_namespace = name_space;
        multicast_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped = value;
        multicast_update_dropped.value_namespace = name_space;
        multicast_update_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes = value;
        number_of_routes.value_namespace = name_space;
        number_of_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload = value;
        number_of_routes_with_ole_offload.value_namespace = name_space;
        number_of_routes_with_ole_offload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add = value;
        number_of_mroute_add.value_namespace = name_space;
        number_of_mroute_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted = value;
        number_mroute_deleted.value_namespace = name_space;
        number_mroute_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all = value;
        number_mroutes_deleted_all.value_namespace = name_space;
        number_mroutes_deleted_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop = value;
        number_mroute_delete_drop.value_namespace = name_space;
        number_mroute_delete_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop = value;
        number_mroute_all_delete_drop.value_namespace = name_space;
        number_mroute_all_delete_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add = value;
        number_xid_add.value_namespace = name_space;
        number_xid_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted = value;
        number_xid_deleted.value_namespace = name_space;
        number_xid_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid = value;
        number_of_xid.value_namespace = name_space;
        number_of_xid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted = value;
        stale_deleted.value_namespace = name_space;
        stale_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted = value;
        stale_xid_deleted.value_namespace = name_space;
        stale_xid_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "multicast-update")
    {
        multicast_update.yfilter = yfilter;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped.yfilter = yfilter;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes.yfilter = yfilter;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload.yfilter = yfilter;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add.yfilter = yfilter;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted.yfilter = yfilter;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all.yfilter = yfilter;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop.yfilter = yfilter;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop.yfilter = yfilter;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add.yfilter = yfilter;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted.yfilter = yfilter;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid.yfilter = yfilter;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted.yfilter = yfilter;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "bd-group-name" || name == "bd-name" || name == "bridge-domain-name" || name == "bridge-domain-id" || name == "multicast-update" || name == "multicast-update-dropped" || name == "number-of-routes" || name == "number-of-routes-with-ole-offload" || name == "number-of-mroute-add" || name == "number-mroute-deleted" || name == "number-mroutes-deleted-all" || name == "number-mroute-delete-drop" || name == "number-mroute-all-delete-drop" || name == "number-xid-add" || name == "number-xid-deleted" || name == "number-of-xid" || name == "stale-deleted" || name == "stale-xid-deleted")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::Message()
    :
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"},
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"}
{

    yang_name = "message"; yang_parent_name = "l2fib-mroute-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::~Message()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::has_data() const
{
    if (is_presence_container) return true;
    return messgae_count.is_set
	|| time.is_set
	|| information1.is_set
	|| information2.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(messgae_count.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(information1.yfilter)
	|| ydk::is_set(information2.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (messgae_count.is_set || is_set(messgae_count.yfilter)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (information1.is_set || is_set(information1.yfilter)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.yfilter)) leaf_name_data.push_back(information2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "messgae-count")
    {
        messgae_count = value;
        messgae_count.value_namespace = name_space;
        messgae_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information1")
    {
        information1 = value;
        information1.value_namespace = name_space;
        information1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information2")
    {
        information2 = value;
        information2.value_namespace = name_space;
        information2.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "messgae-count")
    {
        messgae_count.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "information1")
    {
        information1.yfilter = yfilter;
    }
    if(value_path == "information2")
    {
        information2.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMrouteSummaries::L2fibMrouteSummary::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "messgae-count" || name == "time" || name == "information1" || name == "information2")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::L2fibMessageSummary()
    :
    event_history(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory>())
    , round_trip_delay(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay>())
    , message(this, {})
{
    event_history->parent = this;
    round_trip_delay->parent = this;

    yang_name = "l2fib-message-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::~L2fibMessageSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return (event_history !=  nullptr && event_history->has_data())
	|| (round_trip_delay !=  nullptr && round_trip_delay->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::has_operation() const
{
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (event_history !=  nullptr && event_history->has_operation())
	|| (round_trip_delay !=  nullptr && round_trip_delay->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-message-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        if(event_history == nullptr)
        {
            event_history = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory>();
        }
        return event_history;
    }

    if(child_yang_name == "round-trip-delay")
    {
        if(round_trip_delay == nullptr)
        {
            round_trip_delay = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay>();
        }
        return round_trip_delay;
    }

    if(child_yang_name == "message")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message>();
        ent_->parent = this;
        message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_history != nullptr)
    {
        _children["event-history"] = event_history;
    }

    if(round_trip_delay != nullptr)
    {
        _children["round-trip-delay"] = round_trip_delay;
    }

    count_ = 0;
    for (auto ent_ : message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "round-trip-delay" || name == "message")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventHistory()
    :
    event_neighbor_entry{YType::uint16, "event-neighbor-entry"},
    extra_information1{YType::uint32, "extra-information1"},
    extra_information2{YType::uint32, "extra-information2"}
        ,
    event_entry(this, {})
{

    yang_name = "event-history"; yang_parent_name = "l2fib-message-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::~EventHistory()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_entry.len(); index++)
    {
        if(event_entry[index]->has_data())
            return true;
    }
    for (auto const & leaf : extra_information1.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extra_information2.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return event_neighbor_entry.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::has_operation() const
{
    for (std::size_t index=0; index<event_entry.len(); index++)
    {
        if(event_entry[index]->has_operation())
            return true;
    }
    for (auto const & leaf : extra_information1.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : extra_information2.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_neighbor_entry.yfilter)
	|| ydk::is_set(extra_information1.yfilter)
	|| ydk::is_set(extra_information2.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_neighbor_entry.is_set || is_set(event_neighbor_entry.yfilter)) leaf_name_data.push_back(event_neighbor_entry.get_name_leafdata());

    auto extra_information1_name_datas = extra_information1.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extra_information1_name_datas.begin(), extra_information1_name_datas.end());
    auto extra_information2_name_datas = extra_information2.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extra_information2_name_datas.begin(), extra_information2_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-entry")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry>();
        ent_->parent = this;
        event_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-neighbor-entry")
    {
        event_neighbor_entry = value;
        event_neighbor_entry.value_namespace = name_space;
        event_neighbor_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-information1")
    {
        extra_information1.append(value);
    }
    if(value_path == "extra-information2")
    {
        extra_information2.append(value);
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-neighbor-entry")
    {
        event_neighbor_entry.yfilter = yfilter;
    }
    if(value_path == "extra-information1")
    {
        extra_information1.yfilter = yfilter;
    }
    if(value_path == "extra-information2")
    {
        extra_information2.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-entry" || name == "event-neighbor-entry" || name == "extra-information1" || name == "extra-information2")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::EventEntry()
    :
    event_time{YType::str, "event-time"},
    event_type{YType::uint8, "event-type"},
    event_many{YType::boolean, "event-many"},
    event_sticky{YType::boolean, "event-sticky"},
    event_flags{YType::uint32, "event-flags"}
{

    yang_name = "event-entry"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::~EventEntry()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::has_data() const
{
    if (is_presence_container) return true;
    return event_time.is_set
	|| event_type.is_set
	|| event_many.is_set
	|| event_sticky.is_set
	|| event_flags.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(event_many.yfilter)
	|| ydk::is_set(event_sticky.yfilter)
	|| ydk::is_set(event_flags.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (event_many.is_set || is_set(event_many.yfilter)) leaf_name_data.push_back(event_many.get_name_leafdata());
    if (event_sticky.is_set || is_set(event_sticky.yfilter)) leaf_name_data.push_back(event_sticky.get_name_leafdata());
    if (event_flags.is_set || is_set(event_flags.yfilter)) leaf_name_data.push_back(event_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-many")
    {
        event_many = value;
        event_many.value_namespace = name_space;
        event_many.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-sticky")
    {
        event_sticky = value;
        event_sticky.value_namespace = name_space;
        event_sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-flags")
    {
        event_flags = value;
        event_flags.value_namespace = name_space;
        event_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "event-many")
    {
        event_many.yfilter = yfilter;
    }
    if(value_path == "event-sticky")
    {
        event_sticky.yfilter = yfilter;
    }
    if(value_path == "event-flags")
    {
        event_flags.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::EventHistory::EventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-time" || name == "event-type" || name == "event-many" || name == "event-sticky" || name == "event-flags")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::RoundTripDelay()
    :
    rtd_max_obj_type{YType::uint32, "rtd-max-obj-type"}
        ,
    bdxc_rtd(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd>())
    , aging_rtd(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd>())
    , punt_rtd(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd>())
    , lock_rtd(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd>())
    , platform_init_rtd(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd>())
    , create(this, {})
    , modify(this, {})
    , delete_(this, {})
    , bind(this, {})
    , unbind(this, {})
    , mac_flush(this, {})
    , pirtd(this, {})
{
    bdxc_rtd->parent = this;
    aging_rtd->parent = this;
    punt_rtd->parent = this;
    lock_rtd->parent = this;
    platform_init_rtd->parent = this;

    yang_name = "round-trip-delay"; yang_parent_name = "l2fib-message-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::~RoundTripDelay()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<create.len(); index++)
    {
        if(create[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<modify.len(); index++)
    {
        if(modify[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<delete_.len(); index++)
    {
        if(delete_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bind.len(); index++)
    {
        if(bind[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unbind.len(); index++)
    {
        if(unbind[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mac_flush.len(); index++)
    {
        if(mac_flush[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pirtd.len(); index++)
    {
        if(pirtd[index]->has_data())
            return true;
    }
    return rtd_max_obj_type.is_set
	|| (bdxc_rtd !=  nullptr && bdxc_rtd->has_data())
	|| (aging_rtd !=  nullptr && aging_rtd->has_data())
	|| (punt_rtd !=  nullptr && punt_rtd->has_data())
	|| (lock_rtd !=  nullptr && lock_rtd->has_data())
	|| (platform_init_rtd !=  nullptr && platform_init_rtd->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::has_operation() const
{
    for (std::size_t index=0; index<create.len(); index++)
    {
        if(create[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<modify.len(); index++)
    {
        if(modify[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<delete_.len(); index++)
    {
        if(delete_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bind.len(); index++)
    {
        if(bind[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unbind.len(); index++)
    {
        if(unbind[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mac_flush.len(); index++)
    {
        if(mac_flush[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pirtd.len(); index++)
    {
        if(pirtd[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rtd_max_obj_type.yfilter)
	|| (bdxc_rtd !=  nullptr && bdxc_rtd->has_operation())
	|| (aging_rtd !=  nullptr && aging_rtd->has_operation())
	|| (punt_rtd !=  nullptr && punt_rtd->has_operation())
	|| (lock_rtd !=  nullptr && lock_rtd->has_operation())
	|| (platform_init_rtd !=  nullptr && platform_init_rtd->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "round-trip-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtd_max_obj_type.is_set || is_set(rtd_max_obj_type.yfilter)) leaf_name_data.push_back(rtd_max_obj_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdxc-rtd")
    {
        if(bdxc_rtd == nullptr)
        {
            bdxc_rtd = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd>();
        }
        return bdxc_rtd;
    }

    if(child_yang_name == "aging-rtd")
    {
        if(aging_rtd == nullptr)
        {
            aging_rtd = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd>();
        }
        return aging_rtd;
    }

    if(child_yang_name == "punt-rtd")
    {
        if(punt_rtd == nullptr)
        {
            punt_rtd = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd>();
        }
        return punt_rtd;
    }

    if(child_yang_name == "lock-rtd")
    {
        if(lock_rtd == nullptr)
        {
            lock_rtd = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd>();
        }
        return lock_rtd;
    }

    if(child_yang_name == "platform-init-rtd")
    {
        if(platform_init_rtd == nullptr)
        {
            platform_init_rtd = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd>();
        }
        return platform_init_rtd;
    }

    if(child_yang_name == "create")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create>();
        ent_->parent = this;
        create.append(ent_);
        return ent_;
    }

    if(child_yang_name == "modify")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify>();
        ent_->parent = this;
        modify.append(ent_);
        return ent_;
    }

    if(child_yang_name == "delete")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete>();
        ent_->parent = this;
        delete_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "bind")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind>();
        ent_->parent = this;
        bind.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unbind")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind>();
        ent_->parent = this;
        unbind.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mac-flush")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush>();
        ent_->parent = this;
        mac_flush.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pirtd")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd>();
        ent_->parent = this;
        pirtd.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bdxc_rtd != nullptr)
    {
        _children["bdxc-rtd"] = bdxc_rtd;
    }

    if(aging_rtd != nullptr)
    {
        _children["aging-rtd"] = aging_rtd;
    }

    if(punt_rtd != nullptr)
    {
        _children["punt-rtd"] = punt_rtd;
    }

    if(lock_rtd != nullptr)
    {
        _children["lock-rtd"] = lock_rtd;
    }

    if(platform_init_rtd != nullptr)
    {
        _children["platform-init-rtd"] = platform_init_rtd;
    }

    count_ = 0;
    for (auto ent_ : create.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : modify.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : delete_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : bind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unbind.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mac_flush.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pirtd.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtd-max-obj-type")
    {
        rtd_max_obj_type = value;
        rtd_max_obj_type.value_namespace = name_space;
        rtd_max_obj_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtd-max-obj-type")
    {
        rtd_max_obj_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdxc-rtd" || name == "aging-rtd" || name == "punt-rtd" || name == "lock-rtd" || name == "platform-init-rtd" || name == "create" || name == "modify" || name == "delete" || name == "bind" || name == "unbind" || name == "mac-flush" || name == "pirtd" || name == "rtd-max-obj-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::BdxcRtd()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "bdxc-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::~BdxcRtd()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdxc-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::BdxcRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::AgingRtd()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "aging-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::~AgingRtd()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::AgingRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::PuntRtd()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "punt-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::~PuntRtd()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PuntRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::LockRtd()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "lock-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::~LockRtd()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lock-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::LockRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::PlatformInitRtd()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "platform-init-rtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::~PlatformInitRtd()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-init-rtd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::PlatformInitRtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::Create()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "create"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::~Create()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Create::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::Modify()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "modify"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::~Modify()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Modify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::Delete()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "delete"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::~Delete()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delete";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Delete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::Bind()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "bind"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::~Bind()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Bind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::Unbind()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "unbind"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::~Unbind()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unbind";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Unbind::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::MacFlush()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "mac-flush"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::~MacFlush()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-flush";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::MacFlush::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::Pirtd()
    :
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"}
{

    yang_name = "pirtd"; yang_parent_name = "round-trip-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::~Pirtd()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::has_data() const
{
    if (is_presence_container) return true;
    return number_pd_update.is_set
	|| number_pd_update_zero.is_set
	|| minimum_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| average_round_trip_delay.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_pd_update.yfilter)
	|| ydk::is_set(number_pd_update_zero.yfilter)
	|| ydk::is_set(minimum_round_trip_delay.yfilter)
	|| ydk::is_set(maximum_round_trip_delay.yfilter)
	|| ydk::is_set(average_round_trip_delay.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pirtd";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_pd_update.is_set || is_set(number_pd_update.yfilter)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.yfilter)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.yfilter)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.yfilter)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.yfilter)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
        number_pd_update.value_namespace = name_space;
        number_pd_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
        number_pd_update_zero.value_namespace = name_space;
        number_pd_update_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
        minimum_round_trip_delay.value_namespace = name_space;
        minimum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
        maximum_round_trip_delay.value_namespace = name_space;
        maximum_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
        average_round_trip_delay.value_namespace = name_space;
        average_round_trip_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-pd-update")
    {
        number_pd_update.yfilter = yfilter;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero.yfilter = yfilter;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay.yfilter = yfilter;
    }
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::RoundTripDelay::Pirtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-pd-update" || name == "number-pd-update-zero" || name == "minimum-round-trip-delay" || name == "maximum-round-trip-delay" || name == "average-round-trip-delay")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::Message()
    :
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"},
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"}
{

    yang_name = "message"; yang_parent_name = "l2fib-message-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::~Message()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::has_data() const
{
    if (is_presence_container) return true;
    return messgae_count.is_set
	|| time.is_set
	|| information1.is_set
	|| information2.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(messgae_count.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(information1.yfilter)
	|| ydk::is_set(information2.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (messgae_count.is_set || is_set(messgae_count.yfilter)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (information1.is_set || is_set(information1.yfilter)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.yfilter)) leaf_name_data.push_back(information2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "messgae-count")
    {
        messgae_count = value;
        messgae_count.value_namespace = name_space;
        messgae_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information1")
    {
        information1 = value;
        information1.value_namespace = name_space;
        information1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information2")
    {
        information2 = value;
        information2.value_namespace = name_space;
        information2.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "messgae-count")
    {
        messgae_count.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "information1")
    {
        information1.yfilter = yfilter;
    }
    if(value_path == "information2")
    {
        information2.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMessageSummary::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "messgae-count" || name == "time" || name == "information1" || name == "information2")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroutes()
    :
    l2fib_mroute(this, {})
{

    yang_name = "l2fib-mroutes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::~L2fibMroutes()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mroute.len(); index++)
    {
        if(l2fib_mroute[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute.len(); index++)
    {
        if(l2fib_mroute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroutes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute>();
        ent_->parent = this;
        l2fib_mroute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mroute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::L2fibMroute()
    :
    source{YType::str, "source"},
    group{YType::str, "group"},
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    xid_count{YType::uint16, "xid-count"},
    platform_data_length{YType::uint8, "platform-data-length"},
    platform_data{YType::str, "platform-data"},
    hardware_information{YType::str, "hardware-information"},
    bridge_domain_name{YType::str, "bridge-domain-name"}
        ,
    multicast_base_information(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation>())
    , source_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix>())
    , destination_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix>())
    , forward_stats(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats>())
    , irb_info(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo>())
{
    multicast_base_information->parent = this;
    source_prefix->parent = this;
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;

    yang_name = "l2fib-mroute"; yang_parent_name = "l2fib-mroutes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::~L2fibMroute()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| group.is_set
	|| bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| xid_count.is_set
	|| platform_data_length.is_set
	|| platform_data.is_set
	|| hardware_information.is_set
	|| bridge_domain_name.is_set
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(bd_group_name.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (bd_group_name.is_set || is_set(bd_group_name.yfilter)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo>();
        }
        return irb_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_base_information != nullptr)
    {
        _children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        _children["source-prefix"] = source_prefix;
    }

    if(destination_prefix != nullptr)
    {
        _children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        _children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        _children["irb-info"] = irb_info;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
        bd_group_name.value_namespace = name_space;
        bd_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "bd-group-name")
    {
        bd_group_name.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-base-information" || name == "source-prefix" || name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "source" || name == "group" || name == "bd-group-name" || name == "bd-name" || name == "bridge-id" || name == "xid-count" || name == "platform-data-length" || name == "platform-data" || name == "hardware-information" || name == "bridge-domain-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::MulticastBaseInformation()
{

    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::MulticastBaseInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::SourcePrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::~SourcePrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::DestinationPrefix()
    :
    proto{YType::uint8, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::~DestinationPrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::~ForwardStats()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::has_data() const
{
    if (is_presence_container) return true;
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forward_stat != nullptr)
    {
        _children["forward-stat"] = forward_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mulicast(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mulicast != nullptr)
    {
        _children["mulicast"] = mulicast;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    multicast_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
    , received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
    , punt(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt>())
    , drop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop>())
    , multicast_core_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
    , core_received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
{
    multicast_forward_stat->parent = this;
    received_stat->parent = this;
    punt->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    core_received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (core_received_stat !=  nullptr && core_received_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_forward_stat != nullptr)
    {
        _children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(received_stat != nullptr)
    {
        _children["received-stat"] = received_stat;
    }

    if(punt != nullptr)
    {
        _children["punt"] = punt;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        _children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(core_received_stat != nullptr)
    {
        _children["core-received-stat"] = core_received_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-forward-stat" || name == "received-stat" || name == "punt" || name == "drop" || name == "multicast-core-forward-stat" || name == "core-received-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::IrbInfo()
    :
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    irb_plat_data{YType::uint32, "irb-plat-data"}
{

    yang_name = "irb-info"; yang_parent_name = "l2fib-mroute"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::~IrbInfo()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mxid_ac_interface_handle.is_set
	|| mxid_pw_id.is_set
	|| mxid_next_hop_address.is_set
	|| irb_plat_data_len.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::has_operation() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mxid_ac_interface_handle.yfilter)
	|| ydk::is_set(mxid_pw_id.yfilter)
	|| ydk::is_set(mxid_next_hop_address.yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(irb_plat_data.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.yfilter)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.yfilter)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.yfilter)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());

    auto irb_plat_data_name_datas = irb_plat_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), irb_plat_data_name_datas.begin(), irb_plat_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
        mxid_ac_interface_handle.value_namespace = name_space;
        mxid_ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
        mxid_pw_id.value_namespace = name_space;
        mxid_pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
        mxid_next_hop_address.value_namespace = name_space;
        mxid_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.append(value);
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id.yfilter = yfilter;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutes::L2fibMroute::IrbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mxid-ac-interface-handle" || name == "mxid-pw-id" || name == "mxid-next-hop-address" || name == "irb-plat-data-len" || name == "irb-plat-data")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::PbbBmacSa::PbbBmacSa()
    :
    configured{YType::boolean, "configured"},
    mac{YType::str, "mac"},
    chassis_mac{YType::str, "chassis-mac"}
{

    yang_name = "pbb-bmac-sa"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::PbbBmacSa::~PbbBmacSa()
{
}

bool L2vpnForwarding::Nodes::Node::PbbBmacSa::has_data() const
{
    if (is_presence_container) return true;
    return configured.is_set
	|| mac.is_set
	|| chassis_mac.is_set;
}

bool L2vpnForwarding::Nodes::Node::PbbBmacSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(chassis_mac.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::PbbBmacSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-bmac-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::PbbBmacSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (chassis_mac.is_set || is_set(chassis_mac.yfilter)) leaf_name_data.push_back(chassis_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::PbbBmacSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::PbbBmacSa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::PbbBmacSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac = value;
        chassis_mac.value_namespace = name_space;
        chassis_mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::PbbBmacSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::PbbBmacSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured" || name == "mac" || name == "chassis-mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearning()
    :
    l2fib_mac_learning_macs(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs>())
    , l2fib_mac_learning_mac_ipv4s(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s>())
    , l2fib_mac_learning_mac_ipv6s(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s>())
{
    l2fib_mac_learning_macs->parent = this;
    l2fib_mac_learning_mac_ipv4s->parent = this;
    l2fib_mac_learning_mac_ipv6s->parent = this;

    yang_name = "l2fib-mac-learning"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::~L2fibMacLearning()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::has_data() const
{
    if (is_presence_container) return true;
    return (l2fib_mac_learning_macs !=  nullptr && l2fib_mac_learning_macs->has_data())
	|| (l2fib_mac_learning_mac_ipv4s !=  nullptr && l2fib_mac_learning_mac_ipv4s->has_data())
	|| (l2fib_mac_learning_mac_ipv6s !=  nullptr && l2fib_mac_learning_mac_ipv6s->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::has_operation() const
{
    return is_set(yfilter)
	|| (l2fib_mac_learning_macs !=  nullptr && l2fib_mac_learning_macs->has_operation())
	|| (l2fib_mac_learning_mac_ipv4s !=  nullptr && l2fib_mac_learning_mac_ipv4s->has_operation())
	|| (l2fib_mac_learning_mac_ipv6s !=  nullptr && l2fib_mac_learning_mac_ipv6s->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-macs")
    {
        if(l2fib_mac_learning_macs == nullptr)
        {
            l2fib_mac_learning_macs = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs>();
        }
        return l2fib_mac_learning_macs;
    }

    if(child_yang_name == "l2fib-mac-learning-mac-ipv4s")
    {
        if(l2fib_mac_learning_mac_ipv4s == nullptr)
        {
            l2fib_mac_learning_mac_ipv4s = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s>();
        }
        return l2fib_mac_learning_mac_ipv4s;
    }

    if(child_yang_name == "l2fib-mac-learning-mac-ipv6s")
    {
        if(l2fib_mac_learning_mac_ipv6s == nullptr)
        {
            l2fib_mac_learning_mac_ipv6s = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s>();
        }
        return l2fib_mac_learning_mac_ipv6s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2fib_mac_learning_macs != nullptr)
    {
        _children["l2fib-mac-learning-macs"] = l2fib_mac_learning_macs;
    }

    if(l2fib_mac_learning_mac_ipv4s != nullptr)
    {
        _children["l2fib-mac-learning-mac-ipv4s"] = l2fib_mac_learning_mac_ipv4s;
    }

    if(l2fib_mac_learning_mac_ipv6s != nullptr)
    {
        _children["l2fib-mac-learning-mac-ipv6s"] = l2fib_mac_learning_mac_ipv6s;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-macs" || name == "l2fib-mac-learning-mac-ipv4s" || name == "l2fib-mac-learning-mac-ipv6s")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMacs()
    :
    l2fib_mac_learning_mac(this, {})
{

    yang_name = "l2fib-mac-learning-macs"; yang_parent_name = "l2fib-mac-learning"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::~L2fibMacLearningMacs()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mac_learning_mac.len(); index++)
    {
        if(l2fib_mac_learning_mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac.len(); index++)
    {
        if(l2fib_mac_learning_mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac>();
        ent_->parent = this;
        l2fib_mac_learning_mac.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mac_learning_mac.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::L2fibMacLearningMac()
    :
    interface_handle{YType::str, "interface-handle"},
    address{YType::str, "address"},
    bdid{YType::uint32, "bdid"},
    mac_address{YType::str, "mac-address"},
    element_type{YType::uint8, "element-type"},
    node_id{YType::str, "node-id"},
    topology_id{YType::uint32, "topology-id"},
    mac_address_xr{YType::str, "mac-address-xr"},
    interface_handle_xr{YType::uint32, "interface-handle-xr"},
    xcid{YType::uint32, "xcid"},
    generation{YType::uint8, "generation"}
        ,
    addr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr>())
    , nhaddr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr>())
{
    addr->parent = this;
    nhaddr->parent = this;

    yang_name = "l2fib-mac-learning-mac"; yang_parent_name = "l2fib-mac-learning-macs"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::~L2fibMacLearningMac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| address.is_set
	|| bdid.is_set
	|| mac_address.is_set
	|| element_type.is_set
	|| node_id.is_set
	|| topology_id.is_set
	|| mac_address_xr.is_set
	|| interface_handle_xr.is_set
	|| xcid.is_set
	|| generation.is_set
	|| (addr !=  nullptr && addr->has_data())
	|| (nhaddr !=  nullptr && nhaddr->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(element_type.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(interface_handle_xr.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (nhaddr !=  nullptr && nhaddr->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (element_type.is_set || is_set(element_type.yfilter)) leaf_name_data.push_back(element_type.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (interface_handle_xr.is_set || is_set(interface_handle_xr.yfilter)) leaf_name_data.push_back(interface_handle_xr.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "nhaddr")
    {
        if(nhaddr == nullptr)
        {
            nhaddr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr>();
        }
        return nhaddr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(nhaddr != nullptr)
    {
        _children["nhaddr"] = nhaddr;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "element-type")
    {
        element_type = value;
        element_type.value_namespace = name_space;
        element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr = value;
        interface_handle_xr.value_namespace = name_space;
        interface_handle_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "element-type")
    {
        element_type.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "nhaddr" || name == "interface-handle" || name == "address" || name == "bdid" || name == "mac-address" || name == "element-type" || name == "node-id" || name == "topology-id" || name == "mac-address-xr" || name == "interface-handle-xr" || name == "xcid" || name == "generation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::Addr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "addr"; yang_parent_name = "l2fib-mac-learning-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::~Addr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::Nhaddr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "nhaddr"; yang_parent_name = "l2fib-mac-learning-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::~Nhaddr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacs::L2fibMacLearningMac::Nhaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4s()
    :
    l2fib_mac_learning_mac_ipv4(this, {})
{

    yang_name = "l2fib-mac-learning-mac-ipv4s"; yang_parent_name = "l2fib-mac-learning"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::~L2fibMacLearningMacIpv4s()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv4.len(); index++)
    {
        if(l2fib_mac_learning_mac_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv4.len(); index++)
    {
        if(l2fib_mac_learning_mac_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv4s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac-ipv4")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4>();
        ent_->parent = this;
        l2fib_mac_learning_mac_ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mac_learning_mac_ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac-ipv4")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::L2fibMacLearningMacIpv4()
    :
    interface_handle{YType::str, "interface-handle"},
    address{YType::str, "address"},
    bdid{YType::uint32, "bdid"},
    mac_address{YType::str, "mac-address"},
    element_type{YType::uint8, "element-type"},
    node_id{YType::str, "node-id"},
    topology_id{YType::uint32, "topology-id"},
    mac_address_xr{YType::str, "mac-address-xr"},
    interface_handle_xr{YType::uint32, "interface-handle-xr"},
    xcid{YType::uint32, "xcid"},
    generation{YType::uint8, "generation"}
        ,
    addr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr>())
    , nhaddr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr>())
{
    addr->parent = this;
    nhaddr->parent = this;

    yang_name = "l2fib-mac-learning-mac-ipv4"; yang_parent_name = "l2fib-mac-learning-mac-ipv4s"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::~L2fibMacLearningMacIpv4()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| address.is_set
	|| bdid.is_set
	|| mac_address.is_set
	|| element_type.is_set
	|| node_id.is_set
	|| topology_id.is_set
	|| mac_address_xr.is_set
	|| interface_handle_xr.is_set
	|| xcid.is_set
	|| generation.is_set
	|| (addr !=  nullptr && addr->has_data())
	|| (nhaddr !=  nullptr && nhaddr->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(element_type.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(interface_handle_xr.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (nhaddr !=  nullptr && nhaddr->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv4";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (element_type.is_set || is_set(element_type.yfilter)) leaf_name_data.push_back(element_type.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (interface_handle_xr.is_set || is_set(interface_handle_xr.yfilter)) leaf_name_data.push_back(interface_handle_xr.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "nhaddr")
    {
        if(nhaddr == nullptr)
        {
            nhaddr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr>();
        }
        return nhaddr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(nhaddr != nullptr)
    {
        _children["nhaddr"] = nhaddr;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "element-type")
    {
        element_type = value;
        element_type.value_namespace = name_space;
        element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr = value;
        interface_handle_xr.value_namespace = name_space;
        interface_handle_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "element-type")
    {
        element_type.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "nhaddr" || name == "interface-handle" || name == "address" || name == "bdid" || name == "mac-address" || name == "element-type" || name == "node-id" || name == "topology-id" || name == "mac-address-xr" || name == "interface-handle-xr" || name == "xcid" || name == "generation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::Addr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "addr"; yang_parent_name = "l2fib-mac-learning-mac-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::~Addr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::Nhaddr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "nhaddr"; yang_parent_name = "l2fib-mac-learning-mac-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::~Nhaddr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv4s::L2fibMacLearningMacIpv4::Nhaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6s()
    :
    l2fib_mac_learning_mac_ipv6(this, {})
{

    yang_name = "l2fib-mac-learning-mac-ipv6s"; yang_parent_name = "l2fib-mac-learning"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::~L2fibMacLearningMacIpv6s()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv6.len(); index++)
    {
        if(l2fib_mac_learning_mac_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mac_learning_mac_ipv6.len(); index++)
    {
        if(l2fib_mac_learning_mac_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mac-learning-mac-ipv6")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6>();
        ent_->parent = this;
        l2fib_mac_learning_mac_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mac_learning_mac_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mac-learning-mac-ipv6")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::L2fibMacLearningMacIpv6()
    :
    interface_handle{YType::str, "interface-handle"},
    address{YType::str, "address"},
    bdid{YType::uint32, "bdid"},
    mac_address{YType::str, "mac-address"},
    element_type{YType::uint8, "element-type"},
    node_id{YType::str, "node-id"},
    topology_id{YType::uint32, "topology-id"},
    mac_address_xr{YType::str, "mac-address-xr"},
    interface_handle_xr{YType::uint32, "interface-handle-xr"},
    xcid{YType::uint32, "xcid"},
    generation{YType::uint8, "generation"}
        ,
    addr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr>())
    , nhaddr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr>())
{
    addr->parent = this;
    nhaddr->parent = this;

    yang_name = "l2fib-mac-learning-mac-ipv6"; yang_parent_name = "l2fib-mac-learning-mac-ipv6s"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::~L2fibMacLearningMacIpv6()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| address.is_set
	|| bdid.is_set
	|| mac_address.is_set
	|| element_type.is_set
	|| node_id.is_set
	|| topology_id.is_set
	|| mac_address_xr.is_set
	|| interface_handle_xr.is_set
	|| xcid.is_set
	|| generation.is_set
	|| (addr !=  nullptr && addr->has_data())
	|| (nhaddr !=  nullptr && nhaddr->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(element_type.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(interface_handle_xr.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (nhaddr !=  nullptr && nhaddr->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mac-learning-mac-ipv6";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (element_type.is_set || is_set(element_type.yfilter)) leaf_name_data.push_back(element_type.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (interface_handle_xr.is_set || is_set(interface_handle_xr.yfilter)) leaf_name_data.push_back(interface_handle_xr.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "nhaddr")
    {
        if(nhaddr == nullptr)
        {
            nhaddr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr>();
        }
        return nhaddr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    if(nhaddr != nullptr)
    {
        _children["nhaddr"] = nhaddr;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "element-type")
    {
        element_type = value;
        element_type.value_namespace = name_space;
        element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr = value;
        interface_handle_xr.value_namespace = name_space;
        interface_handle_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "element-type")
    {
        element_type.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle-xr")
    {
        interface_handle_xr.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "nhaddr" || name == "interface-handle" || name == "address" || name == "bdid" || name == "mac-address" || name == "element-type" || name == "node-id" || name == "topology-id" || name == "mac-address-xr" || name == "interface-handle-xr" || name == "xcid" || name == "generation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::Addr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "addr"; yang_parent_name = "l2fib-mac-learning-mac-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::~Addr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::Nhaddr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "nhaddr"; yang_parent_name = "l2fib-mac-learning-mac-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::~Nhaddr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhaddr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMacLearning::L2fibMacLearningMacIpv6s::L2fibMacLearningMacIpv6::Nhaddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibP2mp::L2fibP2mp()
    :
    ptrees(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees>())
{
    ptrees->parent = this;

    yang_name = "l2fib-p2mp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibP2mp::~L2fibP2mp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::has_data() const
{
    if (is_presence_container) return true;
    return (ptrees !=  nullptr && ptrees->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::has_operation() const
{
    return is_set(yfilter)
	|| (ptrees !=  nullptr && ptrees->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibP2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibP2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibP2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptrees")
    {
        if(ptrees == nullptr)
        {
            ptrees = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees>();
        }
        return ptrees;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibP2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ptrees != nullptr)
    {
        _children["ptrees"] = ptrees;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibP2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibP2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptrees")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptrees()
    :
    ptree(this, {})
{

    yang_name = "ptrees"; yang_parent_name = "l2fib-p2mp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::~Ptrees()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ptree.len(); index++)
    {
        if(ptree[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::has_operation() const
{
    for (std::size_t index=0; index<ptree.len(); index++)
    {
        if(ptree[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptrees";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptree")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree>();
        ent_->parent = this;
        ptree.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ptree.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptree")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::Ptree()
    :
    ptree_type{YType::enumeration, "ptree-type"},
    lsm_id{YType::uint32, "lsm-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    extended_tunnel_id{YType::uint32, "extended-tunnel-id"},
    lsm_id_xr{YType::uint32, "lsm-id-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"}
{

    yang_name = "ptree"; yang_parent_name = "ptrees"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::~Ptree()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::has_data() const
{
    if (is_presence_container) return true;
    return ptree_type.is_set
	|| lsm_id.is_set
	|| tunnel_id.is_set
	|| p2mp_id.is_set
	|| extended_tunnel_id.is_set
	|| lsm_id_xr.is_set
	|| tunnel_id_xr.is_set
	|| p2mp_id_xr.is_set
	|| extended_tunnel_id_xr.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ptree_type.yfilter)
	|| ydk::is_set(lsm_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsm_id_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ptree_type.is_set || is_set(ptree_type.yfilter)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.yfilter)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsm_id_xr.is_set || is_set(lsm_id_xr.yfilter)) leaf_name_data.push_back(lsm_id_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ptree-type")
    {
        ptree_type = value;
        ptree_type.value_namespace = name_space;
        ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
        lsm_id.value_namespace = name_space;
        lsm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsm-id-xr")
    {
        lsm_id_xr = value;
        lsm_id_xr.value_namespace = name_space;
        lsm_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ptree-type")
    {
        ptree_type.yfilter = yfilter;
    }
    if(value_path == "lsm-id")
    {
        lsm_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsm-id-xr")
    {
        lsm_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibP2mp::Ptrees::Ptree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptree-type" || name == "lsm-id" || name == "tunnel-id" || name == "p2mp-id" || name == "extended-tunnel-id" || name == "lsm-id-xr" || name == "tunnel-id-xr" || name == "p2mp-id-xr" || name == "extended-tunnel-id-xr")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgresses()
    :
    l2fib_evpn_incl_m_cast_hardware_egress(this, {"bd_name"})
{

    yang_name = "l2fib-evpn-incl-m-cast-hardware-egresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::~L2fibEvpnInclMCastHardwareEgresses()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_egress.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_egress[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_egress.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_egress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-egresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-egress")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress>();
        ent_->parent = this;
        l2fib_evpn_incl_m_cast_hardware_egress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_evpn_incl_m_cast_hardware_egress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-hardware-egress")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastHardwareEgress()
    :
    bd_name{YType::str, "bd-name"}
        ,
    mcast_replication_list(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList>())
    , l2fib_evpn_incl_m_cast_oles(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles>())
{
    mcast_replication_list->parent = this;
    l2fib_evpn_incl_m_cast_oles->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-hardware-egress"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::~L2fibEvpnInclMCastHardwareEgress()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::has_data() const
{
    if (is_presence_container) return true;
    return bd_name.is_set
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data())
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation())
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-egress";
    ADD_KEY_TOKEN(bd_name, "bd-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_replication_list != nullptr)
    {
        _children["mcast-replication-list"] = mcast_replication_list;
    }

    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        _children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-replication-list" || name == "l2fib-evpn-incl-m-cast-oles" || name == "bd-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::McastReplicationList()
    :
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    xcid{YType::uint32, "xcid"},
    is_bound{YType::boolean, "is-bound"}
{

    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::~McastReplicationList()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::has_data() const
{
    if (is_presence_container) return true;
    return bridge_domain_name.is_set
	|| bridge_domain_id.is_set
	|| xcid.is_set
	|| is_bound.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(is_bound.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::McastReplicationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-name" || name == "bridge-domain-id" || name == "xcid" || name == "is-bound")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOles()
    :
    l2fib_evpn_incl_m_cast_ole(this, {"next_hop_address"})
{

    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::~L2fibEvpnInclMCastOles()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle>();
        ent_->parent = this;
        l2fib_evpn_incl_m_cast_ole.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_evpn_incl_m_cast_ole.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-ole")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::L2fibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
        ,
    mcast_ole(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;
    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::~L2fibEvpnInclMCastOle()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_ole != nullptr)
    {
        _children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "next-hop" || name == "next-hop-address" || name == "is-bound" || name == "next-hop-valid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::McastOle()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"},
    mcast_label{YType::uint32, "mcast-label"},
    mcast_encapsulation{YType::uint32, "mcast-encapsulation"}
{

    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop_ipv6_addr.is_set
	|| mcast_label.is_set
	|| mcast_encapsulation.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(mcast_encapsulation.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());
    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (mcast_encapsulation.is_set || is_set(mcast_encapsulation.yfilter)) leaf_name_data.push_back(mcast_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation = value;
        mcast_encapsulation.value_namespace = name_space;
        mcast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop-ipv6-addr" || name == "mcast-label" || name == "mcast-encapsulation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCastHardwareEgresses::L2fibEvpnInclMCastHardwareEgress::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngresses()
    :
    l2fibmac_hardware_ingress(this, {})
{

    yang_name = "l2fibmac-hardware-ingresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::~L2fibmacHardwareIngresses()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fibmac_hardware_ingress.len(); index++)
    {
        if(l2fibmac_hardware_ingress[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_ingress.len(); index++)
    {
        if(l2fibmac_hardware_ingress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-ingresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-hardware-ingress")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress>();
        ent_->parent = this;
        l2fibmac_hardware_ingress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fibmac_hardware_ingress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fibmac-hardware-ingress")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::L2fibmacHardwareIngress()
    :
    address{YType::str, "address"},
    group_name{YType::str, "group-name"},
    name{YType::str, "name"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    node_id{YType::str, "node-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bmac_configured{YType::boolean, "bmac-configured"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"},
    pbb_bmac{YType::str, "pbb-bmac"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    flag_extension{YType::uint16, "flag-extension"},
    vni{YType::uint32, "vni"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base>())
    , segment(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment>())
    , evpn_ctx(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop>())
{
    base->parent = this;
    segment->parent = this;
    evpn_ctx->parent = this;
    next_hop->parent = this;

    yang_name = "l2fibmac-hardware-ingress"; yang_parent_name = "l2fibmac-hardware-ingresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::~L2fibmacHardwareIngress()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| group_name.is_set
	|| name.is_set
	|| platform_is_hw_learn.is_set
	|| node_id.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| bmac_configured.is_set
	|| vni_l3_flag.is_set
	|| pbb_bmac.is_set
	|| l3_encapsulationvlan_id.is_set
	|| next_hop_valid.is_set
	|| peer_vtep_ip.is_set
	|| flag_extension.is_set
	|| vni.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment !=  nullptr && segment->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(platform_is_hw_learn.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(bmac_configured.yfilter)
	|| ydk::is_set(vni_l3_flag.yfilter)
	|| ydk::is_set(pbb_bmac.yfilter)
	|| ydk::is_set(l3_encapsulationvlan_id.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(peer_vtep_ip.yfilter)
	|| ydk::is_set(flag_extension.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (base !=  nullptr && base->has_operation())
	|| (segment !=  nullptr && segment->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-ingress";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.yfilter)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.yfilter)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.yfilter)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.yfilter)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.yfilter)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.yfilter)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.yfilter)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment>();
        }
        return segment;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    if(segment != nullptr)
    {
        _children["segment"] = segment;
    }

    if(evpn_ctx != nullptr)
    {
        _children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
        platform_is_hw_learn.value_namespace = name_space;
        platform_is_hw_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
        bmac_configured.value_namespace = name_space;
        bmac_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
        vni_l3_flag.value_namespace = name_space;
        vni_l3_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
        pbb_bmac.value_namespace = name_space;
        pbb_bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
        l3_encapsulationvlan_id.value_namespace = name_space;
        l3_encapsulationvlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
        peer_vtep_ip.value_namespace = name_space;
        peer_vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
        flag_extension.value_namespace = name_space;
        flag_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured.yfilter = yfilter;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag.yfilter = yfilter;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac.yfilter = yfilter;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip.yfilter = yfilter;
    }
    if(value_path == "flag-extension")
    {
        flag_extension.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "segment" || name == "evpn-ctx" || name == "next-hop" || name == "address" || name == "group-name" || name == "name" || name == "platform-is-hw-learn" || name == "node-id" || name == "bridge-domain-name" || name == "bridge-id" || name == "bmac-configured" || name == "vni-l3-flag" || name == "pbb-bmac" || name == "l3-encapsulationvlan-id" || name == "next-hop-valid" || name == "peer-vtep-ip" || name == "flag-extension" || name == "vni")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::Base()
{

    yang_name = "base"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac>())
    , pbb(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb>())
    , vni(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni>())
    , evpn(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw>())
{
    ac->parent = this;
    pbb->parent = this;
    vni->parent = this;
    evpn->parent = this;
    pw->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::~Segment()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (vni !=  nullptr && vni->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (vni !=  nullptr && vni->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni>();
        }
        return vni;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(pbb != nullptr)
    {
        _children["pbb"] = pbb;
    }

    if(vni != nullptr)
    {
        _children["vni"] = vni;
    }

    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pbb" || name == "vni" || name == "evpn" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    vsp_vlan{YType::uint16, "vsp-vlan"}
{

    yang_name = "ac"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vsp_vlan.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vsp_vlan.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vsp_vlan.is_set || is_set(vsp_vlan.yfilter)) leaf_name_data.push_back(vsp_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsp-vlan")
    {
        vsp_vlan = value;
        vsp_vlan.value_namespace = name_space;
        vsp_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vsp-vlan")
    {
        vsp_vlan.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "vsp-vlan")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "pbb"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::~Pbb()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::Vni()
    :
    xcid{YType::uint32, "xcid"},
    parent_if{YType::str, "parent-if"}
{

    yang_name = "vni"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::~Vni()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set
	|| parent_if.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(parent_if.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.yfilter)) leaf_name_data.push_back(parent_if.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
        parent_if.value_namespace = name_space;
        parent_if.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "parent-if")
    {
        parent_if.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid" || name == "parent-if")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{

    yang_name = "evpn"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::~Evpn()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"}
{

    yang_name = "pw"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_id_type.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::Segment::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "next-hop-address" || name == "pseudo-wire-id-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::EvpnCtx()
    :
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"},
    bp_ifh{YType::str, "bp-ifh"}
        ,
    mcast_ole(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::~EvpnCtx()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| bp_ifh.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(esi_id.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(bp_ifh.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.yfilter)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (bp_ifh.is_set || is_set(bp_ifh.yfilter)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_ole != nullptr)
    {
        _children["mcast-ole"] = mcast_ole;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
        esi_id.value_namespace = name_space;
        esi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
        bp_ifh.value_namespace = name_space;
        bp_ifh.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "esi-id")
    {
        esi_id.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "bp-ifh")
    {
        bp_ifh.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "data-type" || name == "esi-id" || name == "local-label" || name == "bp-ifh")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::McastOle()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"},
    mcast_label{YType::uint32, "mcast-label"},
    mcast_encapsulation{YType::uint32, "mcast-encapsulation"}
{

    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::~McastOle()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop_ipv6_addr.is_set
	|| mcast_label.is_set
	|| mcast_encapsulation.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(mcast_encapsulation.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());
    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (mcast_encapsulation.is_set || is_set(mcast_encapsulation.yfilter)) leaf_name_data.push_back(mcast_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation = value;
        mcast_encapsulation.value_namespace = name_space;
        mcast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::EvpnCtx::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop-ipv6-addr" || name == "mcast-label" || name == "mcast-encapsulation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
        ,
    base(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-hardware-ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::Base()
{

    yang_name = "base"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::~Base()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::has_operation() const
{
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibmacHardwareIngresses::L2fibmacHardwareIngress::NextHop::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4macs()
    :
    l2fib_evpn_ip4mac(this, {})
{

    yang_name = "l2fib-evpn-ip4macs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::~L2fibEvpnIp4macs()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_evpn_ip4mac.len(); index++)
    {
        if(l2fib_evpn_ip4mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip4mac.len(); index++)
    {
        if(l2fib_evpn_ip4mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip4macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-ip4mac")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac>();
        ent_->parent = this;
        l2fib_evpn_ip4mac.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_evpn_ip4mac.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-ip4mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::L2fibEvpnIp4mac()
    :
    bdid{YType::uint32, "bdid"},
    ip_address{YType::str, "ip-address"},
    is_local{YType::boolean, "is-local"},
    mac_address{YType::str, "mac-address"},
    bdid_xr{YType::uint32, "bdid-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    arp_nd_sync_pending{YType::boolean, "arp-nd-sync-pending"},
    arp_nd_probe_pending{YType::boolean, "arp-nd-probe-pending"},
    arp_nd_delete_pending{YType::boolean, "arp-nd-delete-pending"},
    is_local_xr{YType::boolean, "is-local-xr"}
        ,
    ip_address_xr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr>())
{
    ip_address_xr->parent = this;

    yang_name = "l2fib-evpn-ip4mac"; yang_parent_name = "l2fib-evpn-ip4macs"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::~L2fibEvpnIp4mac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::has_data() const
{
    if (is_presence_container) return true;
    return bdid.is_set
	|| ip_address.is_set
	|| is_local.is_set
	|| mac_address.is_set
	|| bdid_xr.is_set
	|| mac_address_xr.is_set
	|| arp_nd_sync_pending.is_set
	|| arp_nd_probe_pending.is_set
	|| arp_nd_delete_pending.is_set
	|| is_local_xr.is_set
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(bdid_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(arp_nd_sync_pending.yfilter)
	|| ydk::is_set(arp_nd_probe_pending.yfilter)
	|| ydk::is_set(arp_nd_delete_pending.yfilter)
	|| ydk::is_set(is_local_xr.yfilter)
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip4mac";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (bdid_xr.is_set || is_set(bdid_xr.yfilter)) leaf_name_data.push_back(bdid_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (arp_nd_sync_pending.is_set || is_set(arp_nd_sync_pending.yfilter)) leaf_name_data.push_back(arp_nd_sync_pending.get_name_leafdata());
    if (arp_nd_probe_pending.is_set || is_set(arp_nd_probe_pending.yfilter)) leaf_name_data.push_back(arp_nd_probe_pending.get_name_leafdata());
    if (arp_nd_delete_pending.is_set || is_set(arp_nd_delete_pending.yfilter)) leaf_name_data.push_back(arp_nd_delete_pending.get_name_leafdata());
    if (is_local_xr.is_set || is_set(is_local_xr.yfilter)) leaf_name_data.push_back(is_local_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address-xr")
    {
        if(ip_address_xr == nullptr)
        {
            ip_address_xr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr>();
        }
        return ip_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_address_xr != nullptr)
    {
        _children["ip-address-xr"] = ip_address_xr;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr = value;
        bdid_xr.value_namespace = name_space;
        bdid_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending = value;
        arp_nd_sync_pending.value_namespace = name_space;
        arp_nd_sync_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending = value;
        arp_nd_probe_pending.value_namespace = name_space;
        arp_nd_probe_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending = value;
        arp_nd_delete_pending.value_namespace = name_space;
        arp_nd_delete_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr = value;
        is_local_xr.value_namespace = name_space;
        is_local_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending.yfilter = yfilter;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address-xr" || name == "bdid" || name == "ip-address" || name == "is-local" || name == "mac-address" || name == "bdid-xr" || name == "mac-address-xr" || name == "arp-nd-sync-pending" || name == "arp-nd-probe-pending" || name == "arp-nd-delete-pending" || name == "is-local-xr")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::IpAddressXr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "ip-address-xr"; yang_parent_name = "l2fib-evpn-ip4mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::~IpAddressXr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp4macs::L2fibEvpnIp4mac::IpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPorts()
    :
    l2fib_pwhe_main_port(this, {"interface_name"})
{

    yang_name = "l2fib-pwhe-main-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::~L2fibPwheMainPorts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_pwhe_main_port.len(); index++)
    {
        if(l2fib_pwhe_main_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port.len(); index++)
    {
        if(l2fib_pwhe_main_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-pwhe-main-port")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort>();
        ent_->parent = this;
        l2fib_pwhe_main_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_pwhe_main_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-pwhe-main-port")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::L2fibPwheMainPort()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_type{YType::uint32, "pseudo-wire-type"},
    generic_interface_list_id{YType::uint32, "generic-interface-list-id"},
    internal_label{YType::uint32, "internal-label"},
    remote_label{YType::uint32, "remote-label"},
    control_word_enabled{YType::boolean, "control-word-enabled"}
{

    yang_name = "l2fib-pwhe-main-port"; yang_parent_name = "l2fib-pwhe-main-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::~L2fibPwheMainPort()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_valid.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_type.is_set
	|| generic_interface_list_id.is_set
	|| internal_label.is_set
	|| remote_label.is_set
	|| control_word_enabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_type.yfilter)
	|| ydk::is_set(generic_interface_list_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(control_word_enabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_type.is_set || is_set(pseudo_wire_type.yfilter)) leaf_name_data.push_back(pseudo_wire_type.get_name_leafdata());
    if (generic_interface_list_id.is_set || is_set(generic_interface_list_id.yfilter)) leaf_name_data.push_back(generic_interface_list_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (control_word_enabled.is_set || is_set(control_word_enabled.yfilter)) leaf_name_data.push_back(control_word_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type = value;
        pseudo_wire_type.value_namespace = name_space;
        pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id = value;
        generic_interface_list_id.value_namespace = name_space;
        generic_interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled = value;
        control_word_enabled.value_namespace = name_space;
        control_word_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPorts::L2fibPwheMainPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-valid" || name == "next-hop-address" || name == "pseudo-wire-type" || name == "generic-interface-list-id" || name == "internal-label" || name == "remote-label" || name == "control-word-enabled")
        return true;
    return false;
}

const Enum::YLeaf L2fibMainIfInstanceState::forwarding {0, "forwarding"};
const Enum::YLeaf L2fibMainIfInstanceState::blocked {1, "blocked"};
const Enum::YLeaf L2fibMainIfInstanceState::mac_learning {2, "mac-learning"};
const Enum::YLeaf L2fibMainIfInstanceState::nack {3, "nack"};
const Enum::YLeaf L2fibMainIfInstanceState::forwarning_not_useful {4, "forwarning-not-useful"};
const Enum::YLeaf L2fibMainIfInstanceState::blocked_not_useful {5, "blocked-not-useful"};
const Enum::YLeaf L2fibMainIfInstanceState::mac_learning_not_useful {6, "mac-learning-not-useful"};
const Enum::YLeaf L2fibMainIfInstanceState::blocked_data_only {7, "blocked-data-only"};
const Enum::YLeaf L2fibMainIfInstanceState::multicast_pe2ce_blocked {8, "multicast-pe2ce-blocked"};
const Enum::YLeaf L2fibMainIfInstanceState::multicast_blocked {9, "multicast-blocked"};
const Enum::YLeaf L2fibMainIfInstanceState::port_state_unknown {10, "port-state-unknown"};

const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l2_dp {0, "l2vpn-vni-mode-l2-dp"};
const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l3_dp {1, "l2vpn-vni-mode-l3-dp"};
const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l2_cp {2, "l2vpn-vni-mode-l2-cp"};
const Enum::YLeaf L2vpnVniMode::l2vpn_vni_mode_l3_cp {3, "l2vpn-vni-mode-l3-cp"};

const Enum::YLeaf L2fibStormControlRateUnit::pps {0, "pps"};
const Enum::YLeaf L2fibStormControlRateUnit::kb_ps {1, "kb-ps"};

const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_none {0, "l2vpn-ad-vpls-id-none"};
const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_auto {1, "l2vpn-ad-vpls-id-auto"};
const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_as {10, "l2vpn-ad-vpls-id-as"};
const Enum::YLeaf L2vpnAdVplsId::l2vpn_ad_vpls_id_v4_addr {266, "l2vpn-ad-vpls-id-v4-addr"};

const Enum::YLeaf L2vpnBagMacLimitAction::limit_none {0, "limit-none"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_flood {1, "limit-flood"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_no_flood {2, "limit-no-flood"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_shutdown {3, "limit-shutdown"};
const Enum::YLeaf L2vpnBagMacLimitAction::limit_no_config {4, "limit-no-config"};

const Enum::YLeaf L2vpnPwheIflistRepStatus::invalid {0, "invalid"};
const Enum::YLeaf L2vpnPwheIflistRepStatus::pending {1, "pending"};
const Enum::YLeaf L2vpnPwheIflistRepStatus::success {2, "success"};
const Enum::YLeaf L2vpnPwheIflistRepStatus::failed {3, "failed"};
const Enum::YLeaf L2vpnPwheIflistRepStatus::not_supported {4, "not-supported"};

const Enum::YLeaf L2fibL2tpSession::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf L2fibL2tpSession::l2tpv2 {1, "l2tpv2"};

const Enum::YLeaf L2vpnVirtualportState::l2vpn_vp_state_undefined {0, "l2vpn-vp-state-undefined"};
const Enum::YLeaf L2vpnVirtualportState::l2vpn_vp_state_up {1, "l2vpn-vp-state-up"};
const Enum::YLeaf L2vpnVirtualportState::l2vpn_vp_state_down {2, "l2vpn-vp-state-down"};

const Enum::YLeaf MgmtL2fibMacLimitNotify::mgmt_l2fib_mac_limit_notify_none {0, "mgmt-l2fib-mac-limit-notify-none"};
const Enum::YLeaf MgmtL2fibMacLimitNotify::mgmt_l2fib_mac_limit_notify_syslog {1, "mgmt-l2fib-mac-limit-notify-syslog"};
const Enum::YLeaf MgmtL2fibMacLimitNotify::mgmt_l2fib_mac_limit_notify_trap {2, "mgmt-l2fib-mac-limit-notify-trap"};
const Enum::YLeaf MgmtL2fibMacLimitNotify::mgmt_l2fib_mac_limit_notify_both {3, "mgmt-l2fib-mac-limit-notify-both"};

const Enum::YLeaf L2vpnBagStormControlRateUnit::pps {0, "pps"};
const Enum::YLeaf L2vpnBagStormControlRateUnit::kb_ps {1, "kb-ps"};

const Enum::YLeaf L2vpnProtectionRole::l2vpn_protection_primary {0, "l2vpn-protection-primary"};
const Enum::YLeaf L2vpnProtectionRole::l2vpn_protection_backup {1, "l2vpn-protection-backup"};

const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_forwarding {0, "msti-bag-stp-port-state-forwarding"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_blocked {1, "msti-bag-stp-port-state-blocked"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_mac_learning {2, "msti-bag-stp-port-state-mac-learning"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_nack {3, "msti-bag-stp-port-state-nack"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_forwarding_not_useful {4, "msti-bag-stp-port-state-forwarding-not-useful"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_blocked_not_useful {5, "msti-bag-stp-port-state-blocked-not-useful"};
const Enum::YLeaf L2vpnMstiState::msti_bag_stp_port_state_mac_learning_not_useful {6, "msti-bag-stp-port-state-mac-learning-not-useful"};
const Enum::YLeaf L2vpnMstiState::msti_bag_erp_port_state_blocked_data_only {7, "msti-bag-erp-port-state-blocked-data-only"};
const Enum::YLeaf L2vpnMstiState::msti_bag_erp_port_state_evpn_mcast_pe2ce_blocked {8, "msti-bag-erp-port-state-evpn-mcast-pe2ce-blocked"};
const Enum::YLeaf L2vpnMstiState::msti_bag_erp_port_state_evpn_port_state_mcast_blocked {9, "msti-bag-erp-port-state-evpn-port-state-mcast-blocked"};

const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_min {0, "mgmt-l2fib-data-type-min"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_xcon {1, "mgmt-l2fib-data-type-xcon"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_ac {2, "mgmt-l2fib-data-type-ac"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_span {3, "mgmt-l2fib-data-type-span"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_atom {4, "mgmt-l2fib-data-type-atom"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_pbb {5, "mgmt-l2fib-data-type-pbb"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_vni {6, "mgmt-l2fib-data-type-vni"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_n_hop {7, "mgmt-l2fib-data-type-n-hop"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_l2tp {8, "mgmt-l2fib-data-type-l2tp"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_l2tpv2 {9, "mgmt-l2fib-data-type-l2tpv2"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_bridge {10, "mgmt-l2fib-data-type-bridge"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_bridge_shg {11, "mgmt-l2fib-data-type-bridge-shg"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_bridge_port {12, "mgmt-l2fib-data-type-bridge-port"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_bridge_mac {13, "mgmt-l2fib-data-type-bridge-mac"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_mcast_table {14, "mgmt-l2fib-data-type-mcast-table"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_mcast_leaf {15, "mgmt-l2fib-data-type-mcast-leaf"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_mcast_xid {16, "mgmt-l2fib-data-type-mcast-xid"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_dhcp {17, "mgmt-l2fib-data-type-dhcp"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_l2tp_ipv6_ts {18, "mgmt-l2fib-data-type-l2tp-ipv6-ts"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_pwhe_mp {19, "mgmt-l2fib-data-type-pwhe-mp"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_evpn {20, "mgmt-l2fib-data-type-evpn"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_fxs {21, "mgmt-l2fib-data-type-fxs"};
const Enum::YLeaf MgmtL2fibData::mgmt_l2fib_data_type_max {22, "mgmt-l2fib-data-type-max"};

const Enum::YLeaf IccpSmPortState::unknown {0, "unknown"};
const Enum::YLeaf IccpSmPortState::unconfigured {1, "unconfigured"};
const Enum::YLeaf IccpSmPortState::unsynchronized {2, "unsynchronized"};
const Enum::YLeaf IccpSmPortState::operational {3, "operational"};
const Enum::YLeaf IccpSmPortState::failed {4, "failed"};
const Enum::YLeaf IccpSmPortState::reverting {5, "reverting"};

const Enum::YLeaf L2fibIpAddr::ip_none {0, "ip-none"};
const Enum::YLeaf L2fibIpAddr::v4 {4, "v4"};
const Enum::YLeaf L2fibIpAddr::v6 {6, "v6"};

const Enum::YLeaf L2vpnp2mpPtree::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2vpnp2mpPtree::mldp {2, "mldp"};

const Enum::YLeaf IflistRepStatus::invalid {0, "invalid"};
const Enum::YLeaf IflistRepStatus::pending {1, "pending"};
const Enum::YLeaf IflistRepStatus::done {2, "done"};
const Enum::YLeaf IflistRepStatus::not_supported {3, "not-supported"};
const Enum::YLeaf IflistRepStatus::failed {4, "failed"};

const Enum::YLeaf L2vpnPwClassControlWord::unset {0, "unset"};
const Enum::YLeaf L2vpnPwClassControlWord::enable {1, "enable"};
const Enum::YLeaf L2vpnPwClassControlWord::disable {2, "disable"};

const Enum::YLeaf L2vpnL2tpTunnelState::l2vpn_l2tp_idle {0, "l2vpn-l2tp-idle"};
const Enum::YLeaf L2vpnL2tpTunnelState::l2vpn_l2tp_wait_for_connecting {1, "l2vpn-l2tp-wait-for-connecting"};
const Enum::YLeaf L2vpnL2tpTunnelState::l2vpn_l2tp_wait_for_connected {2, "l2vpn-l2tp-wait-for-connected"};
const Enum::YLeaf L2vpnL2tpTunnelState::l2vpn_l2tp_in_coming_call {3, "l2vpn-l2tp-in-coming-call"};
const Enum::YLeaf L2vpnL2tpTunnelState::l2vpn_l2tp_connected {4, "l2vpn-l2tp-connected"};
const Enum::YLeaf L2vpnL2tpTunnelState::l2vpn_l2tp_disconnected {5, "l2vpn-l2tp-disconnected"};

const Enum::YLeaf L2vpnBridgeCoupledState::disabled {0, "disabled"};
const Enum::YLeaf L2vpnBridgeCoupledState::down {2, "down"};
const Enum::YLeaf L2vpnBridgeCoupledState::up {3, "up"};

const Enum::YLeaf MgmtL2fibBridge::mgmt_l2fib_bridge_type_default {0, "mgmt-l2fib-bridge-type-default"};
const Enum::YLeaf MgmtL2fibBridge::mgmt_l2fib_bridge_type_pbb_edge {1, "mgmt-l2fib-bridge-type-pbb-edge"};
const Enum::YLeaf MgmtL2fibBridge::mgmt_l2fib_bridge_type_pbb_core {2, "mgmt-l2fib-bridge-type-pbb-core"};

const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_not_specified {0, "l2vpn-pw-sig-not-specified"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_none {1, "l2vpn-pw-sig-none"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_l2tpv3 {2, "l2vpn-pw-sig-l2tpv3"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_l2tpv2 {3, "l2vpn-pw-sig-l2tpv2"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_ldp {4, "l2vpn-pw-sig-ldp"};
const Enum::YLeaf L2vpnSignallingProto::l2vpn_pw_sig_bgp {5, "l2vpn-pw-sig-bgp"};

const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_not_specified {0, "l2vpn-pw-encaps-not-specified"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_l2tpv3 {1, "l2vpn-pw-encaps-l2tpv3"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_l2tpv2 {2, "l2vpn-pw-encaps-l2tpv2"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_mpls {3, "l2vpn-pw-encaps-mpls"};
const Enum::YLeaf L2vpnEncapMethod::l2vpn_pw_encaps_unknown {4, "l2vpn-pw-encaps-unknown"};

const Enum::YLeaf L2fibG8032ApsPortStatus::l2fib_aps_port_state_unknown {0, "l2fib-aps-port-state-unknown"};
const Enum::YLeaf L2fibG8032ApsPortStatus::l2fib_aps_port_state_unbound {1, "l2fib-aps-port-state-unbound"};
const Enum::YLeaf L2fibG8032ApsPortStatus::l2fib_aps_port_state_bound {2, "l2fib-aps-port-state-bound"};

const Enum::YLeaf EvpnMainInterface::evpn_main_interface_ac {1, "evpn-main-interface-ac"};
const Enum::YLeaf EvpnMainInterface::evpn_main_interface_nve {2, "evpn-main-interface-nve"};
const Enum::YLeaf EvpnMainInterface::evpn_main_interface_ac_vfi {3, "evpn-main-interface-ac-vfi"};
const Enum::YLeaf EvpnMainInterface::evpn_main_interface_ac_pw {4, "evpn-main-interface-ac-pw"};

const Enum::YLeaf L2vpnVniEncaps::l2vpn_vni_encap_vxlan {0, "l2vpn-vni-encap-vxlan"};
const Enum::YLeaf L2vpnVniEncaps::l2vpn_vni_encap_softgre {1, "l2vpn-vni-encap-softgre"};

const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_not_specified {0, "l2vpn-transport-mode-not-specified"};
const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_ethernet {1, "l2vpn-transport-mode-ethernet"};
const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_vlan {2, "l2vpn-transport-mode-vlan"};
const Enum::YLeaf L2vpnTransportMode::l2vpn_transport_mode_vlan_passthrough {3, "l2vpn-transport-mode-vlan-passthrough"};

const Enum::YLeaf MgmtL2fibMacLimitAction::mgmt_l2fib_mac_limit_action_type_none {0, "mgmt-l2fib-mac-limit-action-type-none"};
const Enum::YLeaf MgmtL2fibMacLimitAction::mgmt_l2fib_mac_limit_action_type_flood {1, "mgmt-l2fib-mac-limit-action-type-flood"};
const Enum::YLeaf MgmtL2fibMacLimitAction::mgmt_l2fib_mac_limit_action_type_no_flood {2, "mgmt-l2fib-mac-limit-action-type-no-flood"};
const Enum::YLeaf MgmtL2fibMacLimitAction::mgmt_l2fib_mac_limit_action_type_shutdown {3, "mgmt-l2fib-mac-limit-action-type-shutdown"};

const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_none {0, "l2vpn-ad-lsd-err-type-none"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_rw_create_abort_lbl_alloc {1, "l2vpn-ad-lsd-err-type-rw-create-abort-lbl-alloc"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_lbl_alloc_abort_rw_create {2, "l2vpn-ad-lsd-err-type-lbl-alloc-abort-rw-create"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_lbl_alloc_abort_lbl_alloc {3, "l2vpn-ad-lsd-err-type-lbl-alloc-abort-lbl-alloc"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_lbl_alloc_lbl_ctx_mismatch {4, "l2vpn-ad-lsd-err-type-lbl-alloc-lbl-ctx-mismatch"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_rw_create_fpi_size_mismatch {5, "l2vpn-ad-lsd-err-type-rw-create-fpi-size-mismatch"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_rw_create_fpi_version_mismatch {6, "l2vpn-ad-lsd-err-type-rw-create-fpi-version-mismatch"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_enospc {7, "l2vpn-ad-lsd-err-type-enospc"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_enomem {8, "l2vpn-ad-lsd-err-type-enomem"};
const Enum::YLeaf L2vpnAdLsdErr::l2vpn_ad_lsd_err_type_undefined {9, "l2vpn-ad-lsd-err-type-undefined"};

const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_unknown {0, "l2vpn-pw-control-word-unknown"};
const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_clear {1, "l2vpn-pw-control-word-clear"};
const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_set {2, "l2vpn-pw-control-word-set"};
const Enum::YLeaf L2vpnPwControlWord::l2vpn_pw_control_word_mandatory {3, "l2vpn-pw-control-word-mandatory"};

const Enum::YLeaf L2vpnBriefPsn::ls {0, "ls"};
const Enum::YLeaf L2vpnBriefPsn::atom {1, "atom"};
const Enum::YLeaf L2vpnBriefPsn::l2tpv3 {2, "l2tpv3"};
const Enum::YLeaf L2vpnBriefPsn::unknown_psn {3, "unknown-psn"};

const Enum::YLeaf L2vpnMainIfProtectected::erp_protected {0, "erp-protected"};
const Enum::YLeaf L2vpnMainIfProtectected::mstp_protected {1, "mstp-protected"};
const Enum::YLeaf L2vpnMainIfProtectected::no_protected {2, "no-protected"};

const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_not_specified {0, "l2vpn-pw-mpls-pref-path-not-specified"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_next_hop_ip {1, "l2vpn-pw-mpls-pref-path-next-hop-ip"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_te_tunnel {2, "l2vpn-pw-mpls-pref-path-te-tunnel"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_ip_tunnel {3, "l2vpn-pw-mpls-pref-path-ip-tunnel"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_tp_tunnel {4, "l2vpn-pw-mpls-pref-path-tp-tunnel"};
const Enum::YLeaf L2vpnPrefpathOption::l2vpn_pw_mpls_pref_path_sr_te {5, "l2vpn-pw-mpls-pref-path-sr-te"};

const Enum::YLeaf L2vpnPw::l2vpn_pw_type_unknown {0, "l2vpn-pw-type-unknown"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_frame_relay_dlci {1, "l2vpn-pw-type-frame-relay-dlci"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_aal5_sdu {2, "l2vpn-pw-type-atm-aal5-sdu"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_trans_cell {3, "l2vpn-pw-type-atm-trans-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ether_vlan {4, "l2vpn-pw-type-ether-vlan"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ether {5, "l2vpn-pw-type-ether"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_hdlc {6, "l2vpn-pw-type-hdlc"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ppp {7, "l2vpn-pw-type-ppp"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_sonet_over_mpls {8, "l2vpn-pw-type-sonet-over-mpls"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_n_vcc_cell {9, "l2vpn-pw-type-atm-n-vcc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_n_vpc_cell {10, "l2vpn-pw-type-atm-n-vpc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_ip {11, "l2vpn-pw-type-ip"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_vcc_cell {12, "l2vpn-pw-type-atm-vcc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_vpc_cell {13, "l2vpn-pw-type-atm-vpc-cell"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_atm_aal5_pdu {14, "l2vpn-pw-type-atm-aal5-pdu"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_frame_relay {15, "l2vpn-pw-type-frame-relay"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_sonet {16, "l2vpn-pw-type-sonet"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_vpls {17, "l2vpn-pw-type-vpls"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_e1 {18, "l2vpn-pw-type-tdm-sa-to-p-e1"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_t1 {19, "l2vpn-pw-type-tdm-sa-to-p-t1"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_e3 {20, "l2vpn-pw-type-tdm-sa-to-p-e3"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_sa_to_p_t3 {21, "l2vpn-pw-type-tdm-sa-to-p-t3"};
const Enum::YLeaf L2vpnPw::l2vpn_pw_type_tdm_ce_so_psn {22, "l2vpn-pw-type-tdm-ce-so-psn"};

const Enum::YLeaf L2vpnP2mpPwPtree::none {0, "none"};
const Enum::YLeaf L2vpnP2mpPwPtree::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2vpnP2mpPwPtree::mldp {2, "mldp"};

const Enum::YLeaf L2vpnMemoryState::memory_state_unknown {0, "memory-state-unknown"};
const Enum::YLeaf L2vpnMemoryState::memory_state_normal {1, "memory-state-normal"};
const Enum::YLeaf L2vpnMemoryState::memory_state_minor {2, "memory-state-minor"};
const Enum::YLeaf L2vpnMemoryState::memory_state_severe {3, "memory-state-severe"};
const Enum::YLeaf L2vpnMemoryState::memory_state_critical {4, "memory-state-critical"};
const Enum::YLeaf L2vpnMemoryState::memory_state_invalid {5, "memory-state-invalid"};

const Enum::YLeaf L2vpnSrcAddressSet::unset {0, "unset"};
const Enum::YLeaf L2vpnSrcAddressSet::set {1, "set"};

const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_unknown {0, "l2vpn-intf-type-unknown"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_ethernet {1, "l2vpn-intf-type-ethernet"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_vlan {2, "l2vpn-intf-type-vlan"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_atm {3, "l2vpn-intf-type-atm"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_frame_relay {4, "l2vpn-intf-type-frame-relay"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_hdlc {5, "l2vpn-intf-type-hdlc"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_ppp {6, "l2vpn-intf-type-ppp"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_span {7, "l2vpn-intf-type-span"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_bvi {8, "l2vpn-intf-type-bvi"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_cem {9, "l2vpn-intf-type-cem"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_pw_ether {10, "l2vpn-intf-type-pw-ether"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_pw_iw {11, "l2vpn-intf-type-pw-iw"};
const Enum::YLeaf L2vpnInterface::l2vpn_intf_type_vni {12, "l2vpn-intf-type-vni"};

const Enum::YLeaf L2vpnG8032UncfgReason::reason_none {0, "reason-none"};
const Enum::YLeaf L2vpnG8032UncfgReason::ring_mp0_missing {1, "ring-mp0-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::ring_mp1_missing {2, "ring-mp1-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::inclusion_list_empty {3, "inclusion-list-empty"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_missing {4, "aps0-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0bp_notfound {5, "aps0bp-notfound"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_no_ac_ctx {6, "aps0-no-ac-ctx"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_not_in_inclusion_list {7, "aps0-not-in-inclusion-list"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps0_mismatched {8, "aps0-mismatched"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_missing {9, "aps1-missing"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1bp_notfound {10, "aps1bp-notfound"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_no_ac_ctx {11, "aps1-no-ac-ctx"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_not_in_inclusion_list {12, "aps1-not-in-inclusion-list"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps1_mismatched {13, "aps1-mismatched"};
const Enum::YLeaf L2vpnG8032UncfgReason::aps_unprovisioned {14, "aps-unprovisioned"};

const Enum::YLeaf L2vpnAtmMode::l2vpn_atm_port_mode {0, "l2vpn-atm-port-mode"};
const Enum::YLeaf L2vpnAtmMode::l2vpn_atm_vp_mode {1, "l2vpn-atm-vp-mode"};
const Enum::YLeaf L2vpnAtmMode::l2vpn_atm_vc_mode {2, "l2vpn-atm-vc-mode"};

const Enum::YLeaf L2fibPwRedundancyRole::primary {0, "primary"};
const Enum::YLeaf L2fibPwRedundancyRole::backup {1, "backup"};

const Enum::YLeaf IccpSmState::unresolved {0, "unresolved"};
const Enum::YLeaf IccpSmState::provisioned {1, "provisioned"};
const Enum::YLeaf IccpSmState::connecting {2, "connecting"};
const Enum::YLeaf IccpSmState::connected {3, "connected"};
const Enum::YLeaf IccpSmState::synchronizing {4, "synchronizing"};
const Enum::YLeaf IccpSmState::synchronized {5, "synchronized"};

const Enum::YLeaf MgmtL2fibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_none {0, "mgmt-l2fib-bridge-mac-evpn-ctx-none"};
const Enum::YLeaf MgmtL2fibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_esi_id {1, "mgmt-l2fib-bridge-mac-evpn-ctx-esi-id"};
const Enum::YLeaf MgmtL2fibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_local_label {2, "mgmt-l2fib-bridge-mac-evpn-ctx-local-label"};
const Enum::YLeaf MgmtL2fibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_moi {3, "mgmt-l2fib-bridge-mac-evpn-ctx-moi"};
const Enum::YLeaf MgmtL2fibBridgeMacEvpnCtx::mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh {4, "mgmt-l2fib-bridge-mac-evpn-ctx-bp-ifh"};

const Enum::YLeaf L2vpnHaNsrNotReadyReason::collab_time_out {0, "collab-time-out"};
const Enum::YLeaf L2vpnHaNsrNotReadyReason::collab_conntection_idt {1, "collab-conntection-idt"};
const Enum::YLeaf L2vpnHaNsrNotReadyReason::nsr_peer_not_connected {2, "nsr-peer-not-connected"};
const Enum::YLeaf L2vpnHaNsrNotReadyReason::nsr_peer_not_in_sync {3, "nsr-peer-not-in-sync"};

const Enum::YLeaf L2vpnRgState::unknown {0, "unknown"};
const Enum::YLeaf L2vpnRgState::active {1, "active"};
const Enum::YLeaf L2vpnRgState::standby {2, "standby"};

const Enum::YLeaf L2vpnSyncStatus::not_ready {0, "not-ready"};
const Enum::YLeaf L2vpnSyncStatus::ready {1, "ready"};

const Enum::YLeaf L2vpnTimeStampMode::unknown {0, "unknown"};
const Enum::YLeaf L2vpnTimeStampMode::differential {1, "differential"};
const Enum::YLeaf L2vpnTimeStampMode::absolute {2, "absolute"};
const Enum::YLeaf L2vpnTimeStampMode::none {3, "none"};

const Enum::YLeaf L2vpnAdSigMethod::l2vpn_ad_sig_method_none {0, "l2vpn-ad-sig-method-none"};
const Enum::YLeaf L2vpnAdSigMethod::l2vpn_ad_sig_method_bgp {1, "l2vpn-ad-sig-method-bgp"};
const Enum::YLeaf L2vpnAdSigMethod::l2vpn_ad_sig_method_ldp {2, "l2vpn-ad-sig-method-ldp"};

const Enum::YLeaf L2vpnPwFec::l2vpn_pw_fec_128 {0, "l2vpn-pw-fec-128"};
const Enum::YLeaf L2vpnPwFec::l2vpn_pw_fec_129 {1, "l2vpn-pw-fec-129"};
const Enum::YLeaf L2vpnPwFec::l2vpn_pw_fec_not_applicable {268435455, "l2vpn-pw-fec-not-applicable"};

const Enum::YLeaf L2vpnBagMacSecureAction::not_set {0, "not-set"};
const Enum::YLeaf L2vpnBagMacSecureAction::restrict {1, "restrict"};
const Enum::YLeaf L2vpnBagMacSecureAction::none {2, "none"};
const Enum::YLeaf L2vpnBagMacSecureAction::shutdown {3, "shutdown"};

const Enum::YLeaf L2vpnMainIfInstanceState::forwarding {0, "forwarding"};
const Enum::YLeaf L2vpnMainIfInstanceState::blocked {1, "blocked"};
const Enum::YLeaf L2vpnMainIfInstanceState::mac_learning {2, "mac-learning"};
const Enum::YLeaf L2vpnMainIfInstanceState::nack {3, "nack"};
const Enum::YLeaf L2vpnMainIfInstanceState::forwarning_not_useful {4, "forwarning-not-useful"};
const Enum::YLeaf L2vpnMainIfInstanceState::blocked_not_useful {5, "blocked-not-useful"};
const Enum::YLeaf L2vpnMainIfInstanceState::mac_learning_not_useful {6, "mac-learning-not-useful"};
const Enum::YLeaf L2vpnMainIfInstanceState::blocked_data_only {7, "blocked-data-only"};
const Enum::YLeaf L2vpnMainIfInstanceState::mcast_pe2_ce_blocked {8, "mcast-pe2-ce-blocked"};
const Enum::YLeaf L2vpnMainIfInstanceState::port_state_unknown {9, "port-state-unknown"};

const Enum::YLeaf L2vpnProtection::l2vpn_protection_unknown {0, "l2vpn-protection-unknown"};
const Enum::YLeaf L2vpnProtection::l2vpn_protection_interface {1, "l2vpn-protection-interface"};
const Enum::YLeaf L2vpnProtection::l2vpn_protection_pseudowire {2, "l2vpn-protection-pseudowire"};
const Enum::YLeaf L2vpnProtection::l2vpn_protection_group {3, "l2vpn-protection-group"};

const Enum::YLeaf L2vpnBagMacWithdrawOption::mac_withdraw_option_state_up {0, "mac-withdraw-option-state-up"};
const Enum::YLeaf L2vpnBagMacWithdrawOption::mac_withdraw_option_state_down {1, "mac-withdraw-option-state-down"};
const Enum::YLeaf L2vpnBagMacWithdrawOption::mac_withdraw_option_optimize {2, "mac-withdraw-option-optimize"};

const Enum::YLeaf L2vpnVfiP2mpTransport::none {0, "none"};
const Enum::YLeaf L2vpnVfiP2mpTransport::rsvp_te {1, "rsvp-te"};

const Enum::YLeaf L2vpnBridgeState::bridge_init {0, "bridge-init"};
const Enum::YLeaf L2vpnBridgeState::bridge_up {1, "bridge-up"};
const Enum::YLeaf L2vpnBridgeState::bridge_down {2, "bridge-down"};
const Enum::YLeaf L2vpnBridgeState::bridge_admin_down {3, "bridge-admin-down"};

const Enum::YLeaf PwhePortImState::unknown {0, "unknown"};
const Enum::YLeaf PwhePortImState::down {1, "down"};
const Enum::YLeaf PwhePortImState::up {2, "up"};

const Enum::YLeaf L2vpnpw::manual {1, "manual"};
const Enum::YLeaf L2vpnpw::vpls_autodiscovered {2, "vpls-autodiscovered"};
const Enum::YLeaf L2vpnpw::vpws_autodiscovered {3, "vpws-autodiscovered"};
const Enum::YLeaf L2vpnpw::vpls_autodiscovered_ldp {4, "vpls-autodiscovered-ldp"};

const Enum::YLeaf MgmtL2fibStatsData::mgmt_l2fib_stats_type_unknown {0, "mgmt-l2fib-stats-type-unknown"};
const Enum::YLeaf MgmtL2fibStatsData::mgmt_l2fib_stats_type_mcast {1, "mgmt-l2fib-stats-type-mcast"};

const Enum::YLeaf L2fibGroupState::up {0, "up"};
const Enum::YLeaf L2fibGroupState::down {1, "down"};

const Enum::YLeaf L2vpnPeer::none {0, "none"};
const Enum::YLeaf L2vpnPeer::ipv4 {1, "ipv4"};
const Enum::YLeaf L2vpnPeer::ipv6 {2, "ipv6"};
const Enum::YLeaf L2vpnPeer::internal_label {3, "internal-label"};

const Enum::YLeaf L2vpnPwheIntf::pseudowire_ether {0, "pseudowire-ether"};
const Enum::YLeaf L2vpnPwheIntf::pseudowire_iw {1, "pseudowire-iw"};

const Enum::YLeaf L2vpnAcEncap::unknown_encap {0, "unknown-encap"};
const Enum::YLeaf L2vpnAcEncap::vlan {1, "vlan"};
const Enum::YLeaf L2vpnAcEncap::qinq {2, "qinq"};
const Enum::YLeaf L2vpnAcEncap::qin_any {3, "qin-any"};
const Enum::YLeaf L2vpnAcEncap::ethernet {4, "ethernet"};
const Enum::YLeaf L2vpnAcEncap::atm_aal0 {5, "atm-aal0"};
const Enum::YLeaf L2vpnAcEncap::atm_aal5 {6, "atm-aal5"};
const Enum::YLeaf L2vpnAcEncap::atm_vp {7, "atm-vp"};
const Enum::YLeaf L2vpnAcEncap::atm_port {8, "atm-port"};
const Enum::YLeaf L2vpnAcEncap::hdlc {9, "hdlc"};
const Enum::YLeaf L2vpnAcEncap::fr_dlci {10, "fr-dlci"};
const Enum::YLeaf L2vpnAcEncap::fr_dlci_local {11, "fr-dlci-local"};
const Enum::YLeaf L2vpnAcEncap::ppp {12, "ppp"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_e1 {13, "tdm-sa-to-p-e1"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_t1 {14, "tdm-sa-to-p-t1"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_e3 {15, "tdm-sa-to-p-e3"};
const Enum::YLeaf L2vpnAcEncap::tdm_sa_to_p_t3 {16, "tdm-sa-to-p-t3"};
const Enum::YLeaf L2vpnAcEncap::tdm_ce_so_psn {17, "tdm-ce-so-psn"};
const Enum::YLeaf L2vpnAcEncap::ip {18, "ip"};
const Enum::YLeaf L2vpnAcEncap::vlan_encap {19, "vlan-encap"};
const Enum::YLeaf L2vpnAcEncap::dot1ad {20, "dot1ad"};
const Enum::YLeaf L2vpnAcEncap::efp {21, "efp"};
const Enum::YLeaf L2vpnAcEncap::bvi {22, "bvi"};
const Enum::YLeaf L2vpnAcEncap::monitor_session {23, "monitor-session"};
const Enum::YLeaf L2vpnAcEncap::pseudowire_ether {24, "pseudowire-ether"};
const Enum::YLeaf L2vpnAcEncap::pseudowire_iw {25, "pseudowire-iw"};
const Enum::YLeaf L2vpnAcEncap::multi_segment_pseudowire {26, "multi-segment-pseudowire"};
const Enum::YLeaf L2vpnAcEncap::pseudowire_l2_subinterface {27, "pseudowire-l2-subinterface"};
const Enum::YLeaf L2vpnAcEncap::virtual_network_interface {28, "virtual-network-interface"};
const Enum::YLeaf L2vpnAcEncap::vlan_switched_port {29, "vlan-switched-port"};
const Enum::YLeaf L2vpnAcEncap::vlan_switched_port_vlan {30, "vlan-switched-port-vlan"};
const Enum::YLeaf L2vpnAcEncap::encap_types_max {31, "encap-types-max"};

const Enum::YLeaf L2vpnG8032Rpl::rpl_unknown {0, "rpl-unknown"};
const Enum::YLeaf L2vpnG8032Rpl::port0_owner {1, "port0-owner"};
const Enum::YLeaf L2vpnG8032Rpl::port0_neighbor {2, "port0-neighbor"};
const Enum::YLeaf L2vpnG8032Rpl::port0_next_neighbor {3, "port0-next-neighbor"};
const Enum::YLeaf L2vpnG8032Rpl::port1_owner {4, "port1-owner"};
const Enum::YLeaf L2vpnG8032Rpl::port1_neighbor {5, "port1-neighbor"};
const Enum::YLeaf L2vpnG8032Rpl::port1_next_neighbor {6, "port1-next-neighbor"};

const Enum::YLeaf L2vpnXcState::l2vpn_xc_state_unresolved {0, "l2vpn-xc-state-unresolved"};
const Enum::YLeaf L2vpnXcState::l2vpn_xc_state_down {1, "l2vpn-xc-state-down"};
const Enum::YLeaf L2vpnXcState::l2vpn_xc_state_up {2, "l2vpn-xc-state-up"};

const Enum::YLeaf L2vpnPreferred::te_tunnel {0, "te-tunnel"};
const Enum::YLeaf L2vpnPreferred::ip_tunnel {1, "ip-tunnel"};
const Enum::YLeaf L2vpnPreferred::tp_tunnel {2, "tp-tunnel"};
const Enum::YLeaf L2vpnPreferred::mte_tunnel {3, "mte-tunnel"};
const Enum::YLeaf L2vpnPreferred::mldp_tunnel {4, "mldp-tunnel"};
const Enum::YLeaf L2vpnPreferred::sr_te_policy {5, "sr-te-policy"};

const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_virtual_ac {0, "l2vpn-id-mgr-app-bag-type-virtual-ac"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_ac {1, "l2vpn-id-mgr-app-bag-type-ac"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_pw {2, "l2vpn-id-mgr-app-bag-type-pw"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_bd {3, "l2vpn-id-mgr-app-bag-type-bd"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_fxc {4, "l2vpn-id-mgr-app-bag-type-fxc"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_mp2mp {5, "l2vpn-id-mgr-app-bag-type-mp2mp"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_rd {6, "l2vpn-id-mgr-app-bag-type-rd"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_pbb {7, "l2vpn-id-mgr-app-bag-type-pbb"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_if_list {8, "l2vpn-id-mgr-app-bag-type-if-list"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_atom {9, "l2vpn-id-mgr-app-bag-type-atom"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_global {10, "l2vpn-id-mgr-app-bag-type-global"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_pw_group {11, "l2vpn-id-mgr-app-bag-type-pw-group"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_evpn {12, "l2vpn-id-mgr-app-bag-type-evpn"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_evpn_lbl {13, "l2vpn-id-mgr-app-bag-type-evpn-lbl"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_evpn_rd {14, "l2vpn-id-mgr-app-bag-type-evpn-rd"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_ital {15, "l2vpn-id-mgr-app-bag-type-ital"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_bp {16, "l2vpn-id-mgr-app-bag-type-bp"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_evpn_tep {17, "l2vpn-id-mgr-app-bag-type-evpn-tep"};
const Enum::YLeaf L2vpnIdMgrAppBag::l2vpn_id_mgr_app_bag_type_count {18, "l2vpn-id-mgr-app-bag-type-count"};

const Enum::YLeaf L2vpnMirpLiteProtocolInfo::vlan0 {0, "vlan0"};
const Enum::YLeaf L2vpnMirpLiteProtocolInfo::none {1, "none"};

const Enum::YLeaf L2vpnVfiState::unknown {0, "unknown"};
const Enum::YLeaf L2vpnVfiState::up {1, "up"};
const Enum::YLeaf L2vpnVfiState::down {2, "down"};
const Enum::YLeaf L2vpnVfiState::admin_down {3, "admin-down"};

const Enum::YLeaf L2vpnBagAdEncap::l2vpn_bag_ad_encap_not_specified {0, "l2vpn-bag-ad-encap-not-specified"};
const Enum::YLeaf L2vpnBagAdEncap::l2vpn_bag_ad_encap_ether_vlan {1, "l2vpn-bag-ad-encap-ether-vlan"};
const Enum::YLeaf L2vpnBagAdEncap::l2vpn_bag_ad_encap_ether {2, "l2vpn-bag-ad-encap-ether"};

const Enum::YLeaf L2vpnTosMode::l2vpn_pw_ip_tos_none {0, "l2vpn-pw-ip-tos-none"};
const Enum::YLeaf L2vpnTosMode::l2vpn_pw_ip_tos_reflect {1, "l2vpn-pw-ip-tos-reflect"};

const Enum::YLeaf L2vpnIpcTransportMode::unicast {0, "unicast"};
const Enum::YLeaf L2vpnIpcTransportMode::broadcast {1, "broadcast"};
const Enum::YLeaf L2vpnIpcTransportMode::unknown {2, "unknown"};

const Enum::YLeaf P2mpTransportState::none {0, "none"};
const Enum::YLeaf P2mpTransportState::ok {1, "ok"};
const Enum::YLeaf P2mpTransportState::error {2, "error"};
const Enum::YLeaf P2mpTransportState::tunnel_down {3, "tunnel-down"};
const Enum::YLeaf P2mpTransportState::max_tunnels_reached {4, "max-tunnels-reached"};

const Enum::YLeaf L2vpnService::vpws {0, "vpws"};
const Enum::YLeaf L2vpnService::vpls {1, "vpls"};

const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_unresolved {0, "l2vpn-segment-type-unresolved"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_ac {1, "l2vpn-segment-type-ac"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_pw {2, "l2vpn-segment-type-pw"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_ac {3, "l2vpn-segment-type-bd-ac"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_vfi {4, "l2vpn-segment-type-vfi"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_pw {5, "l2vpn-segment-type-bd-pw"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_pbb {6, "l2vpn-segment-type-bd-pbb"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_bd_evpn {7, "l2vpn-segment-type-bd-evpn"};
const Enum::YLeaf L2vpnSegment::l2vpn_segment_type_vni {8, "l2vpn-segment-type-vni"};

const Enum::YLeaf MgmtL2fibMacSecAction::not_set {0, "not-set"};
const Enum::YLeaf MgmtL2fibMacSecAction::restrict {1, "restrict"};
const Enum::YLeaf MgmtL2fibMacSecAction::none {2, "none"};
const Enum::YLeaf MgmtL2fibMacSecAction::shutdown {3, "shutdown"};

const Enum::YLeaf L2fibG8032Rpl::rpl_unknown {0, "rpl-unknown"};
const Enum::YLeaf L2fibG8032Rpl::port0_owner {1, "port0-owner"};
const Enum::YLeaf L2fibG8032Rpl::port0_neighbor {2, "port0-neighbor"};
const Enum::YLeaf L2fibG8032Rpl::port0_next_neighbor {3, "port0-next-neighbor"};
const Enum::YLeaf L2fibG8032Rpl::port1_owner {4, "port1-owner"};
const Enum::YLeaf L2fibG8032Rpl::port1_neighbor {5, "port1-neighbor"};
const Enum::YLeaf L2fibG8032Rpl::port1_next_neighbor {6, "port1-next-neighbor"};

const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_none {0, "mac-limit-notify-none"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_syslog {1, "mac-limit-notify-syslog"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_trap {2, "mac-limit-notify-trap"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_syslog_trap {3, "mac-limit-notify-syslog-trap"};
const Enum::YLeaf L2vpnBagMacLimitNotify::mac_limit_notify_no_config {4, "mac-limit-notify-no-config"};

const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_manual {1, "l2vpn-pw-id-type-manual"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_ad_vpls {2, "l2vpn-pw-id-type-ad-vpls"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_ad_vpws {3, "l2vpn-pw-id-type-ad-vpws"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_ad_vpls_ldp {4, "l2vpn-pw-id-type-ad-vpls-ldp"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_pwr {5, "l2vpn-pw-id-type-pwr"};
const Enum::YLeaf L2vpnPwId::l2vpn_pw_id_type_evpn {6, "l2vpn-pw-id-type-evpn"};

const Enum::YLeaf L2vpnLoadBal::not_supported {0, "not-supported"};
const Enum::YLeaf L2vpnLoadBal::source_dest_mac {1, "source-dest-mac"};
const Enum::YLeaf L2vpnLoadBal::source_dest_ip {2, "source-dest-ip"};
const Enum::YLeaf L2vpnLoadBal::undefined {3, "undefined"};
const Enum::YLeaf L2vpnLoadBal::pseudowire_label {4, "pseudowire-label"};

const Enum::YLeaf L2vpnFrMode::l2vpn_fr_port_mode {0, "l2vpn-fr-port-mode"};
const Enum::YLeaf L2vpnFrMode::l2vpn_fr_dlci_mode {1, "l2vpn-fr-dlci-mode"};

const Enum::YLeaf L2vpnTdmRtpOption::unknown {0, "unknown"};
const Enum::YLeaf L2vpnTdmRtpOption::present {1, "present"};
const Enum::YLeaf L2vpnTdmRtpOption::absent {2, "absent"};

const Enum::YLeaf L2vpnMirpLiteStatus::enabled {0, "enabled"};
const Enum::YLeaf L2vpnMirpLiteStatus::not_supported {1, "not-supported"};

const Enum::YLeaf L2vpnPtree::none {0, "none"};
const Enum::YLeaf L2vpnPtree::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2vpnPtree::mldp {2, "mldp"};

const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_unresolved {0, "l2vpn-segment-state-unresolved"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_up {1, "l2vpn-segment-state-up"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_down {2, "l2vpn-segment-state-down"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_admin_down {3, "l2vpn-segment-state-admin-down"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_local_up {4, "l2vpn-segment-state-local-up"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_remote_up {5, "l2vpn-segment-state-remote-up"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_connected {6, "l2vpn-segment-state-connected"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_standby {7, "l2vpn-segment-state-standby"};
const Enum::YLeaf L2vpnSegmentState::l2vpn_segment_state_standby_ready {8, "l2vpn-segment-state-standby-ready"};

const Enum::YLeaf L2fibPwId::default_ {0, "default"};
const Enum::YLeaf L2fibPwId::manual {1, "manual"};
const Enum::YLeaf L2fibPwId::vpls {2, "vpls"};
const Enum::YLeaf L2fibPwId::vpws {3, "vpws"};
const Enum::YLeaf L2fibPwId::vpls_ldp {4, "vpls-ldp"};
const Enum::YLeaf L2fibPwId::l2fib_pw_id_type_pwr {5, "l2fib-pw-id-type-pwr"};
const Enum::YLeaf L2fibPwId::l2fib_pw_id_type_evpn {6, "l2fib-pw-id-type-evpn"};

const Enum::YLeaf L2fibFeature::l2fib_feature_dhcp_snooping {0, "l2fib-feature-dhcp-snooping"};
const Enum::YLeaf L2fibFeature::l2fib_feature_igmp_snooping {1, "l2fib-feature-igmp-snooping"};
const Enum::YLeaf L2fibFeature::l2fib_feature_mld_snooping {2, "l2fib-feature-mld-snooping"};
const Enum::YLeaf L2fibFeature::l2fib_feature_max {3, "l2fib-feature-max"};

const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_none {0, "l2vpn-iw-type-none"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_ethernet {1, "l2vpn-iw-type-ethernet"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_ppp {2, "l2vpn-iw-type-ppp"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_ipv4 {3, "l2vpn-iw-type-ipv4"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_voluntary {4, "l2vpn-iw-type-voluntary"};
const Enum::YLeaf L2vpnInterworking::l2vpn_iw_type_frf8 {5, "l2vpn-iw-type-frf8"};

const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_unknown {0, "mgmt-l2fib-switching-type-unknown"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_ac_ac {1, "mgmt-l2fib-switching-type-ac-ac"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_ac_atom {2, "mgmt-l2fib-switching-type-ac-atom"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_ac_vfi {3, "mgmt-l2fib-switching-type-ac-vfi"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_ac_l2tp {4, "mgmt-l2fib-switching-type-ac-l2tp"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_atom_atom {5, "mgmt-l2fib-switching-type-atom-atom"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_vfi_atom {6, "mgmt-l2fib-switching-type-vfi-atom"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_vfi_l2tp {7, "mgmt-l2fib-switching-type-vfi-l2tp"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_l2tp_atom {8, "mgmt-l2fib-switching-type-l2tp-atom"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_l2tp_l2tp {9, "mgmt-l2fib-switching-type-l2tp-l2tp"};
const Enum::YLeaf MgmtL2fibSwitching::mgmt_l2fib_switching_type_max {10, "mgmt-l2fib-switching-type-max"};

const Enum::YLeaf L2vpnBridge::l2vpn_bridge_type_default {0, "l2vpn-bridge-type-default"};
const Enum::YLeaf L2vpnBridge::l2vpn_bridge_type_pbb_edge {1, "l2vpn-bridge-type-pbb-edge"};
const Enum::YLeaf L2vpnBridge::l2vpn_bridge_type_pbb_core {2, "l2vpn-bridge-type-pbb-core"};

const Enum::YLeaf L2vpnTdmMode::unknown {0, "unknown"};
const Enum::YLeaf L2vpnTdmMode::ce_so_psn {1, "ce-so-psn"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_e1 {2, "sa-to-p-e1"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_t1 {3, "sa-to-p-t1"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_e3 {4, "sa-to-p-e3"};
const Enum::YLeaf L2vpnTdmMode::sa_to_p_t3 {5, "sa-to-p-t3"};

const Enum::YLeaf L2vpnPwFlowLabel::off {0, "off"};
const Enum::YLeaf L2vpnPwFlowLabel::receive {1, "receive"};
const Enum::YLeaf L2vpnPwFlowLabel::transmit {2, "transmit"};
const Enum::YLeaf L2vpnPwFlowLabel::both {3, "both"};

const Enum::YLeaf L2vpnBagMacAgingMode::aging_none {0, "aging-none"};
const Enum::YLeaf L2vpnBagMacAgingMode::aging_absolute {1, "aging-absolute"};
const Enum::YLeaf L2vpnBagMacAgingMode::aging_inactivity {2, "aging-inactivity"};

const Enum::YLeaf L2vpnVfiP2mpSignaling::none {0, "none"};
const Enum::YLeaf L2vpnVfiP2mpSignaling::bgp {1, "bgp"};

const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_off {0, "l2vpn-pw-sequence-off"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_xmit {1, "l2vpn-pw-sequence-xmit"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_recv {2, "l2vpn-pw-sequence-recv"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_trans {3, "l2vpn-pw-sequence-trans"};
const Enum::YLeaf L2vpnPwSequence::l2vpn_pw_sequence_both {4, "l2vpn-pw-sequence-both"};

const Enum::YLeaf L2fibLoadBal::flow_undef {0, "flow-undef"};
const Enum::YLeaf L2fibLoadBal::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf L2fibLoadBal::src_dst_ip {2, "src-dst-ip"};
const Enum::YLeaf L2fibLoadBal::vc {3, "vc"};

const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_none {0, "l2vpn-ad-rt-none"};
const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_as {1, "l2vpn-ad-rt-as"};
const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_4byte_as {2, "l2vpn-ad-rt-4byte-as"};
const Enum::YLeaf L2vpnAdRt::l2vpn_ad_rt_v4_addr {3, "l2vpn-ad-rt-v4-addr"};
const Enum::YLeaf L2vpnAdRt::es_import {1538, "es-import"};

const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_none {0, "l2vpn-ad-rd-none"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_auto {1, "l2vpn-ad-rd-auto"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_as {2, "l2vpn-ad-rd-as"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_4byte_as {3, "l2vpn-ad-rd-4byte-as"};
const Enum::YLeaf L2vpnAdRd::l2vpn_ad_rd_v4_addr {4, "l2vpn-ad-rd-v4-addr"};

const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_unresolved {0, "l2vpn-pw-state-unresolved"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_idle {1, "l2vpn-pw-state-idle"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_provisioned {2, "l2vpn-pw-state-provisioned"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_remote_standby {3, "l2vpn-pw-state-remote-standby"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_local_ready {4, "l2vpn-pw-state-local-ready"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_all_ready {5, "l2vpn-pw-state-all-ready"};
const Enum::YLeaf L2vpnPwState::l2vpn_pw_state_established {6, "l2vpn-pw-state-established"};

const Enum::YLeaf PreferredPathOption::te_tunnel {2, "te-tunnel"};
const Enum::YLeaf PreferredPathOption::ip_tunnel {3, "ip-tunnel"};
const Enum::YLeaf PreferredPathOption::tp_tunnel {4, "tp-tunnel"};
const Enum::YLeaf PreferredPathOption::sr_te_policy {5, "sr-te-policy"};
const Enum::YLeaf PreferredPathOption::mldp_tunnel {6, "mldp-tunnel"};
const Enum::YLeaf PreferredPathOption::mte_tunnel {7, "mte-tunnel"};


}
}

