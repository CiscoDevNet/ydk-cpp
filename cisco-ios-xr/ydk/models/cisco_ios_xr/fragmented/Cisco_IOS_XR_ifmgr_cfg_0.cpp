
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

GlobalInterfaceConfiguration::GlobalInterfaceConfiguration()
    :
    link_status{YType::enumeration, "link-status"}
{

    yang_name = "global-interface-configuration"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string GlobalInterfaceConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:global-interface-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GlobalInterfaceConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GlobalInterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GlobalInterfaceConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GlobalInterfaceConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void GlobalInterfaceConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> GlobalInterfaceConfiguration::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GlobalInterfaceConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfigurations()
{

    yang_name = "interface-configurations"; yang_parent_name = "Cisco-IOS-XR-ifmgr-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:interface-configurations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-configuration")
    {
        for(auto const & c : interface_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration>();
        c->parent = this;
        interface_configuration.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_configuration)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> InterfaceConfigurations::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool InterfaceConfigurations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-configuration")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::InterfaceConfiguration()
    :
    active{YType::str, "active"},
    interface_name{YType::str, "interface-name"},
    bandwidth{YType::uint32, "bandwidth"},
    description{YType::str, "description"},
    fast_shutdown{YType::empty, "Cisco-IOS-XR-mdrv-lib-cfg:fast-shutdown"},
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
	,cisco_ios_xr_freqsync_cfg_frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization>())
	,cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization>())
	,cisco_ios_xr_ppp_ma_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>())
	,cisco_ios_xr_ppp_ma_fsm_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>())
	,cisco_ios_xr_ppp_ma_ipcp_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>())
	,cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>())
	,cisco_ios_xr_ppp_ma_lcp_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>())
	,dagrs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>())
	,dampening(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>())
	,dot1x_interface(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface>())
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
	,loopbacks(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>())
	,mac_accounting(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>())
	,macsec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>())
	,mlacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>())
	,mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>())
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
	,portmode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>())
	,pppoe(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>())
	,pseudowire_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>())
	,pseudowire_iw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>())
	,ptp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>())
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
    afs->parent = this;
    atm->parent = this;
    bfd->parent = this;
    bundle->parent = this;
    bundle_member->parent = this;
    bvi->parent = this;
    carrier_delay->parent = this;
    cdp->parent = this;
    cisco_ios_xr_freqsync_cfg_frequency_synchronization->parent = this;
    cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization->parent = this;
    cisco_ios_xr_ppp_ma_cfg_ppp->parent = this;
    cisco_ios_xr_ppp_ma_fsm_cfg_ppp->parent = this;
    cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->parent = this;
    cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->parent = this;
    cisco_ios_xr_ppp_ma_lcp_cfg_ppp->parent = this;
    dagrs->parent = this;
    dampening->parent = this;
    dot1x_interface->parent = this;
    dwdm->parent = this;
    encapsulation->parent = this;
    es_packet_filter->parent = this;
    ethernet->parent = this;
    ethernet_bng->parent = this;
    ethernet_control->parent = this;
    ethernet_features->parent = this;
    ethernet_service->parent = this;
    ipv4_network->parent = this;
    ipv4_network_forwarding->parent = this;
    ipv4_packet_filter->parent = this;
    ipv4arp->parent = this;
    ipv6_neighbor->parent = this;
    ipv6_network->parent = this;
    ipv6_packet_filter->parent = this;
    l2_transport->parent = this;
    lacp->parent = this;
    loopbacks->parent = this;
    mac_accounting->parent = this;
    macsec->parent = this;
    mlacp->parent = this;
    mpls->parent = this;
    mte_tunnel_attributes->parent = this;
    mtus->parent = this;
    net_flow->parent = this;
    nv_satellite_access->parent = this;
    nv_satellite_fabric_link->parent = this;
    nv_satellite_fabric_network->parent = this;
    nve->parent = this;
    optics->parent = this;
    otu->parent = this;
    pbr->parent = this;
    performance_management->parent = this;
    portmode->parent = this;
    pppoe->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    ptp->parent = this;
    qos->parent = this;
    service_policies->parent = this;
    span_monitor_sessions->parent = this;
    ssrp_session->parent = this;
    statistics->parent = this;
    subscriber->parent = this;
    transport_profile_tunnel->parent = this;
    tunnel_ip->parent = this;
    tunnel_te_attributes->parent = this;
    vlan_sub_configuration->parent = this;
    vlan_trunk_configuration->parent = this;
    wanphy->parent = this;

    yang_name = "interface-configuration"; yang_parent_name = "interface-configurations"; is_top_level_class = false; has_list_ancestor = false;
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
	|| fast_shutdown.is_set
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
	|| (cisco_ios_xr_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_freqsync_cfg_frequency_synchronization->has_data())
	|| (cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization->has_data())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp->has_data())
	|| (dagrs !=  nullptr && dagrs->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_data())
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
	|| (loopbacks !=  nullptr && loopbacks->has_data())
	|| (mac_accounting !=  nullptr && mac_accounting->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
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
	|| (portmode !=  nullptr && portmode->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (ptp !=  nullptr && ptp->has_data())
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
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(fast_shutdown.yfilter)
	|| ydk::is_set(interface_mode_non_physical.yfilter)
	|| ydk::is_set(interface_virtual.yfilter)
	|| ydk::is_set(laser_squelch.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(maintenance_embargo.yfilter)
	|| ydk::is_set(perf_mon_disable.yfilter)
	|| ydk::is_set(secondary_admin_state.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (aaa_table !=  nullptr && aaa_table->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (bvi !=  nullptr && bvi->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (cisco_ios_xr_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_freqsync_cfg_frequency_synchronization->has_operation())
	|| (cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization->has_operation())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp->has_operation())
	|| (dagrs !=  nullptr && dagrs->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_operation())
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
	|| (loopbacks !=  nullptr && loopbacks->has_operation())
	|| (mac_accounting !=  nullptr && mac_accounting->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
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
	|| (portmode !=  nullptr && portmode->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation())
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

std::string InterfaceConfigurations::InterfaceConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-cfg:interface-configurations/" << get_segment_path();
    return path_buffer.str();
}

std::string InterfaceConfigurations::InterfaceConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configuration" <<"[active='" <<active <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (fast_shutdown.is_set || is_set(fast_shutdown.yfilter)) leaf_name_data.push_back(fast_shutdown.get_name_leafdata());
    if (interface_mode_non_physical.is_set || is_set(interface_mode_non_physical.yfilter)) leaf_name_data.push_back(interface_mode_non_physical.get_name_leafdata());
    if (interface_virtual.is_set || is_set(interface_virtual.yfilter)) leaf_name_data.push_back(interface_virtual.get_name_leafdata());
    if (laser_squelch.is_set || is_set(laser_squelch.yfilter)) leaf_name_data.push_back(laser_squelch.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (maintenance_embargo.is_set || is_set(maintenance_embargo.yfilter)) leaf_name_data.push_back(maintenance_embargo.get_name_leafdata());
    if (perf_mon_disable.is_set || is_set(perf_mon_disable.yfilter)) leaf_name_data.push_back(perf_mon_disable.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.yfilter)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-table")
    {
        if(aaa_table == nullptr)
        {
            aaa_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>();
        }
        return aaa_table;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "bundle-member")
    {
        if(bundle_member == nullptr)
        {
            bundle_member = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>();
        }
        return bundle_member;
    }

    if(child_yang_name == "bvi")
    {
        if(bvi == nullptr)
        {
            bvi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>();
        }
        return bvi;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization")
    {
        if(cisco_ios_xr_freqsync_cfg_frequency_synchronization == nullptr)
        {
            cisco_ios_xr_freqsync_cfg_frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization>();
        }
        return cisco_ios_xr_freqsync_cfg_frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization")
    {
        if(cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization == nullptr)
        {
            cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization>();
        }
        return cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp")
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
    }

    if(child_yang_name == "dagrs")
    {
        if(dagrs == nullptr)
        {
            dagrs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>();
        }
        return dagrs;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "dot1x-interface")
    {
        if(dot1x_interface == nullptr)
        {
            dot1x_interface = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface>();
        }
        return dot1x_interface;
    }

    if(child_yang_name == "dwdm")
    {
        if(dwdm == nullptr)
        {
            dwdm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>();
        }
        return dwdm;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "es-packet-filter")
    {
        if(es_packet_filter == nullptr)
        {
            es_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>();
        }
        return es_packet_filter;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "ethernet-bng")
    {
        if(ethernet_bng == nullptr)
        {
            ethernet_bng = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>();
        }
        return ethernet_bng;
    }

    if(child_yang_name == "ethernet-control")
    {
        if(ethernet_control == nullptr)
        {
            ethernet_control = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>();
        }
        return ethernet_control;
    }

    if(child_yang_name == "ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>();
        }
        return ethernet_features;
    }

    if(child_yang_name == "ethernet-service")
    {
        if(ethernet_service == nullptr)
        {
            ethernet_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>();
        }
        return ethernet_service;
    }

    if(child_yang_name == "ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "ipv4-network-forwarding")
    {
        if(ipv4_network_forwarding == nullptr)
        {
            ipv4_network_forwarding = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>();
        }
        return ipv4_network_forwarding;
    }

    if(child_yang_name == "ipv4-packet-filter")
    {
        if(ipv4_packet_filter == nullptr)
        {
            ipv4_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>();
        }
        return ipv4_packet_filter;
    }

    if(child_yang_name == "ipv4arp")
    {
        if(ipv4arp == nullptr)
        {
            ipv4arp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>();
        }
        return ipv4arp;
    }

    if(child_yang_name == "ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "ipv6-packet-filter")
    {
        if(ipv6_packet_filter == nullptr)
        {
            ipv6_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>();
        }
        return ipv6_packet_filter;
    }

    if(child_yang_name == "l2-transport")
    {
        if(l2_transport == nullptr)
        {
            l2_transport = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>();
        }
        return l2_transport;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "loopbacks")
    {
        if(loopbacks == nullptr)
        {
            loopbacks = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>();
        }
        return loopbacks;
    }

    if(child_yang_name == "mac-accounting")
    {
        if(mac_accounting == nullptr)
        {
            mac_accounting = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>();
        }
        return mac_accounting;
    }

    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "mte-tunnel-attributes")
    {
        if(mte_tunnel_attributes == nullptr)
        {
            mte_tunnel_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>();
        }
        return mte_tunnel_attributes;
    }

    if(child_yang_name == "mtus")
    {
        if(mtus == nullptr)
        {
            mtus = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>();
        }
        return mtus;
    }

    if(child_yang_name == "net-flow")
    {
        if(net_flow == nullptr)
        {
            net_flow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>();
        }
        return net_flow;
    }

    if(child_yang_name == "nv-satellite-access")
    {
        if(nv_satellite_access == nullptr)
        {
            nv_satellite_access = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>();
        }
        return nv_satellite_access;
    }

    if(child_yang_name == "nv-satellite-fabric-link")
    {
        if(nv_satellite_fabric_link == nullptr)
        {
            nv_satellite_fabric_link = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>();
        }
        return nv_satellite_fabric_link;
    }

    if(child_yang_name == "nv-satellite-fabric-network")
    {
        if(nv_satellite_fabric_network == nullptr)
        {
            nv_satellite_fabric_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>();
        }
        return nv_satellite_fabric_network;
    }

    if(child_yang_name == "nve")
    {
        if(nve == nullptr)
        {
            nve = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>();
        }
        return nve;
    }

    if(child_yang_name == "optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "performance-management")
    {
        if(performance_management == nullptr)
        {
            performance_management = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>();
        }
        return performance_management;
    }

    if(child_yang_name == "portmode")
    {
        if(portmode == nullptr)
        {
            portmode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>();
        }
        return portmode;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>();
        }
        return ptp;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>();
        }
        return service_policies;
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "ssrp-session")
    {
        if(ssrp_session == nullptr)
        {
            ssrp_session = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>();
        }
        return ssrp_session;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "transport-profile-tunnel")
    {
        if(transport_profile_tunnel == nullptr)
        {
            transport_profile_tunnel = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>();
        }
        return transport_profile_tunnel;
    }

    if(child_yang_name == "tunnel-ip")
    {
        if(tunnel_ip == nullptr)
        {
            tunnel_ip = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>();
        }
        return tunnel_ip;
    }

    if(child_yang_name == "tunnel-te-attributes")
    {
        if(tunnel_te_attributes == nullptr)
        {
            tunnel_te_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>();
        }
        return tunnel_te_attributes;
    }

    if(child_yang_name == "vlan-sub-configuration")
    {
        if(vlan_sub_configuration == nullptr)
        {
            vlan_sub_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>();
        }
        return vlan_sub_configuration;
    }

    if(child_yang_name == "vlan-trunk-configuration")
    {
        if(vlan_trunk_configuration == nullptr)
        {
            vlan_trunk_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>();
        }
        return vlan_trunk_configuration;
    }

    if(child_yang_name == "wanphy")
    {
        if(wanphy == nullptr)
        {
            wanphy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>();
        }
        return wanphy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa_table != nullptr)
    {
        children["aaa-table"] = aaa_table;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    if(bundle_member != nullptr)
    {
        children["bundle-member"] = bundle_member;
    }

    if(bvi != nullptr)
    {
        children["bvi"] = bvi;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(cdp != nullptr)
    {
        children["cdp"] = cdp;
    }

    if(cisco_ios_xr_freqsync_cfg_frequency_synchronization != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg_frequency-synchronization"] = cisco_ios_xr_freqsync_cfg_frequency_synchronization;
    }

    if(cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization != nullptr)
    {
        children["Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"] = cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization;
    }

    if(cisco_ios_xr_ppp_ma_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-cfg_ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp;
    }

    if(dagrs != nullptr)
    {
        children["dagrs"] = dagrs;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(dot1x_interface != nullptr)
    {
        children["dot1x-interface"] = dot1x_interface;
    }

    if(dwdm != nullptr)
    {
        children["dwdm"] = dwdm;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(es_packet_filter != nullptr)
    {
        children["es-packet-filter"] = es_packet_filter;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(ethernet_bng != nullptr)
    {
        children["ethernet-bng"] = ethernet_bng;
    }

    if(ethernet_control != nullptr)
    {
        children["ethernet-control"] = ethernet_control;
    }

    if(ethernet_features != nullptr)
    {
        children["ethernet-features"] = ethernet_features;
    }

    if(ethernet_service != nullptr)
    {
        children["ethernet-service"] = ethernet_service;
    }

    if(ipv4_network != nullptr)
    {
        children["ipv4-network"] = ipv4_network;
    }

    if(ipv4_network_forwarding != nullptr)
    {
        children["ipv4-network-forwarding"] = ipv4_network_forwarding;
    }

    if(ipv4_packet_filter != nullptr)
    {
        children["ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv4arp != nullptr)
    {
        children["ipv4arp"] = ipv4arp;
    }

    if(ipv6_neighbor != nullptr)
    {
        children["ipv6-neighbor"] = ipv6_neighbor;
    }

    if(ipv6_network != nullptr)
    {
        children["ipv6-network"] = ipv6_network;
    }

    if(ipv6_packet_filter != nullptr)
    {
        children["ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(l2_transport != nullptr)
    {
        children["l2-transport"] = l2_transport;
    }

    if(lacp != nullptr)
    {
        children["lacp"] = lacp;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(loopbacks != nullptr)
    {
        children["loopbacks"] = loopbacks;
    }

    if(mac_accounting != nullptr)
    {
        children["mac-accounting"] = mac_accounting;
    }

    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(mlacp != nullptr)
    {
        children["mlacp"] = mlacp;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(mte_tunnel_attributes != nullptr)
    {
        children["mte-tunnel-attributes"] = mte_tunnel_attributes;
    }

    if(mtus != nullptr)
    {
        children["mtus"] = mtus;
    }

    if(net_flow != nullptr)
    {
        children["net-flow"] = net_flow;
    }

    if(nv_satellite_access != nullptr)
    {
        children["nv-satellite-access"] = nv_satellite_access;
    }

    if(nv_satellite_fabric_link != nullptr)
    {
        children["nv-satellite-fabric-link"] = nv_satellite_fabric_link;
    }

    if(nv_satellite_fabric_network != nullptr)
    {
        children["nv-satellite-fabric-network"] = nv_satellite_fabric_network;
    }

    if(nve != nullptr)
    {
        children["nve"] = nve;
    }

    if(optics != nullptr)
    {
        children["optics"] = optics;
    }

    if(otu != nullptr)
    {
        children["otu"] = otu;
    }

    if(pbr != nullptr)
    {
        children["pbr"] = pbr;
    }

    if(performance_management != nullptr)
    {
        children["performance-management"] = performance_management;
    }

    if(portmode != nullptr)
    {
        children["portmode"] = portmode;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(service_policies != nullptr)
    {
        children["service-policies"] = service_policies;
    }

    if(span_monitor_sessions != nullptr)
    {
        children["span-monitor-sessions"] = span_monitor_sessions;
    }

    if(ssrp_session != nullptr)
    {
        children["ssrp-session"] = ssrp_session;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(subscriber != nullptr)
    {
        children["subscriber"] = subscriber;
    }

    if(transport_profile_tunnel != nullptr)
    {
        children["transport-profile-tunnel"] = transport_profile_tunnel;
    }

    if(tunnel_ip != nullptr)
    {
        children["tunnel-ip"] = tunnel_ip;
    }

    if(tunnel_te_attributes != nullptr)
    {
        children["tunnel-te-attributes"] = tunnel_te_attributes;
    }

    if(vlan_sub_configuration != nullptr)
    {
        children["vlan-sub-configuration"] = vlan_sub_configuration;
    }

    if(vlan_trunk_configuration != nullptr)
    {
        children["vlan-trunk-configuration"] = vlan_trunk_configuration;
    }

    if(wanphy != nullptr)
    {
        children["wanphy"] = wanphy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-shutdown")
    {
        fast_shutdown = value;
        fast_shutdown.value_namespace = name_space;
        fast_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mode-non-physical")
    {
        interface_mode_non_physical = value;
        interface_mode_non_physical.value_namespace = name_space;
        interface_mode_non_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-virtual")
    {
        interface_virtual = value;
        interface_virtual.value_namespace = name_space;
        interface_virtual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-squelch")
    {
        laser_squelch = value;
        laser_squelch.value_namespace = name_space;
        laser_squelch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maintenance-embargo")
    {
        maintenance_embargo = value;
        maintenance_embargo.value_namespace = name_space;
        maintenance_embargo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perf-mon-disable")
    {
        perf_mon_disable = value;
        perf_mon_disable.value_namespace = name_space;
        perf_mon_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
        secondary_admin_state.value_namespace = name_space;
        secondary_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "fast-shutdown")
    {
        fast_shutdown.yfilter = yfilter;
    }
    if(value_path == "interface-mode-non-physical")
    {
        interface_mode_non_physical.yfilter = yfilter;
    }
    if(value_path == "interface-virtual")
    {
        interface_virtual.yfilter = yfilter;
    }
    if(value_path == "laser-squelch")
    {
        laser_squelch.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "maintenance-embargo")
    {
        maintenance_embargo.yfilter = yfilter;
    }
    if(value_path == "perf-mon-disable")
    {
        perf_mon_disable.yfilter = yfilter;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-table" || name == "afs" || name == "atm" || name == "bfd" || name == "bundle" || name == "bundle-member" || name == "bvi" || name == "carrier-delay" || name == "cdp" || name == "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization" || name == "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization" || name == "Cisco-IOS-XR-ppp-ma-cfg_ppp" || name == "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp" || name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp" || name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp" || name == "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp" || name == "dagrs" || name == "dampening" || name == "dot1x-interface" || name == "dwdm" || name == "encapsulation" || name == "es-packet-filter" || name == "ethernet" || name == "ethernet-bng" || name == "ethernet-control" || name == "ethernet-features" || name == "ethernet-service" || name == "ipv4-network" || name == "ipv4-network-forwarding" || name == "ipv4-packet-filter" || name == "ipv4arp" || name == "ipv6-neighbor" || name == "ipv6-network" || name == "ipv6-packet-filter" || name == "l2-transport" || name == "lacp" || name == "lldp" || name == "loopbacks" || name == "mac-accounting" || name == "macsec" || name == "mlacp" || name == "mpls" || name == "mte-tunnel-attributes" || name == "mtus" || name == "net-flow" || name == "nv-satellite-access" || name == "nv-satellite-fabric-link" || name == "nv-satellite-fabric-network" || name == "nve" || name == "optics" || name == "otu" || name == "pbr" || name == "performance-management" || name == "portmode" || name == "pppoe" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "ptp" || name == "qos" || name == "service-policies" || name == "span-monitor-sessions" || name == "ssrp-session" || name == "statistics" || name == "subscriber" || name == "transport-profile-tunnel" || name == "tunnel-ip" || name == "tunnel-te-attributes" || name == "vlan-sub-configuration" || name == "vlan-trunk-configuration" || name == "wanphy" || name == "active" || name == "interface-name" || name == "bandwidth" || name == "description" || name == "fast-shutdown" || name == "interface-mode-non-physical" || name == "interface-virtual" || name == "laser-squelch" || name == "link-status" || name == "mac-addr" || name == "maintenance-embargo" || name == "perf-mon-disable" || name == "secondary-admin-state" || name == "shutdown" || name == "track-name" || name == "vrf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::AaaTable()
    :
    radius(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>())
{
    radius->parent = this;

    yang_name = "aaa-table"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::~AaaTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_data() const
{
    return (radius !=  nullptr && radius->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Radius()
    :
    attribute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>())
{
    attribute->parent = this;

    yang_name = "radius"; yang_parent_name = "aaa-table"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::~Radius()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::Attribute()
    :
    nas_port_type{YType::enumeration, "nas-port-type"}
{

    yang_name = "attribute"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::~Attribute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_data() const
{
    return nas_port_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type.is_set || is_set(nas_port_type.yfilter)) leaf_name_data.push_back(nas_port_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-type")
    {
        nas_port_type = value;
        nas_port_type.value_namespace = name_space;
        nas_port_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-type")
    {
        nas_port_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    if(child_yang_name == "af-topology-name")
    {
        for(auto const & c : af_topology_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName>();
        c->parent = this;
        af_topology_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : af_topology_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "af-topology-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::AfTopologyName()
    :
    topology_name{YType::str, "topology-name"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{

    yang_name = "af-topology-name"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::~AfTopologyName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_data() const
{
    return topology_name.is_set
	|| af_name.is_set
	|| saf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-topology-name" <<"[topology-name='" <<topology_name <<"']" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-name" || name == "af-name" || name == "saf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Atm()
    :
    max_vpi_bits{YType::enumeration, "max-vpi-bits"},
    vc_class{YType::str, "vc-class"}
    	,
    maximum_cell_packing_timers(nullptr) // presence node
	,pvcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>())
	,pvps(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>())
	,vp_tunnels(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>())
{
    pvcs->parent = this;
    pvps->parent = this;
    vp_tunnels->parent = this;

    yang_name = "atm"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::~Atm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_data() const
{
    return max_vpi_bits.is_set
	|| vc_class.is_set
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_data())
	|| (pvcs !=  nullptr && pvcs->has_data())
	|| (pvps !=  nullptr && pvps->has_data())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_vpi_bits.yfilter)
	|| ydk::is_set(vc_class.yfilter)
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_operation())
	|| (pvcs !=  nullptr && pvcs->has_operation())
	|| (pvps !=  nullptr && pvps->has_operation())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_vpi_bits.is_set || is_set(max_vpi_bits.yfilter)) leaf_name_data.push_back(max_vpi_bits.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.yfilter)) leaf_name_data.push_back(vc_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-cell-packing-timers")
    {
        if(maximum_cell_packing_timers == nullptr)
        {
            maximum_cell_packing_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers>();
        }
        return maximum_cell_packing_timers;
    }

    if(child_yang_name == "pvcs")
    {
        if(pvcs == nullptr)
        {
            pvcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>();
        }
        return pvcs;
    }

    if(child_yang_name == "pvps")
    {
        if(pvps == nullptr)
        {
            pvps = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>();
        }
        return pvps;
    }

    if(child_yang_name == "vp-tunnels")
    {
        if(vp_tunnels == nullptr)
        {
            vp_tunnels = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>();
        }
        return vp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_cell_packing_timers != nullptr)
    {
        children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
    }

    if(pvcs != nullptr)
    {
        children["pvcs"] = pvcs;
    }

    if(pvps != nullptr)
    {
        children["pvps"] = pvps;
    }

    if(vp_tunnels != nullptr)
    {
        children["vp-tunnels"] = vp_tunnels;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-vpi-bits")
    {
        max_vpi_bits = value;
        max_vpi_bits.value_namespace = name_space;
        max_vpi_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
        vc_class.value_namespace = name_space;
        vc_class.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-vpi-bits")
    {
        max_vpi_bits.yfilter = yfilter;
    }
    if(value_path == "vc-class")
    {
        vc_class.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cell-packing-timers" || name == "pvcs" || name == "pvps" || name == "vp-tunnels" || name == "max-vpi-bits" || name == "vc-class")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::MaximumCellPackingTimers()
    :
    cell_packing_timer1{YType::uint32, "cell-packing-timer1"},
    cell_packing_timer2{YType::uint32, "cell-packing-timer2"},
    cell_packing_timer3{YType::uint32, "cell-packing-timer3"}
{

    yang_name = "maximum-cell-packing-timers"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::~MaximumCellPackingTimers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_data() const
{
    return cell_packing_timer1.is_set
	|| cell_packing_timer2.is_set
	|| cell_packing_timer3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cell_packing_timer1.yfilter)
	|| ydk::is_set(cell_packing_timer2.yfilter)
	|| ydk::is_set(cell_packing_timer3.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-cell-packing-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer1.is_set || is_set(cell_packing_timer1.yfilter)) leaf_name_data.push_back(cell_packing_timer1.get_name_leafdata());
    if (cell_packing_timer2.is_set || is_set(cell_packing_timer2.yfilter)) leaf_name_data.push_back(cell_packing_timer2.get_name_leafdata());
    if (cell_packing_timer3.is_set || is_set(cell_packing_timer3.yfilter)) leaf_name_data.push_back(cell_packing_timer3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cell-packing-timer1")
    {
        cell_packing_timer1 = value;
        cell_packing_timer1.value_namespace = name_space;
        cell_packing_timer1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer2")
    {
        cell_packing_timer2 = value;
        cell_packing_timer2.value_namespace = name_space;
        cell_packing_timer2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer3")
    {
        cell_packing_timer3 = value;
        cell_packing_timer3.value_namespace = name_space;
        cell_packing_timer3.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cell-packing-timer1")
    {
        cell_packing_timer1.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer2")
    {
        cell_packing_timer2.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer3")
    {
        cell_packing_timer3.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing-timer1" || name == "cell-packing-timer2" || name == "cell-packing-timer3")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvcs()
{

    yang_name = "pvcs"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::~Pvcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_data() const
{
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_operation() const
{
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Pvc()
    :
    vpi{YType::uint32, "vpi"},
    vci{YType::uint32, "vci"},
    pv_ctype{YType::enumeration, "pv-ctype"},
    enable{YType::empty, "enable"},
    encapsulation{YType::enumeration, "encapsulation"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"},
    test_mode{YType::enumeration, "test-mode"},
    vc_class{YType::str, "vc-class"}
    	,
    cell_packing(nullptr) // presence node
	,oam_emulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>())
	,shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>())
{
    oam_emulation->parent = this;
    shape->parent = this;

    yang_name = "pvc"; yang_parent_name = "pvcs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::~Pvc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_data() const
{
    return vpi.is_set
	|| vci.is_set
	|| pv_ctype.is_set
	|| enable.is_set
	|| encapsulation.is_set
	|| oam_segment_endpoint.is_set
	|| test_mode.is_set
	|| vc_class.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data())
	|| (oam_emulation !=  nullptr && oam_emulation->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(pv_ctype.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(oam_segment_endpoint.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(vc_class.yfilter)
	|| (cell_packing !=  nullptr && cell_packing->has_operation())
	|| (oam_emulation !=  nullptr && oam_emulation->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc" <<"[vpi='" <<vpi <<"']" <<"[vci='" <<vci <<"']" <<"[pv-ctype='" <<pv_ctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (pv_ctype.is_set || is_set(pv_ctype.yfilter)) leaf_name_data.push_back(pv_ctype.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.yfilter)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.yfilter)) leaf_name_data.push_back(vc_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking>();
        }
        return cell_packing;
    }

    if(child_yang_name == "oam-emulation")
    {
        if(oam_emulation == nullptr)
        {
            oam_emulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>();
        }
        return oam_emulation;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    if(oam_emulation != nullptr)
    {
        children["oam-emulation"] = oam_emulation;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pv-ctype")
    {
        pv_ctype = value;
        pv_ctype.value_namespace = name_space;
        pv_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
        oam_segment_endpoint.value_namespace = name_space;
        oam_segment_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
        vc_class.value_namespace = name_space;
        vc_class.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
    if(value_path == "pv-ctype")
    {
        pv_ctype.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "vc-class")
    {
        vc_class.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing" || name == "oam-emulation" || name == "shape" || name == "vpi" || name == "vci" || name == "pv-ctype" || name == "enable" || name == "encapsulation" || name == "oam-segment-endpoint" || name == "test-mode" || name == "vc-class")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{

    yang_name = "cell-packing"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing-timer-id" || name == "maximum-cells-packed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::OamEmulation()
    :
    ais_transmit_rate{YType::uint32, "ais-transmit-rate"},
    enable{YType::empty, "enable"}
{

    yang_name = "oam-emulation"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::~OamEmulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_data() const
{
    return ais_transmit_rate.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais_transmit_rate.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-emulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_transmit_rate.is_set || is_set(ais_transmit_rate.yfilter)) leaf_name_data.push_back(ais_transmit_rate.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate = value;
        ais_transmit_rate.value_namespace = name_space;
        ais_transmit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais-transmit-rate" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{

    yang_name = "shape"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
        peak_cell_rate.value_namespace = name_space;
        peak_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
        sustained_cell_rate.value_namespace = name_space;
        sustained_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-size" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvps()
{

    yang_name = "pvps"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::~Pvps()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Pvp()
    :
    vpi{YType::uint32, "vpi"},
    enable{YType::empty, "enable"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"},
    test_mode{YType::enumeration, "test-mode"}
    	,
    cell_packing(nullptr) // presence node
	,shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>())
{
    shape->parent = this;

    yang_name = "pvp"; yang_parent_name = "pvps"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::~Pvp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_data() const
{
    return vpi.is_set
	|| enable.is_set
	|| oam_segment_endpoint.is_set
	|| test_mode.is_set
	|| (cell_packing !=  nullptr && cell_packing->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(oam_segment_endpoint.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| (cell_packing !=  nullptr && cell_packing->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[vpi='" <<vpi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.yfilter)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking>();
        }
        return cell_packing;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
        oam_segment_endpoint.value_namespace = name_space;
        oam_segment_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing" || name == "shape" || name == "vpi" || name == "enable" || name == "oam-segment-endpoint" || name == "test-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{

    yang_name = "cell-packing"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing-timer-id" || name == "maximum-cells-packed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{

    yang_name = "shape"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
        peak_cell_rate.value_namespace = name_space;
        peak_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
        sustained_cell_rate.value_namespace = name_space;
        sustained_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-size" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnels()
{

    yang_name = "vp-tunnels"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::~VpTunnels()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_data() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_operation() const
{
    for (std::size_t index=0; index<vp_tunnel.size(); index++)
    {
        if(vp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vp-tunnel")
    {
        for(auto const & c : vp_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel>();
        c->parent = this;
        vp_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vp_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vp-tunnel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::VpTunnel()
    :
    vpi{YType::uint32, "vpi"},
    disable_f4oam{YType::empty, "disable-f4oam"},
    enable{YType::empty, "enable"},
    enable_hierarchical_shaping{YType::empty, "enable-hierarchical-shaping"}
    	,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>())
{
    shape->parent = this;

    yang_name = "vp-tunnel"; yang_parent_name = "vp-tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::~VpTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_data() const
{
    return vpi.is_set
	|| disable_f4oam.is_set
	|| enable.is_set
	|| enable_hierarchical_shaping.is_set
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(disable_f4oam.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(enable_hierarchical_shaping.yfilter)
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnel" <<"[vpi='" <<vpi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (disable_f4oam.is_set || is_set(disable_f4oam.yfilter)) leaf_name_data.push_back(disable_f4oam.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_hierarchical_shaping.is_set || is_set(enable_hierarchical_shaping.yfilter)) leaf_name_data.push_back(enable_hierarchical_shaping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam = value;
        disable_f4oam.value_namespace = name_space;
        disable_f4oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping = value;
        enable_hierarchical_shaping.value_namespace = name_space;
        enable_hierarchical_shaping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "vpi" || name == "disable-f4oam" || name == "enable" || name == "enable-hierarchical-shaping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::Shape()
    :
    burst_size{YType::uint32, "burst-size"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    type{YType::enumeration, "type"}
{

    yang_name = "shape"; yang_parent_name = "vp-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_data() const
{
    return burst_size.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst_size.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
        peak_cell_rate.value_namespace = name_space;
        peak_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
        sustained_cell_rate.value_namespace = name_space;
        sustained_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst-size" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::Bfd()
    :
    mode{YType::enumeration, "mode"}
    	,
    address_family(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "bfd"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_data() const
{
    return mode.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::~AddressFamily()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect{YType::empty, "fast-detect"},
    interval{YType::uint32, "interval"}
    	,
    echo(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>())
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>())
{
    echo->parent = this;
    timers->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_data() const
{
    return destination_address.is_set
	|| detection_multiplier.is_set
	|| fast_detect.is_set
	|| interval.is_set
	|| (echo !=  nullptr && echo->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (echo !=  nullptr && echo->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(echo != nullptr)
    {
        children["echo"] = echo;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "timers" || name == "destination-address" || name == "detection-multiplier" || name == "fast-detect" || name == "interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::Echo()
    :
    min_interval{YType::uint32, "min-interval"}
{

    yang_name = "echo"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::~Echo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_data() const
{
    return min_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_interval.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_interval.is_set || is_set(min_interval.yfilter)) leaf_name_data.push_back(min_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-interval")
    {
        min_interval = value;
        min_interval.value_namespace = name_space;
        min_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-interval")
    {
        min_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::Timers()
    :
    nbor_unconfig_timer{YType::uint32, "nbor-unconfig-timer"},
    start_timer{YType::uint32, "start-timer"}
{

    yang_name = "timers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_data() const
{
    return nbor_unconfig_timer.is_set
	|| start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbor_unconfig_timer.yfilter)
	|| ydk::is_set(start_timer.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbor_unconfig_timer.is_set || is_set(nbor_unconfig_timer.yfilter)) leaf_name_data.push_back(nbor_unconfig_timer.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbor-unconfig-timer")
    {
        nbor_unconfig_timer = value;
        nbor_unconfig_timer.value_namespace = name_space;
        nbor_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbor-unconfig-timer")
    {
        nbor_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbor-unconfig-timer" || name == "start-timer")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6()
    :
    ipv6_destination_address{YType::str, "ipv6-destination-address"},
    ipv6_detection_multiplier{YType::uint32, "ipv6-detection-multiplier"},
    ipv6_fast_detect{YType::empty, "ipv6-fast-detect"},
    ipv6_interval{YType::uint32, "ipv6-interval"}
    	,
    ipv6_timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>())
{
    ipv6_timers->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_data() const
{
    return ipv6_destination_address.is_set
	|| ipv6_detection_multiplier.is_set
	|| ipv6_fast_detect.is_set
	|| ipv6_interval.is_set
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_destination_address.yfilter)
	|| ydk::is_set(ipv6_detection_multiplier.yfilter)
	|| ydk::is_set(ipv6_fast_detect.yfilter)
	|| ydk::is_set(ipv6_interval.yfilter)
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_destination_address.is_set || is_set(ipv6_destination_address.yfilter)) leaf_name_data.push_back(ipv6_destination_address.get_name_leafdata());
    if (ipv6_detection_multiplier.is_set || is_set(ipv6_detection_multiplier.yfilter)) leaf_name_data.push_back(ipv6_detection_multiplier.get_name_leafdata());
    if (ipv6_fast_detect.is_set || is_set(ipv6_fast_detect.yfilter)) leaf_name_data.push_back(ipv6_fast_detect.get_name_leafdata());
    if (ipv6_interval.is_set || is_set(ipv6_interval.yfilter)) leaf_name_data.push_back(ipv6_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-timers")
    {
        if(ipv6_timers == nullptr)
        {
            ipv6_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>();
        }
        return ipv6_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_timers != nullptr)
    {
        children["ipv6-timers"] = ipv6_timers;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-destination-address")
    {
        ipv6_destination_address = value;
        ipv6_destination_address.value_namespace = name_space;
        ipv6_destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-detection-multiplier")
    {
        ipv6_detection_multiplier = value;
        ipv6_detection_multiplier.value_namespace = name_space;
        ipv6_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-fast-detect")
    {
        ipv6_fast_detect = value;
        ipv6_fast_detect.value_namespace = name_space;
        ipv6_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-interval")
    {
        ipv6_interval = value;
        ipv6_interval.value_namespace = name_space;
        ipv6_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-destination-address")
    {
        ipv6_destination_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-detection-multiplier")
    {
        ipv6_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "ipv6-fast-detect")
    {
        ipv6_fast_detect.yfilter = yfilter;
    }
    if(value_path == "ipv6-interval")
    {
        ipv6_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-timers" || name == "ipv6-destination-address" || name == "ipv6-detection-multiplier" || name == "ipv6-fast-detect" || name == "ipv6-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::Ipv6Timers()
    :
    ipv6_nbor_unconfig_timer{YType::uint32, "ipv6-nbor-unconfig-timer"},
    ipv6_start_timer{YType::uint32, "ipv6-start-timer"}
{

    yang_name = "ipv6-timers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::~Ipv6Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_data() const
{
    return ipv6_nbor_unconfig_timer.is_set
	|| ipv6_start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_nbor_unconfig_timer.yfilter)
	|| ydk::is_set(ipv6_start_timer.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_nbor_unconfig_timer.is_set || is_set(ipv6_nbor_unconfig_timer.yfilter)) leaf_name_data.push_back(ipv6_nbor_unconfig_timer.get_name_leafdata());
    if (ipv6_start_timer.is_set || is_set(ipv6_start_timer.yfilter)) leaf_name_data.push_back(ipv6_start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-nbor-unconfig-timer")
    {
        ipv6_nbor_unconfig_timer = value;
        ipv6_nbor_unconfig_timer.value_namespace = name_space;
        ipv6_nbor_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-start-timer")
    {
        ipv6_start_timer = value;
        ipv6_start_timer.value_namespace = name_space;
        ipv6_start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-nbor-unconfig-timer")
    {
        ipv6_nbor_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "ipv6-start-timer")
    {
        ipv6_start_timer.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-nbor-unconfig-timer" || name == "ipv6-start-timer")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::Bundle()
    :
    lacp_delay{YType::uint32, "lacp-delay"},
    shutdown{YType::empty, "shutdown"},
    wait_while{YType::uint32, "wait-while"}
    	,
    bundle_load_balancing(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>())
	,maximum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>())
	,minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>())
{
    bundle_load_balancing->parent = this;
    maximum_active->parent = this;
    minimum_active->parent = this;

    yang_name = "bundle"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::~Bundle()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_data() const
{
    return lacp_delay.is_set
	|| shutdown.is_set
	|| wait_while.is_set
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_data())
	|| (maximum_active !=  nullptr && maximum_active->has_data())
	|| (minimum_active !=  nullptr && minimum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacp_delay.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(wait_while.yfilter)
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_operation())
	|| (maximum_active !=  nullptr && maximum_active->has_operation())
	|| (minimum_active !=  nullptr && minimum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacp_delay.is_set || is_set(lacp_delay.yfilter)) leaf_name_data.push_back(lacp_delay.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (wait_while.is_set || is_set(wait_while.yfilter)) leaf_name_data.push_back(wait_while.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-load-balancing")
    {
        if(bundle_load_balancing == nullptr)
        {
            bundle_load_balancing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>();
        }
        return bundle_load_balancing;
    }

    if(child_yang_name == "maximum-active")
    {
        if(maximum_active == nullptr)
        {
            maximum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>();
        }
        return maximum_active;
    }

    if(child_yang_name == "minimum-active")
    {
        if(minimum_active == nullptr)
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>();
        }
        return minimum_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_load_balancing != nullptr)
    {
        children["bundle-load-balancing"] = bundle_load_balancing;
    }

    if(maximum_active != nullptr)
    {
        children["maximum-active"] = maximum_active;
    }

    if(minimum_active != nullptr)
    {
        children["minimum-active"] = minimum_active;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacp-delay")
    {
        lacp_delay = value;
        lacp_delay.value_namespace = name_space;
        lacp_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while")
    {
        wait_while = value;
        wait_while.value_namespace = name_space;
        wait_while.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacp-delay")
    {
        lacp_delay.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "wait-while")
    {
        wait_while.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-load-balancing" || name == "maximum-active" || name == "minimum-active" || name == "lacp-delay" || name == "shutdown" || name == "wait-while")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::BundleLoadBalancing()
    :
    localize_links{YType::uint32, "localize-links"}
    	,
    hash_function(nullptr) // presence node
{

    yang_name = "bundle-load-balancing"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::~BundleLoadBalancing()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_data() const
{
    return localize_links.is_set
	|| (hash_function !=  nullptr && hash_function->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localize_links.yfilter)
	|| (hash_function !=  nullptr && hash_function->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localize_links.is_set || is_set(localize_links.yfilter)) leaf_name_data.push_back(localize_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hash-function")
    {
        if(hash_function == nullptr)
        {
            hash_function = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction>();
        }
        return hash_function;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hash_function != nullptr)
    {
        children["hash-function"] = hash_function;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localize-links")
    {
        localize_links = value;
        localize_links.value_namespace = name_space;
        localize_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localize-links")
    {
        localize_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-function" || name == "localize-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::HashFunction()
    :
    hash_type{YType::enumeration, "hash-type"},
    hash_value{YType::uint32, "hash-value"}
{

    yang_name = "hash-function"; yang_parent_name = "bundle-load-balancing"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::~HashFunction()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_data() const
{
    return hash_type.is_set
	|| hash_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_type.yfilter)
	|| ydk::is_set(hash_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash-function";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_type.is_set || is_set(hash_type.yfilter)) leaf_name_data.push_back(hash_type.get_name_leafdata());
    if (hash_value.is_set || is_set(hash_value.yfilter)) leaf_name_data.push_back(hash_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-type")
    {
        hash_type = value;
        hash_type.value_namespace = name_space;
        hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-value")
    {
        hash_value = value;
        hash_value.value_namespace = name_space;
        hash_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-type")
    {
        hash_type.yfilter = yfilter;
    }
    if(value_path == "hash-value")
    {
        hash_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-type" || name == "hash-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::MaximumActive()
    :
    links(nullptr) // presence node
{

    yang_name = "maximum-active"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::~MaximumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_data() const
{
    return (links !=  nullptr && links->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_operation() const
{
    return is_set(yfilter)
	|| (links !=  nullptr && links->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::Links()
    :
    links{YType::uint32, "links"},
    max_active_links_mode{YType::enumeration, "max-active-links-mode"}
{

    yang_name = "links"; yang_parent_name = "maximum-active"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::~Links()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_data() const
{
    return links.is_set
	|| max_active_links_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(max_active_links_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (max_active_links_mode.is_set || is_set(max_active_links_mode.yfilter)) leaf_name_data.push_back(max_active_links_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-active-links-mode")
    {
        max_active_links_mode = value;
        max_active_links_mode.value_namespace = name_space;
        max_active_links_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "max-active-links-mode")
    {
        max_active_links_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links" || name == "max-active-links-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
    	,
    bandwidth(nullptr) // presence node
{

    yang_name = "minimum-active"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_data() const
{
    return links.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    min_bandwidth_range{YType::enumeration, "min-bandwidth-range"}
{

    yang_name = "bandwidth"; yang_parent_name = "minimum-active"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| min_bandwidth_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(min_bandwidth_range.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (min_bandwidth_range.is_set || is_set(min_bandwidth_range.yfilter)) leaf_name_data.push_back(min_bandwidth_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range = value;
        min_bandwidth_range.value_namespace = name_space;
        min_bandwidth_range.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "min-bandwidth-range")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::BundleMember()
    :
    port_priority{YType::uint16, "port-priority"}
    	,
    id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>())
{
    id->parent = this;

    yang_name = "bundle-member"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::~BundleMember()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_data() const
{
    return port_priority.is_set
	|| (id !=  nullptr && id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "port-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::Id()
    :
    bundle_id{YType::uint32, "bundle-id"},
    port_activity{YType::enumeration, "port-activity"}
{

    yang_name = "id"; yang_parent_name = "bundle-member"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::~Id()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_data() const
{
    return bundle_id.is_set
	|| port_activity.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(port_activity.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (port_activity.is_set || is_set(port_activity.yfilter)) leaf_name_data.push_back(port_activity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-activity")
    {
        port_activity = value;
        port_activity.value_namespace = name_space;
        port_activity.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "port-activity")
    {
        port_activity.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-id" || name == "port-activity")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bvi::Bvi()
    :
    host_routing{YType::empty, "host-routing"}
{

    yang_name = "bvi"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(host_routing.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:bvi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_routing.is_set || is_set(host_routing.yfilter)) leaf_name_data.push_back(host_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-routing")
    {
        host_routing = value;
        host_routing.value_namespace = name_space;
        host_routing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-routing")
    {
        host_routing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{

    yang_name = "carrier-delay"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(carrier_delay_down.yfilter)
	|| ydk::is_set(carrier_delay_up.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.yfilter)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.yfilter)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
        carrier_delay_down.value_namespace = name_space;
        carrier_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
        carrier_delay_up.value_namespace = name_space;
        carrier_delay_up.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down.yfilter = yfilter;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay-down" || name == "carrier-delay-up")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::Cdp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cdp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::~Cdp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-cfg:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::CiscoIOSXRFreqsyncCfgFrequencySynchronization()
    :
    enable{YType::empty, "enable"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"},
    ssm_disable{YType::empty, "ssm-disable"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    input_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel>())
	,output_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel>())
{
    input_quality_level->parent = this;
    output_quality_level->parent = this;

    yang_name = "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::~CiscoIOSXRFreqsyncCfgFrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::has_data() const
{
    return enable.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| ssm_disable.is_set
	|| time_of_day_priority.is_set
	|| wait_to_restore_time.is_set
	|| (input_quality_level !=  nullptr && input_quality_level->has_data())
	|| (output_quality_level !=  nullptr && output_quality_level->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation())
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:Cisco-IOS-XR-freqsync-cfg_frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-quality-level" || name == "output-quality-level" || name == "enable" || name == "priority" || name == "selection-input" || name == "ssm-disable" || name == "time-of-day-priority" || name == "wait-to-restore-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    quality_level_option{YType::enumeration, "quality-level-option"}
{

    yang_name = "input-quality-level"; yang_parent_name = "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_data() const
{
    return exact_quality_level_value.is_set
	|| max_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| quality_level_option.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(quality_level_option.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-quality-level-value" || name == "max-quality-level-value" || name == "min-quality-level-value" || name == "quality-level-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    quality_level_option{YType::enumeration, "quality-level-option"}
{

    yang_name = "output-quality-level"; yang_parent_name = "Cisco-IOS-XR-freqsync-cfg_frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_data() const
{
    return exact_quality_level_value.is_set
	|| max_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| quality_level_option.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(quality_level_option.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-quality-level-value" || name == "max-quality-level-value" || name == "min-quality-level-value" || name == "quality-level-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization()
    :
    enable{YType::empty, "enable"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"},
    ssm_disable{YType::empty, "ssm-disable"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    input_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel>())
	,output_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel>())
{
    input_quality_level->parent = this;
    output_quality_level->parent = this;

    yang_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::~CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_data() const
{
    return enable.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| ssm_disable.is_set
	|| time_of_day_priority.is_set
	|| wait_to_restore_time.is_set
	|| (input_quality_level !=  nullptr && input_quality_level->has_data())
	|| (output_quality_level !=  nullptr && output_quality_level->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation())
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-quality-level" || name == "output-quality-level" || name == "enable" || name == "priority" || name == "selection-input" || name == "ssm-disable" || name == "time-of-day-priority" || name == "wait-to-restore-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    quality_level_option{YType::enumeration, "quality-level-option"}
{

    yang_name = "input-quality-level"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_data() const
{
    return exact_quality_level_value.is_set
	|| max_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| quality_level_option.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(quality_level_option.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-quality-level-value" || name == "max-quality-level-value" || name == "min-quality-level-value" || name == "quality-level-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    quality_level_option{YType::enumeration, "quality-level-option"}
{

    yang_name = "output-quality-level"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg_frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_data() const
{
    return exact_quality_level_value.is_set
	|| max_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| quality_level_option.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(quality_level_option.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exact-quality-level-value" || name == "max-quality-level-value" || name == "min-quality-level-value" || name == "quality-level-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::CiscoIOSXRPppMaCfgPpp()
{

    yang_name = "Cisco-IOS-XR-ppp-ma-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::~CiscoIOSXRPppMaCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_data() const
{
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_operation() const
{
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-cfg:Cisco-IOS-XR-ppp-ma-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::CiscoIOSXRPppMaFsmCfgPpp()
    :
    fsm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm>())
{
    fsm->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::~CiscoIOSXRPppMaFsmCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_data() const
{
    return (fsm !=  nullptr && fsm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (fsm !=  nullptr && fsm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-fsm-cfg:Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsm")
    {
        if(fsm == nullptr)
        {
            fsm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm>();
        }
        return fsm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fsm != nullptr)
    {
        children["fsm"] = fsm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::Fsm()
    :
    max_consecutive_conf_naks{YType::uint32, "max-consecutive-conf-naks"},
    max_unacknowledged_conf_requests{YType::uint32, "max-unacknowledged-conf-requests"},
    max_unacknowledged_term_requests{YType::uint32, "max-unacknowledged-term-requests"},
    retry_timeout{YType::uint32, "retry-timeout"}
{

    yang_name = "fsm"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-fsm-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::~Fsm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_data() const
{
    return max_consecutive_conf_naks.is_set
	|| max_unacknowledged_conf_requests.is_set
	|| max_unacknowledged_term_requests.is_set
	|| retry_timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_consecutive_conf_naks.yfilter)
	|| ydk::is_set(max_unacknowledged_conf_requests.yfilter)
	|| ydk::is_set(max_unacknowledged_term_requests.yfilter)
	|| ydk::is_set(retry_timeout.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_consecutive_conf_naks.is_set || is_set(max_consecutive_conf_naks.yfilter)) leaf_name_data.push_back(max_consecutive_conf_naks.get_name_leafdata());
    if (max_unacknowledged_conf_requests.is_set || is_set(max_unacknowledged_conf_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_conf_requests.get_name_leafdata());
    if (max_unacknowledged_term_requests.is_set || is_set(max_unacknowledged_term_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_term_requests.get_name_leafdata());
    if (retry_timeout.is_set || is_set(retry_timeout.yfilter)) leaf_name_data.push_back(retry_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks = value;
        max_consecutive_conf_naks.value_namespace = name_space;
        max_consecutive_conf_naks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests = value;
        max_unacknowledged_conf_requests.value_namespace = name_space;
        max_unacknowledged_conf_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests = value;
        max_unacknowledged_term_requests.value_namespace = name_space;
        max_unacknowledged_term_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timeout")
    {
        retry_timeout = value;
        retry_timeout.value_namespace = name_space;
        retry_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-term-requests")
    {
        max_unacknowledged_term_requests.yfilter = yfilter;
    }
    if(value_path == "retry-timeout")
    {
        retry_timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp::Fsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-consecutive-conf-naks" || name == "max-unacknowledged-conf-requests" || name == "max-unacknowledged-term-requests" || name == "retry-timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::CiscoIOSXRPppMaIpcpCfgPpp()
    :
    ipcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>())
{
    ipcp->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::~CiscoIOSXRPppMaIpcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_data() const
{
    return (ipcp !=  nullptr && ipcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (ipcp !=  nullptr && ipcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcp-cfg:Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp")
    {
        if(ipcp == nullptr)
        {
            ipcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>();
        }
        return ipcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcp != nullptr)
    {
        children["ipcp"] = ipcp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Ipcp()
    :
    neighbor_route_disable{YType::empty, "neighbor-route-disable"}
    	,
    dns(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>())
	,peer_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>())
{
    dns->parent = this;
    peer_address->parent = this;

    yang_name = "ipcp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::~Ipcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_data() const
{
    return neighbor_route_disable.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (peer_address !=  nullptr && peer_address->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_route_disable.yfilter)
	|| (dns !=  nullptr && dns->has_operation())
	|| (peer_address !=  nullptr && peer_address->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_route_disable.is_set || is_set(neighbor_route_disable.yfilter)) leaf_name_data.push_back(neighbor_route_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>();
        }
        return peer_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(peer_address != nullptr)
    {
        children["peer-address"] = peer_address;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable = value;
        neighbor_route_disable.value_namespace = name_space;
        neighbor_route_disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns" || name == "peer-address" || name == "neighbor-route-disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::Dns()
    :
    dns_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses>())
{
    dns_addresses->parent = this;

    yang_name = "dns"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::~Dns()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_data() const
{
    return (dns_addresses !=  nullptr && dns_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (dns_addresses !=  nullptr && dns_addresses->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-addresses")
    {
        if(dns_addresses == nullptr)
        {
            dns_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses>();
        }
        return dns_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns_addresses != nullptr)
    {
        children["dns-addresses"] = dns_addresses;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-addresses")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::DnsAddresses()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns-addresses"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::~DnsAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::PeerAddress()
    :
    default_{YType::str, "default"}
{

    yang_name = "peer-address"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::~PeerAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_data() const
{
    return default_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::CiscoIOSXRPppMaIpcpiwCfgPpp()
    :
    ipcpiw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw>())
{
    ipcpiw->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::~CiscoIOSXRPppMaIpcpiwCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_data() const
{
    return (ipcpiw !=  nullptr && ipcpiw->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (ipcpiw !=  nullptr && ipcpiw->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcpiw")
    {
        if(ipcpiw == nullptr)
        {
            ipcpiw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw>();
        }
        return ipcpiw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcpiw != nullptr)
    {
        children["ipcpiw"] = ipcpiw;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcpiw")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::Ipcpiw()
    :
    proxy_address{YType::str, "proxy-address"}
{

    yang_name = "ipcpiw"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::~Ipcpiw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_data() const
{
    return proxy_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcpiw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_address.is_set || is_set(proxy_address.yfilter)) leaf_name_data.push_back(proxy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-address")
    {
        proxy_address = value;
        proxy_address.value_namespace = name_space;
        proxy_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-address")
    {
        proxy_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp::Ipcpiw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::CiscoIOSXRPppMaLcpCfgPpp()
    :
    lcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp>())
	,mcmp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp>())
{
    lcp->parent = this;
    mcmp->parent = this;

    yang_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::~CiscoIOSXRPppMaLcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_data() const
{
    return (lcp !=  nullptr && lcp->has_data())
	|| (mcmp !=  nullptr && mcmp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (lcp !=  nullptr && lcp->has_operation())
	|| (mcmp !=  nullptr && mcmp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-lcp-cfg:Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lcp")
    {
        if(lcp == nullptr)
        {
            lcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp>();
        }
        return lcp;
    }

    if(child_yang_name == "mcmp")
    {
        if(mcmp == nullptr)
        {
            mcmp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp>();
        }
        return mcmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lcp != nullptr)
    {
        children["lcp"] = lcp;
    }

    if(mcmp != nullptr)
    {
        children["mcmp"] = mcmp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lcp" || name == "mcmp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Lcp()
    :
    service_type{YType::int32, "service-type"}
    	,
    authentication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication>())
	,chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap>())
	,loop_back(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack>())
	,ms_chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap>())
	,multilink(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink>())
	,pap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap>())
{
    authentication->parent = this;
    chap->parent = this;
    loop_back->parent = this;
    ms_chap->parent = this;
    multilink->parent = this;
    pap->parent = this;

    yang_name = "lcp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::~Lcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_data() const
{
    return service_type.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (chap !=  nullptr && chap->has_data())
	|| (loop_back !=  nullptr && loop_back->has_data())
	|| (ms_chap !=  nullptr && ms_chap->has_data())
	|| (multilink !=  nullptr && multilink->has_data())
	|| (pap !=  nullptr && pap->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (chap !=  nullptr && chap->has_operation())
	|| (loop_back !=  nullptr && loop_back->has_operation())
	|| (ms_chap !=  nullptr && ms_chap->has_operation())
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (pap !=  nullptr && pap->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "chap")
    {
        if(chap == nullptr)
        {
            chap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap>();
        }
        return chap;
    }

    if(child_yang_name == "loop-back")
    {
        if(loop_back == nullptr)
        {
            loop_back = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack>();
        }
        return loop_back;
    }

    if(child_yang_name == "ms-chap")
    {
        if(ms_chap == nullptr)
        {
            ms_chap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap>();
        }
        return ms_chap;
    }

    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "pap")
    {
        if(pap == nullptr)
        {
            pap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap>();
        }
        return pap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(chap != nullptr)
    {
        children["chap"] = chap;
    }

    if(loop_back != nullptr)
    {
        children["loop-back"] = loop_back;
    }

    if(ms_chap != nullptr)
    {
        children["ms-chap"] = ms_chap;
    }

    if(multilink != nullptr)
    {
        children["multilink"] = multilink;
    }

    if(pap != nullptr)
    {
        children["pap"] = pap;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "chap" || name == "loop-back" || name == "ms-chap" || name == "multilink" || name == "pap" || name == "service-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Authentication()
    :
    max_authentication_failures{YType::uint32, "max-authentication-failures"},
    timeout{YType::uint32, "timeout"}
    	,
    method(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method>())
{
    method->parent = this;

    yang_name = "authentication"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::~Authentication()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::has_data() const
{
    return max_authentication_failures.is_set
	|| timeout.is_set
	|| (method !=  nullptr && method->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_authentication_failures.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_authentication_failures.is_set || is_set(max_authentication_failures.yfilter)) leaf_name_data.push_back(max_authentication_failures.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures = value;
        max_authentication_failures.value_namespace = name_space;
        max_authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "max-authentication-failures" || name == "timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::Method()
    :
    method{YType::enumeration, "method"},
    name{YType::str, "name"}
{

    yang_name = "method"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::~Method()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Authentication::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::Chap()
    :
    host_name{YType::str, "host-name"},
    password{YType::str, "password"},
    refuse{YType::empty, "refuse"}
{

    yang_name = "chap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::~Chap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_data() const
{
    return host_name.is_set
	|| password.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(refuse.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refuse")
    {
        refuse = value;
        refuse.value_namespace = name_space;
        refuse.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Chap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "password" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::LoopBack()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "loop-back"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::~LoopBack()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::has_data() const
{
    return ignore.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loop-back";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::LoopBack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::MsChap()
    :
    host_name{YType::str, "host-name"},
    password{YType::str, "password"},
    refuse{YType::empty, "refuse"}
{

    yang_name = "ms-chap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::~MsChap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_data() const
{
    return host_name.is_set
	|| password.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(refuse.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ms-chap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refuse")
    {
        refuse = value;
        refuse.value_namespace = name_space;
        refuse.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::MsChap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "password" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::Multilink()
    :
    minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive>())
{
    minimum_active->parent = this;

    yang_name = "multilink"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::~Multilink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::has_data() const
{
    return (minimum_active !=  nullptr && minimum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| (minimum_active !=  nullptr && minimum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum-active")
    {
        if(minimum_active == nullptr)
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive>();
        }
        return minimum_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimum_active != nullptr)
    {
        children["minimum-active"] = minimum_active;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-active")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
{

    yang_name = "minimum-active"; yang_parent_name = "multilink"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::has_data() const
{
    return links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Multilink::MinimumActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::Pap()
    :
    refuse{YType::empty, "refuse"}
    	,
    send_user_info(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo>())
{
    send_user_info->parent = this;

    yang_name = "pap"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::~Pap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::has_data() const
{
    return refuse.is_set
	|| (send_user_info !=  nullptr && send_user_info->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refuse.yfilter)
	|| (send_user_info !=  nullptr && send_user_info->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refuse.is_set || is_set(refuse.yfilter)) leaf_name_data.push_back(refuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send-user-info")
    {
        if(send_user_info == nullptr)
        {
            send_user_info = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo>();
        }
        return send_user_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send_user_info != nullptr)
    {
        children["send-user-info"] = send_user_info;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refuse")
    {
        refuse = value;
        refuse.value_namespace = name_space;
        refuse.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refuse")
    {
        refuse.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-user-info" || name == "refuse")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::SendUserInfo()
    :
    password{YType::str, "password"},
    username{YType::str, "username"}
{

    yang_name = "send-user-info"; yang_parent_name = "pap"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::~SendUserInfo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_data() const
{
    return password.is_set
	|| username.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-user-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Lcp::Pap::SendUserInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "username")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Mcmp()
    :
    enable{YType::empty, "enable"},
    remote{YType::uint32, "remote"}
    	,
    local(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local>())
{
    local->parent = this;

    yang_name = "mcmp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::~Mcmp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_data() const
{
    return enable.is_set
	|| remote.is_set
	|| (local !=  nullptr && local->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(remote.yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "enable" || name == "remote")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::Local()
    :
    initial{YType::uint32, "initial"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "local"; yang_parent_name = "mcmp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::~Local()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::has_data() const
{
    return initial.is_set
	|| maximum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp::Mcmp::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial" || name == "maximum")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagrs()
{

    yang_name = "dagrs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::~Dagrs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_data() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_operation() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:dagrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dagr")
    {
        for(auto const & c : dagr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr>();
        c->parent = this;
        dagr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dagr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dagr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Dagr()
    :
    ip_addr{YType::str, "ip-addr"},
    enter{YType::empty, "enter"}
    	,
    sub(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>())
{
    sub->parent = this;

    yang_name = "dagr"; yang_parent_name = "dagrs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::~Dagr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_data() const
{
    return ip_addr.is_set
	|| enter.is_set
	|| (sub !=  nullptr && sub->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(enter.yfilter)
	|| (sub !=  nullptr && sub->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dagr" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (enter.is_set || is_set(enter.yfilter)) leaf_name_data.push_back(enter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub")
    {
        if(sub == nullptr)
        {
            sub = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>();
        }
        return sub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sub != nullptr)
    {
        children["sub"] = sub;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enter")
    {
        enter = value;
        enter.value_namespace = name_space;
        enter.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "enter")
    {
        enter.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub" || name == "ip-addr" || name == "enter")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Sub()
    :
    priority_timeout{YType::uint32, "priority-timeout"}
    	,
    distance(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>())
	,metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>())
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>())
{
    distance->parent = this;
    metric->parent = this;
    timers->parent = this;

    yang_name = "sub"; yang_parent_name = "dagr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::~Sub()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_data() const
{
    return priority_timeout.is_set
	|| (distance !=  nullptr && distance->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_timeout.yfilter)
	|| (distance !=  nullptr && distance->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_timeout.is_set || is_set(priority_timeout.yfilter)) leaf_name_data.push_back(priority_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout = value;
        priority_timeout.value_namespace = name_space;
        priority_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "metric" || name == "timers" || name == "priority-timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::Distance()
    :
    dist_norm{YType::uint32, "dist-norm"},
    dist_prio{YType::uint32, "dist-prio"}
{

    yang_name = "distance"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::~Distance()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_data() const
{
    return dist_norm.is_set
	|| dist_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dist_norm.yfilter)
	|| ydk::is_set(dist_prio.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_norm.is_set || is_set(dist_norm.yfilter)) leaf_name_data.push_back(dist_norm.get_name_leafdata());
    if (dist_prio.is_set || is_set(dist_prio.yfilter)) leaf_name_data.push_back(dist_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dist-norm")
    {
        dist_norm = value;
        dist_norm.value_namespace = name_space;
        dist_norm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-prio")
    {
        dist_prio = value;
        dist_prio.value_namespace = name_space;
        dist_prio.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dist-norm")
    {
        dist_norm.yfilter = yfilter;
    }
    if(value_path == "dist-prio")
    {
        dist_prio.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dist-norm" || name == "dist-prio")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::Metric()
    :
    metric_norm{YType::uint32, "metric-norm"},
    metric_prio{YType::uint32, "metric-prio"}
{

    yang_name = "metric"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_data() const
{
    return metric_norm.is_set
	|| metric_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_norm.yfilter)
	|| ydk::is_set(metric_prio.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_norm.is_set || is_set(metric_norm.yfilter)) leaf_name_data.push_back(metric_norm.get_name_leafdata());
    if (metric_prio.is_set || is_set(metric_prio.yfilter)) leaf_name_data.push_back(metric_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-norm")
    {
        metric_norm = value;
        metric_norm.value_namespace = name_space;
        metric_norm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-prio")
    {
        metric_prio = value;
        metric_prio.value_namespace = name_space;
        metric_prio.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-norm")
    {
        metric_norm.yfilter = yfilter;
    }
    if(value_path == "metric-prio")
    {
        metric_prio.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-norm" || name == "metric-prio")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::Timers()
    :
    query_time{YType::uint32, "query-time"},
    sby_time{YType::uint32, "sby-time"}
{

    yang_name = "timers"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_data() const
{
    return query_time.is_set
	|| sby_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_time.yfilter)
	|| ydk::is_set(sby_time.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_time.is_set || is_set(query_time.yfilter)) leaf_name_data.push_back(query_time.get_name_leafdata());
    if (sby_time.is_set || is_set(sby_time.yfilter)) leaf_name_data.push_back(sby_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-time")
    {
        query_time = value;
        query_time.value_namespace = name_space;
        query_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sby-time")
    {
        sby_time = value;
        sby_time.value_namespace = name_space;
        sby_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-time")
    {
        query_time.yfilter = yfilter;
    }
    if(value_path == "sby-time")
    {
        sby_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-time" || name == "sby-time")
        return true;
    return false;
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

    yang_name = "dampening"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(suppress_time.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "args" || name == "half-life" || name == "restart-penalty" || name == "reuse-threshold" || name == "suppress-threshold" || name == "suppress-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::Dot1XInterface()
    :
    dot1x_profile{YType::str, "dot1x-profile"}
{

    yang_name = "dot1x-interface"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::~Dot1XInterface()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::has_data() const
{
    return dot1x_profile.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x_profile.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x_profile.is_set || is_set(dot1x_profile.yfilter)) leaf_name_data.push_back(dot1x_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x-profile")
    {
        dot1x_profile = value;
        dot1x_profile.value_namespace = name_space;
        dot1x_profile.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x-profile")
    {
        dot1x_profile.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x-profile")
        return true;
    return false;
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
    network_srlgs->parent = this;

    yang_name = "dwdm"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(enable_vtxp.yfilter)
	|| ydk::is_set(laser.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(network_connection_id.yfilter)
	|| ydk::is_set(network_port_id.yfilter)
	|| ydk::is_set(rx_threshold.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_vtxp.is_set || is_set(enable_vtxp.yfilter)) leaf_name_data.push_back(enable_vtxp.get_name_leafdata());
    if (laser.is_set || is_set(laser.yfilter)) leaf_name_data.push_back(laser.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (network_connection_id.is_set || is_set(network_connection_id.yfilter)) leaf_name_data.push_back(network_connection_id.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.yfilter)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709")
    {
        if(g709 == nullptr)
        {
            g709 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>();
        }
        return g709;
    }

    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "wavelength")
    {
        if(wavelength == nullptr)
        {
            wavelength = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength>();
        }
        return wavelength;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709 != nullptr)
    {
        children["g709"] = g709;
    }

    if(network_srlgs != nullptr)
    {
        children["network-srlgs"] = network_srlgs;
    }

    if(wavelength != nullptr)
    {
        children["wavelength"] = wavelength;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp = value;
        enable_vtxp.value_namespace = name_space;
        enable_vtxp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser")
    {
        laser = value;
        laser.value_namespace = name_space;
        laser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id = value;
        network_connection_id.value_namespace = name_space;
        network_connection_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
        network_port_id.value_namespace = name_space;
        network_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp.yfilter = yfilter;
    }
    if(value_path == "laser")
    {
        laser.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id.yfilter = yfilter;
    }
    if(value_path == "network-port-id")
    {
        network_port_id.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709" || name == "network-srlgs" || name == "wavelength" || name == "enable-vtxp" || name == "laser" || name == "loopback" || name == "network-connection-id" || name == "network-port-id" || name == "rx-threshold" || name == "transmit-power" || name == "transport-admin-state")
        return true;
    return false;
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
    otu->parent = this;

    yang_name = "g709"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(bdi_to_gais.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(proactive.yfilter)
	|| ydk::is_set(proactive_logging_file.yfilter)
	|| ydk::is_set(tim_to_gais.yfilter)
	|| ydk::is_set(tti_processing.yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdi_to_gais.is_set || is_set(bdi_to_gais.yfilter)) leaf_name_data.push_back(bdi_to_gais.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (proactive.is_set || is_set(proactive.yfilter)) leaf_name_data.push_back(proactive.get_name_leafdata());
    if (proactive_logging_file.is_set || is_set(proactive_logging_file.yfilter)) leaf_name_data.push_back(proactive_logging_file.get_name_leafdata());
    if (tim_to_gais.is_set || is_set(tim_to_gais.yfilter)) leaf_name_data.push_back(tim_to_gais.get_name_leafdata());
    if (tti_processing.is_set || is_set(tti_processing.yfilter)) leaf_name_data.push_back(tti_processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec>();
        }
        return fec;
    }

    if(child_yang_name == "odu")
    {
        if(odu == nullptr)
        {
            odu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>();
        }
        return odu;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs>();
        }
        return prbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    if(odu != nullptr)
    {
        children["odu"] = odu;
    }

    if(otu != nullptr)
    {
        children["otu"] = otu;
    }

    if(prbs != nullptr)
    {
        children["prbs"] = prbs;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais = value;
        bdi_to_gais.value_namespace = name_space;
        bdi_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive")
    {
        proactive = value;
        proactive.value_namespace = name_space;
        proactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file = value;
        proactive_logging_file.value_namespace = name_space;
        proactive_logging_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais = value;
        tim_to_gais.value_namespace = name_space;
        tim_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-processing")
    {
        tti_processing = value;
        tti_processing.value_namespace = name_space;
        tti_processing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "proactive")
    {
        proactive.yfilter = yfilter;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file.yfilter = yfilter;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais.yfilter = yfilter;
    }
    if(value_path == "tti-processing")
    {
        tti_processing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "odu" || name == "otu" || name == "prbs" || name == "bdi-to-gais" || name == "enable" || name == "framing" || name == "proactive" || name == "proactive-logging-file" || name == "tim-to-gais" || name == "tti-processing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::Fec()
    :
    efec_mode{YType::enumeration, "efec-mode"},
    fec_mode{YType::enumeration, "fec-mode"}
{

    yang_name = "fec"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(efec_mode.yfilter)
	|| ydk::is_set(fec_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efec_mode.is_set || is_set(efec_mode.yfilter)) leaf_name_data.push_back(efec_mode.get_name_leafdata());
    if (fec_mode.is_set || is_set(fec_mode.yfilter)) leaf_name_data.push_back(fec_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efec-mode")
    {
        efec_mode = value;
        efec_mode.value_namespace = name_space;
        efec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-mode")
    {
        fec_mode = value;
        fec_mode.value_namespace = name_space;
        fec_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efec-mode")
    {
        efec_mode.yfilter = yfilter;
    }
    if(value_path == "fec-mode")
    {
        fec_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efec-mode" || name == "fec-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::Odu()
    :
    odu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>())
	,odu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>())
	,odu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>())
	,odu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>())
{
    odu_expected_tti->parent = this;
    odu_reports->parent = this;
    odu_thresholds->parent = this;
    odu_tx_tti->parent = this;

    yang_name = "odu"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-expected-tti")
    {
        if(odu_expected_tti == nullptr)
        {
            odu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>();
        }
        return odu_expected_tti;
    }

    if(child_yang_name == "odu-reports")
    {
        if(odu_reports == nullptr)
        {
            odu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>();
        }
        return odu_reports;
    }

    if(child_yang_name == "odu-thresholds")
    {
        if(odu_thresholds == nullptr)
        {
            odu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>();
        }
        return odu_thresholds;
    }

    if(child_yang_name == "odu-tx-tti")
    {
        if(odu_tx_tti == nullptr)
        {
            odu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>();
        }
        return odu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_expected_tti != nullptr)
    {
        children["odu-expected-tti"] = odu_expected_tti;
    }

    if(odu_reports != nullptr)
    {
        children["odu-reports"] = odu_reports;
    }

    if(odu_thresholds != nullptr)
    {
        children["odu-thresholds"] = odu_thresholds;
    }

    if(odu_tx_tti != nullptr)
    {
        children["odu-tx-tti"] = odu_tx_tti;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-expected-tti" || name == "odu-reports" || name == "odu-thresholds" || name == "odu-tx-tti")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::OduExpectedTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "odu-expected-tti"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ascii-string" || name == "hex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReports()
{

    yang_name = "odu-reports"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-report")
    {
        for(auto const & c : odu_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport>();
        c->parent = this;
        odu_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::OduReport()
    :
    alarm{YType::enumeration, "alarm"}
{

    yang_name = "odu-report"; yang_parent_name = "odu-reports"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-report" <<"[alarm='" <<alarm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThresholds()
{

    yang_name = "odu-thresholds"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-threshold")
    {
        for(auto const & c : odu_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold>();
        c->parent = this;
        odu_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : odu_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::OduThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{

    yang_name = "odu-threshold"; yang_parent_name = "odu-thresholds"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-threshold" <<"[threshold='" <<threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::OduTxTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "odu-tx-tti"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-tx-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ascii-string" || name == "hex-string" || name == "string-type")
        return true;
    return false;
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
    otu_expected_tti->parent = this;
    otu_reports->parent = this;
    otu_thresholds->parent = this;
    otu_tx_tti->parent = this;

    yang_name = "otu"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr")
    {
        if(frr == nullptr)
        {
            frr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>();
        }
        return frr;
    }

    if(child_yang_name == "otu-expected-tti")
    {
        if(otu_expected_tti == nullptr)
        {
            otu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>();
        }
        return otu_expected_tti;
    }

    if(child_yang_name == "otu-reports")
    {
        if(otu_reports == nullptr)
        {
            otu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>();
        }
        return otu_reports;
    }

    if(child_yang_name == "otu-thresholds")
    {
        if(otu_thresholds == nullptr)
        {
            otu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>();
        }
        return otu_thresholds;
    }

    if(child_yang_name == "otu-tx-tti")
    {
        if(otu_tx_tti == nullptr)
        {
            otu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>();
        }
        return otu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr != nullptr)
    {
        children["frr"] = frr;
    }

    if(otu_expected_tti != nullptr)
    {
        children["otu-expected-tti"] = otu_expected_tti;
    }

    if(otu_reports != nullptr)
    {
        children["otu-reports"] = otu_reports;
    }

    if(otu_thresholds != nullptr)
    {
        children["otu-thresholds"] = otu_thresholds;
    }

    if(otu_tx_tti != nullptr)
    {
        children["otu-tx-tti"] = otu_tx_tti;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr" || name == "otu-expected-tti" || name == "otu-reports" || name == "otu-thresholds" || name == "otu-tx-tti")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::Frr()
    :
    revert_threshold(nullptr) // presence node
	,revert_window(nullptr) // presence node
	,trigger_threshold(nullptr) // presence node
	,trigger_window(nullptr) // presence node
{

    yang_name = "frr"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold>();
        }
        return revert_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow>();
        }
        return revert_window;
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow>();
        }
        return trigger_window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(revert_threshold != nullptr)
    {
        children["revert-threshold"] = revert_threshold;
    }

    if(revert_window != nullptr)
    {
        children["revert-window"] = revert_window;
    }

    if(trigger_threshold != nullptr)
    {
        children["trigger-threshold"] = trigger_threshold;
    }

    if(trigger_window != nullptr)
    {
        children["trigger-window"] = trigger_window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-threshold" || name == "revert-window" || name == "trigger-threshold" || name == "trigger-window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::RevertThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{

    yang_name = "revert-threshold"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ber_base.yfilter)
	|| ydk::is_set(ber_power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.yfilter)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.yfilter)) leaf_name_data.push_back(ber_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
        ber_base.value_namespace = name_space;
        ber_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
        ber_power.value_namespace = name_space;
        ber_power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ber-base")
    {
        ber_base.yfilter = yfilter;
    }
    if(value_path == "ber-power")
    {
        ber_power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ber-base" || name == "ber-power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::RevertWindow()
    :
    dummy{YType::uint32, "dummy"},
    window{YType::uint32, "window"}
{

    yang_name = "revert-window"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(window.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::TriggerThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{

    yang_name = "trigger-threshold"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ber_base.yfilter)
	|| ydk::is_set(ber_power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.yfilter)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.yfilter)) leaf_name_data.push_back(ber_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
        ber_base.value_namespace = name_space;
        ber_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
        ber_power.value_namespace = name_space;
        ber_power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ber-base")
    {
        ber_base.yfilter = yfilter;
    }
    if(value_path == "ber-power")
    {
        ber_power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ber-base" || name == "ber-power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::TriggerWindow()
    :
    dummy{YType::uint32, "dummy"},
    window{YType::uint32, "window"}
{

    yang_name = "trigger-window"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(window.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::OtuExpectedTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otu-expected-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ascii-string" || name == "hex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReports()
{

    yang_name = "otu-reports"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-report")
    {
        for(auto const & c : otu_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport>();
        c->parent = this;
        otu_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_report)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::OtuReport()
    :
    alarm{YType::enumeration, "alarm"}
{

    yang_name = "otu-report"; yang_parent_name = "otu-reports"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-report" <<"[alarm='" <<alarm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThresholds()
{

    yang_name = "otu-thresholds"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-threshold")
    {
        for(auto const & c : otu_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold>();
        c->parent = this;
        otu_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::OtuThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{

    yang_name = "otu-threshold"; yang_parent_name = "otu-thresholds"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-threshold" <<"[threshold='" <<threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::OtuTxTti()
    :
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{

    yang_name = "otu-tx-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter)
	|| ydk::is_set(string_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-tx-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ascii-string" || name == "hex-string" || name == "string-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::Prbs()
    :
    prbs_mode{YType::enumeration, "prbs-mode"},
    prbs_pattern{YType::enumeration, "prbs-pattern"}
{

    yang_name = "prbs"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prbs_mode.yfilter)
	|| ydk::is_set(prbs_pattern.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_mode.is_set || is_set(prbs_mode.yfilter)) leaf_name_data.push_back(prbs_mode.get_name_leafdata());
    if (prbs_pattern.is_set || is_set(prbs_pattern.yfilter)) leaf_name_data.push_back(prbs_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode = value;
        prbs_mode.value_namespace = name_space;
        prbs_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern = value;
        prbs_pattern.value_namespace = name_space;
        prbs_pattern.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode.yfilter = yfilter;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-mode" || name == "prbs-pattern")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlgs()
{

    yang_name = "network-srlgs"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        for(auto const & c : network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
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

    yang_name = "network-srlg"; yang_parent_name = "network-srlgs"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::Wavelength()
    :
    prog_frequency{YType::str, "prog-frequency"},
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_number{YType::enumeration, "wave-channel-number"}
{

    yang_name = "wavelength"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prog_frequency.yfilter)
	|| ydk::is_set(wave_channel.yfilter)
	|| ydk::is_set(wave_channel_number.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prog_frequency.is_set || is_set(prog_frequency.yfilter)) leaf_name_data.push_back(prog_frequency.get_name_leafdata());
    if (wave_channel.is_set || is_set(wave_channel.yfilter)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_number.is_set || is_set(wave_channel_number.yfilter)) leaf_name_data.push_back(wave_channel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prog-frequency")
    {
        prog_frequency = value;
        prog_frequency.value_namespace = name_space;
        prog_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel")
    {
        wave_channel = value;
        wave_channel.value_namespace = name_space;
        wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number = value;
        wave_channel_number.value_namespace = name_space;
        wave_channel_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prog-frequency")
    {
        prog_frequency.yfilter = yfilter;
    }
    if(value_path == "wave-channel")
    {
        wave_channel.yfilter = yfilter;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prog-frequency" || name == "wave-channel" || name == "wave-channel-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::Encapsulation()
    :
    capsulation_options{YType::int32, "capsulation-options"},
    encapsulation{YType::str, "encapsulation"}
{

    yang_name = "encapsulation"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(capsulation_options.yfilter)
	|| ydk::is_set(encapsulation.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_options.is_set || is_set(capsulation_options.yfilter)) leaf_name_data.push_back(capsulation_options.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capsulation-options")
    {
        capsulation_options = value;
        capsulation_options.value_namespace = name_space;
        capsulation_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capsulation-options")
    {
        capsulation_options.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capsulation-options" || name == "encapsulation")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::EsPacketFilter()
    :
    inbound{YType::str, "inbound"},
    outbound{YType::str, "outbound"}
{

    yang_name = "es-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::~EsPacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_data() const
{
    return inbound.is_set
	|| outbound.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
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
	,optical_power_degrade(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade>())
	,signal_degrade_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>())
	,signal_fail_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>())
{
    carrier_delay->parent = this;
    optical_power_degrade->parent = this;
    signal_degrade_bit_error_rate->parent = this;
    signal_fail_bit_error_rate->parent = this;

    yang_name = "ethernet"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
	|| (optical_power_degrade !=  nullptr && optical_power_degrade->has_data())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_data())
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_negotiation.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(flow_control.yfilter)
	|| ydk::is_set(forward_error_correction.yfilter)
	|| ydk::is_set(inter_packet_gap.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(priority_flow_control.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (optical_power_degrade !=  nullptr && optical_power_degrade->has_operation())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_operation())
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-cfg:ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_negotiation.is_set || is_set(auto_negotiation.yfilter)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (flow_control.is_set || is_set(flow_control.yfilter)) leaf_name_data.push_back(flow_control.get_name_leafdata());
    if (forward_error_correction.is_set || is_set(forward_error_correction.yfilter)) leaf_name_data.push_back(forward_error_correction.get_name_leafdata());
    if (inter_packet_gap.is_set || is_set(inter_packet_gap.yfilter)) leaf_name_data.push_back(inter_packet_gap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (priority_flow_control.is_set || is_set(priority_flow_control.yfilter)) leaf_name_data.push_back(priority_flow_control.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "optical-power-degrade")
    {
        if(optical_power_degrade == nullptr)
        {
            optical_power_degrade = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade>();
        }
        return optical_power_degrade;
    }

    if(child_yang_name == "signal-degrade-bit-error-rate")
    {
        if(signal_degrade_bit_error_rate == nullptr)
        {
            signal_degrade_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>();
        }
        return signal_degrade_bit_error_rate;
    }

    if(child_yang_name == "signal-fail-bit-error-rate")
    {
        if(signal_fail_bit_error_rate == nullptr)
        {
            signal_fail_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>();
        }
        return signal_fail_bit_error_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(optical_power_degrade != nullptr)
    {
        children["optical-power-degrade"] = optical_power_degrade;
    }

    if(signal_degrade_bit_error_rate != nullptr)
    {
        children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
    }

    if(signal_fail_bit_error_rate != nullptr)
    {
        children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
        auto_negotiation.value_namespace = name_space;
        auto_negotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control")
    {
        flow_control = value;
        flow_control.value_namespace = name_space;
        flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-error-correction")
    {
        forward_error_correction = value;
        forward_error_correction.value_namespace = name_space;
        forward_error_correction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-packet-gap")
    {
        inter_packet_gap = value;
        inter_packet_gap.value_namespace = name_space;
        inter_packet_gap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-flow-control")
    {
        priority_flow_control = value;
        priority_flow_control.value_namespace = name_space;
        priority_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-negotiation")
    {
        auto_negotiation.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "flow-control")
    {
        flow_control.yfilter = yfilter;
    }
    if(value_path == "forward-error-correction")
    {
        forward_error_correction.yfilter = yfilter;
    }
    if(value_path == "inter-packet-gap")
    {
        inter_packet_gap.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "priority-flow-control")
    {
        priority_flow_control.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay" || name == "optical-power-degrade" || name == "signal-degrade-bit-error-rate" || name == "signal-fail-bit-error-rate" || name == "auto-negotiation" || name == "duplex" || name == "flow-control" || name == "forward-error-correction" || name == "inter-packet-gap" || name == "loopback" || name == "priority-flow-control" || name == "speed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{

    yang_name = "carrier-delay"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(carrier_delay_down.yfilter)
	|| ydk::is_set(carrier_delay_up.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.yfilter)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.yfilter)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
        carrier_delay_down.value_namespace = name_space;
        carrier_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
        carrier_delay_up.value_namespace = name_space;
        carrier_delay_up.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down.yfilter = yfilter;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay-down" || name == "carrier-delay-up")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::OpticalPowerDegrade()
    :
    rx_alarm_threshold{YType::int32, "rx-alarm-threshold"}
{

    yang_name = "optical-power-degrade"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::~OpticalPowerDegrade()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::has_data() const
{
    return rx_alarm_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_alarm_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-power-degrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_alarm_threshold.is_set || is_set(rx_alarm_threshold.yfilter)) leaf_name_data.push_back(rx_alarm_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-alarm-threshold")
    {
        rx_alarm_threshold = value;
        rx_alarm_threshold.value_namespace = name_space;
        rx_alarm_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-alarm-threshold")
    {
        rx_alarm_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-alarm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::SignalDegradeBitErrorRate()
    :
    signal_degrade_report{YType::empty, "signal-degrade-report"},
    signal_degrade_threshold{YType::uint32, "signal-degrade-threshold"}
{

    yang_name = "signal-degrade-bit-error-rate"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(signal_degrade_report.yfilter)
	|| ydk::is_set(signal_degrade_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-degrade-bit-error-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_degrade_report.is_set || is_set(signal_degrade_report.yfilter)) leaf_name_data.push_back(signal_degrade_report.get_name_leafdata());
    if (signal_degrade_threshold.is_set || is_set(signal_degrade_threshold.yfilter)) leaf_name_data.push_back(signal_degrade_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-degrade-report")
    {
        signal_degrade_report = value;
        signal_degrade_report.value_namespace = name_space;
        signal_degrade_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold = value;
        signal_degrade_threshold.value_namespace = name_space;
        signal_degrade_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-degrade-report")
    {
        signal_degrade_report.yfilter = yfilter;
    }
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-degrade-report" || name == "signal-degrade-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::SignalFailBitErrorRate()
    :
    signal_fail_report_disable{YType::empty, "signal-fail-report-disable"},
    signal_fail_threshold{YType::uint32, "signal-fail-threshold"},
    signal_remote_fault{YType::empty, "signal-remote-fault"}
{

    yang_name = "signal-fail-bit-error-rate"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(signal_fail_report_disable.yfilter)
	|| ydk::is_set(signal_fail_threshold.yfilter)
	|| ydk::is_set(signal_remote_fault.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signal-fail-bit-error-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_fail_report_disable.is_set || is_set(signal_fail_report_disable.yfilter)) leaf_name_data.push_back(signal_fail_report_disable.get_name_leafdata());
    if (signal_fail_threshold.is_set || is_set(signal_fail_threshold.yfilter)) leaf_name_data.push_back(signal_fail_threshold.get_name_leafdata());
    if (signal_remote_fault.is_set || is_set(signal_remote_fault.yfilter)) leaf_name_data.push_back(signal_remote_fault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-fail-report-disable")
    {
        signal_fail_report_disable = value;
        signal_fail_report_disable.value_namespace = name_space;
        signal_fail_report_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold = value;
        signal_fail_threshold.value_namespace = name_space;
        signal_fail_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault = value;
        signal_remote_fault.value_namespace = name_space;
        signal_remote_fault.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-fail-report-disable")
    {
        signal_fail_report_disable.yfilter = yfilter;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-fail-report-disable" || name == "signal-fail-threshold" || name == "signal-remote-fault")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::EthernetBng()
    :
    ambiguous_encapsulation(nullptr) // presence node
{

    yang_name = "ethernet-bng"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (ambiguous_encapsulation !=  nullptr && ambiguous_encapsulation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ambiguous-encapsulation")
    {
        if(ambiguous_encapsulation == nullptr)
        {
            ambiguous_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation>();
        }
        return ambiguous_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ambiguous_encapsulation != nullptr)
    {
        children["ambiguous-encapsulation"] = ambiguous_encapsulation;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ambiguous-encapsulation")
        return true;
    return false;
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

    yang_name = "ambiguous-encapsulation"; yang_parent_name = "ethernet-bng"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(additional_range1_high.yfilter)
	|| ydk::is_set(additional_range1_low.yfilter)
	|| ydk::is_set(additional_range2_high.yfilter)
	|| ydk::is_set(additional_range2_low.yfilter)
	|| ydk::is_set(additional_range3_high.yfilter)
	|| ydk::is_set(additional_range3_low.yfilter)
	|| ydk::is_set(additional_range4_high.yfilter)
	|| ydk::is_set(additional_range4_low.yfilter)
	|| ydk::is_set(additional_range5_high.yfilter)
	|| ydk::is_set(additional_range5_low.yfilter)
	|| ydk::is_set(additional_range6_high.yfilter)
	|| ydk::is_set(additional_range6_low.yfilter)
	|| ydk::is_set(additional_range7_high.yfilter)
	|| ydk::is_set(additional_range7_low.yfilter)
	|| ydk::is_set(additional_range8_high.yfilter)
	|| ydk::is_set(additional_range8_low.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(ingress_destination_mac.yfilter)
	|| ydk::is_set(ingress_source_mac.yfilter)
	|| ydk::is_set(inner_class_of_service.yfilter)
	|| ydk::is_set(inner_range1_high.yfilter)
	|| ydk::is_set(inner_range1_low.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(outer_class_of_service.yfilter)
	|| ydk::is_set(outer_range1_high.yfilter)
	|| ydk::is_set(outer_range1_low.yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(payload_ethertype_match.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ambiguous-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_range1_high.is_set || is_set(additional_range1_high.yfilter)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.yfilter)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.yfilter)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.yfilter)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.yfilter)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.yfilter)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.yfilter)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.yfilter)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.yfilter)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.yfilter)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.yfilter)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.yfilter)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.yfilter)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.yfilter)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.yfilter)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.yfilter)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.yfilter)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.yfilter)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.yfilter)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.yfilter)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.yfilter)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.yfilter)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.yfilter)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.yfilter)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.yfilter)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
        additional_range1_high.value_namespace = name_space;
        additional_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
        additional_range1_low.value_namespace = name_space;
        additional_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
        additional_range2_high.value_namespace = name_space;
        additional_range2_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
        additional_range2_low.value_namespace = name_space;
        additional_range2_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
        additional_range3_high.value_namespace = name_space;
        additional_range3_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
        additional_range3_low.value_namespace = name_space;
        additional_range3_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
        additional_range4_high.value_namespace = name_space;
        additional_range4_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
        additional_range4_low.value_namespace = name_space;
        additional_range4_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
        additional_range5_high.value_namespace = name_space;
        additional_range5_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
        additional_range5_low.value_namespace = name_space;
        additional_range5_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
        additional_range6_high.value_namespace = name_space;
        additional_range6_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
        additional_range6_low.value_namespace = name_space;
        additional_range6_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
        additional_range7_high.value_namespace = name_space;
        additional_range7_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
        additional_range7_low.value_namespace = name_space;
        additional_range7_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
        additional_range8_high.value_namespace = name_space;
        additional_range8_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
        additional_range8_low.value_namespace = name_space;
        additional_range8_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
        ingress_destination_mac.value_namespace = name_space;
        ingress_destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
        ingress_source_mac.value_namespace = name_space;
        ingress_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
        inner_class_of_service.value_namespace = name_space;
        inner_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
        inner_range1_high.value_namespace = name_space;
        inner_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
        inner_range1_low.value_namespace = name_space;
        inner_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
        outer_class_of_service.value_namespace = name_space;
        outer_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
        outer_range1_high.value_namespace = name_space;
        outer_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
        outer_range1_low.value_namespace = name_space;
        outer_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
        payload_ethertype_match.value_namespace = name_space;
        payload_ethertype_match.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low.yfilter = yfilter;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high.yfilter = yfilter;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low.yfilter = yfilter;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high.yfilter = yfilter;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low.yfilter = yfilter;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high.yfilter = yfilter;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low.yfilter = yfilter;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high.yfilter = yfilter;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low.yfilter = yfilter;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high.yfilter = yfilter;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low.yfilter = yfilter;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high.yfilter = yfilter;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low.yfilter = yfilter;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high.yfilter = yfilter;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac.yfilter = yfilter;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac.yfilter = yfilter;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service.yfilter = yfilter;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high.yfilter = yfilter;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service.yfilter = yfilter;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high.yfilter = yfilter;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low.yfilter = yfilter;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-range1-high" || name == "additional-range1-low" || name == "additional-range2-high" || name == "additional-range2-low" || name == "additional-range3-high" || name == "additional-range3-low" || name == "additional-range4-high" || name == "additional-range4-low" || name == "additional-range5-high" || name == "additional-range5-low" || name == "additional-range6-high" || name == "additional-range6-low" || name == "additional-range7-high" || name == "additional-range7-low" || name == "additional-range8-high" || name == "additional-range8-low" || name == "exact" || name == "ingress-destination-mac" || name == "ingress-source-mac" || name == "inner-class-of-service" || name == "inner-range1-high" || name == "inner-range1-low" || name == "inner-tag-type" || name == "outer-class-of-service" || name == "outer-range1-high" || name == "outer-range1-low" || name == "outer-tag-type" || name == "payload-ethertype-match")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::EthernetControl()
    :
    small_frame_padding{YType::empty, "small-frame-padding"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    transceiver(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver>())
{
    transceiver->parent = this;

    yang_name = "ethernet-control"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::~EthernetControl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_data() const
{
    return small_frame_padding.is_set
	|| transport_mode.is_set
	|| (transceiver !=  nullptr && transceiver->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(small_frame_padding.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| (transceiver !=  nullptr && transceiver->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-cfg:ethernet-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (small_frame_padding.is_set || is_set(small_frame_padding.yfilter)) leaf_name_data.push_back(small_frame_padding.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver>();
        }
        return transceiver;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transceiver != nullptr)
    {
        children["transceiver"] = transceiver;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "small-frame-padding")
    {
        small_frame_padding = value;
        small_frame_padding.value_namespace = name_space;
        small_frame_padding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "small-frame-padding")
    {
        small_frame_padding.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transceiver" || name == "small-frame-padding" || name == "transport-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Transceiver()
    :
    permit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit>())
{
    permit->parent = this;

    yang_name = "transceiver"; yang_parent_name = "ethernet-control"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::~Transceiver()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::Permit()
    :
    pid{YType::enumeration, "pid"},
    type{YType::enumeration, "type"}
{

    yang_name = "permit"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::~Permit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_data() const
{
    return pid.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "type")
        return true;
    return false;
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
    ether_link_oam->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ether_link_oam_enable.yfilter)
	|| ydk::is_set(filtering.yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_link_oam_enable.is_set || is_set(ether_link_oam_enable.yfilter)) leaf_name_data.push_back(ether_link_oam_enable.get_name_leafdata());
    if (filtering.is_set || is_set(filtering.yfilter)) leaf_name_data.push_back(filtering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "ether-link-oam")
    {
        if(ether_link_oam == nullptr)
        {
            ether_link_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>();
        }
        return ether_link_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(ether_link_oam != nullptr)
    {
        children["ether-link-oam"] = ether_link_oam;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-link-oam-enable")
    {
        ether_link_oam_enable = value;
        ether_link_oam_enable.value_namespace = name_space;
        ether_link_oam_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtering")
    {
        filtering = value;
        filtering.value_namespace = name_space;
        filtering.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-link-oam-enable")
    {
        ether_link_oam_enable.yfilter = yfilter;
    }
    if(value_path == "filtering")
    {
        filtering.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "ether-link-oam" || name == "ether-link-oam-enable" || name == "filtering")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Cfm()
    :
    ais_up(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>())
	,domains(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>())
{
    ais_up->parent = this;
    domains->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (ais_up !=  nullptr && ais_up->has_operation())
	|| (domains !=  nullptr && domains->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais-up")
    {
        if(ais_up == nullptr)
        {
            ais_up = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>();
        }
        return ais_up;
    }

    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains>();
        }
        return domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais_up != nullptr)
    {
        children["ais-up"] = ais_up;
    }

    if(domains != nullptr)
    {
        children["domains"] = domains;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais-up" || name == "domains")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::AisUp()
    :
    transmission(nullptr) // presence node
{

    yang_name = "ais-up"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (transmission !=  nullptr && transmission->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais-up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmission")
    {
        if(transmission == nullptr)
        {
            transmission = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission>();
        }
        return transmission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transmission != nullptr)
    {
        children["transmission"] = transmission;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::Transmission()
    :
    ais_interval{YType::enumeration, "ais-interval"},
    cos{YType::uint32, "cos"}
{

    yang_name = "transmission"; yang_parent_name = "ais-up"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ais_interval.yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.yfilter)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais-interval")
    {
        ais_interval = value;
        ais_interval.value_namespace = name_space;
        ais_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais-interval")
    {
        ais_interval.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais-interval" || name == "cos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domains()
{

    yang_name = "domains"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Domain()
    :
    domain{YType::str, "domain"}
    	,
    mep(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>())
{
    mep->parent = this;

    yang_name = "domain"; yang_parent_name = "domains"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (mep !=  nullptr && mep->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain='" <<domain <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep>();
        }
        return mep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep" || name == "domain")
        return true;
    return false;
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

    yang_name = "mep"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-measurement-counters")
    {
        if(loss_measurement_counters == nullptr)
        {
            loss_measurement_counters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters>();
        }
        return loss_measurement_counters;
    }

    if(child_yang_name == "mep-properties")
    {
        if(mep_properties == nullptr)
        {
            mep_properties = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties>();
        }
        return mep_properties;
    }

    if(child_yang_name == "sla-profile-target-mep-ids")
    {
        if(sla_profile_target_mep_ids == nullptr)
        {
            sla_profile_target_mep_ids = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds>();
        }
        return sla_profile_target_mep_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loss_measurement_counters != nullptr)
    {
        children["loss-measurement-counters"] = loss_measurement_counters;
    }

    if(mep_properties != nullptr)
    {
        children["mep-properties"] = mep_properties;
    }

    if(sla_profile_target_mep_ids != nullptr)
    {
        children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-measurement-counters" || name == "mep-properties" || name == "sla-profile-target-mep-ids" || name == "cos")
        return true;
    return false;
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

    yang_name = "loss-measurement-counters"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(cfg_type.yfilter)
	|| ydk::is_set(cos0.yfilter)
	|| ydk::is_set(cos1.yfilter)
	|| ydk::is_set(cos2.yfilter)
	|| ydk::is_set(cos3.yfilter)
	|| ydk::is_set(cos4.yfilter)
	|| ydk::is_set(cos5.yfilter)
	|| ydk::is_set(cos6.yfilter)
	|| ydk::is_set(cos7.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-measurement-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfg_type.is_set || is_set(cfg_type.yfilter)) leaf_name_data.push_back(cfg_type.get_name_leafdata());
    if (cos0.is_set || is_set(cos0.yfilter)) leaf_name_data.push_back(cos0.get_name_leafdata());
    if (cos1.is_set || is_set(cos1.yfilter)) leaf_name_data.push_back(cos1.get_name_leafdata());
    if (cos2.is_set || is_set(cos2.yfilter)) leaf_name_data.push_back(cos2.get_name_leafdata());
    if (cos3.is_set || is_set(cos3.yfilter)) leaf_name_data.push_back(cos3.get_name_leafdata());
    if (cos4.is_set || is_set(cos4.yfilter)) leaf_name_data.push_back(cos4.get_name_leafdata());
    if (cos5.is_set || is_set(cos5.yfilter)) leaf_name_data.push_back(cos5.get_name_leafdata());
    if (cos6.is_set || is_set(cos6.yfilter)) leaf_name_data.push_back(cos6.get_name_leafdata());
    if (cos7.is_set || is_set(cos7.yfilter)) leaf_name_data.push_back(cos7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfg-type")
    {
        cfg_type = value;
        cfg_type.value_namespace = name_space;
        cfg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos0")
    {
        cos0 = value;
        cos0.value_namespace = name_space;
        cos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos1")
    {
        cos1 = value;
        cos1.value_namespace = name_space;
        cos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos2")
    {
        cos2 = value;
        cos2.value_namespace = name_space;
        cos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos3")
    {
        cos3 = value;
        cos3.value_namespace = name_space;
        cos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos4")
    {
        cos4 = value;
        cos4.value_namespace = name_space;
        cos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos5")
    {
        cos5 = value;
        cos5.value_namespace = name_space;
        cos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos6")
    {
        cos6 = value;
        cos6.value_namespace = name_space;
        cos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos7")
    {
        cos7 = value;
        cos7.value_namespace = name_space;
        cos7.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfg-type")
    {
        cfg_type.yfilter = yfilter;
    }
    if(value_path == "cos0")
    {
        cos0.yfilter = yfilter;
    }
    if(value_path == "cos1")
    {
        cos1.yfilter = yfilter;
    }
    if(value_path == "cos2")
    {
        cos2.yfilter = yfilter;
    }
    if(value_path == "cos3")
    {
        cos3.yfilter = yfilter;
    }
    if(value_path == "cos4")
    {
        cos4.yfilter = yfilter;
    }
    if(value_path == "cos5")
    {
        cos5.yfilter = yfilter;
    }
    if(value_path == "cos6")
    {
        cos6.yfilter = yfilter;
    }
    if(value_path == "cos7")
    {
        cos7.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfg-type" || name == "cos0" || name == "cos1" || name == "cos2" || name == "cos3" || name == "cos4" || name == "cos5" || name == "cos6" || name == "cos7")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::MepProperties()
    :
    mep_id{YType::uint32, "mep-id"},
    service{YType::str, "service"}
{

    yang_name = "mep-properties"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep-id" || name == "service")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepIds()
{

    yang_name = "sla-profile-target-mep-ids"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mac-address")
    {
        for(auto const & c : sla_profile_target_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress>();
        c->parent = this;
        sla_profile_target_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "sla-profile-target-mep-id")
    {
        for(auto const & c : sla_profile_target_mep_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId>();
        c->parent = this;
        sla_profile_target_mep_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sla_profile_target_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sla_profile_target_mep_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-profile-target-mac-address" || name == "sla-profile-target-mep-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::SlaProfileTargetMacAddress()
    :
    profile{YType::str, "profile"},
    target_mac_address{YType::str, "target-mac-address"}
{

    yang_name = "sla-profile-target-mac-address"; yang_parent_name = "sla-profile-target-mep-ids"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(target_mac_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mac-address" <<"[profile='" <<profile <<"']" <<"[target-mac-address='" <<target_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.yfilter)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address = value;
        target_mac_address.value_namespace = name_space;
        target_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "target-mac-address")
    {
        target_mac_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "target-mac-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::SlaProfileTargetMepId()
    :
    profile{YType::str, "profile"},
    target_mep_id{YType::uint32, "target-mep-id"}
{

    yang_name = "sla-profile-target-mep-id"; yang_parent_name = "sla-profile-target-mep-ids"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(target_mep_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-profile-target-mep-id" <<"[profile='" <<profile <<"']" <<"[target-mep-id='" <<target_mep_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.yfilter)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id = value;
        target_mep_id.value_namespace = name_space;
        target_mep_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "target-mep-id")
    {
        target_mep_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "target-mep-id")
        return true;
    return false;
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
    link_monitoring->parent = this;
    require_remote->parent = this;

    yang_name = "ether-link-oam"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(udlf.yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.yfilter)) leaf_name_data.push_back(udlf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action>();
        }
        return action;
    }

    if(child_yang_name == "link-monitoring")
    {
        if(link_monitoring == nullptr)
        {
            link_monitoring = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>();
        }
        return link_monitoring;
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote == nullptr)
        {
            require_remote = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>();
        }
        return require_remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(link_monitoring != nullptr)
    {
        children["link-monitoring"] = link_monitoring;
    }

    if(require_remote != nullptr)
    {
        children["require-remote"] = require_remote;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udlf")
    {
        udlf = value;
        udlf.value_namespace = name_space;
        udlf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "udlf")
    {
        udlf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "link-monitoring" || name == "require-remote" || name == "hello-interval" || name == "mib-retrieval" || name == "mode" || name == "profile-name" || name == "remote-loopback" || name == "timeout" || name == "udlf")
        return true;
    return false;
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

    yang_name = "action"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(capabilities_conflict.yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(discovery_timeout.yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(high_threshold.yfilter)
	|| ydk::is_set(link_fault.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(wiring_conflict.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_conflict.is_set || is_set(capabilities_conflict.yfilter)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.yfilter)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.yfilter)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.yfilter)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
        capabilities_conflict.value_namespace = name_space;
        capabilities_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
        discovery_timeout.value_namespace = name_space;
        discovery_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
        high_threshold.value_namespace = name_space;
        high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
        wiring_conflict.value_namespace = name_space;
        wiring_conflict.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict.yfilter = yfilter;
    }
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout.yfilter = yfilter;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "high-threshold")
    {
        high_threshold.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities-conflict" || name == "critical-event" || name == "discovery-timeout" || name == "dying-gasp" || name == "high-threshold" || name == "link-fault" || name == "remote-loopback" || name == "session-down" || name == "session-up" || name == "wiring-conflict")
        return true;
    return false;
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
    frame_period->parent = this;
    frame_seconds->parent = this;
    symbol_period->parent = this;

    yang_name = "link-monitoring"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(monitoring.yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.yfilter)) leaf_name_data.push_back(monitoring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitoring")
    {
        monitoring = value;
        monitoring.value_namespace = name_space;
        monitoring.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitoring")
    {
        monitoring.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "symbol-period" || name == "monitoring")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Frame()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multiplier_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier-high" || name == "multiplier-low" || name == "threshold-high" || name == "threshold-low")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::FramePeriod()
    :
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multiplier_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier-high" || name == "multiplier-low" || name == "threshold-high" || name == "threshold-low" || name == "units")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{

    yang_name = "window"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(window.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier" || name == "units" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::FrameSeconds()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::Threshold()
    :
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-high" || name == "threshold-low")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::SymbolPeriod()
    :
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multiplier_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier-high" || name == "multiplier-low" || name == "threshold-high" || name == "threshold-low" || name == "units")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{

    yang_name = "window"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(window.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier" || name == "units" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::RequireRemote()
    :
    link_monitoring{YType::boolean, "link-monitoring"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"}
{

    yang_name = "require-remote"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(link_monitoring.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(remote_loopback.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_monitoring.is_set || is_set(link_monitoring.yfilter)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
        link_monitoring.value_namespace = name_space;
        link_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitoring" || name == "mib-retrieval" || name == "mode" || name == "remote-loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::EthernetService()
    :
    encapsulation(nullptr) // presence node
	,local_traffic_default_encapsulation(nullptr) // presence node
	,rewrite(nullptr) // presence node
{

    yang_name = "ethernet-service"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "local-traffic-default-encapsulation")
    {
        if(local_traffic_default_encapsulation == nullptr)
        {
            local_traffic_default_encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation>();
        }
        return local_traffic_default_encapsulation;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite>();
        }
        return rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(local_traffic_default_encapsulation != nullptr)
    {
        children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "local-traffic-default-encapsulation" || name == "rewrite")
        return true;
    return false;
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

    yang_name = "encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(additional_range1_high.yfilter)
	|| ydk::is_set(additional_range1_low.yfilter)
	|| ydk::is_set(additional_range2_high.yfilter)
	|| ydk::is_set(additional_range2_low.yfilter)
	|| ydk::is_set(additional_range3_high.yfilter)
	|| ydk::is_set(additional_range3_low.yfilter)
	|| ydk::is_set(additional_range4_high.yfilter)
	|| ydk::is_set(additional_range4_low.yfilter)
	|| ydk::is_set(additional_range5_high.yfilter)
	|| ydk::is_set(additional_range5_low.yfilter)
	|| ydk::is_set(additional_range6_high.yfilter)
	|| ydk::is_set(additional_range6_low.yfilter)
	|| ydk::is_set(additional_range7_high.yfilter)
	|| ydk::is_set(additional_range7_low.yfilter)
	|| ydk::is_set(additional_range8_high.yfilter)
	|| ydk::is_set(additional_range8_low.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(ingress_destination_mac.yfilter)
	|| ydk::is_set(ingress_source_mac.yfilter)
	|| ydk::is_set(inner_class_of_service.yfilter)
	|| ydk::is_set(inner_range1_high.yfilter)
	|| ydk::is_set(inner_range1_low.yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(outer_class_of_service.yfilter)
	|| ydk::is_set(outer_range1_high.yfilter)
	|| ydk::is_set(outer_range1_low.yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(payload_ethertype_match.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additional_range1_high.is_set || is_set(additional_range1_high.yfilter)) leaf_name_data.push_back(additional_range1_high.get_name_leafdata());
    if (additional_range1_low.is_set || is_set(additional_range1_low.yfilter)) leaf_name_data.push_back(additional_range1_low.get_name_leafdata());
    if (additional_range2_high.is_set || is_set(additional_range2_high.yfilter)) leaf_name_data.push_back(additional_range2_high.get_name_leafdata());
    if (additional_range2_low.is_set || is_set(additional_range2_low.yfilter)) leaf_name_data.push_back(additional_range2_low.get_name_leafdata());
    if (additional_range3_high.is_set || is_set(additional_range3_high.yfilter)) leaf_name_data.push_back(additional_range3_high.get_name_leafdata());
    if (additional_range3_low.is_set || is_set(additional_range3_low.yfilter)) leaf_name_data.push_back(additional_range3_low.get_name_leafdata());
    if (additional_range4_high.is_set || is_set(additional_range4_high.yfilter)) leaf_name_data.push_back(additional_range4_high.get_name_leafdata());
    if (additional_range4_low.is_set || is_set(additional_range4_low.yfilter)) leaf_name_data.push_back(additional_range4_low.get_name_leafdata());
    if (additional_range5_high.is_set || is_set(additional_range5_high.yfilter)) leaf_name_data.push_back(additional_range5_high.get_name_leafdata());
    if (additional_range5_low.is_set || is_set(additional_range5_low.yfilter)) leaf_name_data.push_back(additional_range5_low.get_name_leafdata());
    if (additional_range6_high.is_set || is_set(additional_range6_high.yfilter)) leaf_name_data.push_back(additional_range6_high.get_name_leafdata());
    if (additional_range6_low.is_set || is_set(additional_range6_low.yfilter)) leaf_name_data.push_back(additional_range6_low.get_name_leafdata());
    if (additional_range7_high.is_set || is_set(additional_range7_high.yfilter)) leaf_name_data.push_back(additional_range7_high.get_name_leafdata());
    if (additional_range7_low.is_set || is_set(additional_range7_low.yfilter)) leaf_name_data.push_back(additional_range7_low.get_name_leafdata());
    if (additional_range8_high.is_set || is_set(additional_range8_high.yfilter)) leaf_name_data.push_back(additional_range8_high.get_name_leafdata());
    if (additional_range8_low.is_set || is_set(additional_range8_low.yfilter)) leaf_name_data.push_back(additional_range8_low.get_name_leafdata());
    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (ingress_destination_mac.is_set || is_set(ingress_destination_mac.yfilter)) leaf_name_data.push_back(ingress_destination_mac.get_name_leafdata());
    if (ingress_source_mac.is_set || is_set(ingress_source_mac.yfilter)) leaf_name_data.push_back(ingress_source_mac.get_name_leafdata());
    if (inner_class_of_service.is_set || is_set(inner_class_of_service.yfilter)) leaf_name_data.push_back(inner_class_of_service.get_name_leafdata());
    if (inner_range1_high.is_set || is_set(inner_range1_high.yfilter)) leaf_name_data.push_back(inner_range1_high.get_name_leafdata());
    if (inner_range1_low.is_set || is_set(inner_range1_low.yfilter)) leaf_name_data.push_back(inner_range1_low.get_name_leafdata());
    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (outer_class_of_service.is_set || is_set(outer_class_of_service.yfilter)) leaf_name_data.push_back(outer_class_of_service.get_name_leafdata());
    if (outer_range1_high.is_set || is_set(outer_range1_high.yfilter)) leaf_name_data.push_back(outer_range1_high.get_name_leafdata());
    if (outer_range1_low.is_set || is_set(outer_range1_low.yfilter)) leaf_name_data.push_back(outer_range1_low.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (payload_ethertype_match.is_set || is_set(payload_ethertype_match.yfilter)) leaf_name_data.push_back(payload_ethertype_match.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high = value;
        additional_range1_high.value_namespace = name_space;
        additional_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low = value;
        additional_range1_low.value_namespace = name_space;
        additional_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high = value;
        additional_range2_high.value_namespace = name_space;
        additional_range2_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low = value;
        additional_range2_low.value_namespace = name_space;
        additional_range2_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high = value;
        additional_range3_high.value_namespace = name_space;
        additional_range3_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low = value;
        additional_range3_low.value_namespace = name_space;
        additional_range3_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high = value;
        additional_range4_high.value_namespace = name_space;
        additional_range4_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low = value;
        additional_range4_low.value_namespace = name_space;
        additional_range4_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high = value;
        additional_range5_high.value_namespace = name_space;
        additional_range5_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low = value;
        additional_range5_low.value_namespace = name_space;
        additional_range5_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high = value;
        additional_range6_high.value_namespace = name_space;
        additional_range6_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low = value;
        additional_range6_low.value_namespace = name_space;
        additional_range6_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high = value;
        additional_range7_high.value_namespace = name_space;
        additional_range7_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low = value;
        additional_range7_low.value_namespace = name_space;
        additional_range7_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high = value;
        additional_range8_high.value_namespace = name_space;
        additional_range8_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low = value;
        additional_range8_low.value_namespace = name_space;
        additional_range8_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac = value;
        ingress_destination_mac.value_namespace = name_space;
        ingress_destination_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac = value;
        ingress_source_mac.value_namespace = name_space;
        ingress_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service = value;
        inner_class_of_service.value_namespace = name_space;
        inner_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high = value;
        inner_range1_high.value_namespace = name_space;
        inner_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low = value;
        inner_range1_low.value_namespace = name_space;
        inner_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service = value;
        outer_class_of_service.value_namespace = name_space;
        outer_class_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high = value;
        outer_range1_high.value_namespace = name_space;
        outer_range1_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low = value;
        outer_range1_low.value_namespace = name_space;
        outer_range1_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match = value;
        payload_ethertype_match.value_namespace = name_space;
        payload_ethertype_match.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additional-range1-high")
    {
        additional_range1_high.yfilter = yfilter;
    }
    if(value_path == "additional-range1-low")
    {
        additional_range1_low.yfilter = yfilter;
    }
    if(value_path == "additional-range2-high")
    {
        additional_range2_high.yfilter = yfilter;
    }
    if(value_path == "additional-range2-low")
    {
        additional_range2_low.yfilter = yfilter;
    }
    if(value_path == "additional-range3-high")
    {
        additional_range3_high.yfilter = yfilter;
    }
    if(value_path == "additional-range3-low")
    {
        additional_range3_low.yfilter = yfilter;
    }
    if(value_path == "additional-range4-high")
    {
        additional_range4_high.yfilter = yfilter;
    }
    if(value_path == "additional-range4-low")
    {
        additional_range4_low.yfilter = yfilter;
    }
    if(value_path == "additional-range5-high")
    {
        additional_range5_high.yfilter = yfilter;
    }
    if(value_path == "additional-range5-low")
    {
        additional_range5_low.yfilter = yfilter;
    }
    if(value_path == "additional-range6-high")
    {
        additional_range6_high.yfilter = yfilter;
    }
    if(value_path == "additional-range6-low")
    {
        additional_range6_low.yfilter = yfilter;
    }
    if(value_path == "additional-range7-high")
    {
        additional_range7_high.yfilter = yfilter;
    }
    if(value_path == "additional-range7-low")
    {
        additional_range7_low.yfilter = yfilter;
    }
    if(value_path == "additional-range8-high")
    {
        additional_range8_high.yfilter = yfilter;
    }
    if(value_path == "additional-range8-low")
    {
        additional_range8_low.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "ingress-destination-mac")
    {
        ingress_destination_mac.yfilter = yfilter;
    }
    if(value_path == "ingress-source-mac")
    {
        ingress_source_mac.yfilter = yfilter;
    }
    if(value_path == "inner-class-of-service")
    {
        inner_class_of_service.yfilter = yfilter;
    }
    if(value_path == "inner-range1-high")
    {
        inner_range1_high.yfilter = yfilter;
    }
    if(value_path == "inner-range1-low")
    {
        inner_range1_low.yfilter = yfilter;
    }
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-class-of-service")
    {
        outer_class_of_service.yfilter = yfilter;
    }
    if(value_path == "outer-range1-high")
    {
        outer_range1_high.yfilter = yfilter;
    }
    if(value_path == "outer-range1-low")
    {
        outer_range1_low.yfilter = yfilter;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype-match")
    {
        payload_ethertype_match.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-range1-high" || name == "additional-range1-low" || name == "additional-range2-high" || name == "additional-range2-low" || name == "additional-range3-high" || name == "additional-range3-low" || name == "additional-range4-high" || name == "additional-range4-low" || name == "additional-range5-high" || name == "additional-range5-low" || name == "additional-range6-high" || name == "additional-range6-low" || name == "additional-range7-high" || name == "additional-range7-low" || name == "additional-range8-high" || name == "additional-range8-low" || name == "exact" || name == "ingress-destination-mac" || name == "ingress-source-mac" || name == "inner-class-of-service" || name == "inner-range1-high" || name == "inner-range1-low" || name == "inner-tag-type" || name == "outer-class-of-service" || name == "outer-range1-high" || name == "outer-range1-low" || name == "outer-tag-type" || name == "payload-ethertype-match")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::LocalTrafficDefaultEncapsulation()
    :
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"}
{

    yang_name = "local-traffic-default-encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(inner_vlan_id.yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_vlan_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-default-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_vlan_id.is_set || is_set(inner_vlan_id.yfilter)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.yfilter)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
        inner_vlan_id.value_namespace = name_space;
        inner_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
        outer_vlan_id.value_namespace = name_space;
        outer_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id.yfilter = yfilter;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-vlan-id" || name == "outer-tag-type" || name == "outer-vlan-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::Rewrite()
    :
    inner_tag_type{YType::enumeration, "inner-tag-type"},
    inner_tag_value{YType::uint32, "inner-tag-value"},
    outer_tag_type{YType::enumeration, "outer-tag-type"},
    outer_tag_value{YType::uint32, "outer-tag-value"},
    rewrite_type{YType::enumeration, "rewrite-type"}
{

    yang_name = "rewrite"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(inner_tag_type.yfilter)
	|| ydk::is_set(inner_tag_value.yfilter)
	|| ydk::is_set(outer_tag_type.yfilter)
	|| ydk::is_set(outer_tag_value.yfilter)
	|| ydk::is_set(rewrite_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_tag_type.is_set || is_set(inner_tag_type.yfilter)) leaf_name_data.push_back(inner_tag_type.get_name_leafdata());
    if (inner_tag_value.is_set || is_set(inner_tag_value.yfilter)) leaf_name_data.push_back(inner_tag_value.get_name_leafdata());
    if (outer_tag_type.is_set || is_set(outer_tag_type.yfilter)) leaf_name_data.push_back(outer_tag_type.get_name_leafdata());
    if (outer_tag_value.is_set || is_set(outer_tag_value.yfilter)) leaf_name_data.push_back(outer_tag_value.get_name_leafdata());
    if (rewrite_type.is_set || is_set(rewrite_type.yfilter)) leaf_name_data.push_back(rewrite_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-tag-type")
    {
        inner_tag_type = value;
        inner_tag_type.value_namespace = name_space;
        inner_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value = value;
        inner_tag_value.value_namespace = name_space;
        inner_tag_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type = value;
        outer_tag_type.value_namespace = name_space;
        outer_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value = value;
        outer_tag_value.value_namespace = name_space;
        outer_tag_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-type")
    {
        rewrite_type = value;
        rewrite_type.value_namespace = name_space;
        rewrite_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-tag-type")
    {
        inner_tag_type.yfilter = yfilter;
    }
    if(value_path == "inner-tag-value")
    {
        inner_tag_value.yfilter = yfilter;
    }
    if(value_path == "outer-tag-type")
    {
        outer_tag_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag-value")
    {
        outer_tag_value.yfilter = yfilter;
    }
    if(value_path == "rewrite-type")
    {
        rewrite_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-tag-type" || name == "inner-tag-value" || name == "outer-tag-type" || name == "outer-tag-value" || name == "rewrite-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::Ipv4Arp()
    :
    gratuitous_ignore{YType::empty, "gratuitous-ignore"},
    learning_disable{YType::empty, "learning-disable"},
    learning_local{YType::empty, "learning-local"},
    learning_solicited{YType::empty, "learning-solicited"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::empty, "proxy-arp"},
    purge_delay{YType::uint32, "purge-delay"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "ipv4arp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::~Ipv4Arp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_data() const
{
    return gratuitous_ignore.is_set
	|| learning_disable.is_set
	|| learning_local.is_set
	|| learning_solicited.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| purge_delay.is_set
	|| timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gratuitous_ignore.yfilter)
	|| ydk::is_set(learning_disable.yfilter)
	|| ydk::is_set(learning_local.yfilter)
	|| ydk::is_set(learning_solicited.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(purge_delay.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gratuitous_ignore.is_set || is_set(gratuitous_ignore.yfilter)) leaf_name_data.push_back(gratuitous_ignore.get_name_leafdata());
    if (learning_disable.is_set || is_set(learning_disable.yfilter)) leaf_name_data.push_back(learning_disable.get_name_leafdata());
    if (learning_local.is_set || is_set(learning_local.yfilter)) leaf_name_data.push_back(learning_local.get_name_leafdata());
    if (learning_solicited.is_set || is_set(learning_solicited.yfilter)) leaf_name_data.push_back(learning_solicited.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (purge_delay.is_set || is_set(purge_delay.yfilter)) leaf_name_data.push_back(purge_delay.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore = value;
        gratuitous_ignore.value_namespace = name_space;
        gratuitous_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-disable")
    {
        learning_disable = value;
        learning_disable.value_namespace = name_space;
        learning_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-local")
    {
        learning_local = value;
        learning_local.value_namespace = name_space;
        learning_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-solicited")
    {
        learning_solicited = value;
        learning_solicited.value_namespace = name_space;
        learning_solicited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-delay")
    {
        purge_delay = value;
        purge_delay.value_namespace = name_space;
        purge_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore.yfilter = yfilter;
    }
    if(value_path == "learning-disable")
    {
        learning_disable.yfilter = yfilter;
    }
    if(value_path == "learning-local")
    {
        learning_local.yfilter = yfilter;
    }
    if(value_path == "learning-solicited")
    {
        learning_solicited.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "purge-delay")
    {
        purge_delay.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gratuitous-ignore" || name == "learning-disable" || name == "learning-local" || name == "learning-solicited" || name == "local-proxy-arp" || name == "proxy-arp" || name == "purge-delay" || name == "timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Ipv4Network()
    :
    forwarding_enable{YType::empty, "forwarding-enable"},
    icmp_mask_reply{YType::empty, "icmp-mask-reply"},
    mtu{YType::uint32, "mtu"},
    point_to_point{YType::empty, "point-to-point"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"}
    	,
    addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>())
	,bgp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>())
	,bgp_pa(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>())
	,helper_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>())
	,verify(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>())
{
    addresses->parent = this;
    bgp->parent = this;
    bgp_pa->parent = this;
    helper_addresses->parent = this;
    verify->parent = this;

    yang_name = "ipv4-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::~Ipv4Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_data() const
{
    return forwarding_enable.is_set
	|| icmp_mask_reply.is_set
	|| mtu.is_set
	|| point_to_point.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (helper_addresses !=  nullptr && helper_addresses->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_enable.yfilter)
	|| ydk::is_set(icmp_mask_reply.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_enable.is_set || is_set(forwarding_enable.yfilter)) leaf_name_data.push_back(forwarding_enable.get_name_leafdata());
    if (icmp_mask_reply.is_set || is_set(icmp_mask_reply.yfilter)) leaf_name_data.push_back(icmp_mask_reply.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>();
        }
        return helper_addresses;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(helper_addresses != nullptr)
    {
        children["helper-addresses"] = helper_addresses;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable = value;
        forwarding_enable.value_namespace = name_space;
        forwarding_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply = value;
        icmp_mask_reply.value_namespace = name_space;
        icmp_mask_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
        tcp_mss_adjust_enable.value_namespace = name_space;
        tcp_mss_adjust_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
        ttl_propagate_disable.value_namespace = name_space;
        ttl_propagate_disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable.yfilter = yfilter;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "bgp" || name == "bgp-pa" || name == "helper-addresses" || name == "verify" || name == "forwarding-enable" || name == "icmp-mask-reply" || name == "mtu" || name == "point-to-point" || name == "tcp-mss-adjust-enable" || name == "ttl-propagate-disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Addresses()
    :
    dhcp{YType::empty, "dhcp"},
    unnumbered{YType::str, "unnumbered"}
    	,
    primary(nullptr) // presence node
	,secondaries(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>())
{
    secondaries->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_data() const
{
    return dhcp.is_set
	|| unnumbered.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (secondaries !=  nullptr && secondaries->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondaries !=  nullptr && secondaries->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondaries")
    {
        if(secondaries == nullptr)
        {
            secondaries = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>();
        }
        return secondaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondaries != nullptr)
    {
        children["secondaries"] = secondaries;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondaries" || name == "dhcp" || name == "unnumbered")
        return true;
    return false;
}

const Enum::YLeaf InterfaceModeEnum::default_ {0, "default"};
const Enum::YLeaf InterfaceModeEnum::point_to_point {1, "point-to-point"};
const Enum::YLeaf InterfaceModeEnum::multipoint {2, "multipoint"};
const Enum::YLeaf InterfaceModeEnum::l2_transport {3, "l2-transport"};

const Enum::YLeaf SecondaryAdminStateEnum::normal {0, "normal"};
const Enum::YLeaf SecondaryAdminStateEnum::maintenance {1, "maintenance"};

const Enum::YLeaf LinkStatusEnum::default_ {0, "default"};
const Enum::YLeaf LinkStatusEnum::disable {1, "disable"};
const Enum::YLeaf LinkStatusEnum::software_interfaces {2, "software-interfaces"};

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::Args::default_values {0, "default-values"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::Args::specify_half_life {1, "specify-half-life"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::Args::specify_all {4, "specify-all"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::Dampening::Args::specify_rp {5, "specify-rp"};


}
}

