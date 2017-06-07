
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_2.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_1.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2VpnForwarding::L2VpnForwarding()
    :
    nodes(std::make_shared<L2VpnForwarding::Nodes>())
{
    nodes->parent = this;

    yang_name = "l2vpn-forwarding"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper";
}

L2VpnForwarding::~L2VpnForwarding()
{
}

bool L2VpnForwarding::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool L2VpnForwarding::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string L2VpnForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<L2VpnForwarding::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void L2VpnForwarding::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> L2VpnForwarding::clone_ptr() const
{
    return std::make_shared<L2VpnForwarding>();
}

std::string L2VpnForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2VpnForwarding::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2VpnForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2VpnForwarding::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "l2vpn-forwarding";
}

L2VpnForwarding::Nodes::~Nodes()
{
}

bool L2VpnForwarding::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    l2fib_bridge_domain_names(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames>())
	,l2fib_bridge_domains(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains>())
	,l2fib_bridge_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts>())
	,l2fib_dhcp_binding_count(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount>())
	,l2fib_dhcp_binding_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails>())
	,l2fib_dhcp_binding_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries>())
	,l2fib_evpn_incl_m_cast_hardware_egresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses>())
	,l2fib_evpn_incl_m_cast_hardware_ingresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses>())
	,l2fib_evpn_incl_m_casts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts>())
	,l2fib_evpn_ip4macs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs>())
	,l2fib_evpn_ip6macs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs>())
	,l2fib_g8032(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032>())
	,l2fib_l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp>())
	,l2fib_main_interfaces(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces>())
	,l2fib_message_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary>())
	,l2fib_mmrp_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries>())
	,l2fib_mmrps(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps>())
	,l2fib_mon_sess_x_cons(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons>())
	,l2fib_mroute_ipv6s(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S>())
	,l2fib_mroute_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts>())
	,l2fib_mroute_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries>())
	,l2fib_mroutes(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes>())
	,l2fib_mstp_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails>())
	,l2fib_mstp_summaries(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries>())
	,l2fib_nve_peers(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibNvePeers>())
	,l2fib_p2mp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp>())
	,l2fib_pw_groups(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwGroups>())
	,l2fib_pwhe_main_ports(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts>())
	,l2fib_resource_availability(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability>())
	,l2fib_summary(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary>())
	,l2fibmac_details(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails>())
	,l2fibmac_hardware_egresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses>())
	,l2fibmac_hardware_ingresses(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses>())
	,l2fibx_con_l2tpv2s(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S>())
	,l2fibx_con_locals(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals>())
	,l2fibx_cons(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons>())
	,pbb_bmac_sa(std::make_shared<L2VpnForwarding::Nodes::Node::PbbBmacSa>())
{
    l2fib_bridge_domain_names->parent = this;

    l2fib_bridge_domains->parent = this;

    l2fib_bridge_ports->parent = this;

    l2fib_dhcp_binding_count->parent = this;

    l2fib_dhcp_binding_details->parent = this;

    l2fib_dhcp_binding_summaries->parent = this;

    l2fib_evpn_incl_m_cast_hardware_egresses->parent = this;

    l2fib_evpn_incl_m_cast_hardware_ingresses->parent = this;

    l2fib_evpn_incl_m_casts->parent = this;

    l2fib_evpn_ip4macs->parent = this;

    l2fib_evpn_ip6macs->parent = this;

    l2fib_g8032->parent = this;

    l2fib_l2tp->parent = this;

    l2fib_main_interfaces->parent = this;

    l2fib_message_summary->parent = this;

    l2fib_mmrp_summaries->parent = this;

    l2fib_mmrps->parent = this;

    l2fib_mon_sess_x_cons->parent = this;

    l2fib_mroute_ipv6s->parent = this;

    l2fib_mroute_ports->parent = this;

    l2fib_mroute_summaries->parent = this;

    l2fib_mroutes->parent = this;

    l2fib_mstp_details->parent = this;

    l2fib_mstp_summaries->parent = this;

    l2fib_nve_peers->parent = this;

    l2fib_p2mp->parent = this;

    l2fib_pw_groups->parent = this;

    l2fib_pwhe_main_ports->parent = this;

    l2fib_resource_availability->parent = this;

    l2fib_summary->parent = this;

    l2fibmac_details->parent = this;

    l2fibmac_hardware_egresses->parent = this;

    l2fibmac_hardware_ingresses->parent = this;

    l2fibx_con_l2tpv2s->parent = this;

    l2fibx_con_locals->parent = this;

    l2fibx_cons->parent = this;

    pbb_bmac_sa->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

L2VpnForwarding::Nodes::Node::~Node()
{
}

bool L2VpnForwarding::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (l2fib_bridge_domain_names !=  nullptr && l2fib_bridge_domain_names->has_data())
	|| (l2fib_bridge_domains !=  nullptr && l2fib_bridge_domains->has_data())
	|| (l2fib_bridge_ports !=  nullptr && l2fib_bridge_ports->has_data())
	|| (l2fib_dhcp_binding_count !=  nullptr && l2fib_dhcp_binding_count->has_data())
	|| (l2fib_dhcp_binding_details !=  nullptr && l2fib_dhcp_binding_details->has_data())
	|| (l2fib_dhcp_binding_summaries !=  nullptr && l2fib_dhcp_binding_summaries->has_data())
	|| (l2fib_evpn_incl_m_cast_hardware_egresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_egresses->has_data())
	|| (l2fib_evpn_incl_m_cast_hardware_ingresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_ingresses->has_data())
	|| (l2fib_evpn_incl_m_casts !=  nullptr && l2fib_evpn_incl_m_casts->has_data())
	|| (l2fib_evpn_ip4macs !=  nullptr && l2fib_evpn_ip4macs->has_data())
	|| (l2fib_evpn_ip6macs !=  nullptr && l2fib_evpn_ip6macs->has_data())
	|| (l2fib_g8032 !=  nullptr && l2fib_g8032->has_data())
	|| (l2fib_l2tp !=  nullptr && l2fib_l2tp->has_data())
	|| (l2fib_main_interfaces !=  nullptr && l2fib_main_interfaces->has_data())
	|| (l2fib_message_summary !=  nullptr && l2fib_message_summary->has_data())
	|| (l2fib_mmrp_summaries !=  nullptr && l2fib_mmrp_summaries->has_data())
	|| (l2fib_mmrps !=  nullptr && l2fib_mmrps->has_data())
	|| (l2fib_mon_sess_x_cons !=  nullptr && l2fib_mon_sess_x_cons->has_data())
	|| (l2fib_mroute_ipv6s !=  nullptr && l2fib_mroute_ipv6s->has_data())
	|| (l2fib_mroute_ports !=  nullptr && l2fib_mroute_ports->has_data())
	|| (l2fib_mroute_summaries !=  nullptr && l2fib_mroute_summaries->has_data())
	|| (l2fib_mroutes !=  nullptr && l2fib_mroutes->has_data())
	|| (l2fib_mstp_details !=  nullptr && l2fib_mstp_details->has_data())
	|| (l2fib_mstp_summaries !=  nullptr && l2fib_mstp_summaries->has_data())
	|| (l2fib_nve_peers !=  nullptr && l2fib_nve_peers->has_data())
	|| (l2fib_p2mp !=  nullptr && l2fib_p2mp->has_data())
	|| (l2fib_pw_groups !=  nullptr && l2fib_pw_groups->has_data())
	|| (l2fib_pwhe_main_ports !=  nullptr && l2fib_pwhe_main_ports->has_data())
	|| (l2fib_resource_availability !=  nullptr && l2fib_resource_availability->has_data())
	|| (l2fib_summary !=  nullptr && l2fib_summary->has_data())
	|| (l2fibmac_details !=  nullptr && l2fibmac_details->has_data())
	|| (l2fibmac_hardware_egresses !=  nullptr && l2fibmac_hardware_egresses->has_data())
	|| (l2fibmac_hardware_ingresses !=  nullptr && l2fibmac_hardware_ingresses->has_data())
	|| (l2fibx_con_l2tpv2s !=  nullptr && l2fibx_con_l2tpv2s->has_data())
	|| (l2fibx_con_locals !=  nullptr && l2fibx_con_locals->has_data())
	|| (l2fibx_cons !=  nullptr && l2fibx_cons->has_data())
	|| (pbb_bmac_sa !=  nullptr && pbb_bmac_sa->has_data());
}

