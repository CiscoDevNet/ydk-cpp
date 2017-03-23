
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

GlobalInterfaceConfiguration::GlobalInterfaceConfiguration()
    :
    link_status{YType::enumeration, "link-status"}
{
    yang_name = "global-interface-configuration"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg";
}

GlobalInterfaceConfiguration::~GlobalInterfaceConfiguration()
{
}

bool GlobalInterfaceConfiguration::has_data() const
{
    return link_status.is_set;
}

bool GlobalInterfaceConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(link_status.operation);
}

std::string GlobalInterfaceConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:global-interface-configuration";

    return path_buffer.str();

}

EntityPath GlobalInterfaceConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GlobalInterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GlobalInterfaceConfiguration::get_children()
{
    return children;
}

void GlobalInterfaceConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-status")
    {
        link_status = value;
    }
}

std::shared_ptr<Entity> GlobalInterfaceConfiguration::clone_ptr() const
{
    return std::make_shared<GlobalInterfaceConfiguration>();
}

std::string GlobalInterfaceConfiguration::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GlobalInterfaceConfiguration::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GlobalInterfaceConfiguration::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InterfaceConfigurations::InterfaceConfigurations()
{
    yang_name = "interface-configurations"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg";
}

InterfaceConfigurations::~InterfaceConfigurations()
{
}