bool L2VpnForwarding::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (l2fib_bridge_domain_names !=  nullptr && l2fib_bridge_domain_names->has_operation())
	|| (l2fib_bridge_domains !=  nullptr && l2fib_bridge_domains->has_operation())
	|| (l2fib_bridge_ports !=  nullptr && l2fib_bridge_ports->has_operation())
	|| (l2fib_dhcp_binding_count !=  nullptr && l2fib_dhcp_binding_count->has_operation())
	|| (l2fib_dhcp_binding_details !=  nullptr && l2fib_dhcp_binding_details->has_operation())
	|| (l2fib_dhcp_binding_summaries !=  nullptr && l2fib_dhcp_binding_summaries->has_operation())
	|| (l2fib_evpn_incl_m_cast_hardware_egresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_egresses->has_operation())
	|| (l2fib_evpn_incl_m_cast_hardware_ingresses !=  nullptr && l2fib_evpn_incl_m_cast_hardware_ingresses->has_operation())
	|| (l2fib_evpn_incl_m_casts !=  nullptr && l2fib_evpn_incl_m_casts->has_operation())
	|| (l2fib_evpn_ip4macs !=  nullptr && l2fib_evpn_ip4macs->has_operation())
	|| (l2fib_evpn_ip6macs !=  nullptr && l2fib_evpn_ip6macs->has_operation())
	|| (l2fib_g8032 !=  nullptr && l2fib_g8032->has_operation())
	|| (l2fib_l2tp !=  nullptr && l2fib_l2tp->has_operation())
	|| (l2fib_main_interfaces !=  nullptr && l2fib_main_interfaces->has_operation())
	|| (l2fib_message_summary !=  nullptr && l2fib_message_summary->has_operation())
	|| (l2fib_mmrp_summaries !=  nullptr && l2fib_mmrp_summaries->has_operation())
	|| (l2fib_mmrps !=  nullptr && l2fib_mmrps->has_operation())
	|| (l2fib_mon_sess_x_cons !=  nullptr && l2fib_mon_sess_x_cons->has_operation())
	|| (l2fib_mroute_ipv6s !=  nullptr && l2fib_mroute_ipv6s->has_operation())
	|| (l2fib_mroute_ports !=  nullptr && l2fib_mroute_ports->has_operation())
	|| (l2fib_mroute_summaries !=  nullptr && l2fib_mroute_summaries->has_operation())
	|| (l2fib_mroutes !=  nullptr && l2fib_mroutes->has_operation())
	|| (l2fib_mstp_details !=  nullptr && l2fib_mstp_details->has_operation())
	|| (l2fib_mstp_summaries !=  nullptr && l2fib_mstp_summaries->has_operation())
	|| (l2fib_nve_peers !=  nullptr && l2fib_nve_peers->has_operation())
	|| (l2fib_p2mp !=  nullptr && l2fib_p2mp->has_operation())
	|| (l2fib_pw_groups !=  nullptr && l2fib_pw_groups->has_operation())
	|| (l2fib_pwhe_main_ports !=  nullptr && l2fib_pwhe_main_ports->has_operation())
	|| (l2fib_resource_availability !=  nullptr && l2fib_resource_availability->has_operation())
	|| (l2fib_summary !=  nullptr && l2fib_summary->has_operation())
	|| (l2fibmac_details !=  nullptr && l2fibmac_details->has_operation())
	|| (l2fibmac_hardware_egresses !=  nullptr && l2fibmac_hardware_egresses->has_operation())
	|| (l2fibmac_hardware_ingresses !=  nullptr && l2fibmac_hardware_ingresses->has_operation())
	|| (l2fibx_con_l2tpv2s !=  nullptr && l2fibx_con_l2tpv2s->has_operation())
	|| (l2fibx_con_locals !=  nullptr && l2fibx_con_locals->has_operation())
	|| (l2fibx_cons !=  nullptr && l2fibx_cons->has_operation())
	|| (pbb_bmac_sa !=  nullptr && pbb_bmac_sa->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain-names")
    {
        if(l2fib_bridge_domain_names == nullptr)
        {
            l2fib_bridge_domain_names = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomainNames>();
        }
        return l2fib_bridge_domain_names;
    }

    if(child_yang_name == "l2fib-bridge-domains")
    {
        if(l2fib_bridge_domains == nullptr)
        {
            l2fib_bridge_domains = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains>();
        }
        return l2fib_bridge_domains;
    }

    if(child_yang_name == "l2fib-bridge-ports")
    {
        if(l2fib_bridge_ports == nullptr)
        {
            l2fib_bridge_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgePorts>();
        }
        return l2fib_bridge_ports;
    }

    if(child_yang_name == "l2fib-dhcp-binding-count")
    {
        if(l2fib_dhcp_binding_count == nullptr)
        {
            l2fib_dhcp_binding_count = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount>();
        }
        return l2fib_dhcp_binding_count;
    }

    if(child_yang_name == "l2fib-dhcp-binding-details")
    {
        if(l2fib_dhcp_binding_details == nullptr)
        {
            l2fib_dhcp_binding_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingDetails>();
        }
        return l2fib_dhcp_binding_details;
    }

    if(child_yang_name == "l2fib-dhcp-binding-summaries")
    {
        if(l2fib_dhcp_binding_summaries == nullptr)
        {
            l2fib_dhcp_binding_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibDhcpBindingSummaries>();
        }
        return l2fib_dhcp_binding_summaries;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-egresses")
    {
        if(l2fib_evpn_incl_m_cast_hardware_egresses == nullptr)
        {
            l2fib_evpn_incl_m_cast_hardware_egresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses>();
        }
        return l2fib_evpn_incl_m_cast_hardware_egresses;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-ingresses")
    {
        if(l2fib_evpn_incl_m_cast_hardware_ingresses == nullptr)
        {
            l2fib_evpn_incl_m_cast_hardware_ingresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareIngresses>();
        }
        return l2fib_evpn_incl_m_cast_hardware_ingresses;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-casts")
    {
        if(l2fib_evpn_incl_m_casts == nullptr)
        {
            l2fib_evpn_incl_m_casts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCasts>();
        }
        return l2fib_evpn_incl_m_casts;
    }

    if(child_yang_name == "l2fib-evpn-ip4macs")
    {
        if(l2fib_evpn_ip4macs == nullptr)
        {
            l2fib_evpn_ip4macs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs>();
        }
        return l2fib_evpn_ip4macs;
    }

    if(child_yang_name == "l2fib-evpn-ip6macs")
    {
        if(l2fib_evpn_ip6macs == nullptr)
        {
            l2fib_evpn_ip6macs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp6Macs>();
        }
        return l2fib_evpn_ip6macs;
    }

    if(child_yang_name == "l2fib-g8032")
    {
        if(l2fib_g8032 == nullptr)
        {
            l2fib_g8032 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibG8032>();
        }
        return l2fib_g8032;
    }

    if(child_yang_name == "l2fib-l2tp")
    {
        if(l2fib_l2tp == nullptr)
        {
            l2fib_l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibL2Tp>();
        }
        return l2fib_l2tp;
    }

    if(child_yang_name == "l2fib-main-interfaces")
    {
        if(l2fib_main_interfaces == nullptr)
        {
            l2fib_main_interfaces = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMainInterfaces>();
        }
        return l2fib_main_interfaces;
    }

    if(child_yang_name == "l2fib-message-summary")
    {
        if(l2fib_message_summary == nullptr)
        {
            l2fib_message_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary>();
        }
        return l2fib_message_summary;
    }

    if(child_yang_name == "l2fib-mmrp-summaries")
    {
        if(l2fib_mmrp_summaries == nullptr)
        {
            l2fib_mmrp_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrpSummaries>();
        }
        return l2fib_mmrp_summaries;
    }

    if(child_yang_name == "l2fib-mmrps")
    {
        if(l2fib_mmrps == nullptr)
        {
            l2fib_mmrps = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMmrps>();
        }
        return l2fib_mmrps;
    }

    if(child_yang_name == "l2fib-mon-sess-x-cons")
    {
        if(l2fib_mon_sess_x_cons == nullptr)
        {
            l2fib_mon_sess_x_cons = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMonSessXCons>();
        }
        return l2fib_mon_sess_x_cons;
    }

    if(child_yang_name == "l2fib-mroute-ipv6s")
    {
        if(l2fib_mroute_ipv6s == nullptr)
        {
            l2fib_mroute_ipv6s = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S>();
        }
        return l2fib_mroute_ipv6s;
    }

    if(child_yang_name == "l2fib-mroute-ports")
    {
        if(l2fib_mroute_ports == nullptr)
        {
            l2fib_mroute_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutePorts>();
        }
        return l2fib_mroute_ports;
    }

    if(child_yang_name == "l2fib-mroute-summaries")
    {
        if(l2fib_mroute_summaries == nullptr)
        {
            l2fib_mroute_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries>();
        }
        return l2fib_mroute_summaries;
    }

    if(child_yang_name == "l2fib-mroutes")
    {
        if(l2fib_mroutes == nullptr)
        {
            l2fib_mroutes = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes>();
        }
        return l2fib_mroutes;
    }

    if(child_yang_name == "l2fib-mstp-details")
    {
        if(l2fib_mstp_details == nullptr)
        {
            l2fib_mstp_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpDetails>();
        }
        return l2fib_mstp_details;
    }

    if(child_yang_name == "l2fib-mstp-summaries")
    {
        if(l2fib_mstp_summaries == nullptr)
        {
            l2fib_mstp_summaries = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMstpSummaries>();
        }
        return l2fib_mstp_summaries;
    }

    if(child_yang_name == "l2fib-nve-peers")
    {
        if(l2fib_nve_peers == nullptr)
        {
            l2fib_nve_peers = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibNvePeers>();
        }
        return l2fib_nve_peers;
    }

    if(child_yang_name == "l2fib-p2mp")
    {
        if(l2fib_p2mp == nullptr)
        {
            l2fib_p2mp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp>();
        }
        return l2fib_p2mp;
    }

    if(child_yang_name == "l2fib-pw-groups")
    {
        if(l2fib_pw_groups == nullptr)
        {
            l2fib_pw_groups = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwGroups>();
        }
        return l2fib_pw_groups;
    }

    if(child_yang_name == "l2fib-pwhe-main-ports")
    {
        if(l2fib_pwhe_main_ports == nullptr)
        {
            l2fib_pwhe_main_ports = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts>();
        }
        return l2fib_pwhe_main_ports;
    }

    if(child_yang_name == "l2fib-resource-availability")
    {
        if(l2fib_resource_availability == nullptr)
        {
            l2fib_resource_availability = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibResourceAvailability>();
        }
        return l2fib_resource_availability;
    }

    if(child_yang_name == "l2fib-summary")
    {
        if(l2fib_summary == nullptr)
        {
            l2fib_summary = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibSummary>();
        }
        return l2fib_summary;
    }

    if(child_yang_name == "l2fibmac-details")
    {
        if(l2fibmac_details == nullptr)
        {
            l2fibmac_details = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacDetails>();
        }
        return l2fibmac_details;
    }

    if(child_yang_name == "l2fibmac-hardware-egresses")
    {
        if(l2fibmac_hardware_egresses == nullptr)
        {
            l2fibmac_hardware_egresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses>();
        }
        return l2fibmac_hardware_egresses;
    }

    if(child_yang_name == "l2fibmac-hardware-ingresses")
    {
        if(l2fibmac_hardware_ingresses == nullptr)
        {
            l2fibmac_hardware_ingresses = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses>();
        }
        return l2fibmac_hardware_ingresses;
    }

    if(child_yang_name == "l2fibx-con-l2tpv2s")
    {
        if(l2fibx_con_l2tpv2s == nullptr)
        {
            l2fibx_con_l2tpv2s = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S>();
        }
        return l2fibx_con_l2tpv2s;
    }

    if(child_yang_name == "l2fibx-con-locals")
    {
        if(l2fibx_con_locals == nullptr)
        {
            l2fibx_con_locals = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals>();
        }
        return l2fibx_con_locals;
    }

    if(child_yang_name == "l2fibx-cons")
    {
        if(l2fibx_cons == nullptr)
        {
            l2fibx_cons = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxCons>();
        }
        return l2fibx_cons;
    }

    if(child_yang_name == "pbb-bmac-sa")
    {
        if(pbb_bmac_sa == nullptr)
        {
            pbb_bmac_sa = std::make_shared<L2VpnForwarding::Nodes::Node::PbbBmacSa>();
        }
        return pbb_bmac_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_bridge_domain_names != nullptr)
    {
        children["l2fib-bridge-domain-names"] = l2fib_bridge_domain_names;
    }

    if(l2fib_bridge_domains != nullptr)
    {
        children["l2fib-bridge-domains"] = l2fib_bridge_domains;
    }

    if(l2fib_bridge_ports != nullptr)
    {
        children["l2fib-bridge-ports"] = l2fib_bridge_ports;
    }

    if(l2fib_dhcp_binding_count != nullptr)
    {
        children["l2fib-dhcp-binding-count"] = l2fib_dhcp_binding_count;
    }

    if(l2fib_dhcp_binding_details != nullptr)
    {
        children["l2fib-dhcp-binding-details"] = l2fib_dhcp_binding_details;
    }

    if(l2fib_dhcp_binding_summaries != nullptr)
    {
        children["l2fib-dhcp-binding-summaries"] = l2fib_dhcp_binding_summaries;
    }

    if(l2fib_evpn_incl_m_cast_hardware_egresses != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-hardware-egresses"] = l2fib_evpn_incl_m_cast_hardware_egresses;
    }

    if(l2fib_evpn_incl_m_cast_hardware_ingresses != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-hardware-ingresses"] = l2fib_evpn_incl_m_cast_hardware_ingresses;
    }

    if(l2fib_evpn_incl_m_casts != nullptr)
    {
        children["l2fib-evpn-incl-m-casts"] = l2fib_evpn_incl_m_casts;
    }

    if(l2fib_evpn_ip4macs != nullptr)
    {
        children["l2fib-evpn-ip4macs"] = l2fib_evpn_ip4macs;
    }

    if(l2fib_evpn_ip6macs != nullptr)
    {
        children["l2fib-evpn-ip6macs"] = l2fib_evpn_ip6macs;
    }

    if(l2fib_g8032 != nullptr)
    {
        children["l2fib-g8032"] = l2fib_g8032;
    }

    if(l2fib_l2tp != nullptr)
    {
        children["l2fib-l2tp"] = l2fib_l2tp;
    }

    if(l2fib_main_interfaces != nullptr)
    {
        children["l2fib-main-interfaces"] = l2fib_main_interfaces;
    }

    if(l2fib_message_summary != nullptr)
    {
        children["l2fib-message-summary"] = l2fib_message_summary;
    }

    if(l2fib_mmrp_summaries != nullptr)
    {
        children["l2fib-mmrp-summaries"] = l2fib_mmrp_summaries;
    }

    if(l2fib_mmrps != nullptr)
    {
        children["l2fib-mmrps"] = l2fib_mmrps;
    }

    if(l2fib_mon_sess_x_cons != nullptr)
    {
        children["l2fib-mon-sess-x-cons"] = l2fib_mon_sess_x_cons;
    }

    if(l2fib_mroute_ipv6s != nullptr)
    {
        children["l2fib-mroute-ipv6s"] = l2fib_mroute_ipv6s;
    }

    if(l2fib_mroute_ports != nullptr)
    {
        children["l2fib-mroute-ports"] = l2fib_mroute_ports;
    }

    if(l2fib_mroute_summaries != nullptr)
    {
        children["l2fib-mroute-summaries"] = l2fib_mroute_summaries;
    }

    if(l2fib_mroutes != nullptr)
    {
        children["l2fib-mroutes"] = l2fib_mroutes;
    }

    if(l2fib_mstp_details != nullptr)
    {
        children["l2fib-mstp-details"] = l2fib_mstp_details;
    }

    if(l2fib_mstp_summaries != nullptr)
    {
        children["l2fib-mstp-summaries"] = l2fib_mstp_summaries;
    }

    if(l2fib_nve_peers != nullptr)
    {
        children["l2fib-nve-peers"] = l2fib_nve_peers;
    }

    if(l2fib_p2mp != nullptr)
    {
        children["l2fib-p2mp"] = l2fib_p2mp;
    }

    if(l2fib_pw_groups != nullptr)
    {
        children["l2fib-pw-groups"] = l2fib_pw_groups;
    }

    if(l2fib_pwhe_main_ports != nullptr)
    {
        children["l2fib-pwhe-main-ports"] = l2fib_pwhe_main_ports;
    }

    if(l2fib_resource_availability != nullptr)
    {
        children["l2fib-resource-availability"] = l2fib_resource_availability;
    }

    if(l2fib_summary != nullptr)
    {
        children["l2fib-summary"] = l2fib_summary;
    }

    if(l2fibmac_details != nullptr)
    {
        children["l2fibmac-details"] = l2fibmac_details;
    }

    if(l2fibmac_hardware_egresses != nullptr)
    {
        children["l2fibmac-hardware-egresses"] = l2fibmac_hardware_egresses;
    }

    if(l2fibmac_hardware_ingresses != nullptr)
    {
        children["l2fibmac-hardware-ingresses"] = l2fibmac_hardware_ingresses;
    }

    if(l2fibx_con_l2tpv2s != nullptr)
    {
        children["l2fibx-con-l2tpv2s"] = l2fibx_con_l2tpv2s;
    }

    if(l2fibx_con_locals != nullptr)
    {
        children["l2fibx-con-locals"] = l2fibx_con_locals;
    }

    if(l2fibx_cons != nullptr)
    {
        children["l2fibx-cons"] = l2fibx_cons;
    }

    if(pbb_bmac_sa != nullptr)
    {
        children["pbb-bmac-sa"] = pbb_bmac_sa;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocals()
{
    yang_name = "l2fibx-con-locals"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::~L2FibxConLocals()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::has_data() const
{
    for (std::size_t index=0; index<l2fibx_con_local.size(); index++)
    {
        if(l2fibx_con_local[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::has_operation() const
{
    for (std::size_t index=0; index<l2fibx_con_local.size(); index++)
    {
        if(l2fibx_con_local[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-locals";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibxConLocals' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibx-con-local")
    {
        for(auto const & c : l2fibx_con_local)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal>();
        c->parent = this;
        l2fibx_con_local.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fibx_con_local)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::L2FibxConLocal()
    :
    interface_name{YType::str, "interface-name"},
    bound{YType::boolean, "bound"},
    switching_type{YType::enumeration, "switching-type"},
    xcon_name{YType::str, "xcon-name"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base>())
	,segment1(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1>())
	,segment2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2>())
{
    base->parent = this;

    segment1->parent = this;

    segment2->parent = this;

    yang_name = "l2fibx-con-local"; yang_parent_name = "l2fibx-con-locals";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::~L2FibxConLocal()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::has_data() const
{
    return interface_name.is_set
	|| bound.is_set
	|| switching_type.is_set
	|| xcon_name.is_set
	|| (base !=  nullptr && base->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bound.operation)
	|| is_set(switching_type.operation)
	|| is_set(xcon_name.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibx-con-local" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibxConLocal' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (switching_type.is_set || is_set(switching_type.operation)) leaf_name_data.push_back(switching_type.get_name_leafdata());
    if (xcon_name.is_set || is_set(xcon_name.operation)) leaf_name_data.push_back(xcon_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base>();
        }
        return base;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2>();
        }
        return segment2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(segment1 != nullptr)
    {
        children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        children["segment2"] = segment2;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "switching-type")
    {
        switching_type = value;
    }
    if(value_path == "xcon-name")
    {
        xcon_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fibx-con-local";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Segment1()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn>())
	,monitor_session(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni>())
{
    ac->parent = this;

    evpn->parent = this;

    monitor_session->parent = this;

    pbb->parent = this;

    pw->parent = this;

    vni->parent = this;

    yang_name = "segment1"; yang_parent_name = "l2fibx-con-local";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::~Segment1()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (monitor_session !=  nullptr && monitor_session->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (monitor_session !=  nullptr && monitor_session->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment1";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment1' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "monitor-session")
    {
        if(monitor_session == nullptr)
        {
            monitor_session = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession>();
        }
        return monitor_session;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(monitor_session != nullptr)
    {
        children["monitor-session"] = monitor_session;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Ac()
    :
    actype{YType::uint8, "actype"},
    adjacency_address{YType::str, "adjacency-address"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    bound{YType::boolean, "bound"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    interface_handle{YType::str, "interface-handle"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    sub_interface_handle{YType::str, "sub-interface-handle"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop>())
{
    base->parent = this;

    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::has_data() const
{
    return actype.is_set
	|| adjacency_address.is_set
	|| adjacency_valid.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| bound.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| inter_working_mode.is_set
	|| interface_handle.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| sub_interface_handle.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(actype.operation)
	|| is_set(adjacency_address.operation)
	|| is_set(adjacency_valid.operation)
	|| is_set(attachment_circuit_id.operation)
	|| is_set(attachment_circuit_mtu.operation)
	|| is_set(bound.operation)
	|| is_set(evpn_internal_label.operation)
	|| is_set(fxc_next_hop_valid.operation)
	|| is_set(inter_working_mode.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ip_inter_working_mac.operation)
	|| is_set(redundancy_group_id.operation)
	|| is_set(redundancy_object_id.operation)
	|| is_set(sub_interface_handle.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.operation)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.operation)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.operation)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.operation)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.operation)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.operation)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.operation)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.operation)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.operation)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.operation)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.operation)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        children["fxc-next-hop"] = fxc_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actype")
    {
        actype = value;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::Base()
{
    yang_name = "base"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FxcNextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxc-next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Ac::FxcNextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Pbb()
    :
    bound{YType::boolean, "bound"},
    core_pbb_evpn_enabled{YType::boolean, "core-pbb-evpn-enabled"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base>())
	,pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion>())
{
    base->parent = this;

    pbb_union->parent = this;

    yang_name = "pbb"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::has_data() const
{
    return bound.is_set
	|| core_pbb_evpn_enabled.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data())
	|| (pbb_union !=  nullptr && pbb_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(core_pbb_evpn_enabled.operation)
	|| is_set(forward_class.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (pbb_union !=  nullptr && pbb_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbb' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (core_pbb_evpn_enabled.is_set || is_set(core_pbb_evpn_enabled.operation)) leaf_name_data.push_back(core_pbb_evpn_enabled.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base>();
        }
        return base;
    }

    if(child_yang_name == "pbb-union")
    {
        if(pbb_union == nullptr)
        {
            pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion>();
        }
        return pbb_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(pbb_union != nullptr)
    {
        children["pbb-union"] = pbb_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "core-pbb-evpn-enabled")
    {
        core_pbb_evpn_enabled = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pbb";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::PbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge>())
{
    core->parent = this;

    edge->parent = this;

    yang_name = "pbb-union"; yang_parent_name = "pbb";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::~PbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_type.operation)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-union";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.operation)) leaf_name_data.push_back(pbb_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core != nullptr)
    {
        children["core"] = core;
    }

    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::Edge()
    :
    mac{YType::str, "mac"},
    mac_configured{YType::boolean, "mac-configured"}
{
    yang_name = "edge"; yang_parent_name = "pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::has_data() const
{
    return mac.is_set
	|| mac_configured.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::has_operation() const
{
    return is_set(operation)
	|| is_set(mac.operation)
	|| is_set(mac_configured.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Edge' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (mac_configured.is_set || is_set(mac_configured.operation)) leaf_name_data.push_back(mac_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Edge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac = value;
    }
    if(value_path == "mac-configured")
    {
        mac_configured = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::Core()
    :
    vlan_id{YType::uint32, "vlan-id"}
{
    yang_name = "core"; yang_parent_name = "pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::has_data() const
{
    return vlan_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Core' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pbb::PbbUnion::Core::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Vni()
    :
    any_cast_ip{YType::str, "any-cast-ip"},
    anycast_mcast_ip{YType::str, "anycast-mcast-ip"},
    bound{YType::boolean, "bound"},
    encap{YType::uint32, "encap"},
    mcastip{YType::str, "mcastip"},
    parent_if{YType::str, "parent-if"},
    source_vtep_if{YType::str, "source-vtep-if"},
    srcip{YType::str, "srcip"},
    udp_port{YType::uint32, "udp-port"},
    vx_lan_mode{YType::uint32, "vx-lan-mode"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base>())
{
    base->parent = this;

    yang_name = "vni"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::has_data() const
{
    return any_cast_ip.is_set
	|| anycast_mcast_ip.is_set
	|| bound.is_set
	|| encap.is_set
	|| mcastip.is_set
	|| parent_if.is_set
	|| source_vtep_if.is_set
	|| srcip.is_set
	|| udp_port.is_set
	|| vx_lan_mode.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::has_operation() const
{
    return is_set(operation)
	|| is_set(any_cast_ip.operation)
	|| is_set(anycast_mcast_ip.operation)
	|| is_set(bound.operation)
	|| is_set(encap.operation)
	|| is_set(mcastip.operation)
	|| is_set(parent_if.operation)
	|| is_set(source_vtep_if.operation)
	|| is_set(srcip.operation)
	|| is_set(udp_port.operation)
	|| is_set(vx_lan_mode.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vni' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_cast_ip.is_set || is_set(any_cast_ip.operation)) leaf_name_data.push_back(any_cast_ip.get_name_leafdata());
    if (anycast_mcast_ip.is_set || is_set(anycast_mcast_ip.operation)) leaf_name_data.push_back(anycast_mcast_ip.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastip.is_set || is_set(mcastip.operation)) leaf_name_data.push_back(mcastip.get_name_leafdata());
    if (parent_if.is_set || is_set(parent_if.operation)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (source_vtep_if.is_set || is_set(source_vtep_if.operation)) leaf_name_data.push_back(source_vtep_if.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.operation)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vx_lan_mode.is_set || is_set(vx_lan_mode.operation)) leaf_name_data.push_back(vx_lan_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-cast-ip")
    {
        any_cast_ip = value;
    }
    if(value_path == "anycast-mcast-ip")
    {
        anycast_mcast_ip = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "mcastip")
    {
        mcastip = value;
    }
    if(value_path == "parent-if")
    {
        parent_if = value;
    }
    if(value_path == "source-vtep-if")
    {
        source_vtep_if = value;
    }
    if(value_path == "srcip")
    {
        srcip = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "vx-lan-mode")
    {
        vx_lan_mode = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::Base()
{
    yang_name = "base"; yang_parent_name = "vni";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Vni::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Evpn()
    :
    bound{YType::boolean, "bound"},
    evi{YType::uint32, "evi"},
    forward_class{YType::uint8, "forward-class"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base>())
{
    base->parent = this;

    yang_name = "evpn"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::has_data() const
{
    return bound.is_set
	|| evi.is_set
	|| forward_class.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(evi.operation)
	|| is_set(forward_class.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evpn' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::Base()
{
    yang_name = "base"; yang_parent_name = "evpn";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Evpn::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::MonitorSession()
    :
    bound{YType::boolean, "bound"},
    hardware_information{YType::str, "hardware-information"},
    session_name{YType::str, "session-name"},
    xcid{YType::uint32, "xcid"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base>())
{
    base->parent = this;

    yang_name = "monitor-session"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::~MonitorSession()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::has_data() const
{
    return bound.is_set
	|| hardware_information.is_set
	|| session_name.is_set
	|| xcid.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(bound.operation)
	|| is_set(hardware_information.operation)
	|| is_set(session_name.operation)
	|| is_set(xcid.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorSession' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::Base()
{
    yang_name = "base"; yang_parent_name = "monitor-session";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::MonitorSession::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Pw()
    :
    ac_id{YType::uint32, "ac-id"},
    active{YType::boolean, "active"},
    backup_configured{YType::boolean, "backup-configured"},
    bound{YType::boolean, "bound"},
    context{YType::uint16, "context"},
    forward_class{YType::uint8, "forward-class"},
    global_id{YType::uint32, "global-id"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;

    base->parent = this;

    next_hop->parent = this;

    pseudo_wire_union->parent = this;

    yang_name = "pw"; yang_parent_name = "segment1";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::has_data() const
{
    return ac_id.is_set
	|| active.is_set
	|| backup_configured.is_set
	|| bound.is_set
	|| context.is_set
	|| forward_class.is_set
	|| global_id.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_flow_label_tx.is_set
	|| pw_id.is_set
	|| pw_load_balance_type.is_set
	|| redundancy_role.is_set
	|| sequence_resync_threshold.is_set
	|| signal_capability_flags.is_set
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(active.operation)
	|| is_set(backup_configured.operation)
	|| is_set(bound.operation)
	|| is_set(context.operation)
	|| is_set(forward_class.operation)
	|| is_set(global_id.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(pw_id.operation)
	|| is_set(pw_load_balance_type.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(sequence_resync_threshold.operation)
	|| is_set(signal_capability_flags.operation)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.operation)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.operation)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.operation)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.operation)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        children["pseudo-wire-union"] = pseudo_wire_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;

    l2tp_ipv6_ts->parent = this;

    l2tpv2->parent = this;

    mpls->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWireUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
    :
    next_hop_address{YType::str, "next-hop-address"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    pw_flags{YType::uint8, "pw-flags"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    source_address{YType::str, "source-address"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_data() const
{
    return next_hop_address.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| pw_flags.is_set
	|| rem_udp_port.is_set
	|| source_address.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| xconnect_id.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(protocol.operation)
	|| is_set(pw_flags.operation)
	|| is_set(rem_udp_port.operation)
	|| is_set(source_address.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| is_set(xconnect_id.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.operation)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.operation)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "local"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
{
    return local_address.is_set
	|| path_mtu.is_set
	|| remote_address.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(remote_address.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpIpv6Ts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(secondary_cookie_high_value.operation)
	|| is_set(secondary_cookie_low_value.operation)
	|| is_set(secondary_cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.operation)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.operation)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.operation)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    active{YType::boolean, "active"},
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    bound{YType::boolean, "bound"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    redundancy_role{YType::enumeration, "redundancy-role"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::has_data() const
{
    return active.is_set
	|| backup_next_hop.is_set
	|| backup_pseudo_wire_id.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| bound.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| pw_flow_label_tx.is_set
	|| redundancy_role.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(backup_next_hop.operation)
	|| is_set(backup_pseudo_wire_id.operation)
	|| is_set(backup_pseudo_wire_id_type.operation)
	|| is_set(bound.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(redundancy_role.operation)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.operation)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.operation)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.operation)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment1::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Segment2()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac>())
	,bp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp>())
	,fxs(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw>())
{
    ac->parent = this;

    bp->parent = this;

    fxs->parent = this;

    pw->parent = this;

    yang_name = "segment2"; yang_parent_name = "l2fibx-con-local";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::~Segment2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (fxs !=  nullptr && fxs->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (fxs !=  nullptr && fxs->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment2";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "fxs")
    {
        if(fxs == nullptr)
        {
            fxs = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs>();
        }
        return fxs;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(bp != nullptr)
    {
        children["bp"] = bp;
    }

    if(fxs != nullptr)
    {
        children["fxs"] = fxs;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Ac()
    :
    actype{YType::uint8, "actype"},
    adjacency_address{YType::str, "adjacency-address"},
    adjacency_valid{YType::boolean, "adjacency-valid"},
    attachment_circuit_id{YType::uint32, "attachment-circuit-id"},
    attachment_circuit_mtu{YType::uint16, "attachment-circuit-mtu"},
    bound{YType::boolean, "bound"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"},
    fxc_next_hop_valid{YType::boolean, "fxc-next-hop-valid"},
    inter_working_mode{YType::uint8, "inter-working-mode"},
    interface_handle{YType::str, "interface-handle"},
    ip_inter_working_mac{YType::str, "ip-inter-working-mac"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    sub_interface_handle{YType::str, "sub-interface-handle"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base>())
	,fxc_next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop>())
{
    base->parent = this;

    fxc_next_hop->parent = this;

    yang_name = "ac"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::has_data() const
{
    return actype.is_set
	|| adjacency_address.is_set
	|| adjacency_valid.is_set
	|| attachment_circuit_id.is_set
	|| attachment_circuit_mtu.is_set
	|| bound.is_set
	|| evpn_internal_label.is_set
	|| fxc_next_hop_valid.is_set
	|| inter_working_mode.is_set
	|| interface_handle.is_set
	|| ip_inter_working_mac.is_set
	|| redundancy_group_id.is_set
	|| redundancy_object_id.is_set
	|| sub_interface_handle.is_set
	|| (base !=  nullptr && base->has_data())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(actype.operation)
	|| is_set(adjacency_address.operation)
	|| is_set(adjacency_valid.operation)
	|| is_set(attachment_circuit_id.operation)
	|| is_set(attachment_circuit_mtu.operation)
	|| is_set(bound.operation)
	|| is_set(evpn_internal_label.operation)
	|| is_set(fxc_next_hop_valid.operation)
	|| is_set(inter_working_mode.operation)
	|| is_set(interface_handle.operation)
	|| is_set(ip_inter_working_mac.operation)
	|| is_set(redundancy_group_id.operation)
	|| is_set(redundancy_object_id.operation)
	|| is_set(sub_interface_handle.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (fxc_next_hop !=  nullptr && fxc_next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actype.is_set || is_set(actype.operation)) leaf_name_data.push_back(actype.get_name_leafdata());
    if (adjacency_address.is_set || is_set(adjacency_address.operation)) leaf_name_data.push_back(adjacency_address.get_name_leafdata());
    if (adjacency_valid.is_set || is_set(adjacency_valid.operation)) leaf_name_data.push_back(adjacency_valid.get_name_leafdata());
    if (attachment_circuit_id.is_set || is_set(attachment_circuit_id.operation)) leaf_name_data.push_back(attachment_circuit_id.get_name_leafdata());
    if (attachment_circuit_mtu.is_set || is_set(attachment_circuit_mtu.operation)) leaf_name_data.push_back(attachment_circuit_mtu.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.operation)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());
    if (fxc_next_hop_valid.is_set || is_set(fxc_next_hop_valid.operation)) leaf_name_data.push_back(fxc_next_hop_valid.get_name_leafdata());
    if (inter_working_mode.is_set || is_set(inter_working_mode.operation)) leaf_name_data.push_back(inter_working_mode.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (ip_inter_working_mac.is_set || is_set(ip_inter_working_mac.operation)) leaf_name_data.push_back(ip_inter_working_mac.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.operation)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (sub_interface_handle.is_set || is_set(sub_interface_handle.operation)) leaf_name_data.push_back(sub_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base>();
        }
        return base;
    }

    if(child_yang_name == "fxc-next-hop")
    {
        if(fxc_next_hop == nullptr)
        {
            fxc_next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop>();
        }
        return fxc_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(fxc_next_hop != nullptr)
    {
        children["fxc-next-hop"] = fxc_next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actype")
    {
        actype = value;
    }
    if(value_path == "adjacency-address")
    {
        adjacency_address = value;
    }
    if(value_path == "adjacency-valid")
    {
        adjacency_valid = value;
    }
    if(value_path == "attachment-circuit-id")
    {
        attachment_circuit_id = value;
    }
    if(value_path == "attachment-circuit-mtu")
    {
        attachment_circuit_mtu = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
    }
    if(value_path == "fxc-next-hop-valid")
    {
        fxc_next_hop_valid = value;
    }
    if(value_path == "inter-working-mode")
    {
        inter_working_mode = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "ip-inter-working-mac")
    {
        ip_inter_working_mac = value;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
    if(value_path == "sub-interface-handle")
    {
        sub_interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::Base()
{
    yang_name = "base"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::FxcNextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base>())
{
    base->parent = this;

    yang_name = "fxc-next-hop"; yang_parent_name = "ac";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::~FxcNextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxc-next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FxcNextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxc-next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Ac::FxcNextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Bp()
    :
    bridge_id{YType::uint32, "bridge-id"},
    learn_key{YType::uint8, "learn-key"},
    msti_pointer{YType::uint32, "msti-pointer"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"},
    segment_type{YType::uint8, "segment-type"},
    shg_id{YType::uint32, "shg-id"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base>())
	,oper(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper>())
	,p2mp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp>())
{
    base->parent = this;

    oper->parent = this;

    p2mp->parent = this;

    yang_name = "bp"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::~Bp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::has_data() const
{
    return bridge_id.is_set
	|| learn_key.is_set
	|| msti_pointer.is_set
	|| mvrp_sequence_number.is_set
	|| segment_type.is_set
	|| shg_id.is_set
	|| (base !=  nullptr && base->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_id.operation)
	|| is_set(learn_key.operation)
	|| is_set(msti_pointer.operation)
	|| is_set(mvrp_sequence_number.operation)
	|| is_set(segment_type.operation)
	|| is_set(shg_id.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.operation)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (msti_pointer.is_set || is_set(msti_pointer.operation)) leaf_name_data.push_back(msti_pointer.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.operation)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.operation)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (shg_id.is_set || is_set(shg_id.operation)) leaf_name_data.push_back(shg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base>();
        }
        return base;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp == nullptr)
        {
            p2mp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp>();
        }
        return p2mp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    if(p2mp != nullptr)
    {
        children["p2mp"] = p2mp;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
    }
    if(value_path == "msti-pointer")
    {
        msti_pointer = value;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
    }
    if(value_path == "shg-id")
    {
        shg_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::Base()
{
    yang_name = "base"; yang_parent_name = "bp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::Oper()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "bp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::~Oper()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oper' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    host_routing_enabled{YType::boolean, "host-routing-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{
    yang_name = "operational-information"; yang_parent_name = "oper";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| host_routing_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(bvi_configured.operation)
	|| is_set(dhcp_enabled.operation)
	|| is_set(dhcp_trusted.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(host_routing_enabled.operation)
	|| is_set(igmp_flood_forward_enabled.operation)
	|| is_set(igmp_mroute_port_enabled.operation)
	|| is_set(igmp_route_guard_enabled.operation)
	|| is_set(igmp_snoop_enabled.operation)
	|| is_set(igmp_snoop_profile_enabled.operation)
	|| is_set(is_bvi_up.operation)
	|| is_set(is_dai_addr_validation_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validation_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validation_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_evpn_cw_disable.operation)
	|| is_set(is_evpn_enabled.operation)
	|| is_set(is_evpn_flow_label.operation)
	|| is_set(is_igmp_snoop_enabled.operation)
	|| is_set(is_ipsg_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(is_p2mp_pw_enabled.operation)
	|| is_set(is_pbbevpn_enabled.operation)
	|| is_set(is_swmac_learning.operation)
	|| is_set(is_vni_enabled.operation)
	|| is_set(is_vpls_flood_optimization_enabled.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_aging_type.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification_type.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_flood_forward_enabled.operation)
	|| is_set(mld_mroute_port_enabled.operation)
	|| is_set(mld_route_guard_enabled.operation)
	|| is_set(mld_snoop_enabled.operation)
	|| is_set(mld_snoop_profile_enabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_macs.operation)
	|| is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)
	|| is_set(storm_control_broadcast_enabled.operation)
	|| is_set(storm_control_broadcast_rate_unit.operation)
	|| is_set(storm_control_multicast_enabled.operation)
	|| is_set(storm_control_multicast_rate_unit.operation)
	|| is_set(storm_control_unicast_enabled.operation)
	|| is_set(storm_control_unicast_rate_unit.operation)
	|| is_set(stp_participating.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.operation)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.operation)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.operation)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (host_routing_enabled.is_set || is_set(host_routing_enabled.operation)) leaf_name_data.push_back(host_routing_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.operation)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.operation)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.operation)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.operation)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.operation)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.operation)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.operation)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.operation)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.operation)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.operation)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.operation)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.operation)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.operation)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.operation)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.operation)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.operation)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.operation)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.operation)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.operation)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.operation)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.operation)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.operation)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.operation)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.operation)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.operation)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.operation)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.operation)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.operation)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.operation)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "host-routing-enabled")
    {
        host_routing_enabled = value;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;

    igmp->parent = this;

    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(operation)
	|| is_set(feature_type.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Feature' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.operation)) leaf_name_data.push_back(feature_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mld' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::P2Mp()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsm_id{YType::uint32, "lsm-id"},
    p2mp_id{YType::uint16, "p2mp-id"},
    ptree_owner_lmrib{YType::boolean, "ptree-owner-lmrib"},
    ptree_type{YType::enumeration, "ptree-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "p2mp"; yang_parent_name = "bp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::~P2Mp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::has_data() const
{
    return extended_tunnel_id.is_set
	|| lsm_id.is_set
	|| p2mp_id.is_set
	|| ptree_owner_lmrib.is_set
	|| ptree_type.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsm_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(ptree_owner_lmrib.operation)
	|| is_set(ptree_type.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2Mp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.operation)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (ptree_owner_lmrib.is_set || is_set(ptree_owner_lmrib.operation)) leaf_name_data.push_back(ptree_owner_lmrib.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.operation)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Bp::P2Mp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "ptree-owner-lmrib")
    {
        ptree_owner_lmrib = value;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Fxs()
    :
    fxs_id{YType::uint32, "fxs-id"},
    segment_type{YType::uint8, "segment-type"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base>())
{
    base->parent = this;

    yang_name = "fxs"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::~Fxs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::has_data() const
{
    return fxs_id.is_set
	|| segment_type.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::has_operation() const
{
    return is_set(operation)
	|| is_set(fxs_id.operation)
	|| is_set(segment_type.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fxs";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fxs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxs_id.is_set || is_set(fxs_id.operation)) leaf_name_data.push_back(fxs_id.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.operation)) leaf_name_data.push_back(segment_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fxs-id")
    {
        fxs_id = value;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::Base()
{
    yang_name = "base"; yang_parent_name = "fxs";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Fxs::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Pw()
    :
    ac_id{YType::uint32, "ac-id"},
    active{YType::boolean, "active"},
    backup_configured{YType::boolean, "backup-configured"},
    bound{YType::boolean, "bound"},
    context{YType::uint16, "context"},
    forward_class{YType::uint8, "forward-class"},
    global_id{YType::uint32, "global-id"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    pw_id{YType::uint64, "pw-id"},
    pw_load_balance_type{YType::enumeration, "pw-load-balance-type"},
    redundancy_role{YType::enumeration, "redundancy-role"},
    sequence_resync_threshold{YType::uint16, "sequence-resync-threshold"},
    signal_capability_flags{YType::uint32, "signal-capability-flags"}
    	,
    backup_pseudo_wire(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire>())
	,base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop>())
	,pseudo_wire_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion>())
{
    backup_pseudo_wire->parent = this;

    base->parent = this;

    next_hop->parent = this;

    pseudo_wire_union->parent = this;

    yang_name = "pw"; yang_parent_name = "segment2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::has_data() const
{
    return ac_id.is_set
	|| active.is_set
	|| backup_configured.is_set
	|| bound.is_set
	|| context.is_set
	|| forward_class.is_set
	|| global_id.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_flow_label_tx.is_set
	|| pw_id.is_set
	|| pw_load_balance_type.is_set
	|| redundancy_role.is_set
	|| sequence_resync_threshold.is_set
	|| signal_capability_flags.is_set
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_data())
	|| (base !=  nullptr && base->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(active.operation)
	|| is_set(backup_configured.operation)
	|| is_set(bound.operation)
	|| is_set(context.operation)
	|| is_set(forward_class.operation)
	|| is_set(global_id.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(pw_id.operation)
	|| is_set(pw_load_balance_type.operation)
	|| is_set(redundancy_role.operation)
	|| is_set(sequence_resync_threshold.operation)
	|| is_set(signal_capability_flags.operation)
	|| (backup_pseudo_wire !=  nullptr && backup_pseudo_wire->has_operation())
	|| (base !=  nullptr && base->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pseudo_wire_union !=  nullptr && pseudo_wire_union->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_configured.is_set || is_set(backup_configured.operation)) leaf_name_data.push_back(backup_configured.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (pw_load_balance_type.is_set || is_set(pw_load_balance_type.operation)) leaf_name_data.push_back(pw_load_balance_type.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (sequence_resync_threshold.is_set || is_set(sequence_resync_threshold.operation)) leaf_name_data.push_back(sequence_resync_threshold.get_name_leafdata());
    if (signal_capability_flags.is_set || is_set(signal_capability_flags.operation)) leaf_name_data.push_back(signal_capability_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudo-wire")
    {
        if(backup_pseudo_wire == nullptr)
        {
            backup_pseudo_wire = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire>();
        }
        return backup_pseudo_wire;
    }

    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base>();
        }
        return base;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pseudo-wire-union")
    {
        if(pseudo_wire_union == nullptr)
        {
            pseudo_wire_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion>();
        }
        return pseudo_wire_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudo_wire != nullptr)
    {
        children["backup-pseudo-wire"] = backup_pseudo_wire;
    }

    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(pseudo_wire_union != nullptr)
    {
        children["pseudo-wire-union"] = pseudo_wire_union;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-configured")
    {
        backup_configured = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "pw-load-balance-type")
    {
        pw_load_balance_type = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
    if(value_path == "sequence-resync-threshold")
    {
        sequence_resync_threshold = value;
    }
    if(value_path == "signal-capability-flags")
    {
        signal_capability_flags = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::Base()
{
    yang_name = "base"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::PseudoWireUnion()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    l2tp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp>())
	,l2tp_ipv6_ts(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>())
	,l2tpv2(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2>())
	,mpls(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls>())
{
    l2tp->parent = this;

    l2tp_ipv6_ts->parent = this;

    l2tpv2->parent = this;

    mpls->parent = this;

    yang_name = "pseudo-wire-union"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::~PseudoWireUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::has_data() const
{
    return data_type.is_set
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_data())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (l2tp_ipv6_ts !=  nullptr && l2tp_ipv6_ts->has_operation())
	|| (l2tpv2 !=  nullptr && l2tpv2->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire-union";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudoWireUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "l2tp-ipv6-ts")
    {
        if(l2tp_ipv6_ts == nullptr)
        {
            l2tp_ipv6_ts = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts>();
        }
        return l2tp_ipv6_ts;
    }

    if(child_yang_name == "l2tpv2")
    {
        if(l2tpv2 == nullptr)
        {
            l2tpv2 = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2>();
        }
        return l2tpv2;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp != nullptr)
    {
        children["l2tp"] = l2tp;
    }

    if(l2tp_ipv6_ts != nullptr)
    {
        children["l2tp-ipv6-ts"] = l2tp_ipv6_ts;
    }

    if(l2tpv2 != nullptr)
    {
        children["l2tpv2"] = l2tpv2;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::Mpls()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "mpls"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::~Mpls()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::L2Tp()
    :
    path_mtu{YType::uint16, "path-mtu"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tp"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::~L2Tp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::has_data() const
{
    return path_mtu.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tp::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::L2Tpv2()
    :
    next_hop_address{YType::str, "next-hop-address"},
    path_mtu{YType::uint16, "path-mtu"},
    protocol{YType::uint16, "protocol"},
    pw_flags{YType::uint8, "pw-flags"},
    rem_udp_port{YType::uint16, "rem-udp-port"},
    source_address{YType::str, "source-address"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tpv2"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::~L2Tpv2()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_data() const
{
    return next_hop_address.is_set
	|| path_mtu.is_set
	|| protocol.is_set
	|| pw_flags.is_set
	|| rem_udp_port.is_set
	|| source_address.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| xconnect_id.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(protocol.operation)
	|| is_set(pw_flags.operation)
	|| is_set(rem_udp_port.operation)
	|| is_set(source_address.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| is_set(xconnect_id.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv2";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv2' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_flags.is_set || is_set(pw_flags.operation)) leaf_name_data.push_back(pw_flags.get_name_leafdata());
    if (rem_udp_port.is_set || is_set(rem_udp_port.operation)) leaf_name_data.push_back(rem_udp_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pw-flags")
    {
        pw_flags = value;
    }
    if(value_path == "rem-udp-port")
    {
        rem_udp_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::Local()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "local"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::Remote()
    :
    session_id{YType::uint32, "session-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tpv2";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::L2TpIpv6Ts()
    :
    local_address{YType::str, "local-address"},
    path_mtu{YType::uint16, "path-mtu"},
    remote_address{YType::str, "remote-address"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    tos_val{YType::uint8, "tos-val"},
    ttl{YType::uint8, "ttl"}
    	,
    local(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>())
	,remote(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "l2tp-ipv6-ts"; yang_parent_name = "pseudo-wire-union";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::~L2TpIpv6Ts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_data() const
{
    return local_address.is_set
	|| path_mtu.is_set
	|| remote_address.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set
	|| tos_val.is_set
	|| ttl.is_set
	|| (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(path_mtu.operation)
	|| is_set(remote_address.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation)
	|| is_set(tos_val.operation)
	|| is_set(ttl.operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-ipv6-ts";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpIpv6Ts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (path_mtu.is_set || is_set(path_mtu.operation)) leaf_name_data.push_back(path_mtu.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (tos_val.is_set || is_set(tos_val.operation)) leaf_name_data.push_back(tos_val.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "path-mtu")
    {
        path_mtu = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
    if(value_path == "tos-val")
    {
        tos_val = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::Local()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    secondary_cookie_high_value{YType::uint32, "secondary-cookie-high-value"},
    secondary_cookie_low_value{YType::uint32, "secondary-cookie-low-value"},
    secondary_cookie_size{YType::uint8, "secondary-cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "local"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::~Local()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| secondary_cookie_high_value.is_set
	|| secondary_cookie_low_value.is_set
	|| secondary_cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(secondary_cookie_high_value.operation)
	|| is_set(secondary_cookie_low_value.operation)
	|| is_set(secondary_cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (secondary_cookie_high_value.is_set || is_set(secondary_cookie_high_value.operation)) leaf_name_data.push_back(secondary_cookie_high_value.get_name_leafdata());
    if (secondary_cookie_low_value.is_set || is_set(secondary_cookie_low_value.operation)) leaf_name_data.push_back(secondary_cookie_low_value.get_name_leafdata());
    if (secondary_cookie_size.is_set || is_set(secondary_cookie_size.operation)) leaf_name_data.push_back(secondary_cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "secondary-cookie-high-value")
    {
        secondary_cookie_high_value = value;
    }
    if(value_path == "secondary-cookie-low-value")
    {
        secondary_cookie_low_value = value;
    }
    if(value_path == "secondary-cookie-size")
    {
        secondary_cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::Remote()
    :
    cookie_high_value{YType::uint32, "cookie-high-value"},
    cookie_low_value{YType::uint32, "cookie-low-value"},
    cookie_size{YType::uint8, "cookie-size"},
    session_id{YType::uint32, "session-id"}
{
    yang_name = "remote"; yang_parent_name = "l2tp-ipv6-ts";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::~Remote()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_data() const
{
    return cookie_high_value.is_set
	|| cookie_low_value.is_set
	|| cookie_size.is_set
	|| session_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_high_value.operation)
	|| is_set(cookie_low_value.operation)
	|| is_set(cookie_size.operation)
	|| is_set(session_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_high_value.is_set || is_set(cookie_high_value.operation)) leaf_name_data.push_back(cookie_high_value.get_name_leafdata());
    if (cookie_low_value.is_set || is_set(cookie_low_value.operation)) leaf_name_data.push_back(cookie_low_value.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-high-value")
    {
        cookie_high_value = value;
    }
    if(value_path == "cookie-low-value")
    {
        cookie_low_value = value;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::BackupPseudoWire()
    :
    active{YType::boolean, "active"},
    backup_next_hop{YType::str, "backup-next-hop"},
    backup_pseudo_wire_id{YType::uint32, "backup-pseudo-wire-id"},
    backup_pseudo_wire_id_type{YType::enumeration, "backup-pseudo-wire-id-type"},
    bound{YType::boolean, "bound"},
    group_id{YType::uint32, "group-id"},
    group_state{YType::enumeration, "group-state"},
    grouping_supported{YType::boolean, "grouping-supported"},
    pw_flow_label_tx{YType::boolean, "pw-flow-label-tx"},
    redundancy_role{YType::enumeration, "redundancy-role"}
    	,
    atom(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom>())
{
    atom->parent = this;

    yang_name = "backup-pseudo-wire"; yang_parent_name = "pw";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::~BackupPseudoWire()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::has_data() const
{
    return active.is_set
	|| backup_next_hop.is_set
	|| backup_pseudo_wire_id.is_set
	|| backup_pseudo_wire_id_type.is_set
	|| bound.is_set
	|| group_id.is_set
	|| group_state.is_set
	|| grouping_supported.is_set
	|| pw_flow_label_tx.is_set
	|| redundancy_role.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(backup_next_hop.operation)
	|| is_set(backup_pseudo_wire_id.operation)
	|| is_set(backup_pseudo_wire_id_type.operation)
	|| is_set(bound.operation)
	|| is_set(group_id.operation)
	|| is_set(group_state.operation)
	|| is_set(grouping_supported.operation)
	|| is_set(pw_flow_label_tx.operation)
	|| is_set(redundancy_role.operation)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudo-wire";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudoWire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (backup_next_hop.is_set || is_set(backup_next_hop.operation)) leaf_name_data.push_back(backup_next_hop.get_name_leafdata());
    if (backup_pseudo_wire_id.is_set || is_set(backup_pseudo_wire_id.operation)) leaf_name_data.push_back(backup_pseudo_wire_id.get_name_leafdata());
    if (backup_pseudo_wire_id_type.is_set || is_set(backup_pseudo_wire_id_type.operation)) leaf_name_data.push_back(backup_pseudo_wire_id_type.get_name_leafdata());
    if (bound.is_set || is_set(bound.operation)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_state.is_set || is_set(group_state.operation)) leaf_name_data.push_back(group_state.get_name_leafdata());
    if (grouping_supported.is_set || is_set(grouping_supported.operation)) leaf_name_data.push_back(grouping_supported.get_name_leafdata());
    if (pw_flow_label_tx.is_set || is_set(pw_flow_label_tx.operation)) leaf_name_data.push_back(pw_flow_label_tx.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.operation)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "backup-next-hop")
    {
        backup_next_hop = value;
    }
    if(value_path == "backup-pseudo-wire-id")
    {
        backup_pseudo_wire_id = value;
    }
    if(value_path == "backup-pseudo-wire-id-type")
    {
        backup_pseudo_wire_id_type = value;
    }
    if(value_path == "bound")
    {
        bound = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "group-state")
    {
        group_state = value;
    }
    if(value_path == "grouping-supported")
    {
        grouping_supported = value;
    }
    if(value_path == "pw-flow-label-tx")
    {
        pw_flow_label_tx = value;
    }
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::Atom()
    :
    pw_label{YType::uint32, "pw-label"},
    pw_local_label{YType::uint32, "pw-local-label"},
    pw_tunnel_interface{YType::uint32, "pw-tunnel-interface"},
    pw_xcid{YType::uint32, "pw-xcid"}
{
    yang_name = "atom"; yang_parent_name = "backup-pseudo-wire";
}

L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::~Atom()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::has_data() const
{
    return pw_label.is_set
	|| pw_local_label.is_set
	|| pw_tunnel_interface.is_set
	|| pw_xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_label.operation)
	|| is_set(pw_local_label.operation)
	|| is_set(pw_tunnel_interface.operation)
	|| is_set(pw_xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_label.is_set || is_set(pw_label.operation)) leaf_name_data.push_back(pw_label.get_name_leafdata());
    if (pw_local_label.is_set || is_set(pw_local_label.operation)) leaf_name_data.push_back(pw_local_label.get_name_leafdata());
    if (pw_tunnel_interface.is_set || is_set(pw_tunnel_interface.operation)) leaf_name_data.push_back(pw_tunnel_interface.get_name_leafdata());
    if (pw_xcid.is_set || is_set(pw_xcid.operation)) leaf_name_data.push_back(pw_xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibxConLocals::L2FibxConLocal::Segment2::Pw::BackupPseudoWire::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-label")
    {
        pw_label = value;
    }
    if(value_path == "pw-local-label")
    {
        pw_local_label = value;
    }
    if(value_path == "pw-tunnel-interface")
    {
        pw_tunnel_interface = value;
    }
    if(value_path == "pw-xcid")
    {
        pw_xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummaries()
{
    yang_name = "l2fib-mroute-summaries"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::~L2FibMrouteSummaries()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute_summary.size(); index++)
    {
        if(l2fib_mroute_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_summary.size(); index++)
    {
        if(l2fib_mroute_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-summaries";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMrouteSummaries' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-summary")
    {
        for(auto const & c : l2fib_mroute_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary>();
        c->parent = this;
        l2fib_mroute_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mroute_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::L2FibMrouteSummary()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    multicast_update{YType::uint32, "multicast-update"},
    multicast_update_dropped{YType::uint32, "multicast-update-dropped"},
    number_mroute_all_delete_drop{YType::uint32, "number-mroute-all-delete-drop"},
    number_mroute_delete_drop{YType::uint32, "number-mroute-delete-drop"},
    number_mroute_deleted{YType::uint32, "number-mroute-deleted"},
    number_mroutes_deleted_all{YType::uint32, "number-mroutes-deleted-all"},
    number_of_mroute_add{YType::uint32, "number-of-mroute-add"},
    number_of_routes{YType::uint32, "number-of-routes"},
    number_of_routes_with_ole_offload{YType::uint32, "number-of-routes-with-ole-offload"},
    number_of_xid{YType::uint32, "number-of-xid"},
    number_xid_add{YType::uint32, "number-xid-add"},
    number_xid_deleted{YType::uint32, "number-xid-deleted"},
    stale_deleted{YType::uint32, "stale-deleted"},
    stale_xid_deleted{YType::uint32, "stale-xid-deleted"}
{
    yang_name = "l2fib-mroute-summary"; yang_parent_name = "l2fib-mroute-summaries";
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::~L2FibMrouteSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::has_data() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| multicast_update.is_set
	|| multicast_update_dropped.is_set
	|| number_mroute_all_delete_drop.is_set
	|| number_mroute_delete_drop.is_set
	|| number_mroute_deleted.is_set
	|| number_mroutes_deleted_all.is_set
	|| number_of_mroute_add.is_set
	|| number_of_routes.is_set
	|| number_of_routes_with_ole_offload.is_set
	|| number_of_xid.is_set
	|| number_xid_add.is_set
	|| number_xid_deleted.is_set
	|| stale_deleted.is_set
	|| stale_xid_deleted.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::has_operation() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bd_group_name.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_domain_id.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(multicast_update.operation)
	|| is_set(multicast_update_dropped.operation)
	|| is_set(number_mroute_all_delete_drop.operation)
	|| is_set(number_mroute_delete_drop.operation)
	|| is_set(number_mroute_deleted.operation)
	|| is_set(number_mroutes_deleted_all.operation)
	|| is_set(number_of_mroute_add.operation)
	|| is_set(number_of_routes.operation)
	|| is_set(number_of_routes_with_ole_offload.operation)
	|| is_set(number_of_xid.operation)
	|| is_set(number_xid_add.operation)
	|| is_set(number_xid_deleted.operation)
	|| is_set(stale_deleted.operation)
	|| is_set(stale_xid_deleted.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMrouteSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.operation)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.operation)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (multicast_update.is_set || is_set(multicast_update.operation)) leaf_name_data.push_back(multicast_update.get_name_leafdata());
    if (multicast_update_dropped.is_set || is_set(multicast_update_dropped.operation)) leaf_name_data.push_back(multicast_update_dropped.get_name_leafdata());
    if (number_mroute_all_delete_drop.is_set || is_set(number_mroute_all_delete_drop.operation)) leaf_name_data.push_back(number_mroute_all_delete_drop.get_name_leafdata());
    if (number_mroute_delete_drop.is_set || is_set(number_mroute_delete_drop.operation)) leaf_name_data.push_back(number_mroute_delete_drop.get_name_leafdata());
    if (number_mroute_deleted.is_set || is_set(number_mroute_deleted.operation)) leaf_name_data.push_back(number_mroute_deleted.get_name_leafdata());
    if (number_mroutes_deleted_all.is_set || is_set(number_mroutes_deleted_all.operation)) leaf_name_data.push_back(number_mroutes_deleted_all.get_name_leafdata());
    if (number_of_mroute_add.is_set || is_set(number_of_mroute_add.operation)) leaf_name_data.push_back(number_of_mroute_add.get_name_leafdata());
    if (number_of_routes.is_set || is_set(number_of_routes.operation)) leaf_name_data.push_back(number_of_routes.get_name_leafdata());
    if (number_of_routes_with_ole_offload.is_set || is_set(number_of_routes_with_ole_offload.operation)) leaf_name_data.push_back(number_of_routes_with_ole_offload.get_name_leafdata());
    if (number_of_xid.is_set || is_set(number_of_xid.operation)) leaf_name_data.push_back(number_of_xid.get_name_leafdata());
    if (number_xid_add.is_set || is_set(number_xid_add.operation)) leaf_name_data.push_back(number_xid_add.get_name_leafdata());
    if (number_xid_deleted.is_set || is_set(number_xid_deleted.operation)) leaf_name_data.push_back(number_xid_deleted.get_name_leafdata());
    if (stale_deleted.is_set || is_set(stale_deleted.operation)) leaf_name_data.push_back(stale_deleted.get_name_leafdata());
    if (stale_xid_deleted.is_set || is_set(stale_xid_deleted.operation)) leaf_name_data.push_back(stale_xid_deleted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message>();
        c->parent = this;
        message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "multicast-update")
    {
        multicast_update = value;
    }
    if(value_path == "multicast-update-dropped")
    {
        multicast_update_dropped = value;
    }
    if(value_path == "number-mroute-all-delete-drop")
    {
        number_mroute_all_delete_drop = value;
    }
    if(value_path == "number-mroute-delete-drop")
    {
        number_mroute_delete_drop = value;
    }
    if(value_path == "number-mroute-deleted")
    {
        number_mroute_deleted = value;
    }
    if(value_path == "number-mroutes-deleted-all")
    {
        number_mroutes_deleted_all = value;
    }
    if(value_path == "number-of-mroute-add")
    {
        number_of_mroute_add = value;
    }
    if(value_path == "number-of-routes")
    {
        number_of_routes = value;
    }
    if(value_path == "number-of-routes-with-ole-offload")
    {
        number_of_routes_with_ole_offload = value;
    }
    if(value_path == "number-of-xid")
    {
        number_of_xid = value;
    }
    if(value_path == "number-xid-add")
    {
        number_xid_add = value;
    }
    if(value_path == "number-xid-deleted")
    {
        number_xid_deleted = value;
    }
    if(value_path == "stale-deleted")
    {
        stale_deleted = value;
    }
    if(value_path == "stale-xid-deleted")
    {
        stale_xid_deleted = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::Message()
    :
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"},
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"}
{
    yang_name = "message"; yang_parent_name = "l2fib-mroute-summary";
}

L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::~Message()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::has_data() const
{
    return information1.is_set
	|| information2.is_set
	|| messgae_count.is_set
	|| time.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::has_operation() const
{
    return is_set(operation)
	|| is_set(information1.operation)
	|| is_set(information2.operation)
	|| is_set(messgae_count.operation)
	|| is_set(time.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Message' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information1.is_set || is_set(information1.operation)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.operation)) leaf_name_data.push_back(information2.get_name_leafdata());
    if (messgae_count.is_set || is_set(messgae_count.operation)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMrouteSummaries::L2FibMrouteSummary::Message::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "information1")
    {
        information1 = value;
    }
    if(value_path == "information2")
    {
        information2 = value;
    }
    if(value_path == "messgae-count")
    {
        messgae_count = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::L2FibMessageSummary()
    :
    event_history(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory>())
	,round_trip_delay(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay>())
{
    event_history->parent = this;

    round_trip_delay->parent = this;

    yang_name = "l2fib-message-summary"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::~L2FibMessageSummary()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::has_data() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return (event_history !=  nullptr && event_history->has_data())
	|| (round_trip_delay !=  nullptr && round_trip_delay->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::has_operation() const
{
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (event_history !=  nullptr && event_history->has_operation())
	|| (round_trip_delay !=  nullptr && round_trip_delay->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-message-summary";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMessageSummary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        if(event_history == nullptr)
        {
            event_history = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory>();
        }
        return event_history;
    }

    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message>();
        c->parent = this;
        message.push_back(c);
        return c;
    }

    if(child_yang_name == "round-trip-delay")
    {
        if(round_trip_delay == nullptr)
        {
            round_trip_delay = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay>();
        }
        return round_trip_delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_history != nullptr)
    {
        children["event-history"] = event_history;
    }

    for (auto const & c : message)
    {
        children[c->get_segment_path()] = c;
    }

    if(round_trip_delay != nullptr)
    {
        children["round-trip-delay"] = round_trip_delay;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventHistory()
    :
    event_neighbor_entry{YType::uint16, "event-neighbor-entry"},
    extra_information1{YType::uint32, "extra-information1"},
    extra_information2{YType::uint32, "extra-information2"}
{
    yang_name = "event-history"; yang_parent_name = "l2fib-message-summary";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::~EventHistory()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::has_data() const
{
    for (std::size_t index=0; index<event_entry.size(); index++)
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

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::has_operation() const
{
    for (std::size_t index=0; index<event_entry.size(); index++)
    {
        if(event_entry[index]->has_operation())
            return true;
    }
    for (auto const & leaf : extra_information1.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extra_information2.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(event_neighbor_entry.operation)
	|| is_set(extra_information1.operation)
	|| is_set(extra_information2.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventHistory' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_neighbor_entry.is_set || is_set(event_neighbor_entry.operation)) leaf_name_data.push_back(event_neighbor_entry.get_name_leafdata());

    auto extra_information1_name_datas = extra_information1.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extra_information1_name_datas.begin(), extra_information1_name_datas.end());
    auto extra_information2_name_datas = extra_information2.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extra_information2_name_datas.begin(), extra_information2_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-entry")
    {
        for(auto const & c : event_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry>();
        c->parent = this;
        event_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-neighbor-entry")
    {
        event_neighbor_entry = value;
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

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::EventEntry()
    :
    event_flags{YType::uint32, "event-flags"},
    event_many{YType::boolean, "event-many"},
    event_sticky{YType::boolean, "event-sticky"},
    event_time{YType::str, "event-time"},
    event_type{YType::uint8, "event-type"}
{
    yang_name = "event-entry"; yang_parent_name = "event-history";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::~EventEntry()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::has_data() const
{
    return event_flags.is_set
	|| event_many.is_set
	|| event_sticky.is_set
	|| event_time.is_set
	|| event_type.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(event_flags.operation)
	|| is_set(event_many.operation)
	|| is_set(event_sticky.operation)
	|| is_set(event_time.operation)
	|| is_set(event_type.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-entry";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventEntry' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_flags.is_set || is_set(event_flags.operation)) leaf_name_data.push_back(event_flags.get_name_leafdata());
    if (event_many.is_set || is_set(event_many.operation)) leaf_name_data.push_back(event_many.get_name_leafdata());
    if (event_sticky.is_set || is_set(event_sticky.operation)) leaf_name_data.push_back(event_sticky.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.operation)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::EventHistory::EventEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-flags")
    {
        event_flags = value;
    }
    if(value_path == "event-many")
    {
        event_many = value;
    }
    if(value_path == "event-sticky")
    {
        event_sticky = value;
    }
    if(value_path == "event-time")
    {
        event_time = value;
    }
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::RoundTripDelay()
    :
    rtd_max_obj_type{YType::uint32, "rtd-max-obj-type"}
    	,
    aging_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd>())
	,bdxc_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd>())
	,lock_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd>())
	,platform_init_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd>())
	,punt_rtd(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd>())
{
    aging_rtd->parent = this;

    bdxc_rtd->parent = this;

    lock_rtd->parent = this;

    platform_init_rtd->parent = this;

    punt_rtd->parent = this;

    yang_name = "round-trip-delay"; yang_parent_name = "l2fib-message-summary";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::~RoundTripDelay()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::has_data() const
{
    for (std::size_t index=0; index<bind.size(); index++)
    {
        if(bind[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<create.size(); index++)
    {
        if(create[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<delete_.size(); index++)
    {
        if(delete_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mac_flush.size(); index++)
    {
        if(mac_flush[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<modify.size(); index++)
    {
        if(modify[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pirtd.size(); index++)
    {
        if(pirtd[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unbind.size(); index++)
    {
        if(unbind[index]->has_data())
            return true;
    }
    return rtd_max_obj_type.is_set
	|| (aging_rtd !=  nullptr && aging_rtd->has_data())
	|| (bdxc_rtd !=  nullptr && bdxc_rtd->has_data())
	|| (lock_rtd !=  nullptr && lock_rtd->has_data())
	|| (platform_init_rtd !=  nullptr && platform_init_rtd->has_data())
	|| (punt_rtd !=  nullptr && punt_rtd->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::has_operation() const
{
    for (std::size_t index=0; index<bind.size(); index++)
    {
        if(bind[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<create.size(); index++)
    {
        if(create[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<delete_.size(); index++)
    {
        if(delete_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mac_flush.size(); index++)
    {
        if(mac_flush[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<modify.size(); index++)
    {
        if(modify[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pirtd.size(); index++)
    {
        if(pirtd[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unbind.size(); index++)
    {
        if(unbind[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rtd_max_obj_type.operation)
	|| (aging_rtd !=  nullptr && aging_rtd->has_operation())
	|| (bdxc_rtd !=  nullptr && bdxc_rtd->has_operation())
	|| (lock_rtd !=  nullptr && lock_rtd->has_operation())
	|| (platform_init_rtd !=  nullptr && platform_init_rtd->has_operation())
	|| (punt_rtd !=  nullptr && punt_rtd->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "round-trip-delay";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoundTripDelay' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtd_max_obj_type.is_set || is_set(rtd_max_obj_type.operation)) leaf_name_data.push_back(rtd_max_obj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging-rtd")
    {
        if(aging_rtd == nullptr)
        {
            aging_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd>();
        }
        return aging_rtd;
    }

    if(child_yang_name == "bdxc-rtd")
    {
        if(bdxc_rtd == nullptr)
        {
            bdxc_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd>();
        }
        return bdxc_rtd;
    }

    if(child_yang_name == "bind")
    {
        for(auto const & c : bind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind>();
        c->parent = this;
        bind.push_back(c);
        return c;
    }

    if(child_yang_name == "create")
    {
        for(auto const & c : create)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create>();
        c->parent = this;
        create.push_back(c);
        return c;
    }

    if(child_yang_name == "delete")
    {
        for(auto const & c : delete_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_>();
        c->parent = this;
        delete_.push_back(c);
        return c;
    }

    if(child_yang_name == "lock-rtd")
    {
        if(lock_rtd == nullptr)
        {
            lock_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd>();
        }
        return lock_rtd;
    }

    if(child_yang_name == "mac-flush")
    {
        for(auto const & c : mac_flush)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush>();
        c->parent = this;
        mac_flush.push_back(c);
        return c;
    }

    if(child_yang_name == "modify")
    {
        for(auto const & c : modify)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify>();
        c->parent = this;
        modify.push_back(c);
        return c;
    }

    if(child_yang_name == "pirtd")
    {
        for(auto const & c : pirtd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd>();
        c->parent = this;
        pirtd.push_back(c);
        return c;
    }

    if(child_yang_name == "platform-init-rtd")
    {
        if(platform_init_rtd == nullptr)
        {
            platform_init_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd>();
        }
        return platform_init_rtd;
    }

    if(child_yang_name == "punt-rtd")
    {
        if(punt_rtd == nullptr)
        {
            punt_rtd = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd>();
        }
        return punt_rtd;
    }

    if(child_yang_name == "unbind")
    {
        for(auto const & c : unbind)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind>();
        c->parent = this;
        unbind.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging_rtd != nullptr)
    {
        children["aging-rtd"] = aging_rtd;
    }

    if(bdxc_rtd != nullptr)
    {
        children["bdxc-rtd"] = bdxc_rtd;
    }

    for (auto const & c : bind)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : create)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : delete_)
    {
        children[c->get_segment_path()] = c;
    }

    if(lock_rtd != nullptr)
    {
        children["lock-rtd"] = lock_rtd;
    }

    for (auto const & c : mac_flush)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : modify)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pirtd)
    {
        children[c->get_segment_path()] = c;
    }

    if(platform_init_rtd != nullptr)
    {
        children["platform-init-rtd"] = platform_init_rtd;
    }

    if(punt_rtd != nullptr)
    {
        children["punt-rtd"] = punt_rtd;
    }

    for (auto const & c : unbind)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtd-max-obj-type")
    {
        rtd_max_obj_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::BdxcRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "bdxc-rtd"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::~BdxcRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdxc-rtd";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdxcRtd' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::BdxcRtd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::AgingRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "aging-rtd"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::~AgingRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-rtd";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AgingRtd' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::AgingRtd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::PuntRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "punt-rtd"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::~PuntRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt-rtd";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PuntRtd' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PuntRtd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::LockRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "lock-rtd"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::~LockRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lock-rtd";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LockRtd' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::LockRtd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::PlatformInitRtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "platform-init-rtd"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::~PlatformInitRtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-init-rtd";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PlatformInitRtd' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::PlatformInitRtd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::Create()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "create"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::~Create()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Create' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Create::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::Modify()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "modify"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::~Modify()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modify' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Modify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::Delete_()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "delete"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::~Delete_()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delete";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delete_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Delete_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::Bind()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "bind"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::~Bind()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bind' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Bind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::Unbind()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "unbind"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::~Unbind()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unbind";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unbind' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Unbind::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::MacFlush()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "mac-flush"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::~MacFlush()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-flush";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacFlush' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::MacFlush::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::Pirtd()
    :
    average_round_trip_delay{YType::uint64, "average-round-trip-delay"},
    maximum_round_trip_delay{YType::uint64, "maximum-round-trip-delay"},
    minimum_round_trip_delay{YType::uint64, "minimum-round-trip-delay"},
    number_pd_update{YType::uint32, "number-pd-update"},
    number_pd_update_zero{YType::uint32, "number-pd-update-zero"}
{
    yang_name = "pirtd"; yang_parent_name = "round-trip-delay";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::~Pirtd()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::has_data() const
{
    return average_round_trip_delay.is_set
	|| maximum_round_trip_delay.is_set
	|| minimum_round_trip_delay.is_set
	|| number_pd_update.is_set
	|| number_pd_update_zero.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::has_operation() const
{
    return is_set(operation)
	|| is_set(average_round_trip_delay.operation)
	|| is_set(maximum_round_trip_delay.operation)
	|| is_set(minimum_round_trip_delay.operation)
	|| is_set(number_pd_update.operation)
	|| is_set(number_pd_update_zero.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pirtd";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pirtd' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_round_trip_delay.is_set || is_set(average_round_trip_delay.operation)) leaf_name_data.push_back(average_round_trip_delay.get_name_leafdata());
    if (maximum_round_trip_delay.is_set || is_set(maximum_round_trip_delay.operation)) leaf_name_data.push_back(maximum_round_trip_delay.get_name_leafdata());
    if (minimum_round_trip_delay.is_set || is_set(minimum_round_trip_delay.operation)) leaf_name_data.push_back(minimum_round_trip_delay.get_name_leafdata());
    if (number_pd_update.is_set || is_set(number_pd_update.operation)) leaf_name_data.push_back(number_pd_update.get_name_leafdata());
    if (number_pd_update_zero.is_set || is_set(number_pd_update_zero.operation)) leaf_name_data.push_back(number_pd_update_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::RoundTripDelay::Pirtd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-round-trip-delay")
    {
        average_round_trip_delay = value;
    }
    if(value_path == "maximum-round-trip-delay")
    {
        maximum_round_trip_delay = value;
    }
    if(value_path == "minimum-round-trip-delay")
    {
        minimum_round_trip_delay = value;
    }
    if(value_path == "number-pd-update")
    {
        number_pd_update = value;
    }
    if(value_path == "number-pd-update-zero")
    {
        number_pd_update_zero = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::Message()
    :
    information1{YType::uint32, "information1"},
    information2{YType::uint32, "information2"},
    messgae_count{YType::uint32, "messgae-count"},
    time{YType::str, "time"}
{
    yang_name = "message"; yang_parent_name = "l2fib-message-summary";
}

L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::~Message()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::has_data() const
{
    return information1.is_set
	|| information2.is_set
	|| messgae_count.is_set
	|| time.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::has_operation() const
{
    return is_set(operation)
	|| is_set(information1.operation)
	|| is_set(information2.operation)
	|| is_set(messgae_count.operation)
	|| is_set(time.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Message' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information1.is_set || is_set(information1.operation)) leaf_name_data.push_back(information1.get_name_leafdata());
    if (information2.is_set || is_set(information2.operation)) leaf_name_data.push_back(information2.get_name_leafdata());
    if (messgae_count.is_set || is_set(messgae_count.operation)) leaf_name_data.push_back(messgae_count.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMessageSummary::Message::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "information1")
    {
        information1 = value;
    }
    if(value_path == "information2")
    {
        information2 = value;
    }
    if(value_path == "messgae-count")
    {
        messgae_count = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroutes()
{
    yang_name = "l2fib-mroutes"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::~L2FibMroutes()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::has_data() const
{
    for (std::size_t index=0; index<l2fib_mroute.size(); index++)
    {
        if(l2fib_mroute[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute.size(); index++)
    {
        if(l2fib_mroute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroutes";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMroutes' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute")
    {
        for(auto const & c : l2fib_mroute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute>();
        c->parent = this;
        l2fib_mroute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_mroute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::L2FibMroute()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    group{YType::str, "group"},
    hardware_information{YType::str, "hardware-information"},
    platform_data{YType::str, "platform-data"},
    platform_data_length{YType::uint8, "platform-data-length"},
    source{YType::str, "source"},
    xid_count{YType::uint16, "xid-count"}
    	,
    destination_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix>())
	,forward_stats(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats>())
	,irb_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo>())
	,multicast_base_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation>())
	,source_prefix(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix>())
{
    destination_prefix->parent = this;

    forward_stats->parent = this;

    irb_info->parent = this;

    multicast_base_information->parent = this;

    source_prefix->parent = this;

    yang_name = "l2fib-mroute"; yang_parent_name = "l2fib-mroutes";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::~L2FibMroute()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::has_data() const
{
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| group.is_set
	|| hardware_information.is_set
	|| platform_data.is_set
	|| platform_data_length.is_set
	|| source.is_set
	|| xid_count.is_set
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_group_name.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(group.operation)
	|| is_set(hardware_information.operation)
	|| is_set(platform_data.operation)
	|| is_set(platform_data_length.operation)
	|| is_set(source.operation)
	|| is_set(xid_count.operation)
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation())
	|| (multicast_base_information !=  nullptr && multicast_base_information->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibMroute' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.operation)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.operation)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.operation)) leaf_name_data.push_back(xid_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo>();
        }
        return irb_info;
    }

    if(child_yang_name == "multicast-base-information")
    {
        if(multicast_base_information == nullptr)
        {
            multicast_base_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation>();
        }
        return multicast_base_information;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix>();
        }
        return source_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        children["irb-info"] = irb_info;
    }

    if(multicast_base_information != nullptr)
    {
        children["multicast-base-information"] = multicast_base_information;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::MulticastBaseInformation()
{
    yang_name = "multicast-base-information"; yang_parent_name = "l2fib-mroute";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::~MulticastBaseInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-base-information";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastBaseInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::MulticastBaseInformation::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::SourcePrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{
    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::~SourcePrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proto.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourcePrefix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::SourcePrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::DestinationPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint16, "prefix-length"},
    proto{YType::uint8, "proto"}
{
    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::~DestinationPrefix()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| proto.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proto.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationPrefix' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proto.is_set || is_set(proto.operation)) leaf_name_data.push_back(proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::DestinationPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proto")
    {
        proto = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::~ForwardStats()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::has_data() const
{
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::has_operation() const
{
    return is_set(operation)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_stat != nullptr)
    {
        children["forward-stat"] = forward_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    mulicast(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::has_data() const
{
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mulicast != nullptr)
    {
        children["mulicast"] = mulicast;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    core_received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
	,drop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop>())
	,multicast_core_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
	,multicast_forward_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
	,punt(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt>())
	,received_stat(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
{
    core_received_stat->parent = this;

    drop->parent = this;

    multicast_core_forward_stat->parent = this;

    multicast_forward_stat->parent = this;

    punt->parent = this;

    received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    return (core_received_stat !=  nullptr && core_received_stat->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(operation)
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mulicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core_received_stat != nullptr)
    {
        children["core-received-stat"] = core_received_stat;
    }

    if(drop != nullptr)
    {
        children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(multicast_forward_stat != nullptr)
    {
        children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(received_stat != nullptr)
    {
        children["received-stat"] = received_stat;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "received-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "punt"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Punt' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "drop"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Drop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastCoreForwardStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{
    yang_name = "core-received-stat"; yang_parent_name = "mulicast";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(packets.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoreReceivedStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::IrbInfo()
    :
    irb_plat_data{YType::uint32, "irb-plat-data"},
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"}
{
    yang_name = "irb-info"; yang_parent_name = "l2fib-mroute";
}

L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::~IrbInfo()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::has_data() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return irb_plat_data_len.is_set
	|| mxid_ac_interface_handle.is_set
	|| mxid_next_hop_address.is_set
	|| mxid_pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::has_operation() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(irb_plat_data.operation)
	|| is_set(irb_plat_data_len.operation)
	|| is_set(mxid_ac_interface_handle.operation)
	|| is_set(mxid_next_hop_address.operation)
	|| is_set(mxid_pw_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IrbInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.operation)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());
    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.operation)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.operation)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.operation)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());

    auto irb_plat_data_name_datas = irb_plat_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), irb_plat_data_name_datas.begin(), irb_plat_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibMroutes::L2FibMroute::IrbInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.append(value);
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
    }
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
    }
}

L2VpnForwarding::Nodes::Node::PbbBmacSa::PbbBmacSa()
    :
    chassis_mac{YType::str, "chassis-mac"},
    configured{YType::boolean, "configured"},
    mac{YType::str, "mac"}
{
    yang_name = "pbb-bmac-sa"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::PbbBmacSa::~PbbBmacSa()
{
}

bool L2VpnForwarding::Nodes::Node::PbbBmacSa::has_data() const
{
    return chassis_mac.is_set
	|| configured.is_set
	|| mac.is_set;
}

bool L2VpnForwarding::Nodes::Node::PbbBmacSa::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_mac.operation)
	|| is_set(configured.operation)
	|| is_set(mac.operation);
}

std::string L2VpnForwarding::Nodes::Node::PbbBmacSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-bmac-sa";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::PbbBmacSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbBmacSa' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_mac.is_set || is_set(chassis_mac.operation)) leaf_name_data.push_back(chassis_mac.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (mac.is_set || is_set(mac.operation)) leaf_name_data.push_back(mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::PbbBmacSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::PbbBmacSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::PbbBmacSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-mac")
    {
        chassis_mac = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "mac")
    {
        mac = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::L2FibP2Mp()
    :
    ptrees(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees>())
{
    ptrees->parent = this;

    yang_name = "l2fib-p2mp"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::~L2FibP2Mp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::has_data() const
{
    return (ptrees !=  nullptr && ptrees->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::has_operation() const
{
    return is_set(operation)
	|| (ptrees !=  nullptr && ptrees->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-p2mp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibP2Mp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptrees")
    {
        if(ptrees == nullptr)
        {
            ptrees = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees>();
        }
        return ptrees;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibP2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ptrees != nullptr)
    {
        children["ptrees"] = ptrees;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptrees()
{
    yang_name = "ptrees"; yang_parent_name = "l2fib-p2mp";
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::~Ptrees()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::has_data() const
{
    for (std::size_t index=0; index<ptree.size(); index++)
    {
        if(ptree[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::has_operation() const
{
    for (std::size_t index=0; index<ptree.size(); index++)
    {
        if(ptree[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptrees";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ptrees' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptree")
    {
        for(auto const & c : ptree)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree>();
        c->parent = this;
        ptree.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ptree)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::Ptree()
    :
    extended_tunnel_id{YType::int32, "extended-tunnel-id"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    lsm_id{YType::int32, "lsm-id"},
    lsm_id_xr{YType::uint32, "lsm-id-xr"},
    p2mp_id{YType::int32, "p2mp-id"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    ptree_type{YType::enumeration, "ptree-type"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
{
    yang_name = "ptree"; yang_parent_name = "ptrees";
}

L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::~Ptree()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::has_data() const
{
    return extended_tunnel_id.is_set
	|| extended_tunnel_id_xr.is_set
	|| lsm_id.is_set
	|| lsm_id_xr.is_set
	|| p2mp_id.is_set
	|| p2mp_id_xr.is_set
	|| ptree_type.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(extended_tunnel_id_xr.operation)
	|| is_set(lsm_id.operation)
	|| is_set(lsm_id_xr.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(p2mp_id_xr.operation)
	|| is_set(ptree_type.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_xr.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ptree' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.operation)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (lsm_id.is_set || is_set(lsm_id.operation)) leaf_name_data.push_back(lsm_id.get_name_leafdata());
    if (lsm_id_xr.is_set || is_set(lsm_id_xr.operation)) leaf_name_data.push_back(lsm_id_xr.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.operation)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (ptree_type.is_set || is_set(ptree_type.operation)) leaf_name_data.push_back(ptree_type.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibP2Mp::Ptrees::Ptree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
    }
    if(value_path == "lsm-id")
    {
        lsm_id = value;
    }
    if(value_path == "lsm-id-xr")
    {
        lsm_id_xr = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
    }
    if(value_path == "ptree-type")
    {
        ptree_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgresses()
{
    yang_name = "l2fib-evpn-incl-m-cast-hardware-egresses"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::~L2FibEvpnInclMCastHardwareEgresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_egress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_egress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_hardware_egress.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_hardware_egress[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-egresses";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastHardwareEgresses' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-hardware-egress")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_hardware_egress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_hardware_egress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_hardware_egress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastHardwareEgress()
    :
    bd_name{YType::str, "bd-name"}
    	,
    l2fib_evpn_incl_m_cast_oles(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles>())
	,mcast_replication_list(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList>())
{
    l2fib_evpn_incl_m_cast_oles->parent = this;

    mcast_replication_list->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-hardware-egress"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egresses";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::~L2FibEvpnInclMCastHardwareEgress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::has_data() const
{
    return bd_name.is_set
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_name.operation)
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation())
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-hardware-egress" <<"[bd-name='" <<bd_name <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastHardwareEgress' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    if(mcast_replication_list != nullptr)
    {
        children["mcast-replication-list"] = mcast_replication_list;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::McastReplicationList()
    :
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    is_bound{YType::boolean, "is-bound"}
{
    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egress";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::~McastReplicationList()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::has_data() const
{
    return bridge_domain_id.is_set
	|| bridge_domain_name.is_set
	|| is_bound.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(is_bound.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastReplicationList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.operation)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.operation)) leaf_name_data.push_back(is_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::McastReplicationList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOles()
{
    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast-hardware-egress";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::~L2FibEvpnInclMCastOles()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.size(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastOles' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        for(auto const & c : l2fib_evpn_incl_m_cast_ole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle>();
        c->parent = this;
        l2fib_evpn_incl_m_cast_ole.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_incl_m_cast_ole)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::L2FibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;

    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::~L2FibEvpnInclMCastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_data() const
{
    return next_hop_address.is_set
	|| is_bound.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(is_bound.operation)
	|| is_set(next_hop_valid.operation)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnInclMCastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.operation)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{
    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(mcast_label.operation)
	|| is_set(next_hop_ipv6_addr.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.operation)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.operation)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnInclMCastHardwareEgresses::L2FibEvpnInclMCastHardwareEgress::L2FibEvpnInclMCastOles::L2FibEvpnInclMCastOle::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngresses()
{
    yang_name = "l2fibmac-hardware-ingresses"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::~L2FibmacHardwareIngresses()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::has_data() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_ingress.size(); index++)
    {
        if(l2fibmac_hardware_ingress[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::has_operation() const
{
    for (std::size_t index=0; index<l2fibmac_hardware_ingress.size(); index++)
    {
        if(l2fibmac_hardware_ingress[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-ingresses";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibmacHardwareIngresses' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fibmac-hardware-ingress")
    {
        for(auto const & c : l2fibmac_hardware_ingress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress>();
        c->parent = this;
        l2fibmac_hardware_ingress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fibmac_hardware_ingress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::L2FibmacHardwareIngress()
    :
    address{YType::str, "address"},
    bmac_configured{YType::boolean, "bmac-configured"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_id{YType::uint32, "bridge-id"},
    flag_extension{YType::uint16, "flag-extension"},
    group_name{YType::str, "group-name"},
    l3_encapsulationvlan_id{YType::uint16, "l3-encapsulationvlan-id"},
    name{YType::str, "name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    node_id{YType::str, "node-id"},
    pbb_bmac{YType::str, "pbb-bmac"},
    peer_vtep_ip{YType::str, "peer-vtep-ip"},
    platform_is_hw_learn{YType::uint8, "platform-is-hw-learn"},
    vni{YType::uint32, "vni"},
    vni_l3_flag{YType::boolean, "vni-l3-flag"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base>())
	,evpn_ctx(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx>())
	,next_hop(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop>())
	,segment(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment>())
{
    base->parent = this;

    evpn_ctx->parent = this;

    next_hop->parent = this;

    segment->parent = this;

    yang_name = "l2fibmac-hardware-ingress"; yang_parent_name = "l2fibmac-hardware-ingresses";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::~L2FibmacHardwareIngress()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::has_data() const
{
    return address.is_set
	|| bmac_configured.is_set
	|| bridge_domain_name.is_set
	|| bridge_id.is_set
	|| flag_extension.is_set
	|| group_name.is_set
	|| l3_encapsulationvlan_id.is_set
	|| name.is_set
	|| next_hop_valid.is_set
	|| node_id.is_set
	|| pbb_bmac.is_set
	|| peer_vtep_ip.is_set
	|| platform_is_hw_learn.is_set
	|| vni.is_set
	|| vni_l3_flag.is_set
	|| (base !=  nullptr && base->has_data())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (segment !=  nullptr && segment->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(bmac_configured.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(flag_extension.operation)
	|| is_set(group_name.operation)
	|| is_set(l3_encapsulationvlan_id.operation)
	|| is_set(name.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(node_id.operation)
	|| is_set(pbb_bmac.operation)
	|| is_set(peer_vtep_ip.operation)
	|| is_set(platform_is_hw_learn.operation)
	|| is_set(vni.operation)
	|| is_set(vni_l3_flag.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (evpn_ctx !=  nullptr && evpn_ctx->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (segment !=  nullptr && segment->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fibmac-hardware-ingress";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibmacHardwareIngress' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac_configured.is_set || is_set(bmac_configured.operation)) leaf_name_data.push_back(bmac_configured.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (flag_extension.is_set || is_set(flag_extension.operation)) leaf_name_data.push_back(flag_extension.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (l3_encapsulationvlan_id.is_set || is_set(l3_encapsulationvlan_id.operation)) leaf_name_data.push_back(l3_encapsulationvlan_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pbb_bmac.is_set || is_set(pbb_bmac.operation)) leaf_name_data.push_back(pbb_bmac.get_name_leafdata());
    if (peer_vtep_ip.is_set || is_set(peer_vtep_ip.operation)) leaf_name_data.push_back(peer_vtep_ip.get_name_leafdata());
    if (platform_is_hw_learn.is_set || is_set(platform_is_hw_learn.operation)) leaf_name_data.push_back(platform_is_hw_learn.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vni_l3_flag.is_set || is_set(vni_l3_flag.operation)) leaf_name_data.push_back(vni_l3_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base>();
        }
        return base;
    }

    if(child_yang_name == "evpn-ctx")
    {
        if(evpn_ctx == nullptr)
        {
            evpn_ctx = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx>();
        }
        return evpn_ctx;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(evpn_ctx != nullptr)
    {
        children["evpn-ctx"] = evpn_ctx;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bmac-configured")
    {
        bmac_configured = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "flag-extension")
    {
        flag_extension = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "l3-encapsulationvlan-id")
    {
        l3_encapsulationvlan_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "pbb-bmac")
    {
        pbb_bmac = value;
    }
    if(value_path == "peer-vtep-ip")
    {
        peer_vtep_ip = value;
    }
    if(value_path == "platform-is-hw-learn")
    {
        platform_is_hw_learn = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
    if(value_path == "vni-l3-flag")
    {
        vni_l3_flag = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fibmac-hardware-ingress";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Segment()
    :
    data_type{YType::enumeration, "data-type"}
    	,
    ac(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac>())
	,evpn(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn>())
	,pbb(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb>())
	,pw(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw>())
	,vni(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni>())
{
    ac->parent = this;

    evpn->parent = this;

    pbb->parent = this;

    pw->parent = this;

    vni->parent = this;

    yang_name = "segment"; yang_parent_name = "l2fibmac-hardware-ingress";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::~Segment()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::has_data() const
{
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (vni !=  nullptr && vni->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| (ac !=  nullptr && ac->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (vni !=  nullptr && vni->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Segment' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "vni")
    {
        if(vni == nullptr)
        {
            vni = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni>();
        }
        return vni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ac != nullptr)
    {
        children["ac"] = ac;
    }

    if(evpn != nullptr)
    {
        children["evpn"] = evpn;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw != nullptr)
    {
        children["pw"] = pw;
    }

    if(vni != nullptr)
    {
        children["vni"] = vni;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::Ac()
    :
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "ac"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::~Ac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::has_data() const
{
    return interface_handle.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Ac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::Pbb()
    :
    xcid{YType::uint32, "xcid"}
{
    yang_name = "pbb"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::~Pbb()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::has_operation() const
{
    return is_set(operation)
	|| is_set(xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbb' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::Vni()
    :
    parent_if{YType::str, "parent-if"},
    xcid{YType::uint32, "xcid"}
{
    yang_name = "vni"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::~Vni()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::has_data() const
{
    return parent_if.is_set
	|| xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::has_operation() const
{
    return is_set(operation)
	|| is_set(parent_if.operation)
	|| is_set(xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vni' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_if.is_set || is_set(parent_if.operation)) leaf_name_data.push_back(parent_if.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Vni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parent-if")
    {
        parent_if = value;
    }
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::Evpn()
    :
    xcid{YType::uint32, "xcid"}
{
    yang_name = "evpn"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::~Evpn()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::has_data() const
{
    return xcid.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::has_operation() const
{
    return is_set(operation)
	|| is_set(xcid.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evpn' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.operation)) leaf_name_data.push_back(xcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Evpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xcid")
    {
        xcid = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::Pw()
    :
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"},
    pw_id{YType::uint64, "pw-id"}
{
    yang_name = "pw"; yang_parent_name = "segment";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::~Pw()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::has_data() const
{
    return next_hop_address.is_set
	|| pseudo_wire_id_type.is_set
	|| pw_id.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(pseudo_wire_id_type.operation)
	|| is_set(pw_id.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.operation)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::Segment::Pw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::EvpnCtx()
    :
    bp_ifh{YType::str, "bp-ifh"},
    data_type{YType::enumeration, "data-type"},
    esi_id{YType::uint16, "esi-id"},
    local_label{YType::uint32, "local-label"}
    	,
    mcast_ole(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle>())
{
    mcast_ole->parent = this;

    yang_name = "evpn-ctx"; yang_parent_name = "l2fibmac-hardware-ingress";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::~EvpnCtx()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::has_data() const
{
    return bp_ifh.is_set
	|| data_type.is_set
	|| esi_id.is_set
	|| local_label.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::has_operation() const
{
    return is_set(operation)
	|| is_set(bp_ifh.operation)
	|| is_set(data_type.operation)
	|| is_set(esi_id.operation)
	|| is_set(local_label.operation)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ctx";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnCtx' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_ifh.is_set || is_set(bp_ifh.operation)) leaf_name_data.push_back(bp_ifh.get_name_leafdata());
    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (esi_id.is_set || is_set(esi_id.operation)) leaf_name_data.push_back(esi_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle>();
        }
        return mcast_ole;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mcast_ole != nullptr)
    {
        children["mcast-ole"] = mcast_ole;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bp-ifh")
    {
        bp_ifh = value;
    }
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "esi-id")
    {
        esi_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::McastOle()
    :
    mcast_label{YType::uint32, "mcast-label"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"}
{
    yang_name = "mcast-ole"; yang_parent_name = "evpn-ctx";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::~McastOle()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::has_data() const
{
    return mcast_label.is_set
	|| next_hop_ipv6_addr.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::has_operation() const
{
    return is_set(operation)
	|| is_set(mcast_label.operation)
	|| is_set(next_hop_ipv6_addr.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McastOle' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_label.is_set || is_set(mcast_label.operation)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.operation)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::EvpnCtx::McastOle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mcast-label")
    {
        mcast_label = value;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::NextHop()
    :
    children_count{YType::uint32, "children-count"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    plaformt_data_valid{YType::boolean, "plaformt-data-valid"},
    platform_data_length{YType::uint32, "platform-data-length"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base>())
{
    base->parent = this;

    yang_name = "next-hop"; yang_parent_name = "l2fibmac-hardware-ingress";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::~NextHop()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::has_data() const
{
    return children_count.is_set
	|| next_hop_address.is_set
	|| next_hop_internal_label.is_set
	|| plaformt_data_valid.is_set
	|| platform_data_length.is_set
	|| (base !=  nullptr && base->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(children_count.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_internal_label.operation)
	|| is_set(plaformt_data_valid.operation)
	|| is_set(platform_data_length.operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (children_count.is_set || is_set(children_count.operation)) leaf_name_data.push_back(children_count.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.operation)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (plaformt_data_valid.is_set || is_set(plaformt_data_valid.operation)) leaf_name_data.push_back(plaformt_data_valid.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.operation)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "children-count")
    {
        children_count = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
    }
    if(value_path == "plaformt-data-valid")
    {
        plaformt_data_valid = value;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::Base()
{
    yang_name = "base"; yang_parent_name = "next-hop";
}

L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibmacHardwareIngresses::L2FibmacHardwareIngress::NextHop::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Macs()
{
    yang_name = "l2fib-evpn-ip4macs"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::~L2FibEvpnIp4Macs()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::has_data() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip4mac.size(); index++)
    {
        if(l2fib_evpn_ip4mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip4mac.size(); index++)
    {
        if(l2fib_evpn_ip4mac[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip4macs";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnIp4Macs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-ip4mac")
    {
        for(auto const & c : l2fib_evpn_ip4mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac>();
        c->parent = this;
        l2fib_evpn_ip4mac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_evpn_ip4mac)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::L2FibEvpnIp4Mac()
    :
    arp_nd_delete_pending{YType::boolean, "arp-nd-delete-pending"},
    arp_nd_probe_pending{YType::boolean, "arp-nd-probe-pending"},
    arp_nd_sync_pending{YType::boolean, "arp-nd-sync-pending"},
    bdid{YType::int32, "bdid"},
    bdid_xr{YType::uint32, "bdid-xr"},
    ip_address{YType::str, "ip-address"},
    is_local{YType::boolean, "is-local"},
    is_local_xr{YType::boolean, "is-local-xr"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"}
    	,
    ip_address_xr(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr>())
{
    ip_address_xr->parent = this;

    yang_name = "l2fib-evpn-ip4mac"; yang_parent_name = "l2fib-evpn-ip4macs";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::~L2FibEvpnIp4Mac()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::has_data() const
{
    return arp_nd_delete_pending.is_set
	|| arp_nd_probe_pending.is_set
	|| arp_nd_sync_pending.is_set
	|| bdid.is_set
	|| bdid_xr.is_set
	|| ip_address.is_set
	|| is_local.is_set
	|| is_local_xr.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(arp_nd_delete_pending.operation)
	|| is_set(arp_nd_probe_pending.operation)
	|| is_set(arp_nd_sync_pending.operation)
	|| is_set(bdid.operation)
	|| is_set(bdid_xr.operation)
	|| is_set(ip_address.operation)
	|| is_set(is_local.operation)
	|| is_set(is_local_xr.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_address_xr.operation)
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip4mac";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibEvpnIp4Mac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_nd_delete_pending.is_set || is_set(arp_nd_delete_pending.operation)) leaf_name_data.push_back(arp_nd_delete_pending.get_name_leafdata());
    if (arp_nd_probe_pending.is_set || is_set(arp_nd_probe_pending.operation)) leaf_name_data.push_back(arp_nd_probe_pending.get_name_leafdata());
    if (arp_nd_sync_pending.is_set || is_set(arp_nd_sync_pending.operation)) leaf_name_data.push_back(arp_nd_sync_pending.get_name_leafdata());
    if (bdid.is_set || is_set(bdid.operation)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdid_xr.is_set || is_set(bdid_xr.operation)) leaf_name_data.push_back(bdid_xr.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_local_xr.is_set || is_set(is_local_xr.operation)) leaf_name_data.push_back(is_local_xr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.operation)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address-xr")
    {
        if(ip_address_xr == nullptr)
        {
            ip_address_xr = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr>();
        }
        return ip_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_address_xr != nullptr)
    {
        children["ip-address-xr"] = ip_address_xr;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending = value;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending = value;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending = value;
    }
    if(value_path == "bdid")
    {
        bdid = value;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::IpAddressXr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{
    yang_name = "ip-address-xr"; yang_parent_name = "l2fib-evpn-ip4mac";
}

L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::~IpAddressXr()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::has_data() const
{
    return addr_type.is_set
	|| ip.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_type.operation)
	|| is_set(ip.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address-xr";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddressXr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.operation)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibEvpnIp4Macs::L2FibEvpnIp4Mac::IpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPorts()
{
    yang_name = "l2fib-pwhe-main-ports"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::~L2FibPwheMainPorts()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::has_data() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port.size(); index++)
    {
        if(l2fib_pwhe_main_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port.size(); index++)
    {
        if(l2fib_pwhe_main_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-ports";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibPwheMainPorts' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-pwhe-main-port")
    {
        for(auto const & c : l2fib_pwhe_main_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort>();
        c->parent = this;
        l2fib_pwhe_main_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_pwhe_main_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::L2FibPwheMainPort()
    :
    interface_name{YType::str, "interface-name"},
    control_word_enabled{YType::boolean, "control-word-enabled"},
    generic_interface_list_id{YType::uint32, "generic-interface-list-id"},
    internal_label{YType::uint32, "internal-label"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    pseudo_wire_type{YType::uint32, "pseudo-wire-type"},
    remote_label{YType::uint32, "remote-label"}
{
    yang_name = "l2fib-pwhe-main-port"; yang_parent_name = "l2fib-pwhe-main-ports";
}

L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::~L2FibPwheMainPort()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::has_data() const
{
    return interface_name.is_set
	|| control_word_enabled.is_set
	|| generic_interface_list_id.is_set
	|| internal_label.is_set
	|| next_hop_address.is_set
	|| next_hop_valid.is_set
	|| pseudo_wire_type.is_set
	|| remote_label.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(control_word_enabled.operation)
	|| is_set(generic_interface_list_id.operation)
	|| is_set(internal_label.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_valid.operation)
	|| is_set(pseudo_wire_type.operation)
	|| is_set(remote_label.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibPwheMainPort' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (control_word_enabled.is_set || is_set(control_word_enabled.operation)) leaf_name_data.push_back(control_word_enabled.get_name_leafdata());
    if (generic_interface_list_id.is_set || is_set(generic_interface_list_id.operation)) leaf_name_data.push_back(generic_interface_list_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.operation)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (pseudo_wire_type.is_set || is_set(pseudo_wire_type.operation)) leaf_name_data.push_back(pseudo_wire_type.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibPwheMainPorts::L2FibPwheMainPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled = value;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::L2FibDhcpBindingCount()
    :
    bindings{YType::uint32, "bindings"}
{
    yang_name = "l2fib-dhcp-binding-count"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::~L2FibDhcpBindingCount()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::has_data() const
{
    return bindings.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::has_operation() const
{
    return is_set(operation)
	|| is_set(bindings.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-count";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibDhcpBindingCount' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bindings.is_set || is_set(bindings.operation)) leaf_name_data.push_back(bindings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibDhcpBindingCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bindings")
    {
        bindings = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomains()
{
    yang_name = "l2fib-bridge-domains"; yang_parent_name = "node";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::~L2FibBridgeDomains()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::has_data() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain.size(); index++)
    {
        if(l2fib_bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<l2fib_bridge_domain.size(); index++)
    {
        if(l2fib_bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domains";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibBridgeDomains' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-bridge-domain")
    {
        for(auto const & c : l2fib_bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain>();
        c->parent = this;
        l2fib_bridge_domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2fib_bridge_domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::L2FibBridgeDomain()
    :
    bd_group_name{YType::str, "bd-group-name"},
    bd_name{YType::str, "bd-name"},
    bridge_id{YType::uint32, "bridge-id"},
    bridge_name{YType::str, "bridge-name"},
    bridge_port_count{YType::uint32, "bridge-port-count"},
    bridge_type{YType::enumeration, "bridge-type"},
    learn_key{YType::uint8, "learn-key"},
    number_of_hwmac{YType::uint32, "number-of-hwmac"},
    number_of_swmac{YType::uint32, "number-of-swmac"},
    shg_count{YType::uint32, "shg-count"}
    	,
    base(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base>())
	,bd_pbb_union(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion>())
	,bvi_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo>())
	,oper(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper>())
	,p2mppw_info(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo>())
{
    base->parent = this;

    bd_pbb_union->parent = this;

    bvi_info->parent = this;

    oper->parent = this;

    p2mppw_info->parent = this;

    yang_name = "l2fib-bridge-domain"; yang_parent_name = "l2fib-bridge-domains";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::~L2FibBridgeDomain()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::has_data() const
{
    return bd_group_name.is_set
	|| bd_name.is_set
	|| bridge_id.is_set
	|| bridge_name.is_set
	|| bridge_port_count.is_set
	|| bridge_type.is_set
	|| learn_key.is_set
	|| number_of_hwmac.is_set
	|| number_of_swmac.is_set
	|| shg_count.is_set
	|| (base !=  nullptr && base->has_data())
	|| (bd_pbb_union !=  nullptr && bd_pbb_union->has_data())
	|| (bvi_info !=  nullptr && bvi_info->has_data())
	|| (oper !=  nullptr && oper->has_data())
	|| (p2mppw_info !=  nullptr && p2mppw_info->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_group_name.operation)
	|| is_set(bd_name.operation)
	|| is_set(bridge_id.operation)
	|| is_set(bridge_name.operation)
	|| is_set(bridge_port_count.operation)
	|| is_set(bridge_type.operation)
	|| is_set(learn_key.operation)
	|| is_set(number_of_hwmac.operation)
	|| is_set(number_of_swmac.operation)
	|| is_set(shg_count.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (bd_pbb_union !=  nullptr && bd_pbb_union->has_operation())
	|| (bvi_info !=  nullptr && bvi_info->has_operation())
	|| (oper !=  nullptr && oper->has_operation())
	|| (p2mppw_info !=  nullptr && p2mppw_info->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-bridge-domain";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FibBridgeDomain' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_group_name.is_set || is_set(bd_group_name.operation)) leaf_name_data.push_back(bd_group_name.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (bridge_name.is_set || is_set(bridge_name.operation)) leaf_name_data.push_back(bridge_name.get_name_leafdata());
    if (bridge_port_count.is_set || is_set(bridge_port_count.operation)) leaf_name_data.push_back(bridge_port_count.get_name_leafdata());
    if (bridge_type.is_set || is_set(bridge_type.operation)) leaf_name_data.push_back(bridge_type.get_name_leafdata());
    if (learn_key.is_set || is_set(learn_key.operation)) leaf_name_data.push_back(learn_key.get_name_leafdata());
    if (number_of_hwmac.is_set || is_set(number_of_hwmac.operation)) leaf_name_data.push_back(number_of_hwmac.get_name_leafdata());
    if (number_of_swmac.is_set || is_set(number_of_swmac.operation)) leaf_name_data.push_back(number_of_swmac.get_name_leafdata());
    if (shg_count.is_set || is_set(shg_count.operation)) leaf_name_data.push_back(shg_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base>();
        }
        return base;
    }

    if(child_yang_name == "bd-pbb-union")
    {
        if(bd_pbb_union == nullptr)
        {
            bd_pbb_union = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion>();
        }
        return bd_pbb_union;
    }

    if(child_yang_name == "bvi-info")
    {
        if(bvi_info == nullptr)
        {
            bvi_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo>();
        }
        return bvi_info;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper>();
        }
        return oper;
    }

    if(child_yang_name == "p2mppw-info")
    {
        if(p2mppw_info == nullptr)
        {
            p2mppw_info = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo>();
        }
        return p2mppw_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    if(bd_pbb_union != nullptr)
    {
        children["bd-pbb-union"] = bd_pbb_union;
    }

    if(bvi_info != nullptr)
    {
        children["bvi-info"] = bvi_info;
    }

    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    if(p2mppw_info != nullptr)
    {
        children["p2mppw-info"] = p2mppw_info;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-group-name")
    {
        bd_group_name = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "bridge-name")
    {
        bridge_name = value;
    }
    if(value_path == "bridge-port-count")
    {
        bridge_port_count = value;
    }
    if(value_path == "bridge-type")
    {
        bridge_type = value;
    }
    if(value_path == "learn-key")
    {
        learn_key = value;
    }
    if(value_path == "number-of-hwmac")
    {
        number_of_hwmac = value;
    }
    if(value_path == "number-of-swmac")
    {
        number_of_swmac = value;
    }
    if(value_path == "shg-count")
    {
        shg_count = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::Base()
{
    yang_name = "base"; yang_parent_name = "l2fib-bridge-domain";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::~Base()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::has_data() const
{
    return false;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::has_operation() const
{
    return is_set(operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Base::set_value(const std::string & value_path, std::string value)
{
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::Oper()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"}
    	,
    operational_information(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation>())
{
    operational_information->parent = this;

    yang_name = "oper"; yang_parent_name = "l2fib-bridge-domain";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::~Oper()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| (operational_information !=  nullptr && operational_information->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| (operational_information !=  nullptr && operational_information->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oper' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operational-information")
    {
        if(operational_information == nullptr)
        {
            operational_information = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation>();
        }
        return operational_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operational_information != nullptr)
    {
        children["operational-information"] = operational_information;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::OperationalInformation()
    :
    admin_disabled{YType::boolean, "admin-disabled"},
    bvi_configured{YType::boolean, "bvi-configured"},
    dhcp_enabled{YType::boolean, "dhcp-enabled"},
    dhcp_trusted{YType::boolean, "dhcp-trusted"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flooding_disabled{YType::boolean, "flooding-disabled"},
    host_routing_enabled{YType::boolean, "host-routing-enabled"},
    igmp_flood_forward_enabled{YType::boolean, "igmp-flood-forward-enabled"},
    igmp_mroute_port_enabled{YType::boolean, "igmp-mroute-port-enabled"},
    igmp_route_guard_enabled{YType::boolean, "igmp-route-guard-enabled"},
    igmp_snoop_enabled{YType::boolean, "igmp-snoop-enabled"},
    igmp_snoop_profile_enabled{YType::boolean, "igmp-snoop-profile-enabled"},
    is_bvi_up{YType::boolean, "is-bvi-up"},
    is_dai_addr_validation_destination_mac_enabled{YType::boolean, "is-dai-addr-validation-destination-mac-enabled"},
    is_dai_addr_validation_ipv4_enabled{YType::boolean, "is-dai-addr-validation-ipv4-enabled"},
    is_dai_addr_validation_source_mac_enabled{YType::boolean, "is-dai-addr-validation-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_evpn_cw_disable{YType::boolean, "is-evpn-cw-disable"},
    is_evpn_enabled{YType::boolean, "is-evpn-enabled"},
    is_evpn_flow_label{YType::boolean, "is-evpn-flow-label"},
    is_igmp_snoop_enabled{YType::boolean, "is-igmp-snoop-enabled"},
    is_ipsg_enabled{YType::boolean, "is-ipsg-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown{YType::boolean, "is-mac-secure-accept-shutdown"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    is_p2mp_pw_enabled{YType::boolean, "is-p2mp-pw-enabled"},
    is_pbbevpn_enabled{YType::boolean, "is-pbbevpn-enabled"},
    is_swmac_learning{YType::boolean, "is-swmac-learning"},
    is_vni_enabled{YType::boolean, "is-vni-enabled"},
    is_vpls_flood_optimization_enabled{YType::boolean, "is-vpls-flood-optimization-enabled"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_aging_type{YType::boolean, "mac-aging-type"},
    mac_learning_disabled{YType::boolean, "mac-learning-disabled"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification_type{YType::enumeration, "mac-limit-notification-type"},
    mac_port_down_flush_disabled{YType::boolean, "mac-port-down-flush-disabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_flood_forward_enabled{YType::boolean, "mld-flood-forward-enabled"},
    mld_mroute_port_enabled{YType::boolean, "mld-mroute-port-enabled"},
    mld_route_guard_enabled{YType::boolean, "mld-route-guard-enabled"},
    mld_snoop_enabled{YType::boolean, "mld-snoop-enabled"},
    mld_snoop_profile_enabled{YType::boolean, "mld-snoop-profile-enabled"},
    msti{YType::uint32, "msti"},
    mtu{YType::uint32, "mtu"},
    number_of_macs{YType::uint32, "number-of-macs"},
    nv_satellite_offload_ipv4_multicast_disabled{YType::boolean, "nv-satellite-offload-ipv4-multicast-disabled"},
    storm_control_broadcast_enabled{YType::boolean, "storm-control-broadcast-enabled"},
    storm_control_broadcast_rate_unit{YType::enumeration, "storm-control-broadcast-rate-unit"},
    storm_control_multicast_enabled{YType::boolean, "storm-control-multicast-enabled"},
    storm_control_multicast_rate_unit{YType::enumeration, "storm-control-multicast-rate-unit"},
    storm_control_unicast_enabled{YType::boolean, "storm-control-unicast-enabled"},
    storm_control_unicast_rate_unit{YType::enumeration, "storm-control-unicast-rate-unit"},
    stp_participating{YType::boolean, "stp-participating"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
{
    yang_name = "operational-information"; yang_parent_name = "oper";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::~OperationalInformation()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::has_data() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_data())
            return true;
    }
    return admin_disabled.is_set
	|| bvi_configured.is_set
	|| dhcp_enabled.is_set
	|| dhcp_trusted.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flooding_disabled.is_set
	|| host_routing_enabled.is_set
	|| igmp_flood_forward_enabled.is_set
	|| igmp_mroute_port_enabled.is_set
	|| igmp_route_guard_enabled.is_set
	|| igmp_snoop_enabled.is_set
	|| igmp_snoop_profile_enabled.is_set
	|| is_bvi_up.is_set
	|| is_dai_addr_validation_destination_mac_enabled.is_set
	|| is_dai_addr_validation_ipv4_enabled.is_set
	|| is_dai_addr_validation_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_evpn_cw_disable.is_set
	|| is_evpn_enabled.is_set
	|| is_evpn_flow_label.is_set
	|| is_igmp_snoop_enabled.is_set
	|| is_ipsg_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| is_p2mp_pw_enabled.is_set
	|| is_pbbevpn_enabled.is_set
	|| is_swmac_learning.is_set
	|| is_vni_enabled.is_set
	|| is_vpls_flood_optimization_enabled.is_set
	|| mac_aging_time.is_set
	|| mac_aging_type.is_set
	|| mac_learning_disabled.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification_type.is_set
	|| mac_port_down_flush_disabled.is_set
	|| mac_secure_action.is_set
	|| mld_flood_forward_enabled.is_set
	|| mld_mroute_port_enabled.is_set
	|| mld_route_guard_enabled.is_set
	|| mld_snoop_enabled.is_set
	|| mld_snoop_profile_enabled.is_set
	|| msti.is_set
	|| mtu.is_set
	|| number_of_macs.is_set
	|| nv_satellite_offload_ipv4_multicast_disabled.is_set
	|| storm_control_broadcast_enabled.is_set
	|| storm_control_broadcast_rate_unit.is_set
	|| storm_control_multicast_enabled.is_set
	|| storm_control_multicast_rate_unit.is_set
	|| storm_control_unicast_enabled.is_set
	|| storm_control_unicast_rate_unit.is_set
	|| stp_participating.is_set
	|| unknown_unicast_flooding_disabled.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::has_operation() const
{
    for (std::size_t index=0; index<feature.size(); index++)
    {
        if(feature[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_disabled.operation)
	|| is_set(bvi_configured.operation)
	|| is_set(dhcp_enabled.operation)
	|| is_set(dhcp_trusted.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flooding_disabled.operation)
	|| is_set(host_routing_enabled.operation)
	|| is_set(igmp_flood_forward_enabled.operation)
	|| is_set(igmp_mroute_port_enabled.operation)
	|| is_set(igmp_route_guard_enabled.operation)
	|| is_set(igmp_snoop_enabled.operation)
	|| is_set(igmp_snoop_profile_enabled.operation)
	|| is_set(is_bvi_up.operation)
	|| is_set(is_dai_addr_validation_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validation_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validation_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_evpn_cw_disable.operation)
	|| is_set(is_evpn_enabled.operation)
	|| is_set(is_evpn_flow_label.operation)
	|| is_set(is_igmp_snoop_enabled.operation)
	|| is_set(is_ipsg_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(is_p2mp_pw_enabled.operation)
	|| is_set(is_pbbevpn_enabled.operation)
	|| is_set(is_swmac_learning.operation)
	|| is_set(is_vni_enabled.operation)
	|| is_set(is_vpls_flood_optimization_enabled.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_aging_type.operation)
	|| is_set(mac_learning_disabled.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification_type.operation)
	|| is_set(mac_port_down_flush_disabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_flood_forward_enabled.operation)
	|| is_set(mld_mroute_port_enabled.operation)
	|| is_set(mld_route_guard_enabled.operation)
	|| is_set(mld_snoop_enabled.operation)
	|| is_set(mld_snoop_profile_enabled.operation)
	|| is_set(msti.operation)
	|| is_set(mtu.operation)
	|| is_set(number_of_macs.operation)
	|| is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)
	|| is_set(storm_control_broadcast_enabled.operation)
	|| is_set(storm_control_broadcast_rate_unit.operation)
	|| is_set(storm_control_multicast_enabled.operation)
	|| is_set(storm_control_multicast_rate_unit.operation)
	|| is_set(storm_control_unicast_enabled.operation)
	|| is_set(storm_control_unicast_rate_unit.operation)
	|| is_set(stp_participating.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operational-information";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OperationalInformation' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_disabled.is_set || is_set(admin_disabled.operation)) leaf_name_data.push_back(admin_disabled.get_name_leafdata());
    if (bvi_configured.is_set || is_set(bvi_configured.operation)) leaf_name_data.push_back(bvi_configured.get_name_leafdata());
    if (dhcp_enabled.is_set || is_set(dhcp_enabled.operation)) leaf_name_data.push_back(dhcp_enabled.get_name_leafdata());
    if (dhcp_trusted.is_set || is_set(dhcp_trusted.operation)) leaf_name_data.push_back(dhcp_trusted.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flooding_disabled.is_set || is_set(flooding_disabled.operation)) leaf_name_data.push_back(flooding_disabled.get_name_leafdata());
    if (host_routing_enabled.is_set || is_set(host_routing_enabled.operation)) leaf_name_data.push_back(host_routing_enabled.get_name_leafdata());
    if (igmp_flood_forward_enabled.is_set || is_set(igmp_flood_forward_enabled.operation)) leaf_name_data.push_back(igmp_flood_forward_enabled.get_name_leafdata());
    if (igmp_mroute_port_enabled.is_set || is_set(igmp_mroute_port_enabled.operation)) leaf_name_data.push_back(igmp_mroute_port_enabled.get_name_leafdata());
    if (igmp_route_guard_enabled.is_set || is_set(igmp_route_guard_enabled.operation)) leaf_name_data.push_back(igmp_route_guard_enabled.get_name_leafdata());
    if (igmp_snoop_enabled.is_set || is_set(igmp_snoop_enabled.operation)) leaf_name_data.push_back(igmp_snoop_enabled.get_name_leafdata());
    if (igmp_snoop_profile_enabled.is_set || is_set(igmp_snoop_profile_enabled.operation)) leaf_name_data.push_back(igmp_snoop_profile_enabled.get_name_leafdata());
    if (is_bvi_up.is_set || is_set(is_bvi_up.operation)) leaf_name_data.push_back(is_bvi_up.get_name_leafdata());
    if (is_dai_addr_validation_destination_mac_enabled.is_set || is_set(is_dai_addr_validation_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validation_ipv4_enabled.is_set || is_set(is_dai_addr_validation_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validation_source_mac_enabled.is_set || is_set(is_dai_addr_validation_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validation_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_evpn_cw_disable.is_set || is_set(is_evpn_cw_disable.operation)) leaf_name_data.push_back(is_evpn_cw_disable.get_name_leafdata());
    if (is_evpn_enabled.is_set || is_set(is_evpn_enabled.operation)) leaf_name_data.push_back(is_evpn_enabled.get_name_leafdata());
    if (is_evpn_flow_label.is_set || is_set(is_evpn_flow_label.operation)) leaf_name_data.push_back(is_evpn_flow_label.get_name_leafdata());
    if (is_igmp_snoop_enabled.is_set || is_set(is_igmp_snoop_enabled.operation)) leaf_name_data.push_back(is_igmp_snoop_enabled.get_name_leafdata());
    if (is_ipsg_enabled.is_set || is_set(is_ipsg_enabled.operation)) leaf_name_data.push_back(is_ipsg_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown.is_set || is_set(is_mac_secure_accept_shutdown.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (is_p2mp_pw_enabled.is_set || is_set(is_p2mp_pw_enabled.operation)) leaf_name_data.push_back(is_p2mp_pw_enabled.get_name_leafdata());
    if (is_pbbevpn_enabled.is_set || is_set(is_pbbevpn_enabled.operation)) leaf_name_data.push_back(is_pbbevpn_enabled.get_name_leafdata());
    if (is_swmac_learning.is_set || is_set(is_swmac_learning.operation)) leaf_name_data.push_back(is_swmac_learning.get_name_leafdata());
    if (is_vni_enabled.is_set || is_set(is_vni_enabled.operation)) leaf_name_data.push_back(is_vni_enabled.get_name_leafdata());
    if (is_vpls_flood_optimization_enabled.is_set || is_set(is_vpls_flood_optimization_enabled.operation)) leaf_name_data.push_back(is_vpls_flood_optimization_enabled.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_aging_type.is_set || is_set(mac_aging_type.operation)) leaf_name_data.push_back(mac_aging_type.get_name_leafdata());
    if (mac_learning_disabled.is_set || is_set(mac_learning_disabled.operation)) leaf_name_data.push_back(mac_learning_disabled.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification_type.is_set || is_set(mac_limit_notification_type.operation)) leaf_name_data.push_back(mac_limit_notification_type.get_name_leafdata());
    if (mac_port_down_flush_disabled.is_set || is_set(mac_port_down_flush_disabled.operation)) leaf_name_data.push_back(mac_port_down_flush_disabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_flood_forward_enabled.is_set || is_set(mld_flood_forward_enabled.operation)) leaf_name_data.push_back(mld_flood_forward_enabled.get_name_leafdata());
    if (mld_mroute_port_enabled.is_set || is_set(mld_mroute_port_enabled.operation)) leaf_name_data.push_back(mld_mroute_port_enabled.get_name_leafdata());
    if (mld_route_guard_enabled.is_set || is_set(mld_route_guard_enabled.operation)) leaf_name_data.push_back(mld_route_guard_enabled.get_name_leafdata());
    if (mld_snoop_enabled.is_set || is_set(mld_snoop_enabled.operation)) leaf_name_data.push_back(mld_snoop_enabled.get_name_leafdata());
    if (mld_snoop_profile_enabled.is_set || is_set(mld_snoop_profile_enabled.operation)) leaf_name_data.push_back(mld_snoop_profile_enabled.get_name_leafdata());
    if (msti.is_set || is_set(msti.operation)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (number_of_macs.is_set || is_set(number_of_macs.operation)) leaf_name_data.push_back(number_of_macs.get_name_leafdata());
    if (nv_satellite_offload_ipv4_multicast_disabled.is_set || is_set(nv_satellite_offload_ipv4_multicast_disabled.operation)) leaf_name_data.push_back(nv_satellite_offload_ipv4_multicast_disabled.get_name_leafdata());
    if (storm_control_broadcast_enabled.is_set || is_set(storm_control_broadcast_enabled.operation)) leaf_name_data.push_back(storm_control_broadcast_enabled.get_name_leafdata());
    if (storm_control_broadcast_rate_unit.is_set || is_set(storm_control_broadcast_rate_unit.operation)) leaf_name_data.push_back(storm_control_broadcast_rate_unit.get_name_leafdata());
    if (storm_control_multicast_enabled.is_set || is_set(storm_control_multicast_enabled.operation)) leaf_name_data.push_back(storm_control_multicast_enabled.get_name_leafdata());
    if (storm_control_multicast_rate_unit.is_set || is_set(storm_control_multicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_multicast_rate_unit.get_name_leafdata());
    if (storm_control_unicast_enabled.is_set || is_set(storm_control_unicast_enabled.operation)) leaf_name_data.push_back(storm_control_unicast_enabled.get_name_leafdata());
    if (storm_control_unicast_rate_unit.is_set || is_set(storm_control_unicast_rate_unit.operation)) leaf_name_data.push_back(storm_control_unicast_rate_unit.get_name_leafdata());
    if (stp_participating.is_set || is_set(stp_participating.operation)) leaf_name_data.push_back(stp_participating.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        for(auto const & c : feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature>();
        c->parent = this;
        feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-disabled")
    {
        admin_disabled = value;
    }
    if(value_path == "bvi-configured")
    {
        bvi_configured = value;
    }
    if(value_path == "dhcp-enabled")
    {
        dhcp_enabled = value;
    }
    if(value_path == "dhcp-trusted")
    {
        dhcp_trusted = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flooding-disabled")
    {
        flooding_disabled = value;
    }
    if(value_path == "host-routing-enabled")
    {
        host_routing_enabled = value;
    }
    if(value_path == "igmp-flood-forward-enabled")
    {
        igmp_flood_forward_enabled = value;
    }
    if(value_path == "igmp-mroute-port-enabled")
    {
        igmp_mroute_port_enabled = value;
    }
    if(value_path == "igmp-route-guard-enabled")
    {
        igmp_route_guard_enabled = value;
    }
    if(value_path == "igmp-snoop-enabled")
    {
        igmp_snoop_enabled = value;
    }
    if(value_path == "igmp-snoop-profile-enabled")
    {
        igmp_snoop_profile_enabled = value;
    }
    if(value_path == "is-bvi-up")
    {
        is_bvi_up = value;
    }
    if(value_path == "is-dai-addr-validation-destination-mac-enabled")
    {
        is_dai_addr_validation_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-ipv4-enabled")
    {
        is_dai_addr_validation_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validation-source-mac-enabled")
    {
        is_dai_addr_validation_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-evpn-cw-disable")
    {
        is_evpn_cw_disable = value;
    }
    if(value_path == "is-evpn-enabled")
    {
        is_evpn_enabled = value;
    }
    if(value_path == "is-evpn-flow-label")
    {
        is_evpn_flow_label = value;
    }
    if(value_path == "is-igmp-snoop-enabled")
    {
        is_igmp_snoop_enabled = value;
    }
    if(value_path == "is-ipsg-enabled")
    {
        is_ipsg_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown")
    {
        is_mac_secure_accept_shutdown = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "is-p2mp-pw-enabled")
    {
        is_p2mp_pw_enabled = value;
    }
    if(value_path == "is-pbbevpn-enabled")
    {
        is_pbbevpn_enabled = value;
    }
    if(value_path == "is-swmac-learning")
    {
        is_swmac_learning = value;
    }
    if(value_path == "is-vni-enabled")
    {
        is_vni_enabled = value;
    }
    if(value_path == "is-vpls-flood-optimization-enabled")
    {
        is_vpls_flood_optimization_enabled = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-aging-type")
    {
        mac_aging_type = value;
    }
    if(value_path == "mac-learning-disabled")
    {
        mac_learning_disabled = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification-type")
    {
        mac_limit_notification_type = value;
    }
    if(value_path == "mac-port-down-flush-disabled")
    {
        mac_port_down_flush_disabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-flood-forward-enabled")
    {
        mld_flood_forward_enabled = value;
    }
    if(value_path == "mld-mroute-port-enabled")
    {
        mld_mroute_port_enabled = value;
    }
    if(value_path == "mld-route-guard-enabled")
    {
        mld_route_guard_enabled = value;
    }
    if(value_path == "mld-snoop-enabled")
    {
        mld_snoop_enabled = value;
    }
    if(value_path == "mld-snoop-profile-enabled")
    {
        mld_snoop_profile_enabled = value;
    }
    if(value_path == "msti")
    {
        msti = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "number-of-macs")
    {
        number_of_macs = value;
    }
    if(value_path == "nv-satellite-offload-ipv4-multicast-disabled")
    {
        nv_satellite_offload_ipv4_multicast_disabled = value;
    }
    if(value_path == "storm-control-broadcast-enabled")
    {
        storm_control_broadcast_enabled = value;
    }
    if(value_path == "storm-control-broadcast-rate-unit")
    {
        storm_control_broadcast_rate_unit = value;
    }
    if(value_path == "storm-control-multicast-enabled")
    {
        storm_control_multicast_enabled = value;
    }
    if(value_path == "storm-control-multicast-rate-unit")
    {
        storm_control_multicast_rate_unit = value;
    }
    if(value_path == "storm-control-unicast-enabled")
    {
        storm_control_unicast_enabled = value;
    }
    if(value_path == "storm-control-unicast-rate-unit")
    {
        storm_control_unicast_rate_unit = value;
    }
    if(value_path == "stp-participating")
    {
        stp_participating = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Feature()
    :
    feature_type{YType::enumeration, "feature-type"}
    	,
    dhcp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp>())
	,igmp(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp>())
	,mld(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld>())
{
    dhcp->parent = this;

    igmp->parent = this;

    mld->parent = this;

    yang_name = "feature"; yang_parent_name = "operational-information";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::~Feature()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::has_data() const
{
    return feature_type.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (mld !=  nullptr && mld->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::has_operation() const
{
    return is_set(operation)
	|| is_set(feature_type.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (mld !=  nullptr && mld->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Feature' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_type.is_set || is_set(feature_type.operation)) leaf_name_data.push_back(feature_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "mld")
    {
        if(mld == nullptr)
        {
            mld = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld>();
        }
        return mld;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(mld != nullptr)
    {
        children["mld"] = mld;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "feature-type")
    {
        feature_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::Dhcp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::~Dhcp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::Igmp()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::~Igmp()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::Mld()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld"; yang_parent_name = "feature";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::~Mld()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_data() const
{
    return profile_name.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mld' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::Oper::OperationalInformation::Feature::Mld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::BdPbbUnion()
    :
    pbb_type{YType::enumeration, "pbb-type"}
    	,
    core(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core>())
	,edge(std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge>())
{
    core->parent = this;

    edge->parent = this;

    yang_name = "bd-pbb-union"; yang_parent_name = "l2fib-bridge-domain";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::~BdPbbUnion()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::has_data() const
{
    return pbb_type.is_set
	|| (core !=  nullptr && core->has_data())
	|| (edge !=  nullptr && edge->has_data());
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_type.operation)
	|| (core !=  nullptr && core->has_operation())
	|| (edge !=  nullptr && edge->has_operation());
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pbb-union";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPbbUnion' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_type.is_set || is_set(pbb_type.operation)) leaf_name_data.push_back(pbb_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core")
    {
        if(core == nullptr)
        {
            core = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core>();
        }
        return core;
    }

    if(child_yang_name == "edge")
    {
        if(edge == nullptr)
        {
            edge = std::make_shared<L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge>();
        }
        return edge;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(core != nullptr)
    {
        children["core"] = core;
    }

    if(edge != nullptr)
    {
        children["edge"] = edge;
    }

    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-type")
    {
        pbb_type = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::Edge()
    :
    core_bd_name{YType::str, "core-bd-name"},
    i_sid{YType::uint32, "i-sid"},
    mirp_lite_rx{YType::uint64, "mirp-lite-rx"},
    mirp_lite_tx{YType::uint64, "mirp-lite-tx"}
{
    yang_name = "edge"; yang_parent_name = "bd-pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::~Edge()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::has_data() const
{
    return core_bd_name.is_set
	|| i_sid.is_set
	|| mirp_lite_rx.is_set
	|| mirp_lite_tx.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::has_operation() const
{
    return is_set(operation)
	|| is_set(core_bd_name.operation)
	|| is_set(i_sid.operation)
	|| is_set(mirp_lite_rx.operation)
	|| is_set(mirp_lite_tx.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Edge' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_bd_name.is_set || is_set(core_bd_name.operation)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (i_sid.is_set || is_set(i_sid.operation)) leaf_name_data.push_back(i_sid.get_name_leafdata());
    if (mirp_lite_rx.is_set || is_set(mirp_lite_rx.operation)) leaf_name_data.push_back(mirp_lite_rx.get_name_leafdata());
    if (mirp_lite_tx.is_set || is_set(mirp_lite_tx.operation)) leaf_name_data.push_back(mirp_lite_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Edge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
    }
    if(value_path == "i-sid")
    {
        i_sid = value;
    }
    if(value_path == "mirp-lite-rx")
    {
        mirp_lite_rx = value;
    }
    if(value_path == "mirp-lite-tx")
    {
        mirp_lite_tx = value;
    }
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::Core()
    :
    nber_edge_bd{YType::uint32, "nber-edge-bd"}
{
    yang_name = "core"; yang_parent_name = "bd-pbb-union";
}

L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::~Core()
{
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::has_data() const
{
    return nber_edge_bd.is_set;
}

bool L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::has_operation() const
{
    return is_set(operation)
	|| is_set(nber_edge_bd.operation);
}

std::string L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core";

    return path_buffer.str();

}

const EntityPath L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Core' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nber_edge_bd.is_set || is_set(nber_edge_bd.operation)) leaf_name_data.push_back(nber_edge_bd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BdPbbUnion::Core::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nber-edge-bd")
    {
        nber_edge_bd = value;
    }
}

const Enum::YLeaf L2FibMainIfInstanceStateEnum::forwarding {0, "forwarding"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::blocked {1, "blocked"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::mac_learning {2, "mac-learning"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::nack {3, "nack"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::forwarning_not_useful {4, "forwarning-not-useful"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::blocked_not_useful {5, "blocked-not-useful"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::mac_learning_not_useful {6, "mac-learning-not-useful"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::blocked_data_only {7, "blocked-data-only"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::multicast_pe2ce_blocked {8, "multicast-pe2ce-blocked"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::multicast_blocked {9, "multicast-blocked"};
const Enum::YLeaf L2FibMainIfInstanceStateEnum::port_state_unknown {10, "port-state-unknown"};

const Enum::YLeaf L2VpnVniModeEnum::l2vpn_vni_mode_l2_dp {0, "l2vpn-vni-mode-l2-dp"};
const Enum::YLeaf L2VpnVniModeEnum::l2vpn_vni_mode_l3_dp {1, "l2vpn-vni-mode-l3-dp"};
const Enum::YLeaf L2VpnVniModeEnum::l2vpn_vni_mode_l2_cp {2, "l2vpn-vni-mode-l2-cp"};
const Enum::YLeaf L2VpnVniModeEnum::l2vpn_vni_mode_l3_cp {3, "l2vpn-vni-mode-l3-cp"};

const Enum::YLeaf L2FibStormControlRateUnitEnum::pps {0, "pps"};
const Enum::YLeaf L2FibStormControlRateUnitEnum::kb_ps {1, "kb-ps"};

const Enum::YLeaf L2VpnAdVplsIdEnum::l2vpn_ad_vpls_id_none {0, "l2vpn-ad-vpls-id-none"};
const Enum::YLeaf L2VpnAdVplsIdEnum::l2vpn_ad_vpls_id_auto {1, "l2vpn-ad-vpls-id-auto"};
const Enum::YLeaf L2VpnAdVplsIdEnum::l2vpn_ad_vpls_id_as {10, "l2vpn-ad-vpls-id-as"};
const Enum::YLeaf L2VpnAdVplsIdEnum::l2vpn_ad_vpls_id_v4_addr {266, "l2vpn-ad-vpls-id-v4-addr"};

const Enum::YLeaf L2VpnBagMacLimitActionEnum::limit_none {0, "limit-none"};
const Enum::YLeaf L2VpnBagMacLimitActionEnum::limit_flood {1, "limit-flood"};
const Enum::YLeaf L2VpnBagMacLimitActionEnum::limit_no_flood {2, "limit-no-flood"};
const Enum::YLeaf L2VpnBagMacLimitActionEnum::limit_shutdown {3, "limit-shutdown"};
const Enum::YLeaf L2VpnBagMacLimitActionEnum::limit_no_config {4, "limit-no-config"};

const Enum::YLeaf L2VpnPwheIflistRepStatusEnum::invalid {0, "invalid"};
const Enum::YLeaf L2VpnPwheIflistRepStatusEnum::pending {1, "pending"};
const Enum::YLeaf L2VpnPwheIflistRepStatusEnum::success {2, "success"};
const Enum::YLeaf L2VpnPwheIflistRepStatusEnum::failed {3, "failed"};
const Enum::YLeaf L2VpnPwheIflistRepStatusEnum::not_supported {4, "not-supported"};

const Enum::YLeaf L2FibL2TpSessionEnum::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf L2FibL2TpSessionEnum::l2tpv2 {1, "l2tpv2"};

const Enum::YLeaf L2VpnVirtualportStateEnum::l2vpn_vp_state_undefined {0, "l2vpn-vp-state-undefined"};
const Enum::YLeaf L2VpnVirtualportStateEnum::l2vpn_vp_state_up {1, "l2vpn-vp-state-up"};
const Enum::YLeaf L2VpnVirtualportStateEnum::l2vpn_vp_state_down {2, "l2vpn-vp-state-down"};

const Enum::YLeaf L2VpnBridgeStateEnum::bridge_init {0, "bridge-init"};
const Enum::YLeaf L2VpnBridgeStateEnum::bridge_up {1, "bridge-up"};
const Enum::YLeaf L2VpnBridgeStateEnum::bridge_down {2, "bridge-down"};
const Enum::YLeaf L2VpnBridgeStateEnum::bridge_admin_down {3, "bridge-admin-down"};

const Enum::YLeaf L2VpnBagStormControlRateUnitEnum::pps {0, "pps"};
const Enum::YLeaf L2VpnBagStormControlRateUnitEnum::kb_ps {1, "kb-ps"};

const Enum::YLeaf L2VpnProtectionRoleEnum::l2vpn_protection_primary {0, "l2vpn-protection-primary"};
const Enum::YLeaf L2VpnProtectionRoleEnum::l2vpn_protection_backup {1, "l2vpn-protection-backup"};

const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_forwarding {0, "msti-bag-stp-port-state-forwarding"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_blocked {1, "msti-bag-stp-port-state-blocked"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_mac_learning {2, "msti-bag-stp-port-state-mac-learning"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_nack {3, "msti-bag-stp-port-state-nack"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_forwarding_not_useful {4, "msti-bag-stp-port-state-forwarding-not-useful"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_blocked_not_useful {5, "msti-bag-stp-port-state-blocked-not-useful"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_stp_port_state_mac_learning_not_useful {6, "msti-bag-stp-port-state-mac-learning-not-useful"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_erp_port_state_blocked_data_only {7, "msti-bag-erp-port-state-blocked-data-only"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_erp_port_state_evpn_mcast_pe2ce_blocked {8, "msti-bag-erp-port-state-evpn-mcast-pe2ce-blocked"};
const Enum::YLeaf L2VpnMstiStateEnum::msti_bag_erp_port_state_evpn_port_state_mcast_blocked {9, "msti-bag-erp-port-state-evpn-port-state-mcast-blocked"};

const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_min {0, "mgmt-l2fib-data-type-min"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_xcon {1, "mgmt-l2fib-data-type-xcon"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_ac {2, "mgmt-l2fib-data-type-ac"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_span {3, "mgmt-l2fib-data-type-span"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_atom {4, "mgmt-l2fib-data-type-atom"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_pbb {5, "mgmt-l2fib-data-type-pbb"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_vni {6, "mgmt-l2fib-data-type-vni"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_n_hop {7, "mgmt-l2fib-data-type-n-hop"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_l2tp {8, "mgmt-l2fib-data-type-l2tp"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_l2tpv2 {9, "mgmt-l2fib-data-type-l2tpv2"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_bridge {10, "mgmt-l2fib-data-type-bridge"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_bridge_shg {11, "mgmt-l2fib-data-type-bridge-shg"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_bridge_port {12, "mgmt-l2fib-data-type-bridge-port"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_bridge_mac {13, "mgmt-l2fib-data-type-bridge-mac"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_mcast_table {14, "mgmt-l2fib-data-type-mcast-table"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_mcast_leaf {15, "mgmt-l2fib-data-type-mcast-leaf"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_mcast_xid {16, "mgmt-l2fib-data-type-mcast-xid"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_dhcp {17, "mgmt-l2fib-data-type-dhcp"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_l2tp_ipv6_ts {18, "mgmt-l2fib-data-type-l2tp-ipv6-ts"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_pwhe_mp {19, "mgmt-l2fib-data-type-pwhe-mp"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_evpn {20, "mgmt-l2fib-data-type-evpn"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_fxs {21, "mgmt-l2fib-data-type-fxs"};
const Enum::YLeaf MgmtL2FibDataEnum::mgmt_l2fib_data_type_max {22, "mgmt-l2fib-data-type-max"};

const Enum::YLeaf IccpSmPortStateEnum::unknown {0, "unknown"};
const Enum::YLeaf IccpSmPortStateEnum::unconfigured {1, "unconfigured"};
const Enum::YLeaf IccpSmPortStateEnum::unsynchronized {2, "unsynchronized"};
const Enum::YLeaf IccpSmPortStateEnum::operational {3, "operational"};
const Enum::YLeaf IccpSmPortStateEnum::failed {4, "failed"};
const Enum::YLeaf IccpSmPortStateEnum::reverting {5, "reverting"};

const Enum::YLeaf L2FibIpAddrEnum::v4 {4, "v4"};
const Enum::YLeaf L2FibIpAddrEnum::v6 {6, "v6"};

const Enum::YLeaf L2Vpnp2MpPtreeEnum::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2Vpnp2MpPtreeEnum::mldp {2, "mldp"};

const Enum::YLeaf IflistRepStatusEnum::invalid {0, "invalid"};
const Enum::YLeaf IflistRepStatusEnum::pending {1, "pending"};
const Enum::YLeaf IflistRepStatusEnum::done {2, "done"};
const Enum::YLeaf IflistRepStatusEnum::not_supported {3, "not-supported"};
const Enum::YLeaf IflistRepStatusEnum::failed {4, "failed"};

const Enum::YLeaf L2VpnPwClassControlWordEnum::unset {0, "unset"};
const Enum::YLeaf L2VpnPwClassControlWordEnum::enable {1, "enable"};
const Enum::YLeaf L2VpnPwClassControlWordEnum::disable {2, "disable"};

const Enum::YLeaf L2VpnL2TpTunnelStateEnum::l2vpn_l2tp_idle {0, "l2vpn-l2tp-idle"};
const Enum::YLeaf L2VpnL2TpTunnelStateEnum::l2vpn_l2tp_wait_for_connecting {1, "l2vpn-l2tp-wait-for-connecting"};
const Enum::YLeaf L2VpnL2TpTunnelStateEnum::l2vpn_l2tp_wait_for_connected {2, "l2vpn-l2tp-wait-for-connected"};
const Enum::YLeaf L2VpnL2TpTunnelStateEnum::l2vpn_l2tp_in_coming_call {3, "l2vpn-l2tp-in-coming-call"};
const Enum::YLeaf L2VpnL2TpTunnelStateEnum::l2vpn_l2tp_connected {4, "l2vpn-l2tp-connected"};
const Enum::YLeaf L2VpnL2TpTunnelStateEnum::l2vpn_l2tp_disconnected {5, "l2vpn-l2tp-disconnected"};

const Enum::YLeaf L2VpnBridgeCoupledStateEnum::disabled {0, "disabled"};
const Enum::YLeaf L2VpnBridgeCoupledStateEnum::down {2, "down"};
const Enum::YLeaf L2VpnBridgeCoupledStateEnum::up {3, "up"};

const Enum::YLeaf MgmtL2FibBridgeEnum::mgmt_l2fib_bridge_type_default {0, "mgmt-l2fib-bridge-type-default"};
const Enum::YLeaf MgmtL2FibBridgeEnum::mgmt_l2fib_bridge_type_pbb_edge {1, "mgmt-l2fib-bridge-type-pbb-edge"};
const Enum::YLeaf MgmtL2FibBridgeEnum::mgmt_l2fib_bridge_type_pbb_core {2, "mgmt-l2fib-bridge-type-pbb-core"};

const Enum::YLeaf L2VpnSignallingProtoEnum::l2vpn_pw_sig_not_specified {0, "l2vpn-pw-sig-not-specified"};
const Enum::YLeaf L2VpnSignallingProtoEnum::l2vpn_pw_sig_none {1, "l2vpn-pw-sig-none"};
const Enum::YLeaf L2VpnSignallingProtoEnum::l2vpn_pw_sig_l2tpv3 {2, "l2vpn-pw-sig-l2tpv3"};
const Enum::YLeaf L2VpnSignallingProtoEnum::l2vpn_pw_sig_l2tpv2 {3, "l2vpn-pw-sig-l2tpv2"};
const Enum::YLeaf L2VpnSignallingProtoEnum::l2vpn_pw_sig_ldp {4, "l2vpn-pw-sig-ldp"};
const Enum::YLeaf L2VpnSignallingProtoEnum::l2vpn_pw_sig_bgp {5, "l2vpn-pw-sig-bgp"};

const Enum::YLeaf L2VpnEncapMethodEnum::l2vpn_pw_encaps_not_specified {0, "l2vpn-pw-encaps-not-specified"};
const Enum::YLeaf L2VpnEncapMethodEnum::l2vpn_pw_encaps_l2tpv3 {1, "l2vpn-pw-encaps-l2tpv3"};
const Enum::YLeaf L2VpnEncapMethodEnum::l2vpn_pw_encaps_l2tpv2 {2, "l2vpn-pw-encaps-l2tpv2"};
const Enum::YLeaf L2VpnEncapMethodEnum::l2vpn_pw_encaps_mpls {3, "l2vpn-pw-encaps-mpls"};
const Enum::YLeaf L2VpnEncapMethodEnum::l2vpn_pw_encaps_unknown {4, "l2vpn-pw-encaps-unknown"};

const Enum::YLeaf L2FibG8032ApsPortStatusEnum::l2fib_aps_port_state_unknown {0, "l2fib-aps-port-state-unknown"};
const Enum::YLeaf L2FibG8032ApsPortStatusEnum::l2fib_aps_port_state_unbound {1, "l2fib-aps-port-state-unbound"};
const Enum::YLeaf L2FibG8032ApsPortStatusEnum::l2fib_aps_port_state_bound {2, "l2fib-aps-port-state-bound"};

const Enum::YLeaf EvpnMainInterfaceEnum::evpn_main_interface_ac {1, "evpn-main-interface-ac"};
const Enum::YLeaf EvpnMainInterfaceEnum::evpn_main_interface_nve {2, "evpn-main-interface-nve"};
const Enum::YLeaf EvpnMainInterfaceEnum::evpn_main_interface_ac_vfi {3, "evpn-main-interface-ac-vfi"};
const Enum::YLeaf EvpnMainInterfaceEnum::evpn_main_interface_ac_pw {4, "evpn-main-interface-ac-pw"};

const Enum::YLeaf L2VpnVniEncapsEnum::l2vpn_vni_encap_vxlan {0, "l2vpn-vni-encap-vxlan"};
const Enum::YLeaf L2VpnVniEncapsEnum::l2vpn_vni_encap_softgre {1, "l2vpn-vni-encap-softgre"};

const Enum::YLeaf L2VpnTransportModeEnum::l2vpn_transport_mode_not_specified {0, "l2vpn-transport-mode-not-specified"};
const Enum::YLeaf L2VpnTransportModeEnum::l2vpn_transport_mode_ethernet {1, "l2vpn-transport-mode-ethernet"};
const Enum::YLeaf L2VpnTransportModeEnum::l2vpn_transport_mode_vlan {2, "l2vpn-transport-mode-vlan"};
const Enum::YLeaf L2VpnTransportModeEnum::l2vpn_transport_mode_vlan_passthrough {3, "l2vpn-transport-mode-vlan-passthrough"};

const Enum::YLeaf MgmtL2FibMacLimitActionEnum::mgmt_l2fib_mac_limit_action_type_none {0, "mgmt-l2fib-mac-limit-action-type-none"};
const Enum::YLeaf MgmtL2FibMacLimitActionEnum::mgmt_l2fib_mac_limit_action_type_flood {1, "mgmt-l2fib-mac-limit-action-type-flood"};
const Enum::YLeaf MgmtL2FibMacLimitActionEnum::mgmt_l2fib_mac_limit_action_type_no_flood {2, "mgmt-l2fib-mac-limit-action-type-no-flood"};
const Enum::YLeaf MgmtL2FibMacLimitActionEnum::mgmt_l2fib_mac_limit_action_type_shutdown {3, "mgmt-l2fib-mac-limit-action-type-shutdown"};

const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_none {0, "l2vpn-ad-lsd-err-type-none"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_rw_create_abort_lbl_alloc {1, "l2vpn-ad-lsd-err-type-rw-create-abort-lbl-alloc"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_lbl_alloc_abort_rw_create {2, "l2vpn-ad-lsd-err-type-lbl-alloc-abort-rw-create"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_lbl_alloc_abort_lbl_alloc {3, "l2vpn-ad-lsd-err-type-lbl-alloc-abort-lbl-alloc"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_lbl_alloc_lbl_ctx_mismatch {4, "l2vpn-ad-lsd-err-type-lbl-alloc-lbl-ctx-mismatch"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_rw_create_fpi_size_mismatch {5, "l2vpn-ad-lsd-err-type-rw-create-fpi-size-mismatch"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_rw_create_fpi_version_mismatch {6, "l2vpn-ad-lsd-err-type-rw-create-fpi-version-mismatch"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_enospc {7, "l2vpn-ad-lsd-err-type-enospc"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_enomem {8, "l2vpn-ad-lsd-err-type-enomem"};
const Enum::YLeaf L2VpnAdLsdErrEnum::l2vpn_ad_lsd_err_type_undefined {9, "l2vpn-ad-lsd-err-type-undefined"};

const Enum::YLeaf L2VpnPwControlWordEnum::l2vpn_pw_control_word_unknown {0, "l2vpn-pw-control-word-unknown"};
const Enum::YLeaf L2VpnPwControlWordEnum::l2vpn_pw_control_word_clear {1, "l2vpn-pw-control-word-clear"};
const Enum::YLeaf L2VpnPwControlWordEnum::l2vpn_pw_control_word_set {2, "l2vpn-pw-control-word-set"};
const Enum::YLeaf L2VpnPwControlWordEnum::l2vpn_pw_control_word_mandatory {3, "l2vpn-pw-control-word-mandatory"};

const Enum::YLeaf L2VpnMainIfProtectectedEnum::erp_protected {0, "erp-protected"};
const Enum::YLeaf L2VpnMainIfProtectectedEnum::mstp_protected {1, "mstp-protected"};
const Enum::YLeaf L2VpnMainIfProtectectedEnum::no_protected {2, "no-protected"};

const Enum::YLeaf L2VpnPrefpathOptionEnum::l2vpn_pw_mpls_pref_path_not_specified {0, "l2vpn-pw-mpls-pref-path-not-specified"};
const Enum::YLeaf L2VpnPrefpathOptionEnum::l2vpn_pw_mpls_pref_path_next_hop_ip {1, "l2vpn-pw-mpls-pref-path-next-hop-ip"};
const Enum::YLeaf L2VpnPrefpathOptionEnum::l2vpn_pw_mpls_pref_path_te_tunnel {2, "l2vpn-pw-mpls-pref-path-te-tunnel"};
const Enum::YLeaf L2VpnPrefpathOptionEnum::l2vpn_pw_mpls_pref_path_ip_tunnel {3, "l2vpn-pw-mpls-pref-path-ip-tunnel"};
const Enum::YLeaf L2VpnPrefpathOptionEnum::l2vpn_pw_mpls_pref_path_tp_tunnel {4, "l2vpn-pw-mpls-pref-path-tp-tunnel"};

const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_unknown {0, "l2vpn-pw-type-unknown"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_frame_relay_dlci {1, "l2vpn-pw-type-frame-relay-dlci"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_aal5_sdu {2, "l2vpn-pw-type-atm-aal5-sdu"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_trans_cell {3, "l2vpn-pw-type-atm-trans-cell"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_ether_vlan {4, "l2vpn-pw-type-ether-vlan"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_ether {5, "l2vpn-pw-type-ether"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_hdlc {6, "l2vpn-pw-type-hdlc"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_ppp {7, "l2vpn-pw-type-ppp"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_sonet_over_mpls {8, "l2vpn-pw-type-sonet-over-mpls"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_n_vcc_cell {9, "l2vpn-pw-type-atm-n-vcc-cell"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_n_vpc_cell {10, "l2vpn-pw-type-atm-n-vpc-cell"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_ip {11, "l2vpn-pw-type-ip"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_vcc_cell {12, "l2vpn-pw-type-atm-vcc-cell"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_vpc_cell {13, "l2vpn-pw-type-atm-vpc-cell"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_atm_aal5_pdu {14, "l2vpn-pw-type-atm-aal5-pdu"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_frame_relay {15, "l2vpn-pw-type-frame-relay"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_sonet {16, "l2vpn-pw-type-sonet"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_vpls {17, "l2vpn-pw-type-vpls"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_tdm_sa_to_p_e1 {18, "l2vpn-pw-type-tdm-sa-to-p-e1"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_tdm_sa_to_p_t1 {19, "l2vpn-pw-type-tdm-sa-to-p-t1"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_tdm_sa_to_p_e3 {20, "l2vpn-pw-type-tdm-sa-to-p-e3"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_tdm_sa_to_p_t3 {21, "l2vpn-pw-type-tdm-sa-to-p-t3"};
const Enum::YLeaf L2VpnPwEnum::l2vpn_pw_type_tdm_ce_so_psn {22, "l2vpn-pw-type-tdm-ce-so-psn"};

const Enum::YLeaf L2VpnP2MpPwPtreeEnum::none {0, "none"};
const Enum::YLeaf L2VpnP2MpPwPtreeEnum::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2VpnP2MpPwPtreeEnum::mldp {2, "mldp"};

const Enum::YLeaf L2VpnBridgeEnum::l2vpn_bridge_type_default {0, "l2vpn-bridge-type-default"};
const Enum::YLeaf L2VpnBridgeEnum::l2vpn_bridge_type_pbb_edge {1, "l2vpn-bridge-type-pbb-edge"};
const Enum::YLeaf L2VpnBridgeEnum::l2vpn_bridge_type_pbb_core {2, "l2vpn-bridge-type-pbb-core"};

const Enum::YLeaf L2VpnSrcAddressSetEnum::unset {0, "unset"};
const Enum::YLeaf L2VpnSrcAddressSetEnum::set {1, "set"};

const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_unknown {0, "l2vpn-intf-type-unknown"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_ethernet {1, "l2vpn-intf-type-ethernet"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_vlan {2, "l2vpn-intf-type-vlan"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_atm {3, "l2vpn-intf-type-atm"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_frame_relay {4, "l2vpn-intf-type-frame-relay"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_hdlc {5, "l2vpn-intf-type-hdlc"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_ppp {6, "l2vpn-intf-type-ppp"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_span {7, "l2vpn-intf-type-span"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_bvi {8, "l2vpn-intf-type-bvi"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_cem {9, "l2vpn-intf-type-cem"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_pw_ether {10, "l2vpn-intf-type-pw-ether"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_pw_iw {11, "l2vpn-intf-type-pw-iw"};
const Enum::YLeaf L2VpnInterfaceEnum::l2vpn_intf_type_vni {12, "l2vpn-intf-type-vni"};

const Enum::YLeaf L2VpnG8032UncfgReasonEnum::reason_none {0, "reason-none"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::ring_mp0_missing {1, "ring-mp0-missing"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::ring_mp1_missing {2, "ring-mp1-missing"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::inclusion_list_empty {3, "inclusion-list-empty"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps0_missing {4, "aps0-missing"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps0bp_notfound {5, "aps0bp-notfound"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps0_no_ac_ctx {6, "aps0-no-ac-ctx"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps0_not_in_inclusion_list {7, "aps0-not-in-inclusion-list"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps0_mismatched {8, "aps0-mismatched"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps1_missing {9, "aps1-missing"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps1bp_notfound {10, "aps1bp-notfound"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps1_no_ac_ctx {11, "aps1-no-ac-ctx"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps1_not_in_inclusion_list {12, "aps1-not-in-inclusion-list"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps1_mismatched {13, "aps1-mismatched"};
const Enum::YLeaf L2VpnG8032UncfgReasonEnum::aps_unprovisioned {14, "aps-unprovisioned"};

const Enum::YLeaf L2VpnAtmModeEnum::l2vpn_atm_port_mode {0, "l2vpn-atm-port-mode"};
const Enum::YLeaf L2VpnAtmModeEnum::l2vpn_atm_vp_mode {1, "l2vpn-atm-vp-mode"};
const Enum::YLeaf L2VpnAtmModeEnum::l2vpn_atm_vc_mode {2, "l2vpn-atm-vc-mode"};

const Enum::YLeaf L2FibPwRedundancyRoleEnum::primary {0, "primary"};
const Enum::YLeaf L2FibPwRedundancyRoleEnum::backup {1, "backup"};

const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_virtual_ac {0, "l2vpn-id-mgr-app-type-virtual-ac"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_ac {1, "l2vpn-id-mgr-app-type-ac"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_pw {2, "l2vpn-id-mgr-app-type-pw"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_bd {3, "l2vpn-id-mgr-app-type-bd"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_mp2mp {4, "l2vpn-id-mgr-app-type-mp2mp"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_rd {5, "l2vpn-id-mgr-app-type-rd"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_pbb {6, "l2vpn-id-mgr-app-type-pbb"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_if_list {7, "l2vpn-id-mgr-app-type-if-list"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_atom {8, "l2vpn-id-mgr-app-type-atom"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_global {9, "l2vpn-id-mgr-app-type-global"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_p_tree {10, "l2vpn-id-mgr-app-type-p-tree"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_pw_group {11, "l2vpn-id-mgr-app-type-pw-group"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_evpn {12, "l2vpn-id-mgr-app-type-evpn"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_evpn_lbl {13, "l2vpn-id-mgr-app-type-evpn-lbl"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_evpn_rd {14, "l2vpn-id-mgr-app-type-evpn-rd"};
const Enum::YLeaf L2VpnIdMgrAppEnum::l2vpn_id_mgr_app_type_count {15, "l2vpn-id-mgr-app-type-count"};

const Enum::YLeaf IccpSmStateEnum::unresolved {0, "unresolved"};
const Enum::YLeaf IccpSmStateEnum::provisioned {1, "provisioned"};
const Enum::YLeaf IccpSmStateEnum::connecting {2, "connecting"};
const Enum::YLeaf IccpSmStateEnum::connected {3, "connected"};
const Enum::YLeaf IccpSmStateEnum::synchronizing {4, "synchronizing"};
const Enum::YLeaf IccpSmStateEnum::synchronized {5, "synchronized"};

const Enum::YLeaf L2VpnPwFlowLabelEnum::off {0, "off"};
const Enum::YLeaf L2VpnPwFlowLabelEnum::receive {1, "receive"};
const Enum::YLeaf L2VpnPwFlowLabelEnum::transmit {2, "transmit"};
const Enum::YLeaf L2VpnPwFlowLabelEnum::both {3, "both"};

const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtxEnum::mgmt_l2fib_bridge_mac_evpn_ctx_none {0, "mgmt-l2fib-bridge-mac-evpn-ctx-none"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtxEnum::mgmt_l2fib_bridge_mac_evpn_ctx_esi_id {1, "mgmt-l2fib-bridge-mac-evpn-ctx-esi-id"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtxEnum::mgmt_l2fib_bridge_mac_evpn_ctx_local_label {2, "mgmt-l2fib-bridge-mac-evpn-ctx-local-label"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtxEnum::mgmt_l2fib_bridge_mac_evpn_ctx_moi {3, "mgmt-l2fib-bridge-mac-evpn-ctx-moi"};
const Enum::YLeaf MgmtL2FibBridgeMacEvpnCtxEnum::mgmt_l2fib_bridge_mac_evpn_ctx_bp_ifh {4, "mgmt-l2fib-bridge-mac-evpn-ctx-bp-ifh"};

const Enum::YLeaf L2VpnRgStateEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnRgStateEnum::active {1, "active"};
const Enum::YLeaf L2VpnRgStateEnum::standby {2, "standby"};

const Enum::YLeaf L2VpnSyncStatusEnum::not_ready {0, "not-ready"};
const Enum::YLeaf L2VpnSyncStatusEnum::ready {1, "ready"};

const Enum::YLeaf L2VpnTimeStampModeEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnTimeStampModeEnum::differential {1, "differential"};
const Enum::YLeaf L2VpnTimeStampModeEnum::absolute {2, "absolute"};
const Enum::YLeaf L2VpnTimeStampModeEnum::none {3, "none"};

const Enum::YLeaf L2VpnAdSigMethodEnum::l2vpn_ad_sig_method_none {0, "l2vpn-ad-sig-method-none"};
const Enum::YLeaf L2VpnAdSigMethodEnum::l2vpn_ad_sig_method_bgp {1, "l2vpn-ad-sig-method-bgp"};
const Enum::YLeaf L2VpnAdSigMethodEnum::l2vpn_ad_sig_method_ldp {2, "l2vpn-ad-sig-method-ldp"};

const Enum::YLeaf L2VpnPwFecEnum::l2vpn_pw_fec_128 {0, "l2vpn-pw-fec-128"};
const Enum::YLeaf L2VpnPwFecEnum::l2vpn_pw_fec_129 {1, "l2vpn-pw-fec-129"};
const Enum::YLeaf L2VpnPwFecEnum::l2vpn_pw_fec_not_applicable {268435455, "l2vpn-pw-fec-not-applicable"};

const Enum::YLeaf L2VpnBagMacSecureActionEnum::not_set {0, "not-set"};
const Enum::YLeaf L2VpnBagMacSecureActionEnum::restrict {1, "restrict"};
const Enum::YLeaf L2VpnBagMacSecureActionEnum::none {2, "none"};
const Enum::YLeaf L2VpnBagMacSecureActionEnum::shutdown {3, "shutdown"};

const Enum::YLeaf L2VpnMainIfInstanceStateEnum::forwarding {0, "forwarding"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::blocked {1, "blocked"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::mac_learning {2, "mac-learning"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::nack {3, "nack"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::forwarning_not_useful {4, "forwarning-not-useful"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::blocked_not_useful {5, "blocked-not-useful"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::mac_learning_not_useful {6, "mac-learning-not-useful"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::blocked_data_only {7, "blocked-data-only"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::mcast_pe2_ce_blocked {8, "mcast-pe2-ce-blocked"};
const Enum::YLeaf L2VpnMainIfInstanceStateEnum::port_state_unknown {9, "port-state-unknown"};

const Enum::YLeaf L2VpnProtectionEnum::l2vpn_protection_unknown {0, "l2vpn-protection-unknown"};
const Enum::YLeaf L2VpnProtectionEnum::l2vpn_protection_interface {1, "l2vpn-protection-interface"};
const Enum::YLeaf L2VpnProtectionEnum::l2vpn_protection_pseudowire {2, "l2vpn-protection-pseudowire"};
const Enum::YLeaf L2VpnProtectionEnum::l2vpn_protection_group {3, "l2vpn-protection-group"};

const Enum::YLeaf L2VpnBagMacWithdrawOptionEnum::mac_withdraw_option_state_up {0, "mac-withdraw-option-state-up"};
const Enum::YLeaf L2VpnBagMacWithdrawOptionEnum::mac_withdraw_option_state_down {1, "mac-withdraw-option-state-down"};
const Enum::YLeaf L2VpnBagMacWithdrawOptionEnum::mac_withdraw_option_optimize {2, "mac-withdraw-option-optimize"};

const Enum::YLeaf L2VpnVfiP2MpTransportEnum::none {0, "none"};
const Enum::YLeaf L2VpnVfiP2MpTransportEnum::rsvp_te {1, "rsvp-te"};

const Enum::YLeaf MgmtL2FibMacLimitNotifyEnum::mgmt_l2fib_mac_limit_notify_none {0, "mgmt-l2fib-mac-limit-notify-none"};
const Enum::YLeaf MgmtL2FibMacLimitNotifyEnum::mgmt_l2fib_mac_limit_notify_syslog {1, "mgmt-l2fib-mac-limit-notify-syslog"};
const Enum::YLeaf MgmtL2FibMacLimitNotifyEnum::mgmt_l2fib_mac_limit_notify_trap {2, "mgmt-l2fib-mac-limit-notify-trap"};
const Enum::YLeaf MgmtL2FibMacLimitNotifyEnum::mgmt_l2fib_mac_limit_notify_both {3, "mgmt-l2fib-mac-limit-notify-both"};

const Enum::YLeaf PwhePortImStateEnum::unknown {0, "unknown"};
const Enum::YLeaf PwhePortImStateEnum::down {1, "down"};
const Enum::YLeaf PwhePortImStateEnum::up {2, "up"};

const Enum::YLeaf L2VpnpwEnum::manual {1, "manual"};
const Enum::YLeaf L2VpnpwEnum::vpls_autodiscovered {2, "vpls-autodiscovered"};
const Enum::YLeaf L2VpnpwEnum::vpws_autodiscovered {3, "vpws-autodiscovered"};
const Enum::YLeaf L2VpnpwEnum::vpls_autodiscovered_ldp {4, "vpls-autodiscovered-ldp"};

const Enum::YLeaf MgmtL2FibStatsDataEnum::mgmt_l2fib_stats_type_unknown {0, "mgmt-l2fib-stats-type-unknown"};
const Enum::YLeaf MgmtL2FibStatsDataEnum::mgmt_l2fib_stats_type_mcast {1, "mgmt-l2fib-stats-type-mcast"};

const Enum::YLeaf L2FibGroupStateEnum::up {0, "up"};
const Enum::YLeaf L2FibGroupStateEnum::down {1, "down"};

const Enum::YLeaf L2VpnPeerEnum::none {0, "none"};
const Enum::YLeaf L2VpnPeerEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf L2VpnPeerEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf L2VpnPeerEnum::internal_label {3, "internal-label"};

const Enum::YLeaf L2VpnPwheIntfEnum::pseudowire_ether {0, "pseudowire-ether"};
const Enum::YLeaf L2VpnPwheIntfEnum::pseudowire_iw {1, "pseudowire-iw"};

const Enum::YLeaf L2VpnAcEncapEnum::unknown_encap {0, "unknown-encap"};
const Enum::YLeaf L2VpnAcEncapEnum::vlan {1, "vlan"};
const Enum::YLeaf L2VpnAcEncapEnum::qinq {2, "qinq"};
const Enum::YLeaf L2VpnAcEncapEnum::qin_any {3, "qin-any"};
const Enum::YLeaf L2VpnAcEncapEnum::ethernet {4, "ethernet"};
const Enum::YLeaf L2VpnAcEncapEnum::atm_aal0 {5, "atm-aal0"};
const Enum::YLeaf L2VpnAcEncapEnum::atm_aal5 {6, "atm-aal5"};
const Enum::YLeaf L2VpnAcEncapEnum::atm_vp {7, "atm-vp"};
const Enum::YLeaf L2VpnAcEncapEnum::atm_port {8, "atm-port"};
const Enum::YLeaf L2VpnAcEncapEnum::hdlc {9, "hdlc"};
const Enum::YLeaf L2VpnAcEncapEnum::fr_dlci {10, "fr-dlci"};
const Enum::YLeaf L2VpnAcEncapEnum::fr_dlci_local {11, "fr-dlci-local"};
const Enum::YLeaf L2VpnAcEncapEnum::ppp {12, "ppp"};
const Enum::YLeaf L2VpnAcEncapEnum::tdm_sa_to_p_e1 {13, "tdm-sa-to-p-e1"};
const Enum::YLeaf L2VpnAcEncapEnum::tdm_sa_to_p_t1 {14, "tdm-sa-to-p-t1"};
const Enum::YLeaf L2VpnAcEncapEnum::tdm_sa_to_p_e3 {15, "tdm-sa-to-p-e3"};
const Enum::YLeaf L2VpnAcEncapEnum::tdm_sa_to_p_t3 {16, "tdm-sa-to-p-t3"};
const Enum::YLeaf L2VpnAcEncapEnum::tdm_ce_so_psn {17, "tdm-ce-so-psn"};
const Enum::YLeaf L2VpnAcEncapEnum::ip {18, "ip"};
const Enum::YLeaf L2VpnAcEncapEnum::vlan_encap {19, "vlan-encap"};
const Enum::YLeaf L2VpnAcEncapEnum::dot1ad {20, "dot1ad"};
const Enum::YLeaf L2VpnAcEncapEnum::efp {21, "efp"};
const Enum::YLeaf L2VpnAcEncapEnum::bvi {22, "bvi"};
const Enum::YLeaf L2VpnAcEncapEnum::monitor_session {23, "monitor-session"};
const Enum::YLeaf L2VpnAcEncapEnum::pseudowire_ether {24, "pseudowire-ether"};
const Enum::YLeaf L2VpnAcEncapEnum::pseudowire_iw {25, "pseudowire-iw"};
const Enum::YLeaf L2VpnAcEncapEnum::multi_segment_pseudowire {26, "multi-segment-pseudowire"};
const Enum::YLeaf L2VpnAcEncapEnum::pseudowire_l2_subinterface {27, "pseudowire-l2-subinterface"};
const Enum::YLeaf L2VpnAcEncapEnum::virtual_network_interface {28, "virtual-network-interface"};
const Enum::YLeaf L2VpnAcEncapEnum::encap_types_max {29, "encap-types-max"};

const Enum::YLeaf L2VpnG8032RplEnum::rpl_unknown {0, "rpl-unknown"};
const Enum::YLeaf L2VpnG8032RplEnum::port0_owner {1, "port0-owner"};
const Enum::YLeaf L2VpnG8032RplEnum::port0_neighbor {2, "port0-neighbor"};
const Enum::YLeaf L2VpnG8032RplEnum::port0_next_neighbor {3, "port0-next-neighbor"};
const Enum::YLeaf L2VpnG8032RplEnum::port1_owner {4, "port1-owner"};
const Enum::YLeaf L2VpnG8032RplEnum::port1_neighbor {5, "port1-neighbor"};
const Enum::YLeaf L2VpnG8032RplEnum::port1_next_neighbor {6, "port1-next-neighbor"};

const Enum::YLeaf L2VpnXcStateEnum::l2vpn_xc_state_unresolved {0, "l2vpn-xc-state-unresolved"};
const Enum::YLeaf L2VpnXcStateEnum::l2vpn_xc_state_down {1, "l2vpn-xc-state-down"};
const Enum::YLeaf L2VpnXcStateEnum::l2vpn_xc_state_up {2, "l2vpn-xc-state-up"};

const Enum::YLeaf L2VpnMirpLiteProtocolInfoEnum::vlan0 {0, "vlan0"};
const Enum::YLeaf L2VpnMirpLiteProtocolInfoEnum::none {1, "none"};

const Enum::YLeaf L2VpnVfiStateEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnVfiStateEnum::up {1, "up"};
const Enum::YLeaf L2VpnVfiStateEnum::down {2, "down"};
const Enum::YLeaf L2VpnVfiStateEnum::admin_down {3, "admin-down"};

const Enum::YLeaf L2VpnBagAdEncapEnum::l2vpn_bag_ad_encap_not_specified {0, "l2vpn-bag-ad-encap-not-specified"};
const Enum::YLeaf L2VpnBagAdEncapEnum::l2vpn_bag_ad_encap_ether_vlan {1, "l2vpn-bag-ad-encap-ether-vlan"};
const Enum::YLeaf L2VpnBagAdEncapEnum::l2vpn_bag_ad_encap_ether {2, "l2vpn-bag-ad-encap-ether"};

const Enum::YLeaf L2VpnTosModeEnum::l2vpn_pw_ip_tos_none {0, "l2vpn-pw-ip-tos-none"};
const Enum::YLeaf L2VpnTosModeEnum::l2vpn_pw_ip_tos_reflect {1, "l2vpn-pw-ip-tos-reflect"};

const Enum::YLeaf L2VpnIpcTransportModeEnum::unicast {0, "unicast"};
const Enum::YLeaf L2VpnIpcTransportModeEnum::broadcast {1, "broadcast"};
const Enum::YLeaf L2VpnIpcTransportModeEnum::unknown {2, "unknown"};

const Enum::YLeaf P2MpTransportStateEnum::none {0, "none"};
const Enum::YLeaf P2MpTransportStateEnum::ok {1, "ok"};
const Enum::YLeaf P2MpTransportStateEnum::error {2, "error"};
const Enum::YLeaf P2MpTransportStateEnum::tunnel_down {3, "tunnel-down"};
const Enum::YLeaf P2MpTransportStateEnum::max_tunnels_reached {4, "max-tunnels-reached"};

const Enum::YLeaf L2VpnServiceEnum::vpws {0, "vpws"};
const Enum::YLeaf L2VpnServiceEnum::vpls {1, "vpls"};

const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_unresolved {0, "l2vpn-segment-type-unresolved"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_ac {1, "l2vpn-segment-type-ac"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_pw {2, "l2vpn-segment-type-pw"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_bd_ac {3, "l2vpn-segment-type-bd-ac"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_vfi {4, "l2vpn-segment-type-vfi"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_bd_pw {5, "l2vpn-segment-type-bd-pw"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_bd_pbb {6, "l2vpn-segment-type-bd-pbb"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_bd_evpn {7, "l2vpn-segment-type-bd-evpn"};
const Enum::YLeaf L2VpnSegmentEnum::l2vpn_segment_type_vni {8, "l2vpn-segment-type-vni"};

const Enum::YLeaf MgmtL2FibMacSecActionEnum::not_set {0, "not-set"};
const Enum::YLeaf MgmtL2FibMacSecActionEnum::restrict {1, "restrict"};
const Enum::YLeaf MgmtL2FibMacSecActionEnum::none {2, "none"};
const Enum::YLeaf MgmtL2FibMacSecActionEnum::shutdown {3, "shutdown"};

const Enum::YLeaf L2FibG8032RplEnum::rpl_unknown {0, "rpl-unknown"};
const Enum::YLeaf L2FibG8032RplEnum::port0_owner {1, "port0-owner"};
const Enum::YLeaf L2FibG8032RplEnum::port0_neighbor {2, "port0-neighbor"};
const Enum::YLeaf L2FibG8032RplEnum::port0_next_neighbor {3, "port0-next-neighbor"};
const Enum::YLeaf L2FibG8032RplEnum::port1_owner {4, "port1-owner"};
const Enum::YLeaf L2FibG8032RplEnum::port1_neighbor {5, "port1-neighbor"};
const Enum::YLeaf L2FibG8032RplEnum::port1_next_neighbor {6, "port1-next-neighbor"};

const Enum::YLeaf L2VpnProcNsrNotReadyReasonEnum::collab_time_out {0, "collab-time-out"};
const Enum::YLeaf L2VpnProcNsrNotReadyReasonEnum::collab_conntection_idt {1, "collab-conntection-idt"};
const Enum::YLeaf L2VpnProcNsrNotReadyReasonEnum::nsr_peer_not_connected {2, "nsr-peer-not-connected"};
const Enum::YLeaf L2VpnProcNsrNotReadyReasonEnum::nsr_peer_not_in_sync {3, "nsr-peer-not-in-sync"};

const Enum::YLeaf L2VpnBagMacLimitNotifyEnum::mac_limit_notify_none {0, "mac-limit-notify-none"};
const Enum::YLeaf L2VpnBagMacLimitNotifyEnum::mac_limit_notify_syslog {1, "mac-limit-notify-syslog"};
const Enum::YLeaf L2VpnBagMacLimitNotifyEnum::mac_limit_notify_trap {2, "mac-limit-notify-trap"};
const Enum::YLeaf L2VpnBagMacLimitNotifyEnum::mac_limit_notify_syslog_trap {3, "mac-limit-notify-syslog-trap"};
const Enum::YLeaf L2VpnBagMacLimitNotifyEnum::mac_limit_notify_no_config {4, "mac-limit-notify-no-config"};

const Enum::YLeaf L2VpnLoadBalEnum::not_supported {0, "not-supported"};
const Enum::YLeaf L2VpnLoadBalEnum::source_dest_mac {1, "source-dest-mac"};
const Enum::YLeaf L2VpnLoadBalEnum::source_dest_ip {2, "source-dest-ip"};
const Enum::YLeaf L2VpnLoadBalEnum::undefined {3, "undefined"};
const Enum::YLeaf L2VpnLoadBalEnum::pseudowire_label {4, "pseudowire-label"};

const Enum::YLeaf L2VpnFrModeEnum::l2vpn_fr_port_mode {0, "l2vpn-fr-port-mode"};
const Enum::YLeaf L2VpnFrModeEnum::l2vpn_fr_dlci_mode {1, "l2vpn-fr-dlci-mode"};

const Enum::YLeaf L2VpnTdmRtpOptionEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnTdmRtpOptionEnum::present {1, "present"};
const Enum::YLeaf L2VpnTdmRtpOptionEnum::absent {2, "absent"};

const Enum::YLeaf L2VpnMirpLiteStatusEnum::enabled {0, "enabled"};
const Enum::YLeaf L2VpnMirpLiteStatusEnum::not_supported {1, "not-supported"};

const Enum::YLeaf L2VpnPtreeEnum::none {0, "none"};
const Enum::YLeaf L2VpnPtreeEnum::rsvp_te {1, "rsvp-te"};
const Enum::YLeaf L2VpnPtreeEnum::mldp {2, "mldp"};

const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_unresolved {0, "l2vpn-segment-state-unresolved"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_up {1, "l2vpn-segment-state-up"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_down {2, "l2vpn-segment-state-down"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_admin_down {3, "l2vpn-segment-state-admin-down"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_local_up {4, "l2vpn-segment-state-local-up"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_remote_up {5, "l2vpn-segment-state-remote-up"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_connected {6, "l2vpn-segment-state-connected"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_standby {7, "l2vpn-segment-state-standby"};
const Enum::YLeaf L2VpnSegmentStateEnum::l2vpn_segment_state_standby_ready {8, "l2vpn-segment-state-standby-ready"};

const Enum::YLeaf L2FibPwIdEnum::default_ {0, "default"};
const Enum::YLeaf L2FibPwIdEnum::manual {1, "manual"};
const Enum::YLeaf L2FibPwIdEnum::vpls {2, "vpls"};
const Enum::YLeaf L2FibPwIdEnum::vpws {3, "vpws"};
const Enum::YLeaf L2FibPwIdEnum::vpls_ldp {4, "vpls-ldp"};
const Enum::YLeaf L2FibPwIdEnum::l2fib_pw_id_type_pwr {5, "l2fib-pw-id-type-pwr"};
const Enum::YLeaf L2FibPwIdEnum::l2fib_pw_id_type_evpn {6, "l2fib-pw-id-type-evpn"};

const Enum::YLeaf L2FibFeatureEnum::l2fib_feature_dhcp_snooping {0, "l2fib-feature-dhcp-snooping"};
const Enum::YLeaf L2FibFeatureEnum::l2fib_feature_igmp_snooping {1, "l2fib-feature-igmp-snooping"};
const Enum::YLeaf L2FibFeatureEnum::l2fib_feature_mld_snooping {2, "l2fib-feature-mld-snooping"};
const Enum::YLeaf L2FibFeatureEnum::l2fib_feature_max {3, "l2fib-feature-max"};

const Enum::YLeaf L2VpnInterworkingEnum::l2vpn_iw_type_none {0, "l2vpn-iw-type-none"};
const Enum::YLeaf L2VpnInterworkingEnum::l2vpn_iw_type_ethernet {1, "l2vpn-iw-type-ethernet"};
const Enum::YLeaf L2VpnInterworkingEnum::l2vpn_iw_type_ppp {2, "l2vpn-iw-type-ppp"};
const Enum::YLeaf L2VpnInterworkingEnum::l2vpn_iw_type_ipv4 {3, "l2vpn-iw-type-ipv4"};
const Enum::YLeaf L2VpnInterworkingEnum::l2vpn_iw_type_voluntary {4, "l2vpn-iw-type-voluntary"};
const Enum::YLeaf L2VpnInterworkingEnum::l2vpn_iw_type_frf8 {5, "l2vpn-iw-type-frf8"};

const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_unknown {0, "mgmt-l2fib-switching-type-unknown"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_ac_ac {1, "mgmt-l2fib-switching-type-ac-ac"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_ac_atom {2, "mgmt-l2fib-switching-type-ac-atom"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_ac_vfi {3, "mgmt-l2fib-switching-type-ac-vfi"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_ac_l2tp {4, "mgmt-l2fib-switching-type-ac-l2tp"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_atom_atom {5, "mgmt-l2fib-switching-type-atom-atom"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_vfi_atom {6, "mgmt-l2fib-switching-type-vfi-atom"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_vfi_l2tp {7, "mgmt-l2fib-switching-type-vfi-l2tp"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_l2tp_atom {8, "mgmt-l2fib-switching-type-l2tp-atom"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_l2tp_l2tp {9, "mgmt-l2fib-switching-type-l2tp-l2tp"};
const Enum::YLeaf MgmtL2FibSwitchingEnum::mgmt_l2fib_switching_type_max {10, "mgmt-l2fib-switching-type-max"};

const Enum::YLeaf L2VpnMemoryStateEnum::memory_state_unknown {0, "memory-state-unknown"};
const Enum::YLeaf L2VpnMemoryStateEnum::memory_state_normal {1, "memory-state-normal"};
const Enum::YLeaf L2VpnMemoryStateEnum::memory_state_minor {2, "memory-state-minor"};
const Enum::YLeaf L2VpnMemoryStateEnum::memory_state_severe {3, "memory-state-severe"};
const Enum::YLeaf L2VpnMemoryStateEnum::memory_state_critical {4, "memory-state-critical"};
const Enum::YLeaf L2VpnMemoryStateEnum::memory_state_invalid {5, "memory-state-invalid"};

const Enum::YLeaf L2VpnTdmModeEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnTdmModeEnum::ce_so_psn {1, "ce-so-psn"};
const Enum::YLeaf L2VpnTdmModeEnum::sa_to_p_e1 {2, "sa-to-p-e1"};
const Enum::YLeaf L2VpnTdmModeEnum::sa_to_p_t1 {3, "sa-to-p-t1"};
const Enum::YLeaf L2VpnTdmModeEnum::sa_to_p_e3 {4, "sa-to-p-e3"};
const Enum::YLeaf L2VpnTdmModeEnum::sa_to_p_t3 {5, "sa-to-p-t3"};

const Enum::YLeaf L2VpnProcRoleEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnProcRoleEnum::v1_active {1, "v1-active"};
const Enum::YLeaf L2VpnProcRoleEnum::v1_standby {2, "v1-standby"};
const Enum::YLeaf L2VpnProcRoleEnum::v2_active {3, "v2-active"};
const Enum::YLeaf L2VpnProcRoleEnum::v2_standby {4, "v2-standby"};
const Enum::YLeaf L2VpnProcRoleEnum::v1_active_post_big_bang {5, "v1-active-post-big-bang"};
const Enum::YLeaf L2VpnProcRoleEnum::v1_standby_post_big_bang {6, "v1-standby-post-big-bang"};
const Enum::YLeaf L2VpnProcRoleEnum::count {7, "count"};

const Enum::YLeaf L2VpnBagMacAgingModeEnum::aging_none {0, "aging-none"};
const Enum::YLeaf L2VpnBagMacAgingModeEnum::aging_absolute {1, "aging-absolute"};
const Enum::YLeaf L2VpnBagMacAgingModeEnum::aging_inactivity {2, "aging-inactivity"};

const Enum::YLeaf L2VpnVfiP2MpSignalingEnum::none {0, "none"};
const Enum::YLeaf L2VpnVfiP2MpSignalingEnum::bgp {1, "bgp"};

const Enum::YLeaf L2VpnPwSequenceEnum::l2vpn_pw_sequence_off {0, "l2vpn-pw-sequence-off"};
const Enum::YLeaf L2VpnPwSequenceEnum::l2vpn_pw_sequence_xmit {1, "l2vpn-pw-sequence-xmit"};
const Enum::YLeaf L2VpnPwSequenceEnum::l2vpn_pw_sequence_recv {2, "l2vpn-pw-sequence-recv"};
const Enum::YLeaf L2VpnPwSequenceEnum::l2vpn_pw_sequence_trans {3, "l2vpn-pw-sequence-trans"};
const Enum::YLeaf L2VpnPwSequenceEnum::l2vpn_pw_sequence_both {4, "l2vpn-pw-sequence-both"};

const Enum::YLeaf L2FibLoadBalEnum::flow_undef {0, "flow-undef"};
const Enum::YLeaf L2FibLoadBalEnum::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf L2FibLoadBalEnum::src_dst_ip {2, "src-dst-ip"};
const Enum::YLeaf L2FibLoadBalEnum::vc {3, "vc"};

const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_none {0, "l2vpn-ad-rt-none"};
const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_as {1, "l2vpn-ad-rt-as"};
const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_4byte_as {2, "l2vpn-ad-rt-4byte-as"};
const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_v4_addr {3, "l2vpn-ad-rt-v4-addr"};
const Enum::YLeaf L2VpnAdRtEnum::es_import {1538, "es-import"};

const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_none {0, "l2vpn-ad-rd-none"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_auto {1, "l2vpn-ad-rd-auto"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_as {2, "l2vpn-ad-rd-as"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_4byte_as {3, "l2vpn-ad-rd-4byte-as"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_v4_addr {4, "l2vpn-ad-rd-v4-addr"};

const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_unresolved {0, "l2vpn-pw-state-unresolved"};
const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_idle {1, "l2vpn-pw-state-idle"};
const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_provisioned {2, "l2vpn-pw-state-provisioned"};
const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_remote_standby {3, "l2vpn-pw-state-remote-standby"};
const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_local_ready {4, "l2vpn-pw-state-local-ready"};
const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_all_ready {5, "l2vpn-pw-state-all-ready"};
const Enum::YLeaf L2VpnPwStateEnum::l2vpn_pw_state_established {6, "l2vpn-pw-state-established"};


}
}