bool InterfaceConfigurations::has_data() const
{
    for (std::size_t index=0; index<interface_configuration.size(); index++)
    {
        if(interface_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::has_operation() const
{
    for (std::size_t index=0; index<interface_configuration.size(); index++)
    {
        if(interface_configuration[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:interface-configurations";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-configuration")
    {
        for(auto const & c : interface_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration>();
        c->parent = this;
        interface_configuration.push_back(std::move(c));
        children[segment_path] = interface_configuration.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::get_children()
{
    for (auto const & c : interface_configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InterfaceConfigurations::clone_ptr() const
{
    return std::make_shared<InterfaceConfigurations>();
}

std::string InterfaceConfigurations::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string InterfaceConfigurations::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function InterfaceConfigurations::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

InterfaceConfigurations::InterfaceConfiguration::InterfaceConfiguration()
    :
    active{YType::str, "active"},
    interface_name{YType::str, "interface-name"},
    bandwidth{YType::uint32, "bandwidth"},
    description{YType::str, "description"},
    interface_mode_non_physical{YType::enumeration, "interface-mode-non-physical"},
    interface_virtual{YType::empty, "interface-virtual"},
    laser_squelch{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch"},
    link_status{YType::empty, "link-status"},
    mac_addr{YType::str, "Cisco-IOS-XR-mdrv-lib-cfg:mac-addr"},
    maintenance_embargo{YType::boolean, "Cisco-IOS-XR-dwdm-ui-cfg:maintenance-embargo"},
    perf_mon_disable{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:perf-mon-disable"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    shutdown{YType::empty, "shutdown"},
    track_name{YType::str, "Cisco-IOS-XR-manageability-object-tracking-cfg:track-name"},
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-cfg:vrf"}
    	,
    aaa_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>())
	,afs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>())
	,atm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>())
	,bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>())
	,bundle(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>())
	,bundle_member(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>())
	,bvi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>())
	,carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>())
	,cdp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>())
	,cisco_ios_xr_ppp_ma_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_fsm_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_ipcp_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp>())
	,cisco_ios_xr_ppp_ma_lcp_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp>())
	,client_port(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort>())
	,dagrs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>())
	,dampening(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>())
	,dwdm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>())
	,encapsulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>())
	,es_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>())
	,ethernet(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>())
	,ethernet_bng(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>())
	,ethernet_control(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>())
	,ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>())
	,ethernet_service(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>())
	,ipv4_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>())
	,ipv4_network_forwarding(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>())
	,ipv4_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>())
	,ipv4arp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>())
	,ipv6_neighbor(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>())
	,ipv6_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>())
	,ipv6_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>())
	,l2_transport(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>())
	,lacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>())
	,lldp(nullptr) // presence node
	,mac_accounting(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>())
	,macsec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>())
	,mlacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>())
	,mte_tunnel_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>())
	,mtus(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>())
	,net_flow(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>())
	,nv_satellite_access(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>())
	,nv_satellite_fabric_link(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>())
	,nv_satellite_fabric_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>())
	,nve(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>())
	,optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>())
	,otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>())
	,pbr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>())
	,performance_management(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>())
	,pppoe(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>())
	,pseudowire_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>())
	,pseudowire_iw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>())
	,service_policies(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>())
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>())
	,ssrp_session(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>())
	,statistics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>())
	,subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>())
	,transport_profile_tunnel(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>())
	,tunnel_ip(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>())
	,tunnel_te_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>())
	,vlan_sub_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>())
	,vlan_trunk_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>())
	,wanphy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>())
{
    aaa_table->parent = this;
    children["aaa-table"] = aaa_table;

    afs->parent = this;
    children["afs"] = afs;

    atm->parent = this;
    children["atm"] = atm;

    bfd->parent = this;
    children["bfd"] = bfd;

    bundle->parent = this;
    children["bundle"] = bundle;

    bundle_member->parent = this;
    children["bundle-member"] = bundle_member;

    bvi->parent = this;
    children["bvi"] = bvi;

    carrier_delay->parent = this;
    children["carrier-delay"] = carrier_delay;

    cdp->parent = this;
    children["cdp"] = cdp;

    cisco_ios_xr_ppp_ma_cfg_ppp->parent = this;
    children["Cisco-IOS-XR-ppp-ma-cfg_ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;

    cisco_ios_xr_ppp_ma_fsm_cfg_ppp->parent = this;
    children["Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;

    cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->parent = this;
    children["Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;

    cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->parent = this;
    children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;

    cisco_ios_xr_ppp_ma_lcp_cfg_ppp->parent = this;
    children["Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp;

    client_port->parent = this;
    children["client-port"] = client_port;

    dagrs->parent = this;
    children["dagrs"] = dagrs;

    dampening->parent = this;
    children["dampening"] = dampening;

    dwdm->parent = this;
    children["dwdm"] = dwdm;

    encapsulation->parent = this;
    children["encapsulation"] = encapsulation;

    es_packet_filter->parent = this;
    children["es-packet-filter"] = es_packet_filter;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    ethernet_bng->parent = this;
    children["ethernet-bng"] = ethernet_bng;

    ethernet_control->parent = this;
    children["ethernet-control"] = ethernet_control;

    ethernet_features->parent = this;
    children["ethernet-features"] = ethernet_features;

    ethernet_service->parent = this;
    children["ethernet-service"] = ethernet_service;

    ipv4_network->parent = this;
    children["ipv4-network"] = ipv4_network;

    ipv4_network_forwarding->parent = this;
    children["ipv4-network-forwarding"] = ipv4_network_forwarding;

    ipv4_packet_filter->parent = this;
    children["ipv4-packet-filter"] = ipv4_packet_filter;

    ipv4arp->parent = this;
    children["ipv4arp"] = ipv4arp;

    ipv6_neighbor->parent = this;
    children["ipv6-neighbor"] = ipv6_neighbor;

    ipv6_network->parent = this;
    children["ipv6-network"] = ipv6_network;

    ipv6_packet_filter->parent = this;
    children["ipv6-packet-filter"] = ipv6_packet_filter;

    l2_transport->parent = this;
    children["l2-transport"] = l2_transport;

    lacp->parent = this;
    children["lacp"] = lacp;

    mac_accounting->parent = this;
    children["mac-accounting"] = mac_accounting;

    macsec->parent = this;
    children["macsec"] = macsec;

    mlacp->parent = this;
    children["mlacp"] = mlacp;

    mte_tunnel_attributes->parent = this;
    children["mte-tunnel-attributes"] = mte_tunnel_attributes;

    mtus->parent = this;
    children["mtus"] = mtus;

    net_flow->parent = this;
    children["net-flow"] = net_flow;

    nv_satellite_access->parent = this;
    children["nv-satellite-access"] = nv_satellite_access;

    nv_satellite_fabric_link->parent = this;
    children["nv-satellite-fabric-link"] = nv_satellite_fabric_link;

    nv_satellite_fabric_network->parent = this;
    children["nv-satellite-fabric-network"] = nv_satellite_fabric_network;

    nve->parent = this;
    children["nve"] = nve;

    optics->parent = this;
    children["optics"] = optics;

    otu->parent = this;
    children["otu"] = otu;

    pbr->parent = this;
    children["pbr"] = pbr;

    performance_management->parent = this;
    children["performance-management"] = performance_management;

    pppoe->parent = this;
    children["pppoe"] = pppoe;

    pseudowire_ether->parent = this;
    children["pseudowire-ether"] = pseudowire_ether;

    pseudowire_iw->parent = this;
    children["pseudowire-iw"] = pseudowire_iw;

    qos->parent = this;
    children["qos"] = qos;

    service_policies->parent = this;
    children["service-policies"] = service_policies;

    span_monitor_sessions->parent = this;
    children["span-monitor-sessions"] = span_monitor_sessions;

    ssrp_session->parent = this;
    children["ssrp-session"] = ssrp_session;

    statistics->parent = this;
    children["statistics"] = statistics;

    subscriber->parent = this;
    children["subscriber"] = subscriber;

    transport_profile_tunnel->parent = this;
    children["transport-profile-tunnel"] = transport_profile_tunnel;

    tunnel_ip->parent = this;
    children["tunnel-ip"] = tunnel_ip;

    tunnel_te_attributes->parent = this;
    children["tunnel-te-attributes"] = tunnel_te_attributes;

    vlan_sub_configuration->parent = this;
    children["vlan-sub-configuration"] = vlan_sub_configuration;

    vlan_trunk_configuration->parent = this;
    children["vlan-trunk-configuration"] = vlan_trunk_configuration;

    wanphy->parent = this;
    children["wanphy"] = wanphy;

    yang_name = "interface-configuration"; yang_parent_name = "interface-configurations";
}

InterfaceConfigurations::InterfaceConfiguration::~InterfaceConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::has_data() const
{
    return active.is_set
	|| interface_name.is_set
	|| bandwidth.is_set
	|| description.is_set
	|| interface_mode_non_physical.is_set
	|| interface_virtual.is_set
	|| laser_squelch.is_set
	|| link_status.is_set
	|| mac_addr.is_set
	|| maintenance_embargo.is_set
	|| perf_mon_disable.is_set
	|| secondary_admin_state.is_set
	|| shutdown.is_set
	|| track_name.is_set
	|| vrf.is_set
	|| (aaa_table !=  nullptr && aaa_table->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (bvi !=  nullptr && bvi->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp->has_data())
	|| (client_port !=  nullptr && client_port->has_data())
	|| (dagrs !=  nullptr && dagrs->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (dwdm !=  nullptr && dwdm->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_data())
	|| (ethernet_control !=  nullptr && ethernet_control->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (ethernet_service !=  nullptr && ethernet_service->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv4arp !=  nullptr && ipv4arp->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (l2_transport !=  nullptr && l2_transport->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (mac_accounting !=  nullptr && mac_accounting->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_data())
	|| (mtus !=  nullptr && mtus->has_data())
	|| (net_flow !=  nullptr && net_flow->has_data())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_data())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_data())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_data())
	|| (nve !=  nullptr && nve->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (performance_management !=  nullptr && performance_management->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (service_policies !=  nullptr && service_policies->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (ssrp_session !=  nullptr && ssrp_session->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_data())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_data())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_data())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_data())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_data())
	|| (wanphy !=  nullptr && wanphy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(interface_name.operation)
	|| is_set(bandwidth.operation)
	|| is_set(description.operation)
	|| is_set(interface_mode_non_physical.operation)
	|| is_set(interface_virtual.operation)
	|| is_set(laser_squelch.operation)
	|| is_set(link_status.operation)
	|| is_set(mac_addr.operation)
	|| is_set(maintenance_embargo.operation)
	|| is_set(perf_mon_disable.operation)
	|| is_set(secondary_admin_state.operation)
	|| is_set(shutdown.operation)
	|| is_set(track_name.operation)
	|| is_set(vrf.operation)
	|| (aaa_table !=  nullptr && aaa_table->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (bvi !=  nullptr && bvi->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp->has_operation())
	|| (client_port !=  nullptr && client_port->has_operation())
	|| (dagrs !=  nullptr && dagrs->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_operation())
	|| (ethernet_control !=  nullptr && ethernet_control->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (ethernet_service !=  nullptr && ethernet_service->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv4arp !=  nullptr && ipv4arp->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (l2_transport !=  nullptr && l2_transport->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (mac_accounting !=  nullptr && mac_accounting->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_operation())
	|| (mtus !=  nullptr && mtus->has_operation())
	|| (net_flow !=  nullptr && net_flow->has_operation())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_operation())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_operation())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_operation())
	|| (nve !=  nullptr && nve->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (performance_management !=  nullptr && performance_management->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (service_policies !=  nullptr && service_policies->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (ssrp_session !=  nullptr && ssrp_session->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_operation())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_operation())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_operation())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_operation())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_operation())
	|| (wanphy !=  nullptr && wanphy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration" <<"[active='" <<active <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-cfg:interface-configurations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (interface_mode_non_physical.is_set || is_set(interface_mode_non_physical.operation)) leaf_name_data.push_back(interface_mode_non_physical.get_name_leafdata());
    if (interface_virtual.is_set || is_set(interface_virtual.operation)) leaf_name_data.push_back(interface_virtual.get_name_leafdata());
    if (laser_squelch.is_set || is_set(laser_squelch.operation)) leaf_name_data.push_back(laser_squelch.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.operation)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (maintenance_embargo.is_set || is_set(maintenance_embargo.operation)) leaf_name_data.push_back(maintenance_embargo.get_name_leafdata());
    if (perf_mon_disable.is_set || is_set(perf_mon_disable.operation)) leaf_name_data.push_back(perf_mon_disable.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.operation)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aaa-table")
    {
        if(aaa_table != nullptr)
        {
            children["aaa-table"] = aaa_table;
        }
        else
        {
            aaa_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>();
            aaa_table->parent = this;
            children["aaa-table"] = aaa_table;
        }
        return children.at("aaa-table");
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "atm")
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
        else
        {
            atm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>();
            atm->parent = this;
            children["atm"] = atm;
        }
        return children.at("atm");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "bundle")
    {
        if(bundle != nullptr)
        {
            children["bundle"] = bundle;
        }
        else
        {
            bundle = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>();
            bundle->parent = this;
            children["bundle"] = bundle;
        }
        return children.at("bundle");
    }

    if(child_yang_name == "bundle-member")
    {
        if(bundle_member != nullptr)
        {
            children["bundle-member"] = bundle_member;
        }
        else
        {
            bundle_member = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>();
            bundle_member->parent = this;
            children["bundle-member"] = bundle_member;
        }
        return children.at("bundle-member");
    }

    if(child_yang_name == "bvi")
    {
        if(bvi != nullptr)
        {
            children["bvi"] = bvi;
        }
        else
        {
            bvi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>();
            bvi->parent = this;
            children["bvi"] = bvi;
        }
        return children.at("bvi");
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay != nullptr)
        {
            children["carrier-delay"] = carrier_delay;
        }
        else
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>();
            carrier_delay->parent = this;
            children["carrier-delay"] = carrier_delay;
        }
        return children.at("carrier-delay");
    }

    if(child_yang_name == "cdp")
    {
        if(cdp != nullptr)
        {
            children["cdp"] = cdp;
        }
        else
        {
            cdp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>();
            cdp->parent = this;
            children["cdp"] = cdp;
        }
        return children.at("cdp");
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-cfg_ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;
        }
        else
        {
            cisco_ios_xr_ppp_ma_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp>();
            cisco_ios_xr_ppp_ma_cfg_ppp->parent = this;
            children["Cisco-IOS-XR-ppp-ma-cfg_ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;
        }
        return children.at("Cisco-IOS-XR-ppp-ma-cfg_ppp");
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
        }
        else
        {
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp>();
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp->parent = this;
            children["Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
        }
        return children.at("Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp");
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
        }
        else
        {
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp>();
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->parent = this;
            children["Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
        }
        return children.at("Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp");
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
        }
        else
        {
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp>();
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->parent = this;
            children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
        }
        return children.at("Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp");
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
        }
        else
        {
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp>();
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp->parent = this;
            children["Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
        }
        return children.at("Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp");
    }

    if(child_yang_name == "client-port")
    {
        if(client_port != nullptr)
        {
            children["client-port"] = client_port;
        }
        else
        {
            client_port = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ClientPort>();
            client_port->parent = this;
            children["client-port"] = client_port;
        }
        return children.at("client-port");
    }

    if(child_yang_name == "dagrs")
    {
        if(dagrs != nullptr)
        {
            children["dagrs"] = dagrs;
        }
        else
        {
            dagrs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>();
            dagrs->parent = this;
            children["dagrs"] = dagrs;
        }
        return children.at("dagrs");
    }

    if(child_yang_name == "dampening")
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening;
        }
        else
        {
            dampening = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>();
            dampening->parent = this;
            children["dampening"] = dampening;
        }
        return children.at("dampening");
    }

    if(child_yang_name == "dwdm")
    {
        if(dwdm != nullptr)
        {
            children["dwdm"] = dwdm;
        }
        else
        {
            dwdm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>();
            dwdm->parent = this;
            children["dwdm"] = dwdm;
        }
        return children.at("dwdm");
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation != nullptr)
        {
            children["encapsulation"] = encapsulation;
        }
        else
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>();
            encapsulation->parent = this;
            children["encapsulation"] = encapsulation;
        }
        return children.at("encapsulation");
    }

    if(child_yang_name == "es-packet-filter")
    {
        if(es_packet_filter != nullptr)
        {
            children["es-packet-filter"] = es_packet_filter;
        }
        else
        {
            es_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>();
            es_packet_filter->parent = this;
            children["es-packet-filter"] = es_packet_filter;
        }
        return children.at("es-packet-filter");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "ethernet-bng")
    {
        if(ethernet_bng != nullptr)
        {
            children["ethernet-bng"] = ethernet_bng;
        }
        else
        {
            ethernet_bng = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>();
            ethernet_bng->parent = this;
            children["ethernet-bng"] = ethernet_bng;
        }
        return children.at("ethernet-bng");
    }

    if(child_yang_name == "ethernet-control")
    {
        if(ethernet_control != nullptr)
        {
            children["ethernet-control"] = ethernet_control;
        }
        else
        {
            ethernet_control = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>();
            ethernet_control->parent = this;
            children["ethernet-control"] = ethernet_control;
        }
        return children.at("ethernet-control");
    }

    if(child_yang_name == "ethernet-features")
    {
        if(ethernet_features != nullptr)
        {
            children["ethernet-features"] = ethernet_features;
        }
        else
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>();
            ethernet_features->parent = this;
            children["ethernet-features"] = ethernet_features;
        }
        return children.at("ethernet-features");
    }

    if(child_yang_name == "ethernet-service")
    {
        if(ethernet_service != nullptr)
        {
            children["ethernet-service"] = ethernet_service;
        }
        else
        {
            ethernet_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>();
            ethernet_service->parent = this;
            children["ethernet-service"] = ethernet_service;
        }
        return children.at("ethernet-service");
    }

    if(child_yang_name == "ipv4-network")
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network;
        }
        else
        {
            ipv4_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>();
            ipv4_network->parent = this;
            children["ipv4-network"] = ipv4_network;
        }
        return children.at("ipv4-network");
    }

    if(child_yang_name == "ipv4-network-forwarding")
    {
        if(ipv4_network_forwarding != nullptr)
        {
            children["ipv4-network-forwarding"] = ipv4_network_forwarding;
        }
        else
        {
            ipv4_network_forwarding = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>();
            ipv4_network_forwarding->parent = this;
            children["ipv4-network-forwarding"] = ipv4_network_forwarding;
        }
        return children.at("ipv4-network-forwarding");
    }

    if(child_yang_name == "ipv4-packet-filter")
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter;
        }
        else
        {
            ipv4_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>();
            ipv4_packet_filter->parent = this;
            children["ipv4-packet-filter"] = ipv4_packet_filter;
        }
        return children.at("ipv4-packet-filter");
    }

    if(child_yang_name == "ipv4arp")
    {
        if(ipv4arp != nullptr)
        {
            children["ipv4arp"] = ipv4arp;
        }
        else
        {
            ipv4arp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>();
            ipv4arp->parent = this;
            children["ipv4arp"] = ipv4arp;
        }
        return children.at("ipv4arp");
    }

    if(child_yang_name == "ipv6-neighbor")
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor;
        }
        else
        {
            ipv6_neighbor = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>();
            ipv6_neighbor->parent = this;
            children["ipv6-neighbor"] = ipv6_neighbor;
        }
        return children.at("ipv6-neighbor");
    }

    if(child_yang_name == "ipv6-network")
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network;
        }
        else
        {
            ipv6_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>();
            ipv6_network->parent = this;
            children["ipv6-network"] = ipv6_network;
        }
        return children.at("ipv6-network");
    }

    if(child_yang_name == "ipv6-packet-filter")
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter;
        }
        else
        {
            ipv6_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>();
            ipv6_packet_filter->parent = this;
            children["ipv6-packet-filter"] = ipv6_packet_filter;
        }
        return children.at("ipv6-packet-filter");
    }

    if(child_yang_name == "l2-transport")
    {
        if(l2_transport != nullptr)
        {
            children["l2-transport"] = l2_transport;
        }
        else
        {
            l2_transport = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>();
            l2_transport->parent = this;
            children["l2-transport"] = l2_transport;
        }
        return children.at("l2-transport");
    }

    if(child_yang_name == "lacp")
    {
        if(lacp != nullptr)
        {
            children["lacp"] = lacp;
        }
        else
        {
            lacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>();
            lacp->parent = this;
            children["lacp"] = lacp;
        }
        return children.at("lacp");
    }

    if(child_yang_name == "lldp")
    {
        if(lldp != nullptr)
        {
            children["lldp"] = lldp;
        }
        else
        {
            lldp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp>();
            lldp->parent = this;
            children["lldp"] = lldp;
        }
        return children.at("lldp");
    }

    if(child_yang_name == "mac-accounting")
    {
        if(mac_accounting != nullptr)
        {
            children["mac-accounting"] = mac_accounting;
        }
        else
        {
            mac_accounting = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>();
            mac_accounting->parent = this;
            children["mac-accounting"] = mac_accounting;
        }
        return children.at("mac-accounting");
    }

    if(child_yang_name == "macsec")
    {
        if(macsec != nullptr)
        {
            children["macsec"] = macsec;
        }
        else
        {
            macsec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>();
            macsec->parent = this;
            children["macsec"] = macsec;
        }
        return children.at("macsec");
    }

    if(child_yang_name == "mlacp")
    {
        if(mlacp != nullptr)
        {
            children["mlacp"] = mlacp;
        }
        else
        {
            mlacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>();
            mlacp->parent = this;
            children["mlacp"] = mlacp;
        }
        return children.at("mlacp");
    }

    if(child_yang_name == "mte-tunnel-attributes")
    {
        if(mte_tunnel_attributes != nullptr)
        {
            children["mte-tunnel-attributes"] = mte_tunnel_attributes;
        }
        else
        {
            mte_tunnel_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>();
            mte_tunnel_attributes->parent = this;
            children["mte-tunnel-attributes"] = mte_tunnel_attributes;
        }
        return children.at("mte-tunnel-attributes");
    }

    if(child_yang_name == "mtus")
    {
        if(mtus != nullptr)
        {
            children["mtus"] = mtus;
        }
        else
        {
            mtus = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>();
            mtus->parent = this;
            children["mtus"] = mtus;
        }
        return children.at("mtus");
    }

    if(child_yang_name == "net-flow")
    {
        if(net_flow != nullptr)
        {
            children["net-flow"] = net_flow;
        }
        else
        {
            net_flow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>();
            net_flow->parent = this;
            children["net-flow"] = net_flow;
        }
        return children.at("net-flow");
    }

    if(child_yang_name == "nv-satellite-access")
    {
        if(nv_satellite_access != nullptr)
        {
            children["nv-satellite-access"] = nv_satellite_access;
        }
        else
        {
            nv_satellite_access = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>();
            nv_satellite_access->parent = this;
            children["nv-satellite-access"] = nv_satellite_access;
        }
        return children.at("nv-satellite-access");
    }

    if(child_yang_name == "nv-satellite-fabric-link")
    {
        if(nv_satellite_fabric_link != nullptr)
        {
            children["nv-satellite-fabric-link"] = nv_satellite_fabric_link;
        }
        else
        {
            nv_satellite_fabric_link = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>();
            nv_satellite_fabric_link->parent = this;
            children["nv-satellite-fabric-link"] = nv_satellite_fabric_link;
        }
        return children.at("nv-satellite-fabric-link");
    }

    if(child_yang_name == "nv-satellite-fabric-network")
    {
        if(nv_satellite_fabric_network != nullptr)
        {
            children["nv-satellite-fabric-network"] = nv_satellite_fabric_network;
        }
        else
        {
            nv_satellite_fabric_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>();
            nv_satellite_fabric_network->parent = this;
            children["nv-satellite-fabric-network"] = nv_satellite_fabric_network;
        }
        return children.at("nv-satellite-fabric-network");
    }

    if(child_yang_name == "nve")
    {
        if(nve != nullptr)
        {
            children["nve"] = nve;
        }
        else
        {
            nve = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>();
            nve->parent = this;
            children["nve"] = nve;
        }
        return children.at("nve");
    }

    if(child_yang_name == "optics")
    {
        if(optics != nullptr)
        {
            children["optics"] = optics;
        }
        else
        {
            optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>();
            optics->parent = this;
            children["optics"] = optics;
        }
        return children.at("optics");
    }

    if(child_yang_name == "otu")
    {
        if(otu != nullptr)
        {
            children["otu"] = otu;
        }
        else
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>();
            otu->parent = this;
            children["otu"] = otu;
        }
        return children.at("otu");
    }

    if(child_yang_name == "pbr")
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr;
        }
        else
        {
            pbr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>();
            pbr->parent = this;
            children["pbr"] = pbr;
        }
        return children.at("pbr");
    }

    if(child_yang_name == "performance-management")
    {
        if(performance_management != nullptr)
        {
            children["performance-management"] = performance_management;
        }
        else
        {
            performance_management = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>();
            performance_management->parent = this;
            children["performance-management"] = performance_management;
        }
        return children.at("performance-management");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
        else
        {
            pppoe = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe;
        }
        return children.at("pppoe");
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
        else
        {
            pseudowire_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>();
            pseudowire_ether->parent = this;
            children["pseudowire-ether"] = pseudowire_ether;
        }
        return children.at("pseudowire-ether");
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
        else
        {
            pseudowire_iw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>();
            pseudowire_iw->parent = this;
            children["pseudowire-iw"] = pseudowire_iw;
        }
        return children.at("pseudowire-iw");
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
        else
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>();
            qos->parent = this;
            children["qos"] = qos;
        }
        return children.at("qos");
    }

    if(child_yang_name == "service-policies")
    {
        if(service_policies != nullptr)
        {
            children["service-policies"] = service_policies;
        }
        else
        {
            service_policies = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>();
            service_policies->parent = this;
            children["service-policies"] = service_policies;
        }
        return children.at("service-policies");
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions;
        }
        else
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>();
            span_monitor_sessions->parent = this;
            children["span-monitor-sessions"] = span_monitor_sessions;
        }
        return children.at("span-monitor-sessions");
    }

    if(child_yang_name == "ssrp-session")
    {
        if(ssrp_session != nullptr)
        {
            children["ssrp-session"] = ssrp_session;
        }
        else
        {
            ssrp_session = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>();
            ssrp_session->parent = this;
            children["ssrp-session"] = ssrp_session;
        }
        return children.at("ssrp-session");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber != nullptr)
        {
            children["subscriber"] = subscriber;
        }
        else
        {
            subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>();
            subscriber->parent = this;
            children["subscriber"] = subscriber;
        }
        return children.at("subscriber");
    }

    if(child_yang_name == "transport-profile-tunnel")
    {
        if(transport_profile_tunnel != nullptr)
        {
            children["transport-profile-tunnel"] = transport_profile_tunnel;
        }
        else
        {
            transport_profile_tunnel = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>();
            transport_profile_tunnel->parent = this;
            children["transport-profile-tunnel"] = transport_profile_tunnel;
        }
        return children.at("transport-profile-tunnel");
    }

    if(child_yang_name == "tunnel-ip")
    {
        if(tunnel_ip != nullptr)
        {
            children["tunnel-ip"] = tunnel_ip;
        }
        else
        {
            tunnel_ip = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>();
            tunnel_ip->parent = this;
            children["tunnel-ip"] = tunnel_ip;
        }
        return children.at("tunnel-ip");
    }

    if(child_yang_name == "tunnel-te-attributes")
    {
        if(tunnel_te_attributes != nullptr)
        {
            children["tunnel-te-attributes"] = tunnel_te_attributes;
        }
        else
        {
            tunnel_te_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>();
            tunnel_te_attributes->parent = this;
            children["tunnel-te-attributes"] = tunnel_te_attributes;
        }
        return children.at("tunnel-te-attributes");
    }

    if(child_yang_name == "vlan-sub-configuration")
    {
        if(vlan_sub_configuration != nullptr)
        {
            children["vlan-sub-configuration"] = vlan_sub_configuration;
        }
        else
        {
            vlan_sub_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>();
            vlan_sub_configuration->parent = this;
            children["vlan-sub-configuration"] = vlan_sub_configuration;
        }
        return children.at("vlan-sub-configuration");
    }

    if(child_yang_name == "vlan-trunk-configuration")
    {
        if(vlan_trunk_configuration != nullptr)
        {
            children["vlan-trunk-configuration"] = vlan_trunk_configuration;
        }
        else
        {
            vlan_trunk_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>();
            vlan_trunk_configuration->parent = this;
            children["vlan-trunk-configuration"] = vlan_trunk_configuration;
        }
        return children.at("vlan-trunk-configuration");
    }

    if(child_yang_name == "wanphy")
    {
        if(wanphy != nullptr)
        {
            children["wanphy"] = wanphy;
        }
        else
        {
            wanphy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>();
            wanphy->parent = this;
            children["wanphy"] = wanphy;
        }
        return children.at("wanphy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::get_children()
{
    if(children.find("aaa-table") == children.end())
    {
        if(aaa_table != nullptr)
        {
            children["aaa-table"] = aaa_table;
        }
    }

    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("atm") == children.end())
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("bundle") == children.end())
    {
        if(bundle != nullptr)
        {
            children["bundle"] = bundle;
        }
    }

    if(children.find("bundle-member") == children.end())
    {
        if(bundle_member != nullptr)
        {
            children["bundle-member"] = bundle_member;
        }
    }

    if(children.find("bvi") == children.end())
    {
        if(bvi != nullptr)
        {
            children["bvi"] = bvi;
        }
    }

    if(children.find("carrier-delay") == children.end())
    {
        if(carrier_delay != nullptr)
        {
            children["carrier-delay"] = carrier_delay;
        }
    }

    if(children.find("cdp") == children.end())
    {
        if(cdp != nullptr)
        {
            children["cdp"] = cdp;
        }
    }

    if(children.find("Cisco-IOS-XR-ppp-ma-cfg_ppp") == children.end())
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-cfg_ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;
        }
    }

    if(children.find("Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp") == children.end())
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
        }
    }

    if(children.find("Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp") == children.end())
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
        }
    }

    if(children.find("Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp") == children.end())
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
        }
    }

    if(children.find("Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp") == children.end())
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp != nullptr)
        {
            children["Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
        }
    }

    if(children.find("client-port") == children.end())
    {
        if(client_port != nullptr)
        {
            children["client-port"] = client_port;
        }
    }

    if(children.find("dagrs") == children.end())
    {
        if(dagrs != nullptr)
        {
            children["dagrs"] = dagrs;
        }
    }

    if(children.find("dampening") == children.end())
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening;
        }
    }

    if(children.find("dwdm") == children.end())
    {
        if(dwdm != nullptr)
        {
            children["dwdm"] = dwdm;
        }
    }

    if(children.find("encapsulation") == children.end())
    {
        if(encapsulation != nullptr)
        {
            children["encapsulation"] = encapsulation;
        }
    }

    if(children.find("es-packet-filter") == children.end())
    {
        if(es_packet_filter != nullptr)
        {
            children["es-packet-filter"] = es_packet_filter;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("ethernet-bng") == children.end())
    {
        if(ethernet_bng != nullptr)
        {
            children["ethernet-bng"] = ethernet_bng;
        }
    }

    if(children.find("ethernet-control") == children.end())
    {
        if(ethernet_control != nullptr)
        {
            children["ethernet-control"] = ethernet_control;
        }
    }

    if(children.find("ethernet-features") == children.end())
    {
        if(ethernet_features != nullptr)
        {
            children["ethernet-features"] = ethernet_features;
        }
    }

    if(children.find("ethernet-service") == children.end())
    {
        if(ethernet_service != nullptr)
        {
            children["ethernet-service"] = ethernet_service;
        }
    }

    if(children.find("ipv4-network") == children.end())
    {
        if(ipv4_network != nullptr)
        {
            children["ipv4-network"] = ipv4_network;
        }
    }

    if(children.find("ipv4-network-forwarding") == children.end())
    {
        if(ipv4_network_forwarding != nullptr)
        {
            children["ipv4-network-forwarding"] = ipv4_network_forwarding;
        }
    }

    if(children.find("ipv4-packet-filter") == children.end())
    {
        if(ipv4_packet_filter != nullptr)
        {
            children["ipv4-packet-filter"] = ipv4_packet_filter;
        }
    }

    if(children.find("ipv4arp") == children.end())
    {
        if(ipv4arp != nullptr)
        {
            children["ipv4arp"] = ipv4arp;
        }
    }

    if(children.find("ipv6-neighbor") == children.end())
    {
        if(ipv6_neighbor != nullptr)
        {
            children["ipv6-neighbor"] = ipv6_neighbor;
        }
    }

    if(children.find("ipv6-network") == children.end())
    {
        if(ipv6_network != nullptr)
        {
            children["ipv6-network"] = ipv6_network;
        }
    }

    if(children.find("ipv6-packet-filter") == children.end())
    {
        if(ipv6_packet_filter != nullptr)
        {
            children["ipv6-packet-filter"] = ipv6_packet_filter;
        }
    }

    if(children.find("l2-transport") == children.end())
    {
        if(l2_transport != nullptr)
        {
            children["l2-transport"] = l2_transport;
        }
    }

    if(children.find("lacp") == children.end())
    {
        if(lacp != nullptr)
        {
            children["lacp"] = lacp;
        }
    }

    if(children.find("lldp") == children.end())
    {
        if(lldp != nullptr)
        {
            children["lldp"] = lldp;
        }
    }

    if(children.find("mac-accounting") == children.end())
    {
        if(mac_accounting != nullptr)
        {
            children["mac-accounting"] = mac_accounting;
        }
    }

    if(children.find("macsec") == children.end())
    {
        if(macsec != nullptr)
        {
            children["macsec"] = macsec;
        }
    }

    if(children.find("mlacp") == children.end())
    {
        if(mlacp != nullptr)
        {
            children["mlacp"] = mlacp;
        }
    }

    if(children.find("mte-tunnel-attributes") == children.end())
    {
        if(mte_tunnel_attributes != nullptr)
        {
            children["mte-tunnel-attributes"] = mte_tunnel_attributes;
        }
    }

    if(children.find("mtus") == children.end())
    {
        if(mtus != nullptr)
        {
            children["mtus"] = mtus;
        }
    }

    if(children.find("net-flow") == children.end())
    {
        if(net_flow != nullptr)
        {
            children["net-flow"] = net_flow;
        }
    }

    if(children.find("nv-satellite-access") == children.end())
    {
        if(nv_satellite_access != nullptr)
        {
            children["nv-satellite-access"] = nv_satellite_access;
        }
    }

    if(children.find("nv-satellite-fabric-link") == children.end())
    {
        if(nv_satellite_fabric_link != nullptr)
        {
            children["nv-satellite-fabric-link"] = nv_satellite_fabric_link;
        }
    }

    if(children.find("nv-satellite-fabric-network") == children.end())
    {
        if(nv_satellite_fabric_network != nullptr)
        {
            children["nv-satellite-fabric-network"] = nv_satellite_fabric_network;
        }
    }

    if(children.find("nve") == children.end())
    {
        if(nve != nullptr)
        {
            children["nve"] = nve;
        }
    }

    if(children.find("optics") == children.end())
    {
        if(optics != nullptr)
        {
            children["optics"] = optics;
        }
    }

    if(children.find("otu") == children.end())
    {
        if(otu != nullptr)
        {
            children["otu"] = otu;
        }
    }

    if(children.find("pbr") == children.end())
    {
        if(pbr != nullptr)
        {
            children["pbr"] = pbr;
        }
    }

    if(children.find("performance-management") == children.end())
    {
        if(performance_management != nullptr)
        {
            children["performance-management"] = performance_management;
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe;
        }
    }

    if(children.find("pseudowire-ether") == children.end())
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
    }

    if(children.find("pseudowire-iw") == children.end())
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
    }

    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
    }

    if(children.find("service-policies") == children.end())
    {
        if(service_policies != nullptr)
        {
            children["service-policies"] = service_policies;
        }
    }

    if(children.find("span-monitor-sessions") == children.end())
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions;
        }
    }

    if(children.find("ssrp-session") == children.end())
    {
        if(ssrp_session != nullptr)
        {
            children["ssrp-session"] = ssrp_session;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("subscriber") == children.end())
    {
        if(subscriber != nullptr)
        {
            children["subscriber"] = subscriber;
        }
    }

    if(children.find("transport-profile-tunnel") == children.end())
    {
        if(transport_profile_tunnel != nullptr)
        {
            children["transport-profile-tunnel"] = transport_profile_tunnel;
        }
    }

    if(children.find("tunnel-ip") == children.end())
    {
        if(tunnel_ip != nullptr)
        {
            children["tunnel-ip"] = tunnel_ip;
        }
    }

    if(children.find("tunnel-te-attributes") == children.end())
    {
        if(tunnel_te_attributes != nullptr)
        {
            children["tunnel-te-attributes"] = tunnel_te_attributes;
        }
    }

    if(children.find("vlan-sub-configuration") == children.end())
    {
        if(vlan_sub_configuration != nullptr)
        {
            children["vlan-sub-configuration"] = vlan_sub_configuration;
        }
    }

    if(children.find("vlan-trunk-configuration") == children.end())
    {
        if(vlan_trunk_configuration != nullptr)
        {
            children["vlan-trunk-configuration"] = vlan_trunk_configuration;
        }
    }

    if(children.find("wanphy") == children.end())
    {
        if(wanphy != nullptr)
        {
            children["wanphy"] = wanphy;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "interface-mode-non-physical")
    {
        interface_mode_non_physical = value;
    }
    if(value_path == "interface-virtual")
    {
        interface_virtual = value;
    }
    if(value_path == "laser-squelch")
    {
        laser_squelch = value;
    }
    if(value_path == "link-status")
    {
        link_status = value;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
    }
    if(value_path == "maintenance-embargo")
    {
        maintenance_embargo = value;
    }
    if(value_path == "perf-mon-disable")
    {
        perf_mon_disable = value;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "track-name")
    {
        track_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dampening::Dampening()
    :
    args{YType::enumeration, "args"},
    half_life{YType::uint32, "half-life"},
    restart_penalty{YType::uint32, "restart-penalty"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"}
{
    yang_name = "dampening"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Dampening::~Dampening()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_data() const
{
    return args.is_set
	|| half_life.is_set
	|| restart_penalty.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(args.operation)
	|| is_set(half_life.operation)
	|| is_set(restart_penalty.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(suppress_threshold.operation)
	|| is_set(suppress_time.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (args.is_set || is_set(args.operation)) leaf_name_data.push_back(args.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dampening::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "args")
    {
        args = value;
    }
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtus()
{
    yang_name = "mtus"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::~Mtus()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_data() const
{
    for (std::size_t index=0; index<mtu.size(); index++)
    {
        if(mtu[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_operation() const
{
    for (std::size_t index=0; index<mtu.size(); index++)
    {
        if(mtu[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtus";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Mtus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mtus' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mtu")
    {
        for(auto const & c : mtu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu>();
        c->parent = this;
        mtu.push_back(std::move(c));
        children[segment_path] = mtu.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Mtus::get_children()
{
    for (auto const & c : mtu)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::Mtu()
    :
    owner{YType::str, "owner"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "mtu"; yang_parent_name = "mtus";
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::~Mtu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_data() const
{
    return owner.is_set
	|| mtu.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_operation() const
{
    return is_set(operation)
	|| is_set(owner.operation)
	|| is_set(mtu.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu" <<"[owner='" <<owner <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mtu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.operation)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "owner")
    {
        owner = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::Encapsulation()
    :
    capsulation_options{YType::int32, "capsulation-options"},
    encapsulation{YType::str, "encapsulation"}
{
    yang_name = "encapsulation"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_data() const
{
    return capsulation_options.is_set
	|| encapsulation.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(capsulation_options.operation)
	|| is_set(encapsulation.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_options.is_set || is_set(capsulation_options.operation)) leaf_name_data.push_back(capsulation_options.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capsulation-options")
    {
        capsulation_options = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::PseudowireEther()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{
    yang_name = "pseudowire-ether"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::~PseudowireEther()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_data() const
{
    return generic_interface_list.is_set
	|| l2_overhead.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_interface_list.operation)
	|| is_set(l2_overhead.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.operation)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.operation)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::PseudowireIw()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{
    yang_name = "pseudowire-iw"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::~PseudowireIw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_data() const
{
    return generic_interface_list.is_set
	|| l2_overhead.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_interface_list.operation)
	|| is_set(l2_overhead.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.operation)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.operation)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bvi::Bvi()
    :
    host_routing{YType::empty, "host-routing"}
{
    yang_name = "bvi"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Bvi::~Bvi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bvi::has_data() const
{
    return host_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bvi::has_operation() const
{
    return is_set(operation)
	|| is_set(host_routing.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:bvi";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bvi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bvi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_routing.is_set || is_set(host_routing.operation)) leaf_name_data.push_back(host_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bvi::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bvi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-routing")
    {
        host_routing = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Transport()
    :
    enabled{YType::empty, "enabled"},
    propagate_remote_status{YType::empty, "Cisco-IOS-XR-l2-eth-infra-cfg:propagate-remote-status"}
    	,
    atm_port_mode_parameters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>())
	,cac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>())
	,l2_ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>())
	,l2_protocols(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>())
	,pac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>())
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>())
{
    atm_port_mode_parameters->parent = this;
    children["atm-port-mode-parameters"] = atm_port_mode_parameters;

    cac->parent = this;
    children["cac"] = cac;

    l2_ethernet_features->parent = this;
    children["l2-ethernet-features"] = l2_ethernet_features;

    l2_protocols->parent = this;
    children["l2-protocols"] = l2_protocols;

    pac->parent = this;
    children["pac"] = pac;

    span_monitor_sessions->parent = this;
    children["span-monitor-sessions"] = span_monitor_sessions;

    yang_name = "l2-transport"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::~L2Transport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_data() const
{
    return enabled.is_set
	|| propagate_remote_status.is_set
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_data())
	|| (l2_protocols !=  nullptr && l2_protocols->has_data())
	|| (pac !=  nullptr && pac->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(propagate_remote_status.operation)
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_operation())
	|| (l2_protocols !=  nullptr && l2_protocols->has_operation())
	|| (pac !=  nullptr && pac->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2-transport";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Transport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (propagate_remote_status.is_set || is_set(propagate_remote_status.operation)) leaf_name_data.push_back(propagate_remote_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atm-port-mode-parameters")
    {
        if(atm_port_mode_parameters != nullptr)
        {
            children["atm-port-mode-parameters"] = atm_port_mode_parameters;
        }
        else
        {
            atm_port_mode_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>();
            atm_port_mode_parameters->parent = this;
            children["atm-port-mode-parameters"] = atm_port_mode_parameters;
        }
        return children.at("atm-port-mode-parameters");
    }

    if(child_yang_name == "cac")
    {
        if(cac != nullptr)
        {
            children["cac"] = cac;
        }
        else
        {
            cac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>();
            cac->parent = this;
            children["cac"] = cac;
        }
        return children.at("cac");
    }

    if(child_yang_name == "l2-ethernet-features")
    {
        if(l2_ethernet_features != nullptr)
        {
            children["l2-ethernet-features"] = l2_ethernet_features;
        }
        else
        {
            l2_ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>();
            l2_ethernet_features->parent = this;
            children["l2-ethernet-features"] = l2_ethernet_features;
        }
        return children.at("l2-ethernet-features");
    }

    if(child_yang_name == "l2-protocols")
    {
        if(l2_protocols != nullptr)
        {
            children["l2-protocols"] = l2_protocols;
        }
        else
        {
            l2_protocols = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>();
            l2_protocols->parent = this;
            children["l2-protocols"] = l2_protocols;
        }
        return children.at("l2-protocols");
    }

    if(child_yang_name == "pac")
    {
        if(pac != nullptr)
        {
            children["pac"] = pac;
        }
        else
        {
            pac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>();
            pac->parent = this;
            children["pac"] = pac;
        }
        return children.at("pac");
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions;
        }
        else
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>();
            span_monitor_sessions->parent = this;
            children["span-monitor-sessions"] = span_monitor_sessions;
        }
        return children.at("span-monitor-sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_children()
{
    if(children.find("atm-port-mode-parameters") == children.end())
    {
        if(atm_port_mode_parameters != nullptr)
        {
            children["atm-port-mode-parameters"] = atm_port_mode_parameters;
        }
    }

    if(children.find("cac") == children.end())
    {
        if(cac != nullptr)
        {
            children["cac"] = cac;
        }
    }

    if(children.find("l2-ethernet-features") == children.end())
    {
        if(l2_ethernet_features != nullptr)
        {
            children["l2-ethernet-features"] = l2_ethernet_features;
        }
    }

    if(children.find("l2-protocols") == children.end())
    {
        if(l2_protocols != nullptr)
        {
            children["l2-protocols"] = l2_protocols;
        }
    }

    if(children.find("pac") == children.end())
    {
        if(pac != nullptr)
        {
            children["pac"] = pac;
        }
    }

    if(children.find("span-monitor-sessions") == children.end())
    {
        if(span_monitor_sessions != nullptr)
        {
            children["span-monitor-sessions"] = span_monitor_sessions;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "propagate-remote-status")
    {
        propagate_remote_status = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocols()
{
    yang_name = "l2-protocols"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::~L2Protocols()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_data() const
{
    for (std::size_t index=0; index<l2_protocol.size(); index++)
    {
        if(l2_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_operation() const
{
    for (std::size_t index=0; index<l2_protocol.size(); index++)
    {
        if(l2_protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocols' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2-protocol")
    {
        for(auto const & c : l2_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol>();
        c->parent = this;
        l2_protocol.push_back(std::move(c));
        children[segment_path] = l2_protocol.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_children()
{
    for (auto const & c : l2_protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::L2Protocol()
    :
    l2_protocol_name{YType::enumeration, "l2-protocol-name"},
    mode{YType::enumeration, "mode"},
    mpls_exp_bits_value{YType::uint32, "mpls-exp-bits-value"}
{
    yang_name = "l2-protocol"; yang_parent_name = "l2-protocols";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::~L2Protocol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_data() const
{
    return l2_protocol_name.is_set
	|| mode.is_set
	|| mpls_exp_bits_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(l2_protocol_name.operation)
	|| is_set(mode.operation)
	|| is_set(mpls_exp_bits_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-protocol" <<"[l2-protocol-name='" <<l2_protocol_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocol' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_protocol_name.is_set || is_set(l2_protocol_name.operation)) leaf_name_data.push_back(l2_protocol_name.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mpls_exp_bits_value.is_set || is_set(mpls_exp_bits_value.operation)) leaf_name_data.push_back(mpls_exp_bits_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2-protocol-name")
    {
        l2_protocol_name = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "mpls-exp-bits-value")
    {
        mpls_exp_bits_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::L2EthernetFeatures()
    :
    egress_filtering{YType::enumeration, "egress-filtering"},
    source_bypass_egress_filtering{YType::empty, "source-bypass-egress-filtering"}
{
    yang_name = "l2-ethernet-features"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::~L2EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_data() const
{
    return egress_filtering.is_set
	|| source_bypass_egress_filtering.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_filtering.operation)
	|| is_set(source_bypass_egress_filtering.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2EthernetFeatures' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering.is_set || is_set(egress_filtering.operation)) leaf_name_data.push_back(egress_filtering.get_name_leafdata());
    if (source_bypass_egress_filtering.is_set || is_set(source_bypass_egress_filtering.operation)) leaf_name_data.push_back(source_bypass_egress_filtering.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-filtering")
    {
        egress_filtering = value;
    }
    if(value_path == "source-bypass-egress-filtering")
    {
        source_bypass_egress_filtering = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::AtmPortModeParameters()
    :
    cell_packing(nullptr) // presence node
{
    yang_name = "atm-port-mode-parameters"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::~AtmPortModeParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_data() const
{
    return (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_operation() const
{
    return is_set(operation)
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm-port-mode-parameters";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmPortModeParameters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
        else
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking>();
            cell_packing->parent = this;
            children["cell-packing"] = cell_packing;
        }
        return children.at("cell-packing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_children()
{
    if(children.find("cell-packing") == children.end())
    {
        if(cell_packing != nullptr)
        {
            children["cell-packing"] = cell_packing;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{
    yang_name = "cell-packing"; yang_parent_name = "atm-port-mode-parameters";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_operation() const
{
    return is_set(operation)
	|| is_set(cell_packing_timer_id.operation)
	|| is_set(maximum_cells_packed.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CellPacking' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.operation)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.operation)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSessions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(std::move(c));
        children[segment_path] = span_monitor_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_children()
{
    for (auto const & c : span_monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    acl{YType::empty, "acl"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSession' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment;
        }
        else
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment>();
            attachment->parent = this;
            children["attachment"] = attachment;
        }
        return children.at("attachment");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_children()
{
    if(children.find("attachment") == children.end())
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"},
    session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attachment' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Pac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>())
{
    qos->parent = this;
    children["qos"] = qos;

    yang_name = "pac"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::~Pac()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:pac";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pac' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
        else
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>();
            qos->parent = this;
            children["qos"] = qos;
        }
        return children.at("qos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_children()
{
    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "qos"; yang_parent_name = "pac";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(std::move(c));
        children[segment_path] = service_policy_qos.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : service_policy_qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    children["subscriber-group-names"] = subscriber_group_names;

    subscriber_parent->parent = this;
    children["subscriber-parent"] = subscriber_parent;

    yang_name = "service-policy-qos"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
        else
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
            subscriber_group_names->parent = this;
            children["subscriber-group-names"] = subscriber_group_names;
        }
        return children.at("subscriber-group-names");
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
        else
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>();
            subscriber_parent->parent = this;
            children["subscriber-parent"] = subscriber_parent;
        }
        return children.at("subscriber-parent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_children()
{
    if(children.find("subscriber-group-names") == children.end())
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
    }

    if(children.find("subscriber-parent") == children.end())
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(std::move(c));
        children[segment_path] = subscriber_group_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children()
{
    for (auto const & c : subscriber_group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(std::move(c));
        children[segment_path] = service_policy_qos.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : service_policy_qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    children["subscriber-group-names"] = subscriber_group_names;

    subscriber_parent->parent = this;
    children["subscriber-parent"] = subscriber_parent;

    yang_name = "service-policy-qos"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
        else
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
            subscriber_group_names->parent = this;
            children["subscriber-group-names"] = subscriber_group_names;
        }
        return children.at("subscriber-group-names");
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
        else
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>();
            subscriber_parent->parent = this;
            children["subscriber-parent"] = subscriber_parent;
        }
        return children.at("subscriber-parent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_children()
{
    if(children.find("subscriber-group-names") == children.end())
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
    }

    if(children.find("subscriber-parent") == children.end())
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(std::move(c));
        children[segment_path] = subscriber_group_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children()
{
    for (auto const & c : subscriber_group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Cac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>())
{
    qos->parent = this;
    children["qos"] = qos;

    yang_name = "cac"; yang_parent_name = "l2-transport";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::~Cac()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:cac";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cac' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
        else
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>();
            qos->parent = this;
            children["qos"] = qos;
        }
        return children.at("qos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_children()
{
    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "qos"; yang_parent_name = "cac";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(std::move(c));
        children[segment_path] = service_policy_qos.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : service_policy_qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    children["subscriber-group-names"] = subscriber_group_names;

    subscriber_parent->parent = this;
    children["subscriber-parent"] = subscriber_parent;

    yang_name = "service-policy-qos"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
        else
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
            subscriber_group_names->parent = this;
            children["subscriber-group-names"] = subscriber_group_names;
        }
        return children.at("subscriber-group-names");
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
        else
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>();
            subscriber_parent->parent = this;
            children["subscriber-parent"] = subscriber_parent;
        }
        return children.at("subscriber-parent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_children()
{
    if(children.find("subscriber-group-names") == children.end())
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
    }

    if(children.find("subscriber-parent") == children.end())
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(std::move(c));
        children[segment_path] = subscriber_group_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children()
{
    for (auto const & c : subscriber_group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(std::move(c));
        children[segment_path] = service_policy_qos.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : service_policy_qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    children["subscriber-group-names"] = subscriber_group_names;

    subscriber_parent->parent = this;
    children["subscriber-parent"] = subscriber_parent;

    yang_name = "service-policy-qos"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
        else
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
            subscriber_group_names->parent = this;
            children["subscriber-group-names"] = subscriber_group_names;
        }
        return children.at("subscriber-group-names");
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
        else
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>();
            subscriber_parent->parent = this;
            children["subscriber-parent"] = subscriber_parent;
        }
        return children.at("subscriber-parent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_children()
{
    if(children.find("subscriber-group-names") == children.end())
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
    }

    if(children.find("subscriber-parent") == children.end())
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(std::move(c));
        children[segment_path] = subscriber_group_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children()
{
    for (auto const & c : subscriber_group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanSubConfiguration()
    :
    vlan_identifier(nullptr) // presence node
{
    yang_name = "vlan-sub-configuration"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::~VlanSubConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_data() const
{
    return (vlan_identifier !=  nullptr && vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::has_operation() const
{
    return is_set(operation)
	|| (vlan_identifier !=  nullptr && vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanSubConfiguration' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-identifier")
    {
        if(vlan_identifier != nullptr)
        {
            children["vlan-identifier"] = vlan_identifier;
        }
        else
        {
            vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier>();
            vlan_identifier->parent = this;
            children["vlan-identifier"] = vlan_identifier;
        }
        return children.at("vlan-identifier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_children()
{
    if(children.find("vlan-identifier") == children.end())
    {
        if(vlan_identifier != nullptr)
        {
            children["vlan-identifier"] = vlan_identifier;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::VlanIdentifier()
    :
    first_tag{YType::uint32, "first-tag"},
    second_tag{YType::str, "second-tag"},
    vlan_type{YType::enumeration, "vlan-type"}
{
    yang_name = "vlan-identifier"; yang_parent_name = "vlan-sub-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::~VlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_data() const
{
    return first_tag.is_set
	|| second_tag.is_set
	|| vlan_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_operation() const
{
    return is_set(operation)
	|| is_set(first_tag.operation)
	|| is_set(second_tag.operation)
	|| is_set(vlan_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-identifier";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanIdentifier' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_tag.is_set || is_set(first_tag.operation)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.operation)) leaf_name_data.push_back(vlan_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-tag")
    {
        first_tag = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::EthernetService()
    :
    encapsulation(nullptr) // presence node
	,local_traffic_default_encapsulation(nullptr) // presence node
	,rewrite(nullptr) // presence node
{
    yang_name = "ethernet-service"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::~EthernetService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_operation() const
{
    return is_set(operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (local_traffic_default_encapsulation !=  nullptr && local_traffic_default_encapsulation->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-service";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetService' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation != nullptr)
        {
            children["encapsulation"] = encapsulation;
        }
        else
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation>();
            encapsulation->parent = this;
            children["encapsulation"] = encapsulation;
        }
        return children.at("encapsulation");
    }

    if(child_yang_name == "local-traffic-default-encapsulation")
    {
        if(local_traffic_default_encapsulation != nullptr)
        {
            children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
        }
        else
        {
            local_traffic_default_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation>();
            local_traffic_default_encapsulation->parent = this;
            children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
        }
        return children.at("local-traffic-default-encapsulation");
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite != nullptr)
        {
            children["rewrite"] = rewrite;
        }
        else
        {
            rewrite = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite>();
            rewrite->parent = this;
            children["rewrite"] = rewrite;
        }
        return children.at("rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_children()
{
    if(children.find("encapsulation") == children.end())
    {
        if(encapsulation != nullptr)
        {
            children["encapsulation"] = encapsulation;
        }
    }

    if(children.find("local-traffic-default-encapsulation") == children.end())
    {
        if(local_traffic_default_encapsulation != nullptr)
        {
            children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
        }
    }

    if(children.find("rewrite") == children.end())
    {
        if(rewrite != nullptr)
        {
            children["rewrite"] = rewrite;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::LocalTrafficDefaultEncapsulation()
    :
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"}
{
    yang_name = "local-traffic-default-encapsulation"; yang_parent_name = "ethernet-service";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::~LocalTrafficDefaultEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_data() const
{
    return inner_vlan_id.is_set
	|| outer_tag_type.is_set
	|| outer_vlan_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(outer_vlan_id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-default-encapsulation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTrafficDefaultEncapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::Encapsulation()
    :
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    exact{YType::empty, "exact"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    outer_range1_high{YType::str, "outer-range1-high"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"}
{
    yang_name = "encapsulation"; yang_parent_name = "ethernet-service";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_data() const
{
    return additional_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range2_high.is_set
	|| additional_range2_low.is_set
	|| additional_range3_high.is_set
	|| additional_range3_low.is_set
	|| additional_range4_high.is_set
	|| additional_range4_low.is_set
	|| additional_range5_high.is_set
	|| additional_range5_low.is_set
	|| additional_range6_high.is_set
	|| additional_range6_low.is_set
	|| additional_range7_high.is_set
	|| additional_range7_low.is_set
	|| additional_range8_high.is_set
	|| additional_range8_low.is_set
	|| exact.is_set
	|| ingress_destination_mac.is_set
	|| ingress_source_mac.is_set
	|| inner_class_of_service.is_set
	|| inner_range1_high.is_set
	|| inner_range1_low.is_set
	|| inner_tag_type.is_set
	|| outer_class_of_service.is_set
	|| outer_range1_high.is_set
	|| outer_range1_low.is_set
	|| outer_tag_type.is_set
	|| payload_ethertype_match.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(additional_range1_high.operation)
	|| is_set(additional_range1_low.operation)
	|| is_set(additional_range2_high.operation)
	|| is_set(additional_range2_low.operation)
	|| is_set(additional_range3_high.operation)
	|| is_set(additional_range3_low.operation)
	|| is_set(additional_range4_high.operation)
	|| is_set(additional_range4_low.operation)
	|| is_set(additional_range5_high.operation)
	|| is_set(additional_range5_low.operation)
	|| is_set(additional_range6_high.operation)
	|| is_set(additional_range6_low.operation)
	|| is_set(additional_range7_high.operation)
	|| is_set(additional_range7_low.operation)
	|| is_set(additional_range8_high.operation)
	|| is_set(additional_range8_low.operation)
	|| is_set(exact.operation)
	|| is_set(ingress_destination_mac.operation)
	|| is_set(ingress_source_mac.operation)
	|| is_set(inner_class_of_service.operation)
	|| is_set(inner_range1_high.operation)
	|| is_set(inner_range1_low.operation)
	|| is_set(inner_tag_type.operation)
	|| is_set(outer_class_of_service.operation)
	|| is_set(outer_range1_high.operation)
	|| is_set(outer_range1_low.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(payload_ethertype_match.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_range1_high.is_set || is_set(additional_range1_high.operation)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.operation)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.operation)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.operation)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.operation)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.operation)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.operation)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.operation)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.operation)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.operation)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.operation)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.operation)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.operation)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.operation)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.operation)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.operation)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.operation)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.operation)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.operation)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.operation)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.operation)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.operation)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.operation)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.operation)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.operation)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.operation)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::Rewrite()
    :
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_tag_value{YType::uint32, "inner-tag-value"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_tag_value{YType::uint32, "outer-tag-value"},
    rewrite_type{YType::enumeration, "rewrite-type"}
{
    yang_name = "rewrite"; yang_parent_name = "ethernet-service";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::~Rewrite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_data() const
{
    return inner_tag_type.is_set
	|| inner_tag_value.is_set
	|| outer_tag_type.is_set
	|| outer_tag_value.is_set
	|| rewrite_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(inner_tag_type.operation)
	|| is_set(inner_tag_value.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(outer_tag_value.operation)
	|| is_set(rewrite_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rewrite' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_tag_type.is_set || is_set(inner_tag_type.operation)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_tag_value.is_set || is_set(inner_tag_value.operation)) leaf_name_data.push_back(inner_tag_value.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_tag_value.is_set || is_set(outer_tag_value.operation)) leaf_name_data.push_back(outer_tag_value.get_name_leafdata());
    if (rewrite_type.is_set || is_set(rewrite_type.operation)) leaf_name_data.push_back(rewrite_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value = value;
    }
    if(value_path == "rewrite-type")
    {
        rewrite_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::EthernetBng()
    :
    ambiguous_encapsulation(nullptr) // presence node
{
    yang_name = "ethernet-bng"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::~EthernetBng()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_data() const
{
    return (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_operation() const
{
    return is_set(operation)
	|| (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetBng' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ambiguous-encapsulation")
    {
        if(ambiguous_encapsulation != nullptr)
        {
            children["ambiguous-encapsulation"] = ambiguous_encapsulation;
        }
        else
        {
            ambiguous_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation>();
            ambiguous_encapsulation->parent = this;
            children["ambiguous-encapsulation"] = ambiguous_encapsulation;
        }
        return children.at("ambiguous-encapsulation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_children()
{
    if(children.find("ambiguous-encapsulation") == children.end())
    {
        if(ambiguous_encapsulation != nullptr)
        {
            children["ambiguous-encapsulation"] = ambiguous_encapsulation;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::AmbiguousEncapsulation()
    :
    additional_range1_high{YType::uint32, "additional-range1-high"},
    additional_range1_low{YType::str, "additional-range1-low"},
    additional_range2_high{YType::uint32, "additional-range2-high"},
    additional_range2_low{YType::str, "additional-range2-low"},
    additional_range3_high{YType::uint32, "additional-range3-high"},
    additional_range3_low{YType::str, "additional-range3-low"},
    additional_range4_high{YType::uint32, "additional-range4-high"},
    additional_range4_low{YType::str, "additional-range4-low"},
    additional_range5_high{YType::uint32, "additional-range5-high"},
    additional_range5_low{YType::str, "additional-range5-low"},
    additional_range6_high{YType::uint32, "additional-range6-high"},
    additional_range6_low{YType::str, "additional-range6-low"},
    additional_range7_high{YType::uint32, "additional-range7-high"},
    additional_range7_low{YType::str, "additional-range7-low"},
    additional_range8_high{YType::uint32, "additional-range8-high"},
    additional_range8_low{YType::str, "additional-range8-low"},
    exact{YType::empty, "exact"},
    ingress_destination_mac{YType::str, "ingress-destination-mac"},
    ingress_source_mac{YType::str, "ingress-source-mac"},
    inner_class_of_service{YType::uint32, "inner-class-of-service"},
    inner_range1_high{YType::uint32, "inner-range1-high"},
    inner_range1_low{YType::str, "inner-range1-low"},
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    outer_class_of_service{YType::uint32, "outer-class-of-service"},
    outer_range1_high{YType::str, "outer-range1-high"},
    outer_range1_low{YType::str, "outer-range1-low"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    payload_ethertype_match{YType::enumeration, "payload-ethertype-match"}
{
    yang_name = "ambiguous-encapsulation"; yang_parent_name = "ethernet-bng";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::~AmbiguousEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_data() const
{
    return additional_range1_high.is_set
	|| additional_range1_low.is_set
	|| additional_range2_high.is_set
	|| additional_range2_low.is_set
	|| additional_range3_high.is_set
	|| additional_range3_low.is_set
	|| additional_range4_high.is_set
	|| additional_range4_low.is_set
	|| additional_range5_high.is_set
	|| additional_range5_low.is_set
	|| additional_range6_high.is_set
	|| additional_range6_low.is_set
	|| additional_range7_high.is_set
	|| additional_range7_low.is_set
	|| additional_range8_high.is_set
	|| additional_range8_low.is_set
	|| exact.is_set
	|| ingress_destination_mac.is_set
	|| ingress_source_mac.is_set
	|| inner_class_of_service.is_set
	|| inner_range1_high.is_set
	|| inner_range1_low.is_set
	|| inner_tag_type.is_set
	|| outer_class_of_service.is_set
	|| outer_range1_high.is_set
	|| outer_range1_low.is_set
	|| outer_tag_type.is_set
	|| payload_ethertype_match.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(additional_range1_high.operation)
	|| is_set(additional_range1_low.operation)
	|| is_set(additional_range2_high.operation)
	|| is_set(additional_range2_low.operation)
	|| is_set(additional_range3_high.operation)
	|| is_set(additional_range3_low.operation)
	|| is_set(additional_range4_high.operation)
	|| is_set(additional_range4_low.operation)
	|| is_set(additional_range5_high.operation)
	|| is_set(additional_range5_low.operation)
	|| is_set(additional_range6_high.operation)
	|| is_set(additional_range6_low.operation)
	|| is_set(additional_range7_high.operation)
	|| is_set(additional_range7_low.operation)
	|| is_set(additional_range8_high.operation)
	|| is_set(additional_range8_low.operation)
	|| is_set(exact.operation)
	|| is_set(ingress_destination_mac.operation)
	|| is_set(ingress_source_mac.operation)
	|| is_set(inner_class_of_service.operation)
	|| is_set(inner_range1_high.operation)
	|| is_set(inner_range1_low.operation)
	|| is_set(inner_tag_type.operation)
	|| is_set(outer_class_of_service.operation)
	|| is_set(outer_range1_high.operation)
	|| is_set(outer_range1_low.operation)
	|| is_set(outer_tag_type.operation)
	|| is_set(payload_ethertype_match.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ambiguous-encapsulation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AmbiguousEncapsulation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_range1_high.is_set || is_set(additional_range1_high.operation)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.operation)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.operation)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.operation)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.operation)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.operation)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.operation)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.operation)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.operation)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.operation)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.operation)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.operation)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.operation)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.operation)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.operation)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.operation)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.operation)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.operation)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.operation)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.operation)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.operation)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.operation)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.operation)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.operation)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.operation)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.operation)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.operation)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::MacAccounting()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{
    yang_name = "mac-accounting"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::~MacAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_data() const
{
    return egress.is_set
	|| ingress.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(egress.operation)
	|| is_set(ingress.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAccounting' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.operation)) leaf_name_data.push_back(ingress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress")
    {
        egress = value;
    }
    if(value_path == "ingress")
    {
        ingress = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EthernetFeatures()
    :
    ether_link_oam_enable{YType::empty, "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam-enable"},
    filtering{YType::enumeration, "filtering"}
    	,
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>())
	,ether_link_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>())
{
    cfm->parent = this;
    children["cfm"] = cfm;

    ether_link_oam->parent = this;
    children["ether-link-oam"] = ether_link_oam;

    yang_name = "ethernet-features"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_data() const
{
    return ether_link_oam_enable.is_set
	|| filtering.is_set
	|| (cfm !=  nullptr && cfm->has_data())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_operation() const
{
    return is_set(operation)
	|| is_set(ether_link_oam_enable.operation)
	|| is_set(filtering.operation)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetFeatures' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_link_oam_enable.is_set || is_set(ether_link_oam_enable.operation)) leaf_name_data.push_back(ether_link_oam_enable.get_name_leafdata());
    if (filtering.is_set || is_set(filtering.operation)) leaf_name_data.push_back(filtering.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cfm")
    {
        if(cfm != nullptr)
        {
            children["cfm"] = cfm;
        }
        else
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>();
            cfm->parent = this;
            children["cfm"] = cfm;
        }
        return children.at("cfm");
    }

    if(child_yang_name == "ether-link-oam")
    {
        if(ether_link_oam != nullptr)
        {
            children["ether-link-oam"] = ether_link_oam;
        }
        else
        {
            ether_link_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>();
            ether_link_oam->parent = this;
            children["ether-link-oam"] = ether_link_oam;
        }
        return children.at("ether-link-oam");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_children()
{
    if(children.find("cfm") == children.end())
    {
        if(cfm != nullptr)
        {
            children["cfm"] = cfm;
        }
    }

    if(children.find("ether-link-oam") == children.end())
    {
        if(ether_link_oam != nullptr)
        {
            children["ether-link-oam"] = ether_link_oam;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-link-oam-enable")
    {
        ether_link_oam_enable = value;
    }
    if(value_path == "filtering")
    {
        filtering = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Cfm()
    :
    ais_up(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>())
	,domains(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>())
{
    ais_up->parent = this;
    children["ais-up"] = ais_up;

    domains->parent = this;
    children["domains"] = domains;

    yang_name = "cfm"; yang_parent_name = "ethernet-features";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_data() const
{
    return (ais_up !=  nullptr && ais_up->has_data())
	|| (domains !=  nullptr && domains->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(operation)
	|| (ais_up !=  nullptr && ais_up->has_operation())
	|| (domains !=  nullptr && domains->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ais-up")
    {
        if(ais_up != nullptr)
        {
            children["ais-up"] = ais_up;
        }
        else
        {
            ais_up = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>();
            ais_up->parent = this;
            children["ais-up"] = ais_up;
        }
        return children.at("ais-up");
    }

    if(child_yang_name == "domains")
    {
        if(domains != nullptr)
        {
            children["domains"] = domains;
        }
        else
        {
            domains = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>();
            domains->parent = this;
            children["domains"] = domains;
        }
        return children.at("domains");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_children()
{
    if(children.find("ais-up") == children.end())
    {
        if(ais_up != nullptr)
        {
            children["ais-up"] = ais_up;
        }
    }

    if(children.find("domains") == children.end())
    {
        if(domains != nullptr)
        {
            children["domains"] = domains;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domains()
{
    yang_name = "domains"; yang_parent_name = "cfm";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domains' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain>();
        c->parent = this;
        domain.push_back(std::move(c));
        children[segment_path] = domain.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_children()
{
    for (auto const & c : domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Domain()
    :
    domain{YType::str, "domain"}
    	,
    mep(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>())
{
    mep->parent = this;
    children["mep"] = mep;

    yang_name = "domain"; yang_parent_name = "domains";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::~Domain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_data() const
{
    return domain.is_set
	|| (mep !=  nullptr && mep->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| (mep !=  nullptr && mep->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain='" <<domain <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mep")
    {
        if(mep != nullptr)
        {
            children["mep"] = mep;
        }
        else
        {
            mep = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>();
            mep->parent = this;
            children["mep"] = mep;
        }
        return children.at("mep");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_children()
{
    if(children.find("mep") == children.end())
    {
        if(mep != nullptr)
        {
            children["mep"] = mep;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::Mep()
    :
    cos{YType::uint32, "cos"}
    	,
    loss_measurement_counters(nullptr) // presence node
	,mep_properties(nullptr) // presence node
	,sla_profile_target_mep_ids(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>())
{
    sla_profile_target_mep_ids->parent = this;
    children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;

    yang_name = "mep"; yang_parent_name = "domain";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::~Mep()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_data() const
{
    return cos.is_set
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_data())
	|| (mep_properties !=  nullptr && mep_properties->has_data())
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| (loss_measurement_counters !=  nullptr && loss_measurement_counters->has_operation())
	|| (mep_properties !=  nullptr && mep_properties->has_operation())
	|| (sla_profile_target_mep_ids !=  nullptr && sla_profile_target_mep_ids->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mep' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "loss-measurement-counters")
    {
        if(loss_measurement_counters != nullptr)
        {
            children["loss-measurement-counters"] = loss_measurement_counters;
        }
        else
        {
            loss_measurement_counters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters>();
            loss_measurement_counters->parent = this;
            children["loss-measurement-counters"] = loss_measurement_counters;
        }
        return children.at("loss-measurement-counters");
    }

    if(child_yang_name == "mep-properties")
    {
        if(mep_properties != nullptr)
        {
            children["mep-properties"] = mep_properties;
        }
        else
        {
            mep_properties = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties>();
            mep_properties->parent = this;
            children["mep-properties"] = mep_properties;
        }
        return children.at("mep-properties");
    }

    if(child_yang_name == "sla-profile-target-mep-ids")
    {
        if(sla_profile_target_mep_ids != nullptr)
        {
            children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
        }
        else
        {
            sla_profile_target_mep_ids = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>();
            sla_profile_target_mep_ids->parent = this;
            children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
        }
        return children.at("sla-profile-target-mep-ids");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_children()
{
    if(children.find("loss-measurement-counters") == children.end())
    {
        if(loss_measurement_counters != nullptr)
        {
            children["loss-measurement-counters"] = loss_measurement_counters;
        }
    }

    if(children.find("mep-properties") == children.end())
    {
        if(mep_properties != nullptr)
        {
            children["mep-properties"] = mep_properties;
        }
    }

    if(children.find("sla-profile-target-mep-ids") == children.end())
    {
        if(sla_profile_target_mep_ids != nullptr)
        {
            children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepIds()
{
    yang_name = "sla-profile-target-mep-ids"; yang_parent_name = "mep";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::~SlaProfileTargetMepIds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_data() const
{
    for (std::size_t index=0; index<sla_profile_target_mac_address.size(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mep_id.size(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_operation() const
{
    for (std::size_t index=0; index<sla_profile_target_mac_address.size(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mep_id.size(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-ids";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaProfileTargetMepIds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sla-profile-target-mac-address")
    {
        for(auto const & c : sla_profile_target_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress>();
        c->parent = this;
        sla_profile_target_mac_address.push_back(std::move(c));
        children[segment_path] = sla_profile_target_mac_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sla-profile-target-mep-id")
    {
        for(auto const & c : sla_profile_target_mep_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId>();
        c->parent = this;
        sla_profile_target_mep_id.push_back(std::move(c));
        children[segment_path] = sla_profile_target_mep_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_children()
{
    for (auto const & c : sla_profile_target_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sla_profile_target_mep_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::SlaProfileTargetMepId()
    :
    profile{YType::str, "profile"},
    target_mep_id{YType::uint32, "target-mep-id"}
{
    yang_name = "sla-profile-target-mep-id"; yang_parent_name = "sla-profile-target-mep-ids";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::~SlaProfileTargetMepId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_data() const
{
    return profile.is_set
	|| target_mep_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| is_set(target_mep_id.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-id" <<"[profile='" <<profile <<"']" <<"[target-mep-id='" <<target_mep_id <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaProfileTargetMepId' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.operation)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::SlaProfileTargetMacAddress()
    :
    profile{YType::str, "profile"},
    target_mac_address{YType::str, "target-mac-address"}
{
    yang_name = "sla-profile-target-mac-address"; yang_parent_name = "sla-profile-target-mep-ids";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::~SlaProfileTargetMacAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_data() const
{
    return profile.is_set
	|| target_mac_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| is_set(target_mac_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mac-address" <<"[profile='" <<profile <<"']" <<"[target-mac-address='" <<target_mac_address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlaProfileTargetMacAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.operation)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::MepProperties()
    :
    mep_id{YType::uint32, "mep-id"},
    service{YType::str, "service"}
{
    yang_name = "mep-properties"; yang_parent_name = "mep";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::~MepProperties()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_data() const
{
    return mep_id.is_set
	|| service.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_operation() const
{
    return is_set(operation)
	|| is_set(mep_id.operation)
	|| is_set(service.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-properties";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MepProperties' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::LossMeasurementCounters()
    :
    cfg_type{YType::enumeration, "cfg-type"},
    cos0{YType::uint32, "cos0"},
    cos1{YType::uint32, "cos1"},
    cos2{YType::uint32, "cos2"},
    cos3{YType::uint32, "cos3"},
    cos4{YType::uint32, "cos4"},
    cos5{YType::uint32, "cos5"},
    cos6{YType::uint32, "cos6"},
    cos7{YType::uint32, "cos7"}
{
    yang_name = "loss-measurement-counters"; yang_parent_name = "mep";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::~LossMeasurementCounters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_data() const
{
    return cfg_type.is_set
	|| cos0.is_set
	|| cos1.is_set
	|| cos2.is_set
	|| cos3.is_set
	|| cos4.is_set
	|| cos5.is_set
	|| cos6.is_set
	|| cos7.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(cfg_type.operation)
	|| is_set(cos0.operation)
	|| is_set(cos1.operation)
	|| is_set(cos2.operation)
	|| is_set(cos3.operation)
	|| is_set(cos4.operation)
	|| is_set(cos5.operation)
	|| is_set(cos6.operation)
	|| is_set(cos7.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-measurement-counters";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LossMeasurementCounters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfg_type.is_set || is_set(cfg_type.operation)) leaf_name_data.push_back(cfg_type.get_name_leafdata());
    if (cos0.is_set || is_set(cos0.operation)) leaf_name_data.push_back(cos0.get_name_leafdata());
    if (cos1.is_set || is_set(cos1.operation)) leaf_name_data.push_back(cos1.get_name_leafdata());
    if (cos2.is_set || is_set(cos2.operation)) leaf_name_data.push_back(cos2.get_name_leafdata());
    if (cos3.is_set || is_set(cos3.operation)) leaf_name_data.push_back(cos3.get_name_leafdata());
    if (cos4.is_set || is_set(cos4.operation)) leaf_name_data.push_back(cos4.get_name_leafdata());
    if (cos5.is_set || is_set(cos5.operation)) leaf_name_data.push_back(cos5.get_name_leafdata());
    if (cos6.is_set || is_set(cos6.operation)) leaf_name_data.push_back(cos6.get_name_leafdata());
    if (cos7.is_set || is_set(cos7.operation)) leaf_name_data.push_back(cos7.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cfg-type")
    {
        cfg_type = value;
    }
    if(value_path == "cos0")
    {
        cos0 = value;
    }
    if(value_path == "cos1")
    {
        cos1 = value;
    }
    if(value_path == "cos2")
    {
        cos2 = value;
    }
    if(value_path == "cos3")
    {
        cos3 = value;
    }
    if(value_path == "cos4")
    {
        cos4 = value;
    }
    if(value_path == "cos5")
    {
        cos5 = value;
    }
    if(value_path == "cos6")
    {
        cos6 = value;
    }
    if(value_path == "cos7")
    {
        cos7 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::AisUp()
    :
    transmission(nullptr) // presence node
{
    yang_name = "ais-up"; yang_parent_name = "cfm";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::~AisUp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_data() const
{
    return (transmission !=  nullptr && transmission->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_operation() const
{
    return is_set(operation)
	|| (transmission !=  nullptr && transmission->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais-up";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AisUp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transmission")
    {
        if(transmission != nullptr)
        {
            children["transmission"] = transmission;
        }
        else
        {
            transmission = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission>();
            transmission->parent = this;
            children["transmission"] = transmission;
        }
        return children.at("transmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_children()
{
    if(children.find("transmission") == children.end())
    {
        if(transmission != nullptr)
        {
            children["transmission"] = transmission;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::Transmission()
    :
    ais_interval{YType::enumeration, "ais-interval"},
    cos{YType::uint32, "cos"}
{
    yang_name = "transmission"; yang_parent_name = "ais-up";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::~Transmission()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_data() const
{
    return ais_interval.is_set
	|| cos.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_operation() const
{
    return is_set(operation)
	|| is_set(ais_interval.operation)
	|| is_set(cos.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmission' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.operation)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-interval")
    {
        ais_interval = value;
    }
    if(value_path == "cos")
    {
        cos = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::EtherLinkOam()
    :
    hello_interval{YType::enumeration, "hello-interval"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    profile_name{YType::str, "profile-name"},
    remote_loopback{YType::boolean, "remote-loopback"},
    timeout{YType::uint32, "timeout"},
    udlf{YType::boolean, "udlf"}
    	,
    action(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>())
	,link_monitoring(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>())
	,require_remote(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>())
{
    action->parent = this;
    children["action"] = action;

    link_monitoring->parent = this;
    children["link-monitoring"] = link_monitoring;

    require_remote->parent = this;
    children["require-remote"] = require_remote;

    yang_name = "ether-link-oam"; yang_parent_name = "ethernet-features";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::~EtherLinkOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_data() const
{
    return hello_interval.is_set
	|| mib_retrieval.is_set
	|| mode.is_set
	|| profile_name.is_set
	|| remote_loopback.is_set
	|| timeout.is_set
	|| udlf.is_set
	|| (action !=  nullptr && action->has_data())
	|| (link_monitoring !=  nullptr && link_monitoring->has_data())
	|| (require_remote !=  nullptr && require_remote->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_interval.operation)
	|| is_set(mib_retrieval.operation)
	|| is_set(mode.operation)
	|| is_set(profile_name.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(timeout.operation)
	|| is_set(udlf.operation)
	|| (action !=  nullptr && action->has_operation())
	|| (link_monitoring !=  nullptr && link_monitoring->has_operation())
	|| (require_remote !=  nullptr && require_remote->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherLinkOam' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.operation)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.operation)) leaf_name_data.push_back(udlf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action")
    {
        if(action != nullptr)
        {
            children["action"] = action;
        }
        else
        {
            action = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>();
            action->parent = this;
            children["action"] = action;
        }
        return children.at("action");
    }

    if(child_yang_name == "link-monitoring")
    {
        if(link_monitoring != nullptr)
        {
            children["link-monitoring"] = link_monitoring;
        }
        else
        {
            link_monitoring = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>();
            link_monitoring->parent = this;
            children["link-monitoring"] = link_monitoring;
        }
        return children.at("link-monitoring");
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote != nullptr)
        {
            children["require-remote"] = require_remote;
        }
        else
        {
            require_remote = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>();
            require_remote->parent = this;
            children["require-remote"] = require_remote;
        }
        return children.at("require-remote");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_children()
{
    if(children.find("action") == children.end())
    {
        if(action != nullptr)
        {
            children["action"] = action;
        }
    }

    if(children.find("link-monitoring") == children.end())
    {
        if(link_monitoring != nullptr)
        {
            children["link-monitoring"] = link_monitoring;
        }
    }

    if(children.find("require-remote") == children.end())
    {
        if(require_remote != nullptr)
        {
            children["require-remote"] = require_remote;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "udlf")
    {
        udlf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::Action()
    :
    capabilities_conflict{YType::enumeration, "capabilities-conflict"},
    critical_event{YType::enumeration, "critical-event"},
    discovery_timeout{YType::enumeration, "discovery-timeout"},
    dying_gasp{YType::enumeration, "dying-gasp"},
    high_threshold{YType::enumeration, "high-threshold"},
    link_fault{YType::enumeration, "link-fault"},
    remote_loopback{YType::enumeration, "remote-loopback"},
    session_down{YType::enumeration, "session-down"},
    session_up{YType::enumeration, "session-up"},
    wiring_conflict{YType::enumeration, "wiring-conflict"}
{
    yang_name = "action"; yang_parent_name = "ether-link-oam";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::~Action()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_data() const
{
    return capabilities_conflict.is_set
	|| critical_event.is_set
	|| discovery_timeout.is_set
	|| dying_gasp.is_set
	|| high_threshold.is_set
	|| link_fault.is_set
	|| remote_loopback.is_set
	|| session_down.is_set
	|| session_up.is_set
	|| wiring_conflict.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities_conflict.operation)
	|| is_set(critical_event.operation)
	|| is_set(discovery_timeout.operation)
	|| is_set(dying_gasp.operation)
	|| is_set(high_threshold.operation)
	|| is_set(link_fault.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(session_down.operation)
	|| is_set(session_up.operation)
	|| is_set(wiring_conflict.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_conflict.is_set || is_set(capabilities_conflict.operation)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.operation)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.operation)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.operation)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.operation)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.operation)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.operation)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.operation)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "session-down")
    {
        session_down = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::RequireRemote()
    :
    link_monitoring{YType::boolean, "link-monitoring"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"}
{
    yang_name = "require-remote"; yang_parent_name = "ether-link-oam";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::~RequireRemote()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_data() const
{
    return link_monitoring.is_set
	|| mib_retrieval.is_set
	|| mode.is_set
	|| remote_loopback.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_operation() const
{
    return is_set(operation)
	|| is_set(link_monitoring.operation)
	|| is_set(mib_retrieval.operation)
	|| is_set(mode.operation)
	|| is_set(remote_loopback.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RequireRemote' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_monitoring.is_set || is_set(link_monitoring.operation)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.operation)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::LinkMonitoring()
    :
    monitoring{YType::boolean, "monitoring"}
    	,
    frame(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>())
	,frame_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>())
	,frame_seconds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>())
	,symbol_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>())
{
    frame->parent = this;
    children["frame"] = frame;

    frame_period->parent = this;
    children["frame-period"] = frame_period;

    frame_seconds->parent = this;
    children["frame-seconds"] = frame_seconds;

    symbol_period->parent = this;
    children["symbol-period"] = symbol_period;

    yang_name = "link-monitoring"; yang_parent_name = "ether-link-oam";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::~LinkMonitoring()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_data() const
{
    return monitoring.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_operation() const
{
    return is_set(operation)
	|| is_set(monitoring.operation)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitoring";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkMonitoring' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.operation)) leaf_name_data.push_back(monitoring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frame")
    {
        if(frame != nullptr)
        {
            children["frame"] = frame;
        }
        else
        {
            frame = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>();
            frame->parent = this;
            children["frame"] = frame;
        }
        return children.at("frame");
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period != nullptr)
        {
            children["frame-period"] = frame_period;
        }
        else
        {
            frame_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>();
            frame_period->parent = this;
            children["frame-period"] = frame_period;
        }
        return children.at("frame-period");
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds != nullptr)
        {
            children["frame-seconds"] = frame_seconds;
        }
        else
        {
            frame_seconds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>();
            frame_seconds->parent = this;
            children["frame-seconds"] = frame_seconds;
        }
        return children.at("frame-seconds");
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period != nullptr)
        {
            children["symbol-period"] = symbol_period;
        }
        else
        {
            symbol_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>();
            symbol_period->parent = this;
            children["symbol-period"] = symbol_period;
        }
        return children.at("symbol-period");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_children()
{
    if(children.find("frame") == children.end())
    {
        if(frame != nullptr)
        {
            children["frame"] = frame;
        }
    }

    if(children.find("frame-period") == children.end())
    {
        if(frame_period != nullptr)
        {
            children["frame-period"] = frame_period;
        }
    }

    if(children.find("frame-seconds") == children.end())
    {
        if(frame_seconds != nullptr)
        {
            children["frame-seconds"] = frame_seconds;
        }
    }

    if(children.find("symbol-period") == children.end())
    {
        if(symbol_period != nullptr)
        {
            children["symbol-period"] = symbol_period;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitoring")
    {
        monitoring = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::SymbolPeriod()
    :
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;
    children["threshold"] = threshold;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::~SymbolPeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (window !=  nullptr && window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SymbolPeriod' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
        else
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold;
        }
        return children.at("threshold");
    }

    if(child_yang_name == "window")
    {
        if(window != nullptr)
        {
            children["window"] = window;
        }
        else
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window>();
            window->parent = this;
            children["window"] = window;
        }
        return children.at("window");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
    }

    if(children.find("window") == children.end())
    {
        if(window != nullptr)
        {
            children["window"] = window;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{
    yang_name = "window"; yang_parent_name = "symbol-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_data() const
{
    return multiplier.is_set
	|| units.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier.operation)
	|| is_set(units.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{
    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier_high.operation)
	|| is_set(multiplier_low.operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation)
	|| is_set(units.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.operation)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.operation)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::FramePeriod()
    :
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;
    children["threshold"] = threshold;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::~FramePeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (window !=  nullptr && window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramePeriod' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
        else
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold;
        }
        return children.at("threshold");
    }

    if(child_yang_name == "window")
    {
        if(window != nullptr)
        {
            children["window"] = window;
        }
        else
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window>();
            window->parent = this;
            children["window"] = window;
        }
        return children.at("window");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
    }

    if(children.find("window") == children.end())
    {
        if(window != nullptr)
        {
            children["window"] = window;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{
    yang_name = "window"; yang_parent_name = "frame-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_data() const
{
    return multiplier.is_set
	|| units.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier.operation)
	|| is_set(units.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{
    yang_name = "threshold"; yang_parent_name = "frame-period";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier_high.operation)
	|| is_set(multiplier_low.operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation)
	|| is_set(units.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.operation)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.operation)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
    if(value_path == "units")
    {
        units = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::FrameSeconds()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>())
{
    threshold->parent = this;
    children["threshold"] = threshold;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::~FrameSeconds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameSeconds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
        else
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold;
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::Threshold()
    :
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Frame()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>())
{
    threshold->parent = this;
    children["threshold"] = threshold;

    yang_name = "frame"; yang_parent_name = "link-monitoring";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::~Frame()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frame' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
        else
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold;
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(multiplier_high.operation)
	|| is_set(multiplier_low.operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.operation)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.operation)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{
    yang_name = "carrier-delay"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_data() const
{
    return carrier_delay_down.is_set
	|| carrier_delay_up.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(carrier_delay_down.operation)
	|| is_set(carrier_delay_up.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CarrierDelay' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.operation)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.operation)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanTrunkConfiguration()
    :
    tunneling_ethertype{YType::enumeration, "tunneling-ethertype"}
    	,
    native_vlan_identifier(nullptr) // presence node
{
    yang_name = "vlan-trunk-configuration"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::~VlanTrunkConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_data() const
{
    return tunneling_ethertype.is_set
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(tunneling_ethertype.operation)
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanTrunkConfiguration' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunneling_ethertype.is_set || is_set(tunneling_ethertype.operation)) leaf_name_data.push_back(tunneling_ethertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "native-vlan-identifier")
    {
        if(native_vlan_identifier != nullptr)
        {
            children["native-vlan-identifier"] = native_vlan_identifier;
        }
        else
        {
            native_vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier>();
            native_vlan_identifier->parent = this;
            children["native-vlan-identifier"] = native_vlan_identifier;
        }
        return children.at("native-vlan-identifier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_children()
{
    if(children.find("native-vlan-identifier") == children.end())
    {
        if(native_vlan_identifier != nullptr)
        {
            children["native-vlan-identifier"] = native_vlan_identifier;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::NativeVlanIdentifier()
    :
    vlan_identifier{YType::uint32, "vlan-identifier"},
    vlan_type{YType::enumeration, "vlan-type"}
{
    yang_name = "native-vlan-identifier"; yang_parent_name = "vlan-trunk-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::~NativeVlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_data() const
{
    return vlan_identifier.is_set
	|| vlan_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_identifier.operation)
	|| is_set(vlan_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-vlan-identifier";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NativeVlanIdentifier' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_identifier.is_set || is_set(vlan_identifier.operation)) leaf_name_data.push_back(vlan_identifier.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.operation)) leaf_name_data.push_back(vlan_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-identifier")
    {
        vlan_identifier = value;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>())
{
    service_policy->parent = this;
    children["service-policy"] = service_policy;

    yang_name = "pbr"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::~Pbr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_in.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-cfg:pbr";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Pbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbr' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.operation)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy;
        }
        else
        {
            service_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy;
        }
        return children.at("service-policy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Pbr::get_children()
{
    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{
    yang_name = "service-policy"; yang_parent_name = "pbr";
}

InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Dwdm()
    :
    enable_vtxp{YType::boolean, "enable-vtxp"},
    laser{YType::empty, "laser"},
    loopback{YType::enumeration, "loopback"},
    network_connection_id{YType::str, "network-connection-id"},
    network_port_id{YType::str, "network-port-id"},
    rx_threshold{YType::int32, "rx-threshold"},
    transmit_power{YType::int32, "transmit-power"},
    transport_admin_state{YType::enumeration, "transport-admin-state"}
    	,
    g709(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>())
	,network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>())
	,wavelength(nullptr) // presence node
{
    g709->parent = this;
    children["g709"] = g709;

    network_srlgs->parent = this;
    children["network-srlgs"] = network_srlgs;

    yang_name = "dwdm"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::~Dwdm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_data() const
{
    return enable_vtxp.is_set
	|| laser.is_set
	|| loopback.is_set
	|| network_connection_id.is_set
	|| network_port_id.is_set
	|| rx_threshold.is_set
	|| transmit_power.is_set
	|| transport_admin_state.is_set
	|| (g709 !=  nullptr && g709->has_data())
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (wavelength !=  nullptr && wavelength->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_vtxp.operation)
	|| is_set(laser.operation)
	|| is_set(loopback.operation)
	|| is_set(network_connection_id.operation)
	|| is_set(network_port_id.operation)
	|| is_set(rx_threshold.operation)
	|| is_set(transmit_power.operation)
	|| is_set(transport_admin_state.operation)
	|| (g709 !=  nullptr && g709->has_operation())
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (wavelength !=  nullptr && wavelength->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-cfg:dwdm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dwdm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_vtxp.is_set || is_set(enable_vtxp.operation)) leaf_name_data.push_back(enable_vtxp.get_name_leafdata());
    if (laser.is_set || is_set(laser.operation)) leaf_name_data.push_back(laser.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (network_connection_id.is_set || is_set(network_connection_id.operation)) leaf_name_data.push_back(network_connection_id.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.operation)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.operation)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.operation)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.operation)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709")
    {
        if(g709 != nullptr)
        {
            children["g709"] = g709;
        }
        else
        {
            g709 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>();
            g709->parent = this;
            children["g709"] = g709;
        }
        return children.at("g709");
    }

    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs != nullptr)
        {
            children["network-srlgs"] = network_srlgs;
        }
        else
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>();
            network_srlgs->parent = this;
            children["network-srlgs"] = network_srlgs;
        }
        return children.at("network-srlgs");
    }

    if(child_yang_name == "wavelength")
    {
        if(wavelength != nullptr)
        {
            children["wavelength"] = wavelength;
        }
        else
        {
            wavelength = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength>();
            wavelength->parent = this;
            children["wavelength"] = wavelength;
        }
        return children.at("wavelength");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_children()
{
    if(children.find("g709") == children.end())
    {
        if(g709 != nullptr)
        {
            children["g709"] = g709;
        }
    }

    if(children.find("network-srlgs") == children.end())
    {
        if(network_srlgs != nullptr)
        {
            children["network-srlgs"] = network_srlgs;
        }
    }

    if(children.find("wavelength") == children.end())
    {
        if(wavelength != nullptr)
        {
            children["wavelength"] = wavelength;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp = value;
    }
    if(value_path == "laser")
    {
        laser = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id = value;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlgs()
{
    yang_name = "network-srlgs"; yang_parent_name = "dwdm";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-srlg")
    {
        for(auto const & c : network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(std::move(c));
        children[segment_path] = network_srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_children()
{
    for (auto const & c : network_srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{
    yang_name = "network-srlg"; yang_parent_name = "network-srlgs";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg1.operation)
	|| is_set(srlg2.operation)
	|| is_set(srlg3.operation)
	|| is_set(srlg4.operation)
	|| is_set(srlg5.operation)
	|| is_set(srlg6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlg' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.operation)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.operation)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.operation)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.operation)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.operation)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.operation)) leaf_name_data.push_back(srlg6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::G709()
    :
    bdi_to_gais{YType::empty, "bdi-to-gais"},
    enable{YType::boolean, "enable"},
    framing{YType::enumeration, "framing"},
    proactive{YType::enumeration, "proactive"},
    proactive_logging_file{YType::str, "proactive-logging-file"},
    tim_to_gais{YType::empty, "tim-to-gais"},
    tti_processing{YType::empty, "tti-processing"}
    	,
    fec(nullptr) // presence node
	,odu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>())
	,otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>())
	,prbs(nullptr) // presence node
{
    odu->parent = this;
    children["odu"] = odu;

    otu->parent = this;
    children["otu"] = otu;

    yang_name = "g709"; yang_parent_name = "dwdm";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::~G709()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_data() const
{
    return bdi_to_gais.is_set
	|| enable.is_set
	|| framing.is_set
	|| proactive.is_set
	|| proactive_logging_file.is_set
	|| tim_to_gais.is_set
	|| tti_processing.is_set
	|| (fec !=  nullptr && fec->has_data())
	|| (odu !=  nullptr && odu->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (prbs !=  nullptr && prbs->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_operation() const
{
    return is_set(operation)
	|| is_set(bdi_to_gais.operation)
	|| is_set(enable.operation)
	|| is_set(framing.operation)
	|| is_set(proactive.operation)
	|| is_set(proactive_logging_file.operation)
	|| is_set(tim_to_gais.operation)
	|| is_set(tti_processing.operation)
	|| (fec !=  nullptr && fec->has_operation())
	|| (odu !=  nullptr && odu->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'G709' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdi_to_gais.is_set || is_set(bdi_to_gais.operation)) leaf_name_data.push_back(bdi_to_gais.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (framing.is_set || is_set(framing.operation)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (proactive.is_set || is_set(proactive.operation)) leaf_name_data.push_back(proactive.get_name_leafdata());
    if (proactive_logging_file.is_set || is_set(proactive_logging_file.operation)) leaf_name_data.push_back(proactive_logging_file.get_name_leafdata());
    if (tim_to_gais.is_set || is_set(tim_to_gais.operation)) leaf_name_data.push_back(tim_to_gais.get_name_leafdata());
    if (tti_processing.is_set || is_set(tti_processing.operation)) leaf_name_data.push_back(tti_processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    if(child_yang_name == "odu")
    {
        if(odu != nullptr)
        {
            children["odu"] = odu;
        }
        else
        {
            odu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>();
            odu->parent = this;
            children["odu"] = odu;
        }
        return children.at("odu");
    }

    if(child_yang_name == "otu")
    {
        if(otu != nullptr)
        {
            children["otu"] = otu;
        }
        else
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>();
            otu->parent = this;
            children["otu"] = otu;
        }
        return children.at("otu");
    }

    if(child_yang_name == "prbs")
    {
        if(prbs != nullptr)
        {
            children["prbs"] = prbs;
        }
        else
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs>();
            prbs->parent = this;
            children["prbs"] = prbs;
        }
        return children.at("prbs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    if(children.find("odu") == children.end())
    {
        if(odu != nullptr)
        {
            children["odu"] = odu;
        }
    }

    if(children.find("otu") == children.end())
    {
        if(otu != nullptr)
        {
            children["otu"] = otu;
        }
    }

    if(children.find("prbs") == children.end())
    {
        if(prbs != nullptr)
        {
            children["prbs"] = prbs;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "framing")
    {
        framing = value;
    }
    if(value_path == "proactive")
    {
        proactive = value;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file = value;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais = value;
    }
    if(value_path == "tti-processing")
    {
        tti_processing = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::Odu()
    :
    odu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>())
	,odu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>())
	,odu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>())
	,odu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>())
{
    odu_expected_tti->parent = this;
    children["odu-expected-tti"] = odu_expected_tti;

    odu_reports->parent = this;
    children["odu-reports"] = odu_reports;

    odu_thresholds->parent = this;
    children["odu-thresholds"] = odu_thresholds;

    odu_tx_tti->parent = this;
    children["odu-tx-tti"] = odu_tx_tti;

    yang_name = "odu"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::~Odu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_data() const
{
    return (odu_expected_tti !=  nullptr && odu_expected_tti->has_data())
	|| (odu_reports !=  nullptr && odu_reports->has_data())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_data())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_operation() const
{
    return is_set(operation)
	|| (odu_expected_tti !=  nullptr && odu_expected_tti->has_operation())
	|| (odu_reports !=  nullptr && odu_reports->has_operation())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_operation())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-expected-tti")
    {
        if(odu_expected_tti != nullptr)
        {
            children["odu-expected-tti"] = odu_expected_tti;
        }
        else
        {
            odu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>();
            odu_expected_tti->parent = this;
            children["odu-expected-tti"] = odu_expected_tti;
        }
        return children.at("odu-expected-tti");
    }

    if(child_yang_name == "odu-reports")
    {
        if(odu_reports != nullptr)
        {
            children["odu-reports"] = odu_reports;
        }
        else
        {
            odu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>();
            odu_reports->parent = this;
            children["odu-reports"] = odu_reports;
        }
        return children.at("odu-reports");
    }

    if(child_yang_name == "odu-thresholds")
    {
        if(odu_thresholds != nullptr)
        {
            children["odu-thresholds"] = odu_thresholds;
        }
        else
        {
            odu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>();
            odu_thresholds->parent = this;
            children["odu-thresholds"] = odu_thresholds;
        }
        return children.at("odu-thresholds");
    }

    if(child_yang_name == "odu-tx-tti")
    {
        if(odu_tx_tti != nullptr)
        {
            children["odu-tx-tti"] = odu_tx_tti;
        }
        else
        {
            odu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>();
            odu_tx_tti->parent = this;
            children["odu-tx-tti"] = odu_tx_tti;
        }
        return children.at("odu-tx-tti");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_children()
{
    if(children.find("odu-expected-tti") == children.end())
    {
        if(odu_expected_tti != nullptr)
        {
            children["odu-expected-tti"] = odu_expected_tti;
        }
    }

    if(children.find("odu-reports") == children.end())
    {
        if(odu_reports != nullptr)
        {
            children["odu-reports"] = odu_reports;
        }
    }

    if(children.find("odu-thresholds") == children.end())
    {
        if(odu_thresholds != nullptr)
        {
            children["odu-thresholds"] = odu_thresholds;
        }
    }

    if(children.find("odu-tx-tti") == children.end())
    {
        if(odu_tx_tti != nullptr)
        {
            children["odu-tx-tti"] = odu_tx_tti;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReports()
{
    yang_name = "odu-reports"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::~OduReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_data() const
{
    for (std::size_t index=0; index<odu_report.size(); index++)
    {
        if(odu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_operation() const
{
    for (std::size_t index=0; index<odu_report.size(); index++)
    {
        if(odu_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-report")
    {
        for(auto const & c : odu_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport>();
        c->parent = this;
        odu_report.push_back(std::move(c));
        children[segment_path] = odu_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_children()
{
    for (auto const & c : odu_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::OduReport()
    :
    alarm{YType::enumeration, "alarm"}
{
    yang_name = "odu-report"; yang_parent_name = "odu-reports";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::~OduReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_data() const
{
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-report" <<"[alarm='" <<alarm <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.operation)) leaf_name_data.push_back(alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm")
    {
        alarm = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThresholds()
{
    yang_name = "odu-thresholds"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::~OduThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_data() const
{
    for (std::size_t index=0; index<odu_threshold.size(); index++)
    {
        if(odu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_operation() const
{
    for (std::size_t index=0; index<odu_threshold.size(); index++)
    {
        if(odu_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-threshold")
    {
        for(auto const & c : odu_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold>();
        c->parent = this;
        odu_threshold.push_back(std::move(c));
        children[segment_path] = odu_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_children()
{
    for (auto const & c : odu_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::OduThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "odu-threshold"; yang_parent_name = "odu-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::~OduThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_data() const
{
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-threshold" <<"[threshold='" <<threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::OduExpectedTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "odu-expected-tti"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::~OduExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-expected-tti";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduExpectedTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::OduTxTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "odu-tx-tti"; yang_parent_name = "odu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::~OduTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-tx-tti";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduTxTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Otu()
    :
    frr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>())
	,otu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>())
	,otu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>())
	,otu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>())
	,otu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>())
{
    frr->parent = this;
    children["frr"] = frr;

    otu_expected_tti->parent = this;
    children["otu-expected-tti"] = otu_expected_tti;

    otu_reports->parent = this;
    children["otu-reports"] = otu_reports;

    otu_thresholds->parent = this;
    children["otu-thresholds"] = otu_thresholds;

    otu_tx_tti->parent = this;
    children["otu-tx-tti"] = otu_tx_tti;

    yang_name = "otu"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_data() const
{
    return (frr !=  nullptr && frr->has_data())
	|| (otu_expected_tti !=  nullptr && otu_expected_tti->has_data())
	|| (otu_reports !=  nullptr && otu_reports->has_data())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_data())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_operation() const
{
    return is_set(operation)
	|| (frr !=  nullptr && frr->has_operation())
	|| (otu_expected_tti !=  nullptr && otu_expected_tti->has_operation())
	|| (otu_reports !=  nullptr && otu_reports->has_operation())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_operation())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr")
    {
        if(frr != nullptr)
        {
            children["frr"] = frr;
        }
        else
        {
            frr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>();
            frr->parent = this;
            children["frr"] = frr;
        }
        return children.at("frr");
    }

    if(child_yang_name == "otu-expected-tti")
    {
        if(otu_expected_tti != nullptr)
        {
            children["otu-expected-tti"] = otu_expected_tti;
        }
        else
        {
            otu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>();
            otu_expected_tti->parent = this;
            children["otu-expected-tti"] = otu_expected_tti;
        }
        return children.at("otu-expected-tti");
    }

    if(child_yang_name == "otu-reports")
    {
        if(otu_reports != nullptr)
        {
            children["otu-reports"] = otu_reports;
        }
        else
        {
            otu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>();
            otu_reports->parent = this;
            children["otu-reports"] = otu_reports;
        }
        return children.at("otu-reports");
    }

    if(child_yang_name == "otu-thresholds")
    {
        if(otu_thresholds != nullptr)
        {
            children["otu-thresholds"] = otu_thresholds;
        }
        else
        {
            otu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>();
            otu_thresholds->parent = this;
            children["otu-thresholds"] = otu_thresholds;
        }
        return children.at("otu-thresholds");
    }

    if(child_yang_name == "otu-tx-tti")
    {
        if(otu_tx_tti != nullptr)
        {
            children["otu-tx-tti"] = otu_tx_tti;
        }
        else
        {
            otu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>();
            otu_tx_tti->parent = this;
            children["otu-tx-tti"] = otu_tx_tti;
        }
        return children.at("otu-tx-tti");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_children()
{
    if(children.find("frr") == children.end())
    {
        if(frr != nullptr)
        {
            children["frr"] = frr;
        }
    }

    if(children.find("otu-expected-tti") == children.end())
    {
        if(otu_expected_tti != nullptr)
        {
            children["otu-expected-tti"] = otu_expected_tti;
        }
    }

    if(children.find("otu-reports") == children.end())
    {
        if(otu_reports != nullptr)
        {
            children["otu-reports"] = otu_reports;
        }
    }

    if(children.find("otu-thresholds") == children.end())
    {
        if(otu_thresholds != nullptr)
        {
            children["otu-thresholds"] = otu_thresholds;
        }
    }

    if(children.find("otu-tx-tti") == children.end())
    {
        if(otu_tx_tti != nullptr)
        {
            children["otu-tx-tti"] = otu_tx_tti;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::OtuExpectedTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otu-expected-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::~OtuExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-expected-tti";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuExpectedTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThresholds()
{
    yang_name = "otu-thresholds"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::~OtuThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_data() const
{
    for (std::size_t index=0; index<otu_threshold.size(); index++)
    {
        if(otu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_operation() const
{
    for (std::size_t index=0; index<otu_threshold.size(); index++)
    {
        if(otu_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-threshold")
    {
        for(auto const & c : otu_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold>();
        c->parent = this;
        otu_threshold.push_back(std::move(c));
        children[segment_path] = otu_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_children()
{
    for (auto const & c : otu_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::OtuThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{
    yang_name = "otu-threshold"; yang_parent_name = "otu-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::~OtuThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_data() const
{
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-threshold" <<"[threshold='" <<threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::Frr()
    :
    revert_threshold(nullptr) // presence node
	,revert_window(nullptr) // presence node
	,trigger_threshold(nullptr) // presence node
	,trigger_window(nullptr) // presence node
{
    yang_name = "frr"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::~Frr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_data() const
{
    return (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_operation() const
{
    return is_set(operation)
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frr' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold != nullptr)
        {
            children["revert-threshold"] = revert_threshold;
        }
        else
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold>();
            revert_threshold->parent = this;
            children["revert-threshold"] = revert_threshold;
        }
        return children.at("revert-threshold");
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window != nullptr)
        {
            children["revert-window"] = revert_window;
        }
        else
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow>();
            revert_window->parent = this;
            children["revert-window"] = revert_window;
        }
        return children.at("revert-window");
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold != nullptr)
        {
            children["trigger-threshold"] = trigger_threshold;
        }
        else
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold>();
            trigger_threshold->parent = this;
            children["trigger-threshold"] = trigger_threshold;
        }
        return children.at("trigger-threshold");
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window != nullptr)
        {
            children["trigger-window"] = trigger_window;
        }
        else
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow>();
            trigger_window->parent = this;
            children["trigger-window"] = trigger_window;
        }
        return children.at("trigger-window");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_children()
{
    if(children.find("revert-threshold") == children.end())
    {
        if(revert_threshold != nullptr)
        {
            children["revert-threshold"] = revert_threshold;
        }
    }

    if(children.find("revert-window") == children.end())
    {
        if(revert_window != nullptr)
        {
            children["revert-window"] = revert_window;
        }
    }

    if(children.find("trigger-threshold") == children.end())
    {
        if(trigger_threshold != nullptr)
        {
            children["trigger-threshold"] = trigger_threshold;
        }
    }

    if(children.find("trigger-window") == children.end())
    {
        if(trigger_window != nullptr)
        {
            children["trigger-window"] = trigger_window;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::TriggerWindow()
    :
    dummy{YType::uint32, "dummy"},
    window{YType::uint32, "window"}
{
    yang_name = "trigger-window"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_data() const
{
    return dummy.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::RevertThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{
    yang_name = "revert-threshold"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_data() const
{
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ber_base.operation)
	|| is_set(ber_power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.operation)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.operation)) leaf_name_data.push_back(ber_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::TriggerThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{
    yang_name = "trigger-threshold"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_data() const
{
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ber_base.operation)
	|| is_set(ber_power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.operation)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.operation)) leaf_name_data.push_back(ber_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::RevertWindow()
    :
    dummy{YType::uint32, "dummy"},
    window{YType::uint32, "window"}
{
    yang_name = "revert-window"; yang_parent_name = "frr";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_data() const
{
    return dummy.is_set
	|| window.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation)
	|| is_set(window.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReports()
{
    yang_name = "otu-reports"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::~OtuReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_data() const
{
    for (std::size_t index=0; index<otu_report.size(); index++)
    {
        if(otu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_operation() const
{
    for (std::size_t index=0; index<otu_report.size(); index++)
    {
        if(otu_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-report")
    {
        for(auto const & c : otu_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport>();
        c->parent = this;
        otu_report.push_back(std::move(c));
        children[segment_path] = otu_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_children()
{
    for (auto const & c : otu_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::OtuReport()
    :
    alarm{YType::enumeration, "alarm"}
{
    yang_name = "otu-report"; yang_parent_name = "otu-reports";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::~OtuReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_data() const
{
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-report" <<"[alarm='" <<alarm <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.operation)) leaf_name_data.push_back(alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm")
    {
        alarm = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::OtuTxTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otu-tx-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::~OtuTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_data() const
{
    return ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_operation() const
{
    return is_set(operation)
	|| is_set(ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-tx-tti";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuTxTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.operation)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::Prbs()
    :
    prbs_mode{YType::enumeration, "prbs-mode"},
    prbs_pattern{YType::enumeration, "prbs-pattern"}
{
    yang_name = "prbs"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_data() const
{
    return prbs_mode.is_set
	|| prbs_pattern.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_operation() const
{
    return is_set(operation)
	|| is_set(prbs_mode.operation)
	|| is_set(prbs_pattern.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prbs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_mode.is_set || is_set(prbs_mode.operation)) leaf_name_data.push_back(prbs_mode.get_name_leafdata());
    if (prbs_pattern.is_set || is_set(prbs_pattern.operation)) leaf_name_data.push_back(prbs_pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode = value;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::Fec()
    :
    efec_mode{YType::enumeration, "efec-mode"},
    fec_mode{YType::enumeration, "fec-mode"}
{
    yang_name = "fec"; yang_parent_name = "g709";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::~Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_data() const
{
    return efec_mode.is_set
	|| fec_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(efec_mode.operation)
	|| is_set(fec_mode.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efec_mode.is_set || is_set(efec_mode.operation)) leaf_name_data.push_back(efec_mode.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.operation)) leaf_name_data.push_back(fec_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "efec-mode")
    {
        efec_mode = value;
    }
    if(value_path == "fec-mode")
    {
        fec_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::Wavelength()
    :
    prog_frequency{YType::str, "prog-frequency"},
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_number{YType::enumeration, "wave-channel-number"}
{
    yang_name = "wavelength"; yang_parent_name = "dwdm";
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::~Wavelength()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_data() const
{
    return prog_frequency.is_set
	|| wave_channel.is_set
	|| wave_channel_number.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(prog_frequency.operation)
	|| is_set(wave_channel.operation)
	|| is_set(wave_channel_number.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wavelength";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wavelength' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prog_frequency.is_set || is_set(prog_frequency.operation)) leaf_name_data.push_back(prog_frequency.get_name_leafdata());
    if (wave_channel.is_set || is_set(wave_channel.operation)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_number.is_set || is_set(wave_channel_number.operation)) leaf_name_data.push_back(wave_channel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prog-frequency")
    {
        prog_frequency = value;
    }
    if(value_path == "wave-channel")
    {
        wave_channel = value;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::Ethernet()
    :
    auto_negotiation{YType::enumeration, "auto-negotiation"},
    duplex{YType::enumeration, "duplex"},
    flow_control{YType::enumeration, "flow-control"},
    forward_error_correction{YType::enumeration, "forward-error-correction"},
    inter_packet_gap{YType::enumeration, "inter-packet-gap"},
    loopback{YType::enumeration, "loopback"},
    priority_flow_control{YType::enumeration, "priority-flow-control"},
    speed{YType::enumeration, "speed"}
    	,
    carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>())
	,signal_degrade_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>())
	,signal_fail_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>())
{
    carrier_delay->parent = this;
    children["carrier-delay"] = carrier_delay;

    signal_degrade_bit_error_rate->parent = this;
    children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;

    signal_fail_bit_error_rate->parent = this;
    children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;

    yang_name = "ethernet"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_data() const
{
    return auto_negotiation.is_set
	|| duplex.is_set
	|| flow_control.is_set
	|| forward_error_correction.is_set
	|| inter_packet_gap.is_set
	|| loopback.is_set
	|| priority_flow_control.is_set
	|| speed.is_set
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_data())
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_negotiation.operation)
	|| is_set(duplex.operation)
	|| is_set(flow_control.operation)
	|| is_set(forward_error_correction.operation)
	|| is_set(inter_packet_gap.operation)
	|| is_set(loopback.operation)
	|| is_set(priority_flow_control.operation)
	|| is_set(speed.operation)
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_operation())
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-cfg:ethernet";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiation.is_set || is_set(auto_negotiation.operation)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (flow_control.is_set || is_set(flow_control.operation)) leaf_name_data.push_back(flow_control.get_name_leafdata());
    if (forward_error_correction.is_set || is_set(forward_error_correction.operation)) leaf_name_data.push_back(forward_error_correction.get_name_leafdata());
    if (inter_packet_gap.is_set || is_set(inter_packet_gap.operation)) leaf_name_data.push_back(inter_packet_gap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (priority_flow_control.is_set || is_set(priority_flow_control.operation)) leaf_name_data.push_back(priority_flow_control.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay != nullptr)
        {
            children["carrier-delay"] = carrier_delay;
        }
        else
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>();
            carrier_delay->parent = this;
            children["carrier-delay"] = carrier_delay;
        }
        return children.at("carrier-delay");
    }

    if(child_yang_name == "signal-degrade-bit-error-rate")
    {
        if(signal_degrade_bit_error_rate != nullptr)
        {
            children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
        }
        else
        {
            signal_degrade_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>();
            signal_degrade_bit_error_rate->parent = this;
            children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
        }
        return children.at("signal-degrade-bit-error-rate");
    }

    if(child_yang_name == "signal-fail-bit-error-rate")
    {
        if(signal_fail_bit_error_rate != nullptr)
        {
            children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
        }
        else
        {
            signal_fail_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>();
            signal_fail_bit_error_rate->parent = this;
            children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
        }
        return children.at("signal-fail-bit-error-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_children()
{
    if(children.find("carrier-delay") == children.end())
    {
        if(carrier_delay != nullptr)
        {
            children["carrier-delay"] = carrier_delay;
        }
    }

    if(children.find("signal-degrade-bit-error-rate") == children.end())
    {
        if(signal_degrade_bit_error_rate != nullptr)
        {
            children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
        }
    }

    if(children.find("signal-fail-bit-error-rate") == children.end())
    {
        if(signal_fail_bit_error_rate != nullptr)
        {
            children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "flow-control")
    {
        flow_control = value;
    }
    if(value_path == "forward-error-correction")
    {
        forward_error_correction = value;
    }
    if(value_path == "inter-packet-gap")
    {
        inter_packet_gap = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "priority-flow-control")
    {
        priority_flow_control = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::SignalFailBitErrorRate()
    :
    signal_fail_report_disable{YType::empty, "signal-fail-report-disable"},
    signal_fail_threshold{YType::uint32, "signal-fail-threshold"},
    signal_remote_fault{YType::empty, "signal-remote-fault"}
{
    yang_name = "signal-fail-bit-error-rate"; yang_parent_name = "ethernet";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::~SignalFailBitErrorRate()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_data() const
{
    return signal_fail_report_disable.is_set
	|| signal_fail_threshold.is_set
	|| signal_remote_fault.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_operation() const
{
    return is_set(operation)
	|| is_set(signal_fail_report_disable.operation)
	|| is_set(signal_fail_threshold.operation)
	|| is_set(signal_remote_fault.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-fail-bit-error-rate";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalFailBitErrorRate' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_fail_report_disable.is_set || is_set(signal_fail_report_disable.operation)) leaf_name_data.push_back(signal_fail_report_disable.get_name_leafdata());
    if (signal_fail_threshold.is_set || is_set(signal_fail_threshold.operation)) leaf_name_data.push_back(signal_fail_threshold.get_name_leafdata());
    if (signal_remote_fault.is_set || is_set(signal_remote_fault.operation)) leaf_name_data.push_back(signal_remote_fault.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "signal-fail-report-disable")
    {
        signal_fail_report_disable = value;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold = value;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::SignalDegradeBitErrorRate()
    :
    signal_degrade_report{YType::empty, "signal-degrade-report"},
    signal_degrade_threshold{YType::uint32, "signal-degrade-threshold"}
{
    yang_name = "signal-degrade-bit-error-rate"; yang_parent_name = "ethernet";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::~SignalDegradeBitErrorRate()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_data() const
{
    return signal_degrade_report.is_set
	|| signal_degrade_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_operation() const
{
    return is_set(operation)
	|| is_set(signal_degrade_report.operation)
	|| is_set(signal_degrade_threshold.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-degrade-bit-error-rate";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalDegradeBitErrorRate' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_degrade_report.is_set || is_set(signal_degrade_report.operation)) leaf_name_data.push_back(signal_degrade_report.get_name_leafdata());
    if (signal_degrade_threshold.is_set || is_set(signal_degrade_threshold.operation)) leaf_name_data.push_back(signal_degrade_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "signal-degrade-report")
    {
        signal_degrade_report = value;
    }
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{
    yang_name = "carrier-delay"; yang_parent_name = "ethernet";
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_data() const
{
    return carrier_delay_down.is_set
	|| carrier_delay_up.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(carrier_delay_down.operation)
	|| is_set(carrier_delay_up.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "carrier-delay";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CarrierDelay' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.operation)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.operation)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::CiscoIosXrPppMaFsmCfg_Ppp()
    :
    fsm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm>())
{
    fsm->parent = this;
    children["fsm"] = fsm;

    yang_name = "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::~CiscoIosXrPppMaFsmCfg_Ppp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::has_data() const
{
    return (fsm !=  nullptr && fsm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::has_operation() const
{
    return is_set(operation)
	|| (fsm !=  nullptr && fsm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-fsm-cfg:Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXrPppMaFsmCfg_Ppp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fsm")
    {
        if(fsm != nullptr)
        {
            children["fsm"] = fsm;
        }
        else
        {
            fsm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm>();
            fsm->parent = this;
            children["fsm"] = fsm;
        }
        return children.at("fsm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::get_children()
{
    if(children.find("fsm") == children.end())
    {
        if(fsm != nullptr)
        {
            children["fsm"] = fsm;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::Fsm()
    :
    max_consecutive_conf_naks{YType::uint32, "max-consecutive-conf-naks"},
    max_unacknowledged_conf_requests{YType::uint32, "max-unacknowledged-conf-requests"},
    max_unacknowledged_term_requests{YType::uint32, "max-unacknowledged-term-requests"},
    retry_timeout{YType::uint32, "retry-timeout"}
{
    yang_name = "fsm"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::~Fsm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::has_data() const
{
    return max_consecutive_conf_naks.is_set
	|| max_unacknowledged_conf_requests.is_set
	|| max_unacknowledged_term_requests.is_set
	|| retry_timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::has_operation() const
{
    return is_set(operation)
	|| is_set(max_consecutive_conf_naks.operation)
	|| is_set(max_unacknowledged_conf_requests.operation)
	|| is_set(max_unacknowledged_term_requests.operation)
	|| is_set(retry_timeout.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fsm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_consecutive_conf_naks.is_set || is_set(max_consecutive_conf_naks.operation)) leaf_name_data.push_back(max_consecutive_conf_naks.get_name_leafdata());
    if (max_unacknowledged_conf_requests.is_set || is_set(max_unacknowledged_conf_requests.operation)) leaf_name_data.push_back(max_unacknowledged_conf_requests.get_name_leafdata());
    if (max_unacknowledged_term_requests.is_set || is_set(max_unacknowledged_term_requests.operation)) leaf_name_data.push_back(max_unacknowledged_term_requests.get_name_leafdata());
    if (retry_timeout.is_set || is_set(retry_timeout.operation)) leaf_name_data.push_back(retry_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaFsmCfg_Ppp::Fsm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks = value;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests = value;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests = value;
    }
    if(value_path == "retry-timeout")
    {
        retry_timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Afs::~Afs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.size(); index++)
    {
        if(af_topology_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.size(); index++)
    {
        if(af_topology_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:afs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "af-topology-name")
    {
        for(auto const & c : af_topology_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName>();
        c->parent = this;
        af_topology_name.push_back(std::move(c));
        children[segment_path] = af_topology_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : af_topology_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "afs";
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::~Af()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::AfTopologyName()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
{
    yang_name = "af-topology-name"; yang_parent_name = "afs";
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::~AfTopologyName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-topology-name" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']" <<"[topology-name='" <<topology_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfTopologyName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Nve()
    :
    overlay_encapsulation{YType::enumeration, "overlay-encapsulation"},
    source_interface{YType::str, "source-interface"},
    vx_lan_udp_port{YType::enumeration, "vx-lan-udp-port"}
    	,
    anycast(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>())
	,member_vnis(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>())
{
    anycast->parent = this;
    children["anycast"] = anycast;

    member_vnis->parent = this;
    children["member-vnis"] = member_vnis;

    redundancy->parent = this;
    children["redundancy"] = redundancy;

    yang_name = "nve"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::~Nve()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_data() const
{
    return overlay_encapsulation.is_set
	|| source_interface.is_set
	|| vx_lan_udp_port.is_set
	|| (anycast !=  nullptr && anycast->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::has_operation() const
{
    return is_set(operation)
	|| is_set(overlay_encapsulation.operation)
	|| is_set(source_interface.operation)
	|| is_set(vx_lan_udp_port.operation)
	|| (anycast !=  nullptr && anycast->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-cfg:nve";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nve' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overlay_encapsulation.is_set || is_set(overlay_encapsulation.operation)) leaf_name_data.push_back(overlay_encapsulation.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vx_lan_udp_port.is_set || is_set(vx_lan_udp_port.operation)) leaf_name_data.push_back(vx_lan_udp_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "anycast")
    {
        if(anycast != nullptr)
        {
            children["anycast"] = anycast;
        }
        else
        {
            anycast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast>();
            anycast->parent = this;
            children["anycast"] = anycast;
        }
        return children.at("anycast");
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis != nullptr)
        {
            children["member-vnis"] = member_vnis;
        }
        else
        {
            member_vnis = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis>();
            member_vnis->parent = this;
            children["member-vnis"] = member_vnis;
        }
        return children.at("member-vnis");
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
        else
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy;
        }
        return children.at("redundancy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::get_children()
{
    if(children.find("anycast") == children.end())
    {
        if(anycast != nullptr)
        {
            children["anycast"] = anycast;
        }
    }

    if(children.find("member-vnis") == children.end())
    {
        if(member_vnis != nullptr)
        {
            children["member-vnis"] = member_vnis;
        }
    }

    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "overlay-encapsulation")
    {
        overlay_encapsulation = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "vx-lan-udp-port")
    {
        vx_lan_udp_port = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::Anycast()
    :
    source_interface{YType::str, "source-interface"},
    sync_group{YType::str, "sync-group"}
{
    yang_name = "anycast"; yang_parent_name = "nve";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::~Anycast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_data() const
{
    return source_interface.is_set
	|| sync_group.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| is_set(sync_group.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Anycast' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (sync_group.is_set || is_set(sync_group.operation)) leaf_name_data.push_back(sync_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "sync-group")
    {
        sync_group = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    backbone_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>())
	,backbone_vx_lan(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>())
{
    backbone_mpls->parent = this;
    children["backbone-mpls"] = backbone_mpls;

    backbone_vx_lan->parent = this;
    children["backbone-vx-lan"] = backbone_vx_lan;

    yang_name = "redundancy"; yang_parent_name = "nve";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_data() const
{
    return enable.is_set
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_data())
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (backbone_mpls !=  nullptr && backbone_mpls->has_operation())
	|| (backbone_vx_lan !=  nullptr && backbone_vx_lan->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backbone-mpls")
    {
        if(backbone_mpls != nullptr)
        {
            children["backbone-mpls"] = backbone_mpls;
        }
        else
        {
            backbone_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls>();
            backbone_mpls->parent = this;
            children["backbone-mpls"] = backbone_mpls;
        }
        return children.at("backbone-mpls");
    }

    if(child_yang_name == "backbone-vx-lan")
    {
        if(backbone_vx_lan != nullptr)
        {
            children["backbone-vx-lan"] = backbone_vx_lan;
        }
        else
        {
            backbone_vx_lan = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan>();
            backbone_vx_lan->parent = this;
            children["backbone-vx-lan"] = backbone_vx_lan;
        }
        return children.at("backbone-vx-lan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::get_children()
{
    if(children.find("backbone-mpls") == children.end())
    {
        if(backbone_mpls != nullptr)
        {
            children["backbone-mpls"] = backbone_mpls;
        }
    }

    if(children.find("backbone-vx-lan") == children.end())
    {
        if(backbone_vx_lan != nullptr)
        {
            children["backbone-vx-lan"] = backbone_vx_lan;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::BackboneVxLan()
    :
    backbone_vx_laniccp{YType::int32, "backbone-vx-laniccp"},
    enable{YType::empty, "enable"}
{
    yang_name = "backbone-vx-lan"; yang_parent_name = "redundancy";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::~BackboneVxLan()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_data() const
{
    return backbone_vx_laniccp.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::has_operation() const
{
    return is_set(operation)
	|| is_set(backbone_vx_laniccp.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-vx-lan";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackboneVxLan' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_vx_laniccp.is_set || is_set(backbone_vx_laniccp.operation)) leaf_name_data.push_back(backbone_vx_laniccp.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbone-vx-laniccp")
    {
        backbone_vx_laniccp = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::BackboneMpls()
    :
    backbone_mplsiccp{YType::int32, "backbone-mplsiccp"},
    enable{YType::empty, "enable"}
{
    yang_name = "backbone-mpls"; yang_parent_name = "redundancy";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::~BackboneMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_data() const
{
    return backbone_mplsiccp.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::has_operation() const
{
    return is_set(operation)
	|| is_set(backbone_mplsiccp.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone-mpls";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackboneMpls' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_mplsiccp.is_set || is_set(backbone_mplsiccp.operation)) leaf_name_data.push_back(backbone_mplsiccp.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbone-mplsiccp")
    {
        backbone_mplsiccp = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVnis()
{
    yang_name = "member-vnis"; yang_parent_name = "nve";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::~MemberVnis()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_data() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberVnis' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-vni")
    {
        for(auto const & c : member_vni)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni>();
        c->parent = this;
        member_vni.push_back(std::move(c));
        children[segment_path] = member_vni.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::get_children()
{
    for (auto const & c : member_vni)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::MemberVni()
    :
    vni_end{YType::uint32, "vni-end"},
    vni_start{YType::uint32, "vni-start"},
    enable{YType::empty, "enable"},
    host_reachability{YType::enumeration, "host-reachability"},
    load_balance_per_evi{YType::enumeration, "load-balance-per-evi"},
    unknown_unicast_flooding{YType::enumeration, "unknown-unicast-flooding"},
    vrf{YType::str, "vrf"}
    	,
    multicast(nullptr) // presence node
{
    yang_name = "member-vni"; yang_parent_name = "member-vnis";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::~MemberVni()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_data() const
{
    return vni_end.is_set
	|| vni_start.is_set
	|| enable.is_set
	|| host_reachability.is_set
	|| load_balance_per_evi.is_set
	|| unknown_unicast_flooding.is_set
	|| vrf.is_set
	|| (multicast !=  nullptr && multicast->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::has_operation() const
{
    return is_set(operation)
	|| is_set(vni_end.operation)
	|| is_set(vni_start.operation)
	|| is_set(enable.operation)
	|| is_set(host_reachability.operation)
	|| is_set(load_balance_per_evi.operation)
	|| is_set(unknown_unicast_flooding.operation)
	|| is_set(vrf.operation)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni" <<"[vni-end='" <<vni_end <<"']" <<"[vni-start='" <<vni_start <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberVni' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_end.is_set || is_set(vni_end.operation)) leaf_name_data.push_back(vni_end.get_name_leafdata());
    if (vni_start.is_set || is_set(vni_start.operation)) leaf_name_data.push_back(vni_start.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (host_reachability.is_set || is_set(host_reachability.operation)) leaf_name_data.push_back(host_reachability.get_name_leafdata());
    if (load_balance_per_evi.is_set || is_set(load_balance_per_evi.operation)) leaf_name_data.push_back(load_balance_per_evi.get_name_leafdata());
    if (unknown_unicast_flooding.is_set || is_set(unknown_unicast_flooding.operation)) leaf_name_data.push_back(unknown_unicast_flooding.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::get_children()
{
    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vni-end")
    {
        vni_end = value;
    }
    if(value_path == "vni-start")
    {
        vni_start = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "host-reachability")
    {
        host_reachability = value;
    }
    if(value_path == "load-balance-per-evi")
    {
        load_balance_per_evi = value;
    }
    if(value_path == "unknown-unicast-flooding")
    {
        unknown_unicast_flooding = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::Multicast()
    :
    multicast_group_max{YType::str, "multicast-group-max"},
    multicast_group_min{YType::str, "multicast-group-min"}
{
    yang_name = "multicast"; yang_parent_name = "member-vni";
}

InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::~Multicast()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_data() const
{
    return multicast_group_max.is_set
	|| multicast_group_min.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_group_max.operation)
	|| is_set(multicast_group_min.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_group_max.is_set || is_set(multicast_group_max.operation)) leaf_name_data.push_back(multicast_group_max.get_name_leafdata());
    if (multicast_group_min.is_set || is_set(multicast_group_min.operation)) leaf_name_data.push_back(multicast_group_min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-group-max")
    {
        multicast_group_max = value;
    }
    if(value_path == "multicast-group-min")
    {
        multicast_group_min = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Neighbor()
    :
    cache_limit{YType::uint32, "cache-limit"},
    dad_attempts{YType::uint32, "dad-attempts"},
    managed_config{YType::empty, "managed-config"},
    ns_interval{YType::uint32, "ns-interval"},
    other_config{YType::empty, "other-config"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    ra_suppress{YType::empty, "ra-suppress"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    ramtu_suppress{YType::empty, "ramtu-suppress"},
    reachable_time{YType::uint32, "reachable-time"},
    redirect{YType::empty, "redirect"},
    router_preference{YType::enumeration, "router-preference"},
    srp_multicast_encapsulation{YType::enumeration, "srp-multicast-encapsulation"},
    srp_unicast_encapsulation{YType::enumeration, "srp-unicast-encapsulation"}
    	,
    ipv6_prefixes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>())
	,ra_interval(nullptr) // presence node
	,radns_searches(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>())
	,radns_servers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>())
	,raspecific_route_s(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>())
{
    ipv6_prefixes->parent = this;
    children["ipv6-prefixes"] = ipv6_prefixes;

    radns_searches->parent = this;
    children["radns-searches"] = radns_searches;

    radns_servers->parent = this;
    children["radns-servers"] = radns_servers;

    raspecific_route_s->parent = this;
    children["raspecific-route-s"] = raspecific_route_s;

    yang_name = "ipv6-neighbor"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_data() const
{
    return cache_limit.is_set
	|| dad_attempts.is_set
	|| managed_config.is_set
	|| ns_interval.is_set
	|| other_config.is_set
	|| ra_lifetime.is_set
	|| ra_suppress.is_set
	|| ra_unicast.is_set
	|| ra_unspecify_hoplimit.is_set
	|| ramtu_suppress.is_set
	|| reachable_time.is_set
	|| redirect.is_set
	|| router_preference.is_set
	|| srp_multicast_encapsulation.is_set
	|| srp_unicast_encapsulation.is_set
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_data())
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (radns_searches !=  nullptr && radns_searches->has_data())
	|| (radns_servers !=  nullptr && radns_servers->has_data())
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_limit.operation)
	|| is_set(dad_attempts.operation)
	|| is_set(managed_config.operation)
	|| is_set(ns_interval.operation)
	|| is_set(other_config.operation)
	|| is_set(ra_lifetime.operation)
	|| is_set(ra_suppress.operation)
	|| is_set(ra_unicast.operation)
	|| is_set(ra_unspecify_hoplimit.operation)
	|| is_set(ramtu_suppress.operation)
	|| is_set(reachable_time.operation)
	|| is_set(redirect.operation)
	|| is_set(router_preference.operation)
	|| is_set(srp_multicast_encapsulation.operation)
	|| is_set(srp_unicast_encapsulation.operation)
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_operation())
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (radns_searches !=  nullptr && radns_searches->has_operation())
	|| (radns_servers !=  nullptr && radns_servers->has_operation())
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Neighbor' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_limit.is_set || is_set(cache_limit.operation)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.operation)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.operation)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.operation)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.operation)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.operation)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.operation)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.operation)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.operation)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (ramtu_suppress.is_set || is_set(ramtu_suppress.operation)) leaf_name_data.push_back(ramtu_suppress.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.operation)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.operation)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.operation)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (srp_multicast_encapsulation.is_set || is_set(srp_multicast_encapsulation.operation)) leaf_name_data.push_back(srp_multicast_encapsulation.get_name_leafdata());
    if (srp_unicast_encapsulation.is_set || is_set(srp_unicast_encapsulation.operation)) leaf_name_data.push_back(srp_unicast_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-prefixes")
    {
        if(ipv6_prefixes != nullptr)
        {
            children["ipv6-prefixes"] = ipv6_prefixes;
        }
        else
        {
            ipv6_prefixes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>();
            ipv6_prefixes->parent = this;
            children["ipv6-prefixes"] = ipv6_prefixes;
        }
        return children.at("ipv6-prefixes");
    }

    if(child_yang_name == "ra-interval")
    {
        if(ra_interval != nullptr)
        {
            children["ra-interval"] = ra_interval;
        }
        else
        {
            ra_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval>();
            ra_interval->parent = this;
            children["ra-interval"] = ra_interval;
        }
        return children.at("ra-interval");
    }

    if(child_yang_name == "radns-searches")
    {
        if(radns_searches != nullptr)
        {
            children["radns-searches"] = radns_searches;
        }
        else
        {
            radns_searches = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>();
            radns_searches->parent = this;
            children["radns-searches"] = radns_searches;
        }
        return children.at("radns-searches");
    }

    if(child_yang_name == "radns-servers")
    {
        if(radns_servers != nullptr)
        {
            children["radns-servers"] = radns_servers;
        }
        else
        {
            radns_servers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>();
            radns_servers->parent = this;
            children["radns-servers"] = radns_servers;
        }
        return children.at("radns-servers");
    }

    if(child_yang_name == "raspecific-route-s")
    {
        if(raspecific_route_s != nullptr)
        {
            children["raspecific-route-s"] = raspecific_route_s;
        }
        else
        {
            raspecific_route_s = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>();
            raspecific_route_s->parent = this;
            children["raspecific-route-s"] = raspecific_route_s;
        }
        return children.at("raspecific-route-s");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_children()
{
    if(children.find("ipv6-prefixes") == children.end())
    {
        if(ipv6_prefixes != nullptr)
        {
            children["ipv6-prefixes"] = ipv6_prefixes;
        }
    }

    if(children.find("ra-interval") == children.end())
    {
        if(ra_interval != nullptr)
        {
            children["ra-interval"] = ra_interval;
        }
    }

    if(children.find("radns-searches") == children.end())
    {
        if(radns_searches != nullptr)
        {
            children["radns-searches"] = radns_searches;
        }
    }

    if(children.find("radns-servers") == children.end())
    {
        if(radns_servers != nullptr)
        {
            children["radns-servers"] = radns_servers;
        }
    }

    if(children.find("raspecific-route-s") == children.end())
    {
        if(raspecific_route_s != nullptr)
        {
            children["raspecific-route-s"] = raspecific_route_s;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-limit")
    {
        cache_limit = value;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
    }
    if(value_path == "other-config")
    {
        other_config = value;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress = value;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
    }
    if(value_path == "redirect")
    {
        redirect = value;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation = value;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRouteS()
{
    yang_name = "raspecific-route-s"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::~RaspecificRouteS()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_data() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_operation() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route-s";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RaspecificRouteS' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "raspecific-route")
    {
        for(auto const & c : raspecific_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute>();
        c->parent = this;
        raspecific_route.push_back(std::move(c));
        children[segment_path] = raspecific_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_children()
{
    for (auto const & c : raspecific_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::RaspecificRoute()
    :
    specific_route{YType::str, "specific-route"},
    lifetime{YType::uint32, "lifetime"},
    preference{YType::enumeration, "preference"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "raspecific-route"; yang_parent_name = "raspecific-route-s";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::~RaspecificRoute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_data() const
{
    return specific_route.is_set
	|| lifetime.is_set
	|| preference.is_set
	|| prefix_length.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(specific_route.operation)
	|| is_set(lifetime.operation)
	|| is_set(preference.operation)
	|| is_set(prefix_length.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route" <<"[specific-route='" <<specific_route <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RaspecificRoute' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specific_route.is_set || is_set(specific_route.operation)) leaf_name_data.push_back(specific_route.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "specific-route")
    {
        specific_route = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearches()
{
    yang_name = "radns-searches"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::~RadnsSearches()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_data() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_operation() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-searches";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsSearches' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "radns-search")
    {
        for(auto const & c : radns_search)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch>();
        c->parent = this;
        radns_search.push_back(std::move(c));
        children[segment_path] = radns_search.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_children()
{
    for (auto const & c : radns_search)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::RadnsSearch()
    :
    dns_search_list{YType::str, "dns-search-list"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "radns-search"; yang_parent_name = "radns-searches";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::~RadnsSearch()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_data() const
{
    return dns_search_list.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_operation() const
{
    return is_set(operation)
	|| is_set(dns_search_list.operation)
	|| is_set(lifetime.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-search" <<"[dns-search-list='" <<dns_search_list <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsSearch' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_search_list.is_set || is_set(dns_search_list.operation)) leaf_name_data.push_back(dns_search_list.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServers()
{
    yang_name = "radns-servers"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::~RadnsServers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_data() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_operation() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-servers";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsServers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "radns-server")
    {
        for(auto const & c : radns_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer>();
        c->parent = this;
        radns_server.push_back(std::move(c));
        children[segment_path] = radns_server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_children()
{
    for (auto const & c : radns_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::RadnsServer()
    :
    dns_server{YType::str, "dns-server"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "radns-server"; yang_parent_name = "radns-servers";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::~RadnsServer()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_data() const
{
    return dns_server.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_operation() const
{
    return is_set(operation)
	|| is_set(dns_server.operation)
	|| is_set(lifetime.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-server" <<"[dns-server='" <<dns_server <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadnsServer' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_server.is_set || is_set(dns_server.operation)) leaf_name_data.push_back(dns_server.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-server")
    {
        dns_server = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{
    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RaInterval' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefixes()
{
    yang_name = "ipv6-prefixes"; yang_parent_name = "ipv6-neighbor";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::~Ipv6Prefixes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_data() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefixes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Prefixes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-prefix")
    {
        for(auto const & c : ipv6_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix>();
        c->parent = this;
        ipv6_prefix.push_back(std::move(c));
        children[segment_path] = ipv6_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_children()
{
    for (auto const & c : ipv6_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"},
    expiry_date{YType::uint32, "expiry-date"},
    expiry_hour{YType::uint32, "expiry-hour"},
    expiry_minute{YType::uint32, "expiry-minute"},
    expiry_month{YType::enumeration, "expiry-month"},
    expiry_year{YType::uint32, "expiry-year"},
    no_advertize{YType::boolean, "no-advertize"},
    no_auto_config{YType::boolean, "no-auto-config"},
    off_link{YType::boolean, "off-link"},
    pref_expiry_date{YType::uint32, "pref-expiry-date"},
    pref_expiry_hour{YType::uint32, "pref-expiry-hour"},
    pref_expiry_minute{YType::uint32, "pref-expiry-minute"},
    pref_expiry_month{YType::enumeration, "pref-expiry-month"},
    pref_expiry_year{YType::uint32, "pref-expiry-year"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_zone{YType::str, "prefix-zone"},
    valid_lifetime{YType::uint32, "valid-lifetime"}
{
    yang_name = "ipv6-prefix"; yang_parent_name = "ipv6-prefixes";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::~Ipv6Prefix()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_data() const
{
    return prefix.is_set
	|| expiry_date.is_set
	|| expiry_hour.is_set
	|| expiry_minute.is_set
	|| expiry_month.is_set
	|| expiry_year.is_set
	|| no_advertize.is_set
	|| no_auto_config.is_set
	|| off_link.is_set
	|| pref_expiry_date.is_set
	|| pref_expiry_hour.is_set
	|| pref_expiry_minute.is_set
	|| pref_expiry_month.is_set
	|| pref_expiry_year.is_set
	|| preferred_lifetime.is_set
	|| prefix_length.is_set
	|| prefix_zone.is_set
	|| valid_lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(expiry_date.operation)
	|| is_set(expiry_hour.operation)
	|| is_set(expiry_minute.operation)
	|| is_set(expiry_month.operation)
	|| is_set(expiry_year.operation)
	|| is_set(no_advertize.operation)
	|| is_set(no_auto_config.operation)
	|| is_set(off_link.operation)
	|| is_set(pref_expiry_date.operation)
	|| is_set(pref_expiry_hour.operation)
	|| is_set(pref_expiry_minute.operation)
	|| is_set(pref_expiry_month.operation)
	|| is_set(pref_expiry_year.operation)
	|| is_set(preferred_lifetime.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_zone.operation)
	|| is_set(valid_lifetime.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Prefix' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (expiry_date.is_set || is_set(expiry_date.operation)) leaf_name_data.push_back(expiry_date.get_name_leafdata());
    if (expiry_hour.is_set || is_set(expiry_hour.operation)) leaf_name_data.push_back(expiry_hour.get_name_leafdata());
    if (expiry_minute.is_set || is_set(expiry_minute.operation)) leaf_name_data.push_back(expiry_minute.get_name_leafdata());
    if (expiry_month.is_set || is_set(expiry_month.operation)) leaf_name_data.push_back(expiry_month.get_name_leafdata());
    if (expiry_year.is_set || is_set(expiry_year.operation)) leaf_name_data.push_back(expiry_year.get_name_leafdata());
    if (no_advertize.is_set || is_set(no_advertize.operation)) leaf_name_data.push_back(no_advertize.get_name_leafdata());
    if (no_auto_config.is_set || is_set(no_auto_config.operation)) leaf_name_data.push_back(no_auto_config.get_name_leafdata());
    if (off_link.is_set || is_set(off_link.operation)) leaf_name_data.push_back(off_link.get_name_leafdata());
    if (pref_expiry_date.is_set || is_set(pref_expiry_date.operation)) leaf_name_data.push_back(pref_expiry_date.get_name_leafdata());
    if (pref_expiry_hour.is_set || is_set(pref_expiry_hour.operation)) leaf_name_data.push_back(pref_expiry_hour.get_name_leafdata());
    if (pref_expiry_minute.is_set || is_set(pref_expiry_minute.operation)) leaf_name_data.push_back(pref_expiry_minute.get_name_leafdata());
    if (pref_expiry_month.is_set || is_set(pref_expiry_month.operation)) leaf_name_data.push_back(pref_expiry_month.get_name_leafdata());
    if (pref_expiry_year.is_set || is_set(pref_expiry_year.operation)) leaf_name_data.push_back(pref_expiry_year.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.operation)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_zone.is_set || is_set(prefix_zone.operation)) leaf_name_data.push_back(prefix_zone.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.operation)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "expiry-date")
    {
        expiry_date = value;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour = value;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute = value;
    }
    if(value_path == "expiry-month")
    {
        expiry_month = value;
    }
    if(value_path == "expiry-year")
    {
        expiry_year = value;
    }
    if(value_path == "no-advertize")
    {
        no_advertize = value;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config = value;
    }
    if(value_path == "off-link")
    {
        off_link = value;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date = value;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour = value;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute = value;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month = value;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year = value;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone = value;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::NetFlow()
    :
    data_link_frame_section(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>())
	,ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>())
	,mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>())
{
    data_link_frame_section->parent = this;
    children["data-link-frame-section"] = data_link_frame_section;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    mpls->parent = this;
    children["mpls"] = mpls;

    yang_name = "net-flow"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::~NetFlow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_data() const
{
    return (data_link_frame_section !=  nullptr && data_link_frame_section->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_operation() const
{
    return is_set(operation)
	|| (data_link_frame_section !=  nullptr && data_link_frame_section->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetFlow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data-link-frame-section")
    {
        if(data_link_frame_section != nullptr)
        {
            children["data-link-frame-section"] = data_link_frame_section;
        }
        else
        {
            data_link_frame_section = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>();
            data_link_frame_section->parent = this;
            children["data-link-frame-section"] = data_link_frame_section;
        }
        return children.at("data-link-frame-section");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_children()
{
    if(children.find("data-link-frame-section") == children.end())
    {
        if(data_link_frame_section != nullptr)
        {
            children["data-link-frame-section"] = data_link_frame_section;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::DataLinkFrameSection()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;
    children["flow-monitor-map"] = flow_monitor_map;

    yang_name = "data-link-frame-section"; yang_parent_name = "net-flow";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::~DataLinkFrameSection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_operation() const
{
    return is_set(operation)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-link-frame-section";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataLinkFrameSection' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
        else
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>();
            flow_monitor_map->parent = this;
            children["flow-monitor-map"] = flow_monitor_map;
        }
        return children.at("flow-monitor-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_children()
{
    if(children.find("flow-monitor-map") == children.end())
    {
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    children["egress"] = egress;

    ingress->parent = this;
    children["ingress"] = ingress;

    yang_name = "flow-monitor-map"; yang_parent_name = "data-link-frame-section";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_operation() const
{
    return is_set(operation)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorMap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "egress")
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
        else
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>();
            egress->parent = this;
            children["egress"] = egress;
        }
        return children.at("egress");
    }

    if(child_yang_name == "ingress")
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
        else
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>();
            ingress->parent = this;
            children["ingress"] = ingress;
        }
        return children.at("ingress");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_children()
{
    if(children.find("egress") == children.end())
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
    }

    if(children.find("ingress") == children.end())
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::Ingress()
{
    yang_name = "ingress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "ingress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::Egress()
{
    yang_name = "egress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Egress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{
    yang_name = "flow-monitor-name"; yang_parent_name = "egress";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor_map_name.operation)
	|| is_set(sampler_map_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.operation)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.operation)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::Mpls()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;
    children["flow-monitor-map"] = flow_monitor_map;

    yang_name = "mpls"; yang_parent_name = "net-flow";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_operation() const
{
    return is_set(operation)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
        else
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>();
            flow_monitor_map->parent = this;
            children["flow-monitor-map"] = flow_monitor_map;
        }
        return children.at("flow-monitor-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_children()
{
    if(children.find("flow-monitor-map") == children.end())
    {
        if(flow_monitor_map != nullptr)
        {
            children["flow-monitor-map"] = flow_monitor_map;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    children["egress"] = egress;

    ingress->parent = this;
    children["ingress"] = ingress;

    yang_name = "flow-monitor-map"; yang_parent_name = "mpls";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_operation() const
{
    return is_set(operation)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowMonitorMap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "egress")
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
        else
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>();
            egress->parent = this;
            children["egress"] = egress;
        }
        return children.at("egress");
    }

    if(child_yang_name == "ingress")
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
        else
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>();
            ingress->parent = this;
            children["ingress"] = ingress;
        }
        return children.at("ingress");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_children()
{
    if(children.find("egress") == children.end())
    {
        if(egress != nullptr)
        {
            children["egress"] = egress;
        }
    }

    if(children.find("ingress") == children.end())
    {
        if(ingress != nullptr)
        {
            children["ingress"] = ingress;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::Ingress()
{
    yang_name = "ingress"; yang_parent_name = "flow-monitor-map";
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(std::move(c));
        children[segment_path] = flow_monitor_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_children()
{
    for (auto const & c : flow_monitor_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf InterfaceModeEnumEnum::default_ {0, "default"};
const Enum::YLeaf InterfaceModeEnumEnum::point_to_point {1, "point-to-point"};
const Enum::YLeaf InterfaceModeEnumEnum::multipoint {2, "multipoint"};
const Enum::YLeaf InterfaceModeEnumEnum::l2_transport {3, "l2-transport"};

const Enum::YLeaf SecondaryAdminStateEnumEnum::maintenance {1, "maintenance"};

const Enum::YLeaf LinkStatusEnumEnum::default_ {0, "default"};
const Enum::YLeaf LinkStatusEnumEnum::disable {1, "disable"};
const Enum::YLeaf LinkStatusEnumEnum::software_interfaces {2, "software-interfaces"};

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::default_values {0, "default-values"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::specify_half_life {1, "specify-half-life"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::specify_all {4, "specify-all"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum::specify_rp {5, "specify-rp"};

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertypeEnum::Y_0x9100 {37120, "0x9100"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertypeEnum::Y_0x9200 {37376, "0x9200"};


}
}

