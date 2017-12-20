
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

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
    shutdown{YType::empty, "shutdown"},
    interface_virtual{YType::empty, "interface-virtual"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    interface_mode_non_physical{YType::enumeration, "interface-mode-non-physical"},
    bandwidth{YType::uint32, "bandwidth"},
    link_status{YType::empty, "link-status"},
    description{YType::str, "description"},
    laser_squelch{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch"},
    perf_mon_disable{YType::empty, "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:perf-mon-disable"},
    maintenance_embargo{YType::boolean, "Cisco-IOS-XR-dwdm-ui-cfg:maintenance-embargo"},
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-cfg:vrf"},
    track_name{YType::str, "Cisco-IOS-XR-manageability-object-tracking-cfg:track-name"},
    fast_shutdown{YType::empty, "Cisco-IOS-XR-mdrv-lib-cfg:fast-shutdown"},
    mac_addr{YType::str, "Cisco-IOS-XR-mdrv-lib-cfg:mac-addr"}
    	,
    dampening(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>())
	,mtus(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>())
	,encapsulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>())
	,aaa_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>())
	,ethernet_control(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>())
	,ptp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>())
	,pseudowire_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>())
	,pseudowire_iw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>())
	,bvi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>())
	,l2_transport(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>())
	,atm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>())
	,bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>())
	,bundle(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>())
	,lacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>())
	,bundle_member(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>())
	,mlacp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>())
	,cdp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>())
	,optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>())
	,otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>())
	,macsec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>())
	,dot1x_interface(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface>())
	,loopbacks(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>())
	,ethernet(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>())
	,dwdm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>())
	,vlan_sub_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>())
	,ethernet_service(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>())
	,ethernet_bng(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>())
	,mac_accounting(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>())
	,ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>())
	,carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>())
	,vlan_trunk_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>())
	,nv_satellite_access(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>())
	,nv_satellite_fabric_link(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>())
	,nv_satellite_fabric_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>())
	,lldp(nullptr) // presence node
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>())
	,cisco_ios_xr_freqsync_cfg_frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization>())
	,service_policies(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>())
	,afs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>())
	,statistics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>())
	,ipv6_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>())
	,es_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>())
	,ipv4_packet_filter(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>())
	,dagrs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>())
	,ipv4arp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>())
	,ipv4_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>())
	,ipv4_network_forwarding(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>())
	,ipv6_network(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>())
	,ipv6_neighbor(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>())
	,mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>())
	,tunnel_te_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>())
	,transport_profile_tunnel(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>())
	,mte_tunnel_attributes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>())
	,cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization>())
	,portmode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>())
	,pbr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>())
	,performance_management(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>())
	,cisco_ios_xr_ppp_ma_cfg_ppp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>())
	,cisco_ios_xr_ppp_ma_fsm_cfg_ppp_(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>())
	,cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>())
	,cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>())
	,cisco_ios_xr_ppp_ma_lcp_cfg_ppp____(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>())
	,ssrp_session(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>())
	,subscriber(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>())
	,pppoe(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>())
	,net_flow(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>())
	,tunnel_ip(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>())
	,nve(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>())
	,wanphy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Wanphy>())
{
    dampening->parent = this;
    mtus->parent = this;
    encapsulation->parent = this;
    aaa_table->parent = this;
    ethernet_control->parent = this;
    ptp->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;
    bvi->parent = this;
    l2_transport->parent = this;
    atm->parent = this;
    bfd->parent = this;
    bundle->parent = this;
    lacp->parent = this;
    bundle_member->parent = this;
    mlacp->parent = this;
    cdp->parent = this;
    optics->parent = this;
    otu->parent = this;
    macsec->parent = this;
    dot1x_interface->parent = this;
    loopbacks->parent = this;
    ethernet->parent = this;
    dwdm->parent = this;
    vlan_sub_configuration->parent = this;
    ethernet_service->parent = this;
    ethernet_bng->parent = this;
    mac_accounting->parent = this;
    ethernet_features->parent = this;
    carrier_delay->parent = this;
    vlan_trunk_configuration->parent = this;
    nv_satellite_access->parent = this;
    nv_satellite_fabric_link->parent = this;
    nv_satellite_fabric_network->parent = this;
    span_monitor_sessions->parent = this;
    cisco_ios_xr_freqsync_cfg_frequency_synchronization->parent = this;
    service_policies->parent = this;
    afs->parent = this;
    statistics->parent = this;
    ipv6_packet_filter->parent = this;
    es_packet_filter->parent = this;
    ipv4_packet_filter->parent = this;
    dagrs->parent = this;
    ipv4arp->parent = this;
    ipv4_network->parent = this;
    ipv4_network_forwarding->parent = this;
    ipv6_network->parent = this;
    ipv6_neighbor->parent = this;
    mpls->parent = this;
    tunnel_te_attributes->parent = this;
    transport_profile_tunnel->parent = this;
    mte_tunnel_attributes->parent = this;
    cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_->parent = this;
    portmode->parent = this;
    pbr->parent = this;
    performance_management->parent = this;
    cisco_ios_xr_ppp_ma_cfg_ppp->parent = this;
    cisco_ios_xr_ppp_ma_fsm_cfg_ppp_->parent = this;
    cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__->parent = this;
    cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___->parent = this;
    cisco_ios_xr_ppp_ma_lcp_cfg_ppp____->parent = this;
    ssrp_session->parent = this;
    qos->parent = this;
    subscriber->parent = this;
    pppoe->parent = this;
    net_flow->parent = this;
    tunnel_ip->parent = this;
    nve->parent = this;
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
	|| shutdown.is_set
	|| interface_virtual.is_set
	|| secondary_admin_state.is_set
	|| interface_mode_non_physical.is_set
	|| bandwidth.is_set
	|| link_status.is_set
	|| description.is_set
	|| laser_squelch.is_set
	|| perf_mon_disable.is_set
	|| maintenance_embargo.is_set
	|| vrf.is_set
	|| track_name.is_set
	|| fast_shutdown.is_set
	|| mac_addr.is_set
	|| (dampening !=  nullptr && dampening->has_data())
	|| (mtus !=  nullptr && mtus->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (aaa_table !=  nullptr && aaa_table->has_data())
	|| (ethernet_control !=  nullptr && ethernet_control->has_data())
	|| (ptp !=  nullptr && ptp->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (bvi !=  nullptr && bvi->has_data())
	|| (l2_transport !=  nullptr && l2_transport->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (macsec !=  nullptr && macsec->has_data())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_data())
	|| (loopbacks !=  nullptr && loopbacks->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (dwdm !=  nullptr && dwdm->has_data())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_data())
	|| (ethernet_service !=  nullptr && ethernet_service->has_data())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_data())
	|| (mac_accounting !=  nullptr && mac_accounting->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_data())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_data())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_data())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (cisco_ios_xr_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_freqsync_cfg_frequency_synchronization->has_data())
	|| (service_policies !=  nullptr && service_policies->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (dagrs !=  nullptr && dagrs->has_data())
	|| (ipv4arp !=  nullptr && ipv4arp->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_data())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_data())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_data())
	|| (cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_ !=  nullptr && cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_->has_data())
	|| (portmode !=  nullptr && portmode->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (performance_management !=  nullptr && performance_management->has_data())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_data())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp_ !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp_->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__ !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__->has_data())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___ !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___->has_data())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp____ !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp____->has_data())
	|| (ssrp_session !=  nullptr && ssrp_session->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (net_flow !=  nullptr && net_flow->has_data())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_data())
	|| (nve !=  nullptr && nve->has_data())
	|| (wanphy !=  nullptr && wanphy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(interface_virtual.yfilter)
	|| ydk::is_set(secondary_admin_state.yfilter)
	|| ydk::is_set(interface_mode_non_physical.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(laser_squelch.yfilter)
	|| ydk::is_set(perf_mon_disable.yfilter)
	|| ydk::is_set(maintenance_embargo.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(fast_shutdown.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (mtus !=  nullptr && mtus->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (aaa_table !=  nullptr && aaa_table->has_operation())
	|| (ethernet_control !=  nullptr && ethernet_control->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (bvi !=  nullptr && bvi->has_operation())
	|| (l2_transport !=  nullptr && l2_transport->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (dot1x_interface !=  nullptr && dot1x_interface->has_operation())
	|| (loopbacks !=  nullptr && loopbacks->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (vlan_sub_configuration !=  nullptr && vlan_sub_configuration->has_operation())
	|| (ethernet_service !=  nullptr && ethernet_service->has_operation())
	|| (ethernet_bng !=  nullptr && ethernet_bng->has_operation())
	|| (mac_accounting !=  nullptr && mac_accounting->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (vlan_trunk_configuration !=  nullptr && vlan_trunk_configuration->has_operation())
	|| (nv_satellite_access !=  nullptr && nv_satellite_access->has_operation())
	|| (nv_satellite_fabric_link !=  nullptr && nv_satellite_fabric_link->has_operation())
	|| (nv_satellite_fabric_network !=  nullptr && nv_satellite_fabric_network->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (cisco_ios_xr_freqsync_cfg_frequency_synchronization !=  nullptr && cisco_ios_xr_freqsync_cfg_frequency_synchronization->has_operation())
	|| (service_policies !=  nullptr && service_policies->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (es_packet_filter !=  nullptr && es_packet_filter->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (dagrs !=  nullptr && dagrs->has_operation())
	|| (ipv4arp !=  nullptr && ipv4arp->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv4_network_forwarding !=  nullptr && ipv4_network_forwarding->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (tunnel_te_attributes !=  nullptr && tunnel_te_attributes->has_operation())
	|| (transport_profile_tunnel !=  nullptr && transport_profile_tunnel->has_operation())
	|| (mte_tunnel_attributes !=  nullptr && mte_tunnel_attributes->has_operation())
	|| (cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_ !=  nullptr && cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_->has_operation())
	|| (portmode !=  nullptr && portmode->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (performance_management !=  nullptr && performance_management->has_operation())
	|| (cisco_ios_xr_ppp_ma_cfg_ppp !=  nullptr && cisco_ios_xr_ppp_ma_cfg_ppp->has_operation())
	|| (cisco_ios_xr_ppp_ma_fsm_cfg_ppp_ !=  nullptr && cisco_ios_xr_ppp_ma_fsm_cfg_ppp_->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__ !=  nullptr && cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__->has_operation())
	|| (cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___ !=  nullptr && cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___->has_operation())
	|| (cisco_ios_xr_ppp_ma_lcp_cfg_ppp____ !=  nullptr && cisco_ios_xr_ppp_ma_lcp_cfg_ppp____->has_operation())
	|| (ssrp_session !=  nullptr && ssrp_session->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (net_flow !=  nullptr && net_flow->has_operation())
	|| (tunnel_ip !=  nullptr && tunnel_ip->has_operation())
	|| (nve !=  nullptr && nve->has_operation())
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
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (interface_virtual.is_set || is_set(interface_virtual.yfilter)) leaf_name_data.push_back(interface_virtual.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.yfilter)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (interface_mode_non_physical.is_set || is_set(interface_mode_non_physical.yfilter)) leaf_name_data.push_back(interface_mode_non_physical.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (laser_squelch.is_set || is_set(laser_squelch.yfilter)) leaf_name_data.push_back(laser_squelch.get_name_leafdata());
    if (perf_mon_disable.is_set || is_set(perf_mon_disable.yfilter)) leaf_name_data.push_back(perf_mon_disable.get_name_leafdata());
    if (maintenance_embargo.is_set || is_set(maintenance_embargo.yfilter)) leaf_name_data.push_back(maintenance_embargo.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (fast_shutdown.is_set || is_set(fast_shutdown.yfilter)) leaf_name_data.push_back(fast_shutdown.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "mtus")
    {
        if(mtus == nullptr)
        {
            mtus = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus>();
        }
        return mtus;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table")
    {
        if(aaa_table == nullptr)
        {
            aaa_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable>();
        }
        return aaa_table;
    }

    if(child_yang_name == "Cisco-IOS-XR-asr9k-lc-ethctrl-cfg:ethernet-control")
    {
        if(ethernet_control == nullptr)
        {
            ethernet_control = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl>();
        }
        return ethernet_control;
    }

    if(child_yang_name == "Cisco-IOS-XR-ptp-cfg:ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp>();
        }
        return ptp;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2vpn-cfg:bvi")
    {
        if(bvi == nullptr)
        {
            bvi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bvi>();
        }
        return bvi;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2vpn-cfg:l2-transport")
    {
        if(l2_transport == nullptr)
        {
            l2_transport = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport>();
        }
        return l2_transport;
    }

    if(child_yang_name == "Cisco-IOS-XR-atm-vcm-cfg:atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "Cisco-IOS-XR-bundlemgr-cfg:bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "Cisco-IOS-XR-bundlemgr-cfg:bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "Cisco-IOS-XR-bundlemgr-cfg:lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "Cisco-IOS-XR-bundlemgr-cfg:bundle-member")
    {
        if(bundle_member == nullptr)
        {
            bundle_member = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember>();
        }
        return bundle_member;
    }

    if(child_yang_name == "Cisco-IOS-XR-bundlemgr-cfg:mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "Cisco-IOS-XR-cdp-cfg:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XR-controller-optics-cfg:optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "Cisco-IOS-XR-controller-otu-cfg:otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface")
    {
        if(dot1x_interface == nullptr)
        {
            dot1x_interface = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dot1XInterface>();
        }
        return dot1x_interface;
    }

    if(child_yang_name == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks")
    {
        if(loopbacks == nullptr)
        {
            loopbacks = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks>();
        }
        return loopbacks;
    }

    if(child_yang_name == "Cisco-IOS-XR-drivers-media-eth-cfg:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XR-dwdm-ui-cfg:dwdm")
    {
        if(dwdm == nullptr)
        {
            dwdm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm>();
        }
        return dwdm;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration")
    {
        if(vlan_sub_configuration == nullptr)
        {
            vlan_sub_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration>();
        }
        return vlan_sub_configuration;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-service")
    {
        if(ethernet_service == nullptr)
        {
            ethernet_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetService>();
        }
        return ethernet_service;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng")
    {
        if(ethernet_bng == nullptr)
        {
            ethernet_bng = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetBng>();
        }
        return ethernet_bng;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting")
    {
        if(mac_accounting == nullptr)
        {
            mac_accounting = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MacAccounting>();
        }
        return mac_accounting;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures>();
        }
        return ethernet_features;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration")
    {
        if(vlan_trunk_configuration == nullptr)
        {
            vlan_trunk_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration>();
        }
        return vlan_trunk_configuration;
    }

    if(child_yang_name == "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access")
    {
        if(nv_satellite_access == nullptr)
        {
            nv_satellite_access = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess>();
        }
        return nv_satellite_access;
    }

    if(child_yang_name == "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link")
    {
        if(nv_satellite_fabric_link == nullptr)
        {
            nv_satellite_fabric_link = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink>();
        }
        return nv_satellite_fabric_link;
    }

    if(child_yang_name == "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network")
    {
        if(nv_satellite_fabric_network == nullptr)
        {
            nv_satellite_fabric_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork>();
        }
        return nv_satellite_fabric_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-lldp-cfg:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization")
    {
        if(cisco_ios_xr_freqsync_cfg_frequency_synchronization == nullptr)
        {
            cisco_ios_xr_freqsync_cfg_frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization>();
        }
        return cisco_ios_xr_freqsync_cfg_frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-iedge4710-cfg:service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies>();
        }
        return service_policies;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-rsi-cfg:afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "Cisco-IOS-XR-infra-statsd-cfg:statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter")
    {
        if(ipv6_packet_filter == nullptr)
        {
            ipv6_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter>();
        }
        return ipv6_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter")
    {
        if(es_packet_filter == nullptr)
        {
            es_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter>();
        }
        return es_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter")
    {
        if(ipv4_packet_filter == nullptr)
        {
            ipv4_packet_filter = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter>();
        }
        return ipv4_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-arp-cfg:dagrs")
    {
        if(dagrs == nullptr)
        {
            dagrs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs>();
        }
        return dagrs;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp")
    {
        if(ipv4arp == nullptr)
        {
            ipv4arp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp>();
        }
        return ipv4arp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding")
    {
        if(ipv4_network_forwarding == nullptr)
        {
            ipv4_network_forwarding = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding>();
        }
        return ipv4_network_forwarding;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-io-cfg:mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes")
    {
        if(tunnel_te_attributes == nullptr)
        {
            tunnel_te_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes>();
        }
        return tunnel_te_attributes;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel")
    {
        if(transport_profile_tunnel == nullptr)
        {
            transport_profile_tunnel = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel>();
        }
        return transport_profile_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes")
    {
        if(mte_tunnel_attributes == nullptr)
        {
            mte_tunnel_attributes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes>();
        }
        return mte_tunnel_attributes;
    }

    if(child_yang_name == "Cisco-IOS-XR-ncs4k-freqsync-cfg:frequency-synchronization")
    {
        if(cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_ == nullptr)
        {
            cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRNcs4KFreqsyncCfgFrequencySynchronization>();
        }
        return cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_;
    }

    if(child_yang_name == "Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode")
    {
        if(portmode == nullptr)
        {
            portmode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Portmode>();
        }
        return portmode;
    }

    if(child_yang_name == "Cisco-IOS-XR-pbr-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-pmengine-cfg:performance-management")
    {
        if(performance_management == nullptr)
        {
            performance_management = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement>();
        }
        return performance_management;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_cfg_ppp == nullptr)
        {
            cisco_ios_xr_ppp_ma_cfg_ppp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_cfg_ppp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp_ == nullptr)
        {
            cisco_ios_xr_ppp_ma_fsm_cfg_ppp_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaFsmCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_fsm_cfg_ppp_;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__ == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___ == nullptr)
        {
            cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpiwCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp")
    {
        if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp____ == nullptr)
        {
            cisco_ios_xr_ppp_ma_lcp_cfg_ppp____ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaLcpCfgPpp>();
        }
        return cisco_ios_xr_ppp_ma_lcp_cfg_ppp____;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session")
    {
        if(ssrp_session == nullptr)
        {
            ssrp_session = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession>();
        }
        return ssrp_session;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow")
    {
        if(net_flow == nullptr)
        {
            net_flow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow>();
        }
        return net_flow;
    }

    if(child_yang_name == "Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip")
    {
        if(tunnel_ip == nullptr)
        {
            tunnel_ip = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelIp>();
        }
        return tunnel_ip;
    }

    if(child_yang_name == "Cisco-IOS-XR-tunnel-nve-cfg:nve")
    {
        if(nve == nullptr)
        {
            nve = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Nve>();
        }
        return nve;
    }

    if(child_yang_name == "Cisco-IOS-XR-wanphy-ui-cfg:wanphy")
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
    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(mtus != nullptr)
    {
        children["mtus"] = mtus;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(aaa_table != nullptr)
    {
        children["Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table"] = aaa_table;
    }

    if(ethernet_control != nullptr)
    {
        children["Cisco-IOS-XR-asr9k-lc-ethctrl-cfg:ethernet-control"] = ethernet_control;
    }

    if(ptp != nullptr)
    {
        children["Cisco-IOS-XR-ptp-cfg:ptp"] = ptp;
    }

    if(pseudowire_ether != nullptr)
    {
        children["Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw"] = pseudowire_iw;
    }

    if(bvi != nullptr)
    {
        children["Cisco-IOS-XR-l2vpn-cfg:bvi"] = bvi;
    }

    if(l2_transport != nullptr)
    {
        children["Cisco-IOS-XR-l2vpn-cfg:l2-transport"] = l2_transport;
    }

    if(atm != nullptr)
    {
        children["Cisco-IOS-XR-atm-vcm-cfg:atm"] = atm;
    }

    if(bfd != nullptr)
    {
        children["Cisco-IOS-XR-bundlemgr-cfg:bfd"] = bfd;
    }

    if(bundle != nullptr)
    {
        children["Cisco-IOS-XR-bundlemgr-cfg:bundle"] = bundle;
    }

    if(lacp != nullptr)
    {
        children["Cisco-IOS-XR-bundlemgr-cfg:lacp"] = lacp;
    }

    if(bundle_member != nullptr)
    {
        children["Cisco-IOS-XR-bundlemgr-cfg:bundle-member"] = bundle_member;
    }

    if(mlacp != nullptr)
    {
        children["Cisco-IOS-XR-bundlemgr-cfg:mlacp"] = mlacp;
    }

    if(cdp != nullptr)
    {
        children["Cisco-IOS-XR-cdp-cfg:cdp"] = cdp;
    }

    if(optics != nullptr)
    {
        children["Cisco-IOS-XR-controller-optics-cfg:optics"] = optics;
    }

    if(otu != nullptr)
    {
        children["Cisco-IOS-XR-controller-otu-cfg:otu"] = otu;
    }

    if(macsec != nullptr)
    {
        children["Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec"] = macsec;
    }

    if(dot1x_interface != nullptr)
    {
        children["Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface"] = dot1x_interface;
    }

    if(loopbacks != nullptr)
    {
        children["Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks"] = loopbacks;
    }

    if(ethernet != nullptr)
    {
        children["Cisco-IOS-XR-drivers-media-eth-cfg:ethernet"] = ethernet;
    }

    if(dwdm != nullptr)
    {
        children["Cisco-IOS-XR-dwdm-ui-cfg:dwdm"] = dwdm;
    }

    if(vlan_sub_configuration != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:vlan-sub-configuration"] = vlan_sub_configuration;
    }

    if(ethernet_service != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-service"] = ethernet_service;
    }

    if(ethernet_bng != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-bng"] = ethernet_bng;
    }

    if(mac_accounting != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting"] = mac_accounting;
    }

    if(ethernet_features != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features"] = ethernet_features;
    }

    if(carrier_delay != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay"] = carrier_delay;
    }

    if(vlan_trunk_configuration != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration"] = vlan_trunk_configuration;
    }

    if(nv_satellite_access != nullptr)
    {
        children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access"] = nv_satellite_access;
    }

    if(nv_satellite_fabric_link != nullptr)
    {
        children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link"] = nv_satellite_fabric_link;
    }

    if(nv_satellite_fabric_network != nullptr)
    {
        children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network"] = nv_satellite_fabric_network;
    }

    if(lldp != nullptr)
    {
        children["Cisco-IOS-XR-ethernet-lldp-cfg:lldp"] = lldp;
    }

    if(span_monitor_sessions != nullptr)
    {
        children["Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(cisco_ios_xr_freqsync_cfg_frequency_synchronization != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-cfg:frequency-synchronization"] = cisco_ios_xr_freqsync_cfg_frequency_synchronization;
    }

    if(service_policies != nullptr)
    {
        children["Cisco-IOS-XR-iedge4710-cfg:service-policies"] = service_policies;
    }

    if(afs != nullptr)
    {
        children["Cisco-IOS-XR-infra-rsi-cfg:afs"] = afs;
    }

    if(statistics != nullptr)
    {
        children["Cisco-IOS-XR-infra-statsd-cfg:statistics"] = statistics;
    }

    if(ipv6_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(es_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter"] = es_packet_filter;
    }

    if(ipv4_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(dagrs != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-arp-cfg:dagrs"] = dagrs;
    }

    if(ipv4arp != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp"] = ipv4arp;
    }

    if(ipv4_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-io-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv4_network_forwarding != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding"] = ipv4_network_forwarding;
    }

    if(ipv6_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network"] = ipv6_network;
    }

    if(ipv6_neighbor != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(mpls != nullptr)
    {
        children["Cisco-IOS-XR-mpls-io-cfg:mpls"] = mpls;
    }

    if(tunnel_te_attributes != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes"] = tunnel_te_attributes;
    }

    if(transport_profile_tunnel != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel"] = transport_profile_tunnel;
    }

    if(mte_tunnel_attributes != nullptr)
    {
        children["Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes"] = mte_tunnel_attributes;
    }

    if(cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_ != nullptr)
    {
        children["Cisco-IOS-XR-ncs4k-freqsync-cfg:frequency-synchronization"] = cisco_ios_xr_ncs4k_freqsync_cfg_frequency_synchronization_;
    }

    if(portmode != nullptr)
    {
        children["Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode"] = portmode;
    }

    if(pbr != nullptr)
    {
        children["Cisco-IOS-XR-pbr-cfg:pbr"] = pbr;
    }

    if(performance_management != nullptr)
    {
        children["Cisco-IOS-XR-pmengine-cfg:performance-management"] = performance_management;
    }

    if(cisco_ios_xr_ppp_ma_cfg_ppp != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-cfg:ppp"] = cisco_ios_xr_ppp_ma_cfg_ppp;
    }

    if(cisco_ios_xr_ppp_ma_fsm_cfg_ppp_ != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-fsm-cfg:ppp"] = cisco_ios_xr_ppp_ma_fsm_cfg_ppp_;
    }

    if(cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__ != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp"] = cisco_ios_xr_ppp_ma_ipcp_cfg_ppp__;
    }

    if(cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___ != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:ppp"] = cisco_ios_xr_ppp_ma_ipcpiw_cfg_ppp___;
    }

    if(cisco_ios_xr_ppp_ma_lcp_cfg_ppp____ != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-lcp-cfg:ppp"] = cisco_ios_xr_ppp_ma_lcp_cfg_ppp____;
    }

    if(ssrp_session != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session"] = ssrp_session;
    }

    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-cfg:qos"] = qos;
    }

    if(subscriber != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-ipsub-cfg:subscriber"] = subscriber;
    }

    if(pppoe != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe"] = pppoe;
    }

    if(net_flow != nullptr)
    {
        children["Cisco-IOS-XR-traffmon-netflow-cfg:net-flow"] = net_flow;
    }

    if(tunnel_ip != nullptr)
    {
        children["Cisco-IOS-XR-tunnel-gre-cfg:tunnel-ip"] = tunnel_ip;
    }

    if(nve != nullptr)
    {
        children["Cisco-IOS-XR-tunnel-nve-cfg:nve"] = nve;
    }

    if(wanphy != nullptr)
    {
        children["Cisco-IOS-XR-wanphy-ui-cfg:wanphy"] = wanphy;
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
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-virtual")
    {
        interface_virtual = value;
        interface_virtual.value_namespace = name_space;
        interface_virtual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
        secondary_admin_state.value_namespace = name_space;
        secondary_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mode-non-physical")
    {
        interface_mode_non_physical = value;
        interface_mode_non_physical.value_namespace = name_space;
        interface_mode_non_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:laser-squelch")
    {
        laser_squelch = value;
        laser_squelch.value_namespace = name_space;
        laser_squelch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:perf-mon-disable")
    {
        perf_mon_disable = value;
        perf_mon_disable.value_namespace = name_space;
        perf_mon_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-dwdm-ui-cfg:maintenance-embargo")
    {
        maintenance_embargo = value;
        maintenance_embargo.value_namespace = name_space;
        maintenance_embargo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-infra-rsi-cfg:vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-manageability-object-tracking-cfg:track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-mdrv-lib-cfg:fast-shutdown")
    {
        fast_shutdown = value;
        fast_shutdown.value_namespace = name_space;
        fast_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-mdrv-lib-cfg:mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "interface-virtual")
    {
        interface_virtual.yfilter = yfilter;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state.yfilter = yfilter;
    }
    if(value_path == "interface-mode-non-physical")
    {
        interface_mode_non_physical.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "laser-squelch")
    {
        laser_squelch.yfilter = yfilter;
    }
    if(value_path == "perf-mon-disable")
    {
        perf_mon_disable.yfilter = yfilter;
    }
    if(value_path == "maintenance-embargo")
    {
        maintenance_embargo.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
    if(value_path == "fast-shutdown")
    {
        fast_shutdown.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening" || name == "mtus" || name == "encapsulation" || name == "aaa-table" || name == "ethernet-control" || name == "ptp" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "bvi" || name == "l2-transport" || name == "atm" || name == "bfd" || name == "bundle" || name == "lacp" || name == "bundle-member" || name == "mlacp" || name == "cdp" || name == "optics" || name == "otu" || name == "macsec" || name == "dot1x-interface" || name == "loopbacks" || name == "ethernet" || name == "dwdm" || name == "vlan-sub-configuration" || name == "ethernet-service" || name == "ethernet-bng" || name == "mac-accounting" || name == "ethernet-features" || name == "carrier-delay" || name == "vlan-trunk-configuration" || name == "nv-satellite-access" || name == "nv-satellite-fabric-link" || name == "nv-satellite-fabric-network" || name == "lldp" || name == "span-monitor-sessions" || name == "frequency-synchronization" || name == "service-policies" || name == "afs" || name == "statistics" || name == "ipv6-packet-filter" || name == "es-packet-filter" || name == "ipv4-packet-filter" || name == "dagrs" || name == "ipv4arp" || name == "ipv4-network" || name == "ipv4-network-forwarding" || name == "ipv6-network" || name == "ipv6-neighbor" || name == "mpls" || name == "tunnel-te-attributes" || name == "transport-profile-tunnel" || name == "mte-tunnel-attributes" || name == "frequency-synchronization" || name == "portmode" || name == "pbr" || name == "performance-management" || name == "ppp" || name == "ppp" || name == "ppp" || name == "ppp" || name == "ppp" || name == "ssrp-session" || name == "qos" || name == "subscriber" || name == "pppoe" || name == "net-flow" || name == "tunnel-ip" || name == "nve" || name == "wanphy" || name == "active" || name == "interface-name" || name == "shutdown" || name == "interface-virtual" || name == "secondary-admin-state" || name == "interface-mode-non-physical" || name == "bandwidth" || name == "link-status" || name == "description" || name == "laser-squelch" || name == "perf-mon-disable" || name == "maintenance-embargo" || name == "vrf" || name == "track-name" || name == "fast-shutdown" || name == "mac-addr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dampening::Dampening()
    :
    args{YType::enumeration, "args"},
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"},
    restart_penalty{YType::uint32, "restart-penalty"}
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
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set
	|| restart_penalty.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
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
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

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
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "args" || name == "half-life" || name == "reuse-threshold" || name == "suppress-threshold" || name == "suppress-time" || name == "restart-penalty")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtus()
{

    yang_name = "mtus"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mtus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mtu")
    {
        for(auto const & c : mtu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu>();
        c->parent = this;
        mtu.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtu)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::Mtu()
    :
    owner{YType::str, "owner"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "mtu"; yang_parent_name = "mtus"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu" <<"[owner='" <<owner <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::Encapsulation()
    :
    encapsulation{YType::str, "encapsulation"},
    capsulation_options{YType::int32, "capsulation-options"}
{

    yang_name = "encapsulation"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_data() const
{
    return encapsulation.is_set
	|| capsulation_options.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(capsulation_options.yfilter);
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

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (capsulation_options.is_set || is_set(capsulation_options.yfilter)) leaf_name_data.push_back(capsulation_options.get_name_leafdata());

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
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capsulation-options")
    {
        capsulation_options = value;
        capsulation_options.value_namespace = name_space;
        capsulation_options.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "capsulation-options")
    {
        capsulation_options.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "capsulation-options")
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

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::EthernetControl()
    :
    transport_mode{YType::enumeration, "transport-mode"},
    small_frame_padding{YType::empty, "small-frame-padding"}
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
    return transport_mode.is_set
	|| small_frame_padding.is_set
	|| (transceiver !=  nullptr && transceiver->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(small_frame_padding.yfilter)
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

    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (small_frame_padding.is_set || is_set(small_frame_padding.yfilter)) leaf_name_data.push_back(small_frame_padding.get_name_leafdata());

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
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame-padding")
    {
        small_frame_padding = value;
        small_frame_padding.value_namespace = name_space;
        small_frame_padding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "small-frame-padding")
    {
        small_frame_padding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transceiver" || name == "transport-mode" || name == "small-frame-padding")
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
    type{YType::enumeration, "type"},
    pid{YType::enumeration, "pid"}
{

    yang_name = "permit"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::~Permit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_data() const
{
    return type.is_set
	|| pid.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pid.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());

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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "pid")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Ptp()
    :
    sync_grant_duration{YType::uint32, "sync-grant-duration"},
    general_cos{YType::uint32, "general-cos"},
    enable{YType::empty, "enable"},
    sync_timeout{YType::uint32, "sync-timeout"},
    transport{YType::enumeration, "transport"},
    profile{YType::str, "profile"},
    announce_timeout{YType::uint32, "announce-timeout"},
    cos{YType::uint32, "cos"},
    port_state{YType::enumeration, "port-state"},
    delay_response_timeout{YType::uint32, "delay-response-timeout"},
    local_priority{YType::uint32, "local-priority"},
    delay_response_grant_duration{YType::uint32, "delay-response-grant-duration"},
    event_cos{YType::uint32, "event-cos"},
    dscp{YType::uint32, "dscp"},
    general_dscp{YType::uint32, "general-dscp"},
    clock_operation{YType::enumeration, "clock-operation"},
    announce_grant_duration{YType::uint32, "announce-grant-duration"},
    unicast_grant_invalid_request{YType::enumeration, "unicast-grant-invalid-request"},
    event_dscp{YType::uint32, "event-dscp"}
    	,
    source_ipv6_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>())
	,announce_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>())
	,source_ipv4_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>())
	,slaves(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>())
	,sync_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>())
	,masters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>())
	,communication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication>())
	,delay_request_minimum_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval>())
{
    source_ipv6_address->parent = this;
    announce_interval->parent = this;
    source_ipv4_address->parent = this;
    slaves->parent = this;
    sync_interval->parent = this;
    masters->parent = this;
    communication->parent = this;
    delay_request_minimum_interval->parent = this;

    yang_name = "ptp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::~Ptp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_data() const
{
    return sync_grant_duration.is_set
	|| general_cos.is_set
	|| enable.is_set
	|| sync_timeout.is_set
	|| transport.is_set
	|| profile.is_set
	|| announce_timeout.is_set
	|| cos.is_set
	|| port_state.is_set
	|| delay_response_timeout.is_set
	|| local_priority.is_set
	|| delay_response_grant_duration.is_set
	|| event_cos.is_set
	|| dscp.is_set
	|| general_dscp.is_set
	|| clock_operation.is_set
	|| announce_grant_duration.is_set
	|| unicast_grant_invalid_request.is_set
	|| event_dscp.is_set
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_data())
	|| (announce_interval !=  nullptr && announce_interval->has_data())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_data())
	|| (slaves !=  nullptr && slaves->has_data())
	|| (sync_interval !=  nullptr && sync_interval->has_data())
	|| (masters !=  nullptr && masters->has_data())
	|| (communication !=  nullptr && communication->has_data())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_grant_duration.yfilter)
	|| ydk::is_set(general_cos.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(sync_timeout.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(announce_timeout.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(delay_response_timeout.yfilter)
	|| ydk::is_set(local_priority.yfilter)
	|| ydk::is_set(delay_response_grant_duration.yfilter)
	|| ydk::is_set(event_cos.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(general_dscp.yfilter)
	|| ydk::is_set(clock_operation.yfilter)
	|| ydk::is_set(announce_grant_duration.yfilter)
	|| ydk::is_set(unicast_grant_invalid_request.yfilter)
	|| ydk::is_set(event_dscp.yfilter)
	|| (source_ipv6_address !=  nullptr && source_ipv6_address->has_operation())
	|| (announce_interval !=  nullptr && announce_interval->has_operation())
	|| (source_ipv4_address !=  nullptr && source_ipv4_address->has_operation())
	|| (slaves !=  nullptr && slaves->has_operation())
	|| (sync_interval !=  nullptr && sync_interval->has_operation())
	|| (masters !=  nullptr && masters->has_operation())
	|| (communication !=  nullptr && communication->has_operation())
	|| (delay_request_minimum_interval !=  nullptr && delay_request_minimum_interval->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ptp-cfg:ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_grant_duration.is_set || is_set(sync_grant_duration.yfilter)) leaf_name_data.push_back(sync_grant_duration.get_name_leafdata());
    if (general_cos.is_set || is_set(general_cos.yfilter)) leaf_name_data.push_back(general_cos.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (sync_timeout.is_set || is_set(sync_timeout.yfilter)) leaf_name_data.push_back(sync_timeout.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (announce_timeout.is_set || is_set(announce_timeout.yfilter)) leaf_name_data.push_back(announce_timeout.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (delay_response_timeout.is_set || is_set(delay_response_timeout.yfilter)) leaf_name_data.push_back(delay_response_timeout.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());
    if (delay_response_grant_duration.is_set || is_set(delay_response_grant_duration.yfilter)) leaf_name_data.push_back(delay_response_grant_duration.get_name_leafdata());
    if (event_cos.is_set || is_set(event_cos.yfilter)) leaf_name_data.push_back(event_cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (general_dscp.is_set || is_set(general_dscp.yfilter)) leaf_name_data.push_back(general_dscp.get_name_leafdata());
    if (clock_operation.is_set || is_set(clock_operation.yfilter)) leaf_name_data.push_back(clock_operation.get_name_leafdata());
    if (announce_grant_duration.is_set || is_set(announce_grant_duration.yfilter)) leaf_name_data.push_back(announce_grant_duration.get_name_leafdata());
    if (unicast_grant_invalid_request.is_set || is_set(unicast_grant_invalid_request.yfilter)) leaf_name_data.push_back(unicast_grant_invalid_request.get_name_leafdata());
    if (event_dscp.is_set || is_set(event_dscp.yfilter)) leaf_name_data.push_back(event_dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-ipv6-address")
    {
        if(source_ipv6_address == nullptr)
        {
            source_ipv6_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address>();
        }
        return source_ipv6_address;
    }

    if(child_yang_name == "announce-interval")
    {
        if(announce_interval == nullptr)
        {
            announce_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval>();
        }
        return announce_interval;
    }

    if(child_yang_name == "source-ipv4-address")
    {
        if(source_ipv4_address == nullptr)
        {
            source_ipv4_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address>();
        }
        return source_ipv4_address;
    }

    if(child_yang_name == "slaves")
    {
        if(slaves == nullptr)
        {
            slaves = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves>();
        }
        return slaves;
    }

    if(child_yang_name == "sync-interval")
    {
        if(sync_interval == nullptr)
        {
            sync_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval>();
        }
        return sync_interval;
    }

    if(child_yang_name == "masters")
    {
        if(masters == nullptr)
        {
            masters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters>();
        }
        return masters;
    }

    if(child_yang_name == "communication")
    {
        if(communication == nullptr)
        {
            communication = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication>();
        }
        return communication;
    }

    if(child_yang_name == "delay-request-minimum-interval")
    {
        if(delay_request_minimum_interval == nullptr)
        {
            delay_request_minimum_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval>();
        }
        return delay_request_minimum_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_ipv6_address != nullptr)
    {
        children["source-ipv6-address"] = source_ipv6_address;
    }

    if(announce_interval != nullptr)
    {
        children["announce-interval"] = announce_interval;
    }

    if(source_ipv4_address != nullptr)
    {
        children["source-ipv4-address"] = source_ipv4_address;
    }

    if(slaves != nullptr)
    {
        children["slaves"] = slaves;
    }

    if(sync_interval != nullptr)
    {
        children["sync-interval"] = sync_interval;
    }

    if(masters != nullptr)
    {
        children["masters"] = masters;
    }

    if(communication != nullptr)
    {
        children["communication"] = communication;
    }

    if(delay_request_minimum_interval != nullptr)
    {
        children["delay-request-minimum-interval"] = delay_request_minimum_interval;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration = value;
        sync_grant_duration.value_namespace = name_space;
        sync_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-cos")
    {
        general_cos = value;
        general_cos.value_namespace = name_space;
        general_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout = value;
        sync_timeout.value_namespace = name_space;
        sync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout = value;
        announce_timeout.value_namespace = name_space;
        announce_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout = value;
        delay_response_timeout.value_namespace = name_space;
        delay_response_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration = value;
        delay_response_grant_duration.value_namespace = name_space;
        delay_response_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-cos")
    {
        event_cos = value;
        event_cos.value_namespace = name_space;
        event_cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-dscp")
    {
        general_dscp = value;
        general_dscp.value_namespace = name_space;
        general_dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-operation")
    {
        clock_operation = value;
        clock_operation.value_namespace = name_space;
        clock_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration = value;
        announce_grant_duration.value_namespace = name_space;
        announce_grant_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request = value;
        unicast_grant_invalid_request.value_namespace = name_space;
        unicast_grant_invalid_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-dscp")
    {
        event_dscp = value;
        event_dscp.value_namespace = name_space;
        event_dscp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-grant-duration")
    {
        sync_grant_duration.yfilter = yfilter;
    }
    if(value_path == "general-cos")
    {
        general_cos.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "sync-timeout")
    {
        sync_timeout.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "announce-timeout")
    {
        announce_timeout.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "delay-response-timeout")
    {
        delay_response_timeout.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
    if(value_path == "delay-response-grant-duration")
    {
        delay_response_grant_duration.yfilter = yfilter;
    }
    if(value_path == "event-cos")
    {
        event_cos.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "general-dscp")
    {
        general_dscp.yfilter = yfilter;
    }
    if(value_path == "clock-operation")
    {
        clock_operation.yfilter = yfilter;
    }
    if(value_path == "announce-grant-duration")
    {
        announce_grant_duration.yfilter = yfilter;
    }
    if(value_path == "unicast-grant-invalid-request")
    {
        unicast_grant_invalid_request.yfilter = yfilter;
    }
    if(value_path == "event-dscp")
    {
        event_dscp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-ipv6-address" || name == "announce-interval" || name == "source-ipv4-address" || name == "slaves" || name == "sync-interval" || name == "masters" || name == "communication" || name == "delay-request-minimum-interval" || name == "sync-grant-duration" || name == "general-cos" || name == "enable" || name == "sync-timeout" || name == "transport" || name == "profile" || name == "announce-timeout" || name == "cos" || name == "port-state" || name == "delay-response-timeout" || name == "local-priority" || name == "delay-response-grant-duration" || name == "event-cos" || name == "dscp" || name == "general-dscp" || name == "clock-operation" || name == "announce-grant-duration" || name == "unicast-grant-invalid-request" || name == "event-dscp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::SourceIpv6Address()
    :
    enable{YType::boolean, "enable"},
    source_ipv6{YType::str, "source-ipv6"}
{

    yang_name = "source-ipv6-address"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::~SourceIpv6Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::has_data() const
{
    return enable.is_set
	|| source_ipv6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_ipv6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_ipv6.is_set || is_set(source_ipv6.yfilter)) leaf_name_data.push_back(source_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6 = value;
        source_ipv6.value_namespace = name_space;
        source_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source-ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::AnnounceInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "announce-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::~AnnounceInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_data() const
{
    return time_type.is_set
	|| time_period.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::SourceIpv4Address()
    :
    enable{YType::boolean, "enable"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "source-ipv4-address"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::~SourceIpv4Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::has_data() const
{
    return enable.is_set
	|| source_ip.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "source-ip")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slaves()
{

    yang_name = "slaves"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::~Slaves()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_data() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_operation() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slaves";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        for(auto const & c : slave)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave>();
        c->parent = this;
        slave.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slave)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Slave()
    :
    transport{YType::enumeration, "transport"}
{

    yang_name = "slave"; yang_parent_name = "slaves"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::~Slave()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_data() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_operation() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave" <<"[transport='" <<transport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        for(auto const & c : ethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet>();
        c->parent = this;
        ethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        for(auto const & c : ipv4_or_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6>();
        c->parent = this;
        ipv4_or_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_or_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ipv4-or-ipv6" || name == "transport")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::Ethernet()
    :
    slave_mac_address{YType::str, "slave-mac-address"},
    non_negotiated{YType::boolean, "non-negotiated"}
{

    yang_name = "ethernet"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::has_data() const
{
    return slave_mac_address.is_set
	|| non_negotiated.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_mac_address.yfilter)
	|| ydk::is_set(non_negotiated.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet" <<"[slave-mac-address='" <<slave_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_mac_address.is_set || is_set(slave_mac_address.yfilter)) leaf_name_data.push_back(slave_mac_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-mac-address")
    {
        slave_mac_address = value;
        slave_mac_address.value_namespace = name_space;
        slave_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-mac-address")
    {
        slave_mac_address.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-mac-address" || name == "non-negotiated")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::Ipv4OrIpv6()
    :
    slave_ip_address{YType::str, "slave-ip-address"},
    non_negotiated{YType::boolean, "non-negotiated"}
{

    yang_name = "ipv4-or-ipv6"; yang_parent_name = "slave"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::~Ipv4OrIpv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::has_data() const
{
    return slave_ip_address.is_set
	|| non_negotiated.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_ip_address.yfilter)
	|| ydk::is_set(non_negotiated.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6" <<"[slave-ip-address='" <<slave_ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_ip_address.is_set || is_set(slave_ip_address.yfilter)) leaf_name_data.push_back(slave_ip_address.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-ip-address")
    {
        slave_ip_address = value;
        slave_ip_address.value_namespace = name_space;
        slave_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-ip-address")
    {
        slave_ip_address.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-ip-address" || name == "non-negotiated")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::SyncInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "sync-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::~SyncInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_data() const
{
    return time_type.is_set
	|| time_period.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Masters()
{

    yang_name = "masters"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::~Masters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_data() const
{
    for (std::size_t index=0; index<master.size(); index++)
    {
        if(master[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_operation() const
{
    for (std::size_t index=0; index<master.size(); index++)
    {
        if(master[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "masters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master")
    {
        for(auto const & c : master)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master>();
        c->parent = this;
        master.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : master)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Master()
    :
    transport{YType::enumeration, "transport"}
{

    yang_name = "master"; yang_parent_name = "masters"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::~Master()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_data() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_data())
            return true;
    }
    return transport.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_operation() const
{
    for (std::size_t index=0; index<ethernet.size(); index++)
    {
        if(ethernet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_or_ipv6.size(); index++)
    {
        if(ipv4_or_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master" <<"[transport='" <<transport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        for(auto const & c : ethernet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet>();
        c->parent = this;
        ethernet.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-or-ipv6")
    {
        for(auto const & c : ipv4_or_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6>();
        c->parent = this;
        ipv4_or_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_or_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ipv4-or-ipv6" || name == "transport")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::Ethernet()
    :
    master_mac_address{YType::str, "master-mac-address"},
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"},
    communication{YType::enumeration, "communication"}
    	,
    delay_asymmetry(nullptr) // presence node
{

    yang_name = "ethernet"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_data() const
{
    return master_mac_address.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| communication.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_mac_address.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet" <<"[master-mac-address='" <<master_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_mac_address.is_set || is_set(master_mac_address.yfilter)) leaf_name_data.push_back(master_mac_address.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-asymmetry")
    {
        if(delay_asymmetry == nullptr)
        {
            delay_asymmetry = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry>();
        }
        return delay_asymmetry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_asymmetry != nullptr)
    {
        children["delay-asymmetry"] = delay_asymmetry;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address = value;
        master_mac_address.value_namespace = name_space;
        master_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class = value;
        master_clock_class.value_namespace = name_space;
        master_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-mac-address")
    {
        master_mac_address.yfilter = yfilter;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-mac-address" || name == "master-clock-class" || name == "non-negotiated" || name == "priority" || name == "communication")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_data() const
{
    return magnitude.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-asymmetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "magnitude" || name == "units")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::Ipv4OrIpv6()
    :
    master_ip_address{YType::str, "master-ip-address"},
    master_clock_class{YType::uint32, "master-clock-class"},
    non_negotiated{YType::boolean, "non-negotiated"},
    priority{YType::uint32, "priority"},
    communication{YType::enumeration, "communication"}
    	,
    delay_asymmetry(nullptr) // presence node
{

    yang_name = "ipv4-or-ipv6"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::~Ipv4OrIpv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_data() const
{
    return master_ip_address.is_set
	|| master_clock_class.is_set
	|| non_negotiated.is_set
	|| priority.is_set
	|| communication.is_set
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_ip_address.yfilter)
	|| ydk::is_set(master_clock_class.yfilter)
	|| ydk::is_set(non_negotiated.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(communication.yfilter)
	|| (delay_asymmetry !=  nullptr && delay_asymmetry->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-ipv6" <<"[master-ip-address='" <<master_ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_ip_address.is_set || is_set(master_ip_address.yfilter)) leaf_name_data.push_back(master_ip_address.get_name_leafdata());
    if (master_clock_class.is_set || is_set(master_clock_class.yfilter)) leaf_name_data.push_back(master_clock_class.get_name_leafdata());
    if (non_negotiated.is_set || is_set(non_negotiated.yfilter)) leaf_name_data.push_back(non_negotiated.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (communication.is_set || is_set(communication.yfilter)) leaf_name_data.push_back(communication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-asymmetry")
    {
        if(delay_asymmetry == nullptr)
        {
            delay_asymmetry = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry>();
        }
        return delay_asymmetry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_asymmetry != nullptr)
    {
        children["delay-asymmetry"] = delay_asymmetry;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address = value;
        master_ip_address.value_namespace = name_space;
        master_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class = value;
        master_clock_class.value_namespace = name_space;
        master_clock_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated = value;
        non_negotiated.value_namespace = name_space;
        non_negotiated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication")
    {
        communication = value;
        communication.value_namespace = name_space;
        communication.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-ip-address")
    {
        master_ip_address.yfilter = yfilter;
    }
    if(value_path == "master-clock-class")
    {
        master_clock_class.yfilter = yfilter;
    }
    if(value_path == "non-negotiated")
    {
        non_negotiated.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "communication")
    {
        communication.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-asymmetry" || name == "master-ip-address" || name == "master-clock-class" || name == "non-negotiated" || name == "priority" || name == "communication")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::DelayAsymmetry()
    :
    magnitude{YType::int32, "magnitude"},
    units{YType::enumeration, "units"}
{

    yang_name = "delay-asymmetry"; yang_parent_name = "ipv4-or-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::~DelayAsymmetry()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_data() const
{
    return magnitude.is_set
	|| units.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-asymmetry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "magnitude" || name == "units")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::Communication()
    :
    model{YType::enumeration, "model"},
    target_address_set{YType::boolean, "target-address-set"},
    target_address{YType::str, "target-address"}
{

    yang_name = "communication"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::~Communication()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_data() const
{
    return model.is_set
	|| target_address_set.is_set
	|| target_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(target_address_set.yfilter)
	|| ydk::is_set(target_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (target_address_set.is_set || is_set(target_address_set.yfilter)) leaf_name_data.push_back(target_address_set.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.yfilter)) leaf_name_data.push_back(target_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address-set")
    {
        target_address_set = value;
        target_address_set.value_namespace = name_space;
        target_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-address")
    {
        target_address = value;
        target_address.value_namespace = name_space;
        target_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "target-address-set")
    {
        target_address_set.yfilter = yfilter;
    }
    if(value_path == "target-address")
    {
        target_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model" || name == "target-address-set" || name == "target-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::DelayRequestMinimumInterval()
    :
    time_type{YType::enumeration, "time-type"},
    time_period{YType::enumeration, "time-period"}
{

    yang_name = "delay-request-minimum-interval"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::~DelayRequestMinimumInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_data() const
{
    return time_type.is_set
	|| time_period.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_type.yfilter)
	|| ydk::is_set(time_period.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-request-minimum-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_type.is_set || is_set(time_type.yfilter)) leaf_name_data.push_back(time_type.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-type")
    {
        time_type = value;
        time_type.value_namespace = name_space;
        time_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-type")
    {
        time_type.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-type" || name == "time-period")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::PseudowireEther()
    :
    generic_interface_list{YType::str, "generic-interface-list"},
    l2_overhead{YType::uint32, "l2-overhead"}
{

    yang_name = "pseudowire-ether"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list.yfilter)
	|| ydk::is_set(l2_overhead.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list.is_set || is_set(generic_interface_list.yfilter)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
        generic_interface_list.value_namespace = name_space;
        generic_interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list")
    {
        generic_interface_list.yfilter = yfilter;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list" || name == "l2-overhead")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::PseudowireIw()
    :
    l2_overhead{YType::uint32, "l2-overhead"},
    generic_interface_list{YType::str, "generic-interface-list"}
{

    yang_name = "pseudowire-iw"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::~PseudowireIw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_data() const
{
    return l2_overhead.is_set
	|| generic_interface_list.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_overhead.yfilter)
	|| ydk::is_set(generic_interface_list.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());
    if (generic_interface_list.is_set || is_set(generic_interface_list.yfilter)) leaf_name_data.push_back(generic_interface_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-interface-list")
    {
        generic_interface_list = value;
        generic_interface_list.value_namespace = name_space;
        generic_interface_list.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
    if(value_path == "generic-interface-list")
    {
        generic_interface_list.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-overhead" || name == "generic-interface-list")
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

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Transport()
    :
    enabled{YType::empty, "enabled"},
    propagate_remote_status{YType::empty, "Cisco-IOS-XR-l2-eth-infra-cfg:propagate-remote-status"}
    	,
    atm_port_mode_parameters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>())
	,l2_protocols(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>())
	,l2_ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>())
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>())
	,pac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>())
	,cac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>())
{
    atm_port_mode_parameters->parent = this;
    l2_protocols->parent = this;
    l2_ethernet_features->parent = this;
    span_monitor_sessions->parent = this;
    pac->parent = this;
    cac->parent = this;

    yang_name = "l2-transport"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::~L2Transport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_data() const
{
    return enabled.is_set
	|| propagate_remote_status.is_set
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_data())
	|| (l2_protocols !=  nullptr && l2_protocols->has_data())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (pac !=  nullptr && pac->has_data())
	|| (cac !=  nullptr && cac->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(propagate_remote_status.yfilter)
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_operation())
	|| (l2_protocols !=  nullptr && l2_protocols->has_operation())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (pac !=  nullptr && pac->has_operation())
	|| (cac !=  nullptr && cac->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2-transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (propagate_remote_status.is_set || is_set(propagate_remote_status.yfilter)) leaf_name_data.push_back(propagate_remote_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-atm-vcm-cfg:atm-port-mode-parameters")
    {
        if(atm_port_mode_parameters == nullptr)
        {
            atm_port_mode_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>();
        }
        return atm_port_mode_parameters;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols")
    {
        if(l2_protocols == nullptr)
        {
            l2_protocols = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>();
        }
        return l2_protocols;
    }

    if(child_yang_name == "Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features")
    {
        if(l2_ethernet_features == nullptr)
        {
            l2_ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>();
        }
        return l2_ethernet_features;
    }

    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-cfg:pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>();
        }
        return pac;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-cfg:cac")
    {
        if(cac == nullptr)
        {
            cac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>();
        }
        return cac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_port_mode_parameters != nullptr)
    {
        children["Cisco-IOS-XR-atm-vcm-cfg:atm-port-mode-parameters"] = atm_port_mode_parameters;
    }

    if(l2_protocols != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols"] = l2_protocols;
    }

    if(l2_ethernet_features != nullptr)
    {
        children["Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features"] = l2_ethernet_features;
    }

    if(span_monitor_sessions != nullptr)
    {
        children["Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(pac != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-cfg:pac"] = pac;
    }

    if(cac != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-cfg:cac"] = cac;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-l2-eth-infra-cfg:propagate-remote-status")
    {
        propagate_remote_status = value;
        propagate_remote_status.value_namespace = name_space;
        propagate_remote_status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "propagate-remote-status")
    {
        propagate_remote_status.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-port-mode-parameters" || name == "l2-protocols" || name == "l2-ethernet-features" || name == "span-monitor-sessions" || name == "pac" || name == "cac" || name == "enabled" || name == "propagate-remote-status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::AtmPortModeParameters()
    :
    cell_packing(nullptr) // presence node
{

    yang_name = "atm-port-mode-parameters"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm-port-mode-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::CellPacking()
    :
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"},
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"}
{

    yang_name = "cell-packing"; yang_parent_name = "atm-port-mode-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_data() const
{
    return maximum_cells_packed.is_set
	|| cell_packing_timer_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());
    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cells-packed" || name == "cell-packing-timer-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocols()
{

    yang_name = "l2-protocols"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-protocol")
    {
        for(auto const & c : l2_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol>();
        c->parent = this;
        l2_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-protocol")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::L2Protocol()
    :
    l2_protocol_name{YType::enumeration, "l2-protocol-name"},
    mode{YType::enumeration, "mode"},
    mpls_exp_bits_value{YType::uint32, "mpls-exp-bits-value"}
{

    yang_name = "l2-protocol"; yang_parent_name = "l2-protocols"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(l2_protocol_name.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mpls_exp_bits_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-protocol" <<"[l2-protocol-name='" <<l2_protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_protocol_name.is_set || is_set(l2_protocol_name.yfilter)) leaf_name_data.push_back(l2_protocol_name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mpls_exp_bits_value.is_set || is_set(mpls_exp_bits_value.yfilter)) leaf_name_data.push_back(mpls_exp_bits_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-protocol-name")
    {
        l2_protocol_name = value;
        l2_protocol_name.value_namespace = name_space;
        l2_protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-exp-bits-value")
    {
        mpls_exp_bits_value = value;
        mpls_exp_bits_value.value_namespace = name_space;
        mpls_exp_bits_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-protocol-name")
    {
        l2_protocol_name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mpls-exp-bits-value")
    {
        mpls_exp_bits_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-protocol-name" || name == "mode" || name == "mpls-exp-bits-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::L2EthernetFeatures()
    :
    egress_filtering{YType::enumeration, "egress-filtering"},
    source_bypass_egress_filtering{YType::empty, "source-bypass-egress-filtering"}
{

    yang_name = "l2-ethernet-features"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(egress_filtering.yfilter)
	|| ydk::is_set(source_bypass_egress_filtering.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering.is_set || is_set(egress_filtering.yfilter)) leaf_name_data.push_back(egress_filtering.get_name_leafdata());
    if (source_bypass_egress_filtering.is_set || is_set(source_bypass_egress_filtering.yfilter)) leaf_name_data.push_back(source_bypass_egress_filtering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-filtering")
    {
        egress_filtering = value;
        egress_filtering.value_namespace = name_space;
        egress_filtering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-bypass-egress-filtering")
    {
        source_bypass_egress_filtering = value;
        source_bypass_egress_filtering.value_namespace = name_space;
        source_bypass_egress_filtering.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-filtering")
    {
        egress_filtering.yfilter = yfilter;
    }
    if(value_path == "source-bypass-egress-filtering")
    {
        source_bypass_egress_filtering.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-filtering" || name == "source-bypass-egress-filtering")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
	,acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Pac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>())
{
    qos->parent = this;

    yang_name = "pac"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:pac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>())
	,input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "pac"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_data() const
{
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Cac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>())
{
    qos->parent = this;

    yang_name = "cac"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:cac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>())
	,input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "cac"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_data() const
{
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Atm()
    :
    max_vpi_bits{YType::enumeration, "max-vpi-bits"},
    vc_class{YType::str, "vc-class"}
    	,
    pvps(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>())
	,pvcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>())
	,maximum_cell_packing_timers(nullptr) // presence node
	,vp_tunnels(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>())
{
    pvps->parent = this;
    pvcs->parent = this;
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
	|| (pvps !=  nullptr && pvps->has_data())
	|| (pvcs !=  nullptr && pvcs->has_data())
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_data())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_vpi_bits.yfilter)
	|| ydk::is_set(vc_class.yfilter)
	|| (pvps !=  nullptr && pvps->has_operation())
	|| (pvcs !=  nullptr && pvcs->has_operation())
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_operation())
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
    if(child_yang_name == "pvps")
    {
        if(pvps == nullptr)
        {
            pvps = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>();
        }
        return pvps;
    }

    if(child_yang_name == "pvcs")
    {
        if(pvcs == nullptr)
        {
            pvcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>();
        }
        return pvcs;
    }

    if(child_yang_name == "maximum-cell-packing-timers")
    {
        if(maximum_cell_packing_timers == nullptr)
        {
            maximum_cell_packing_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers>();
        }
        return maximum_cell_packing_timers;
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
    if(pvps != nullptr)
    {
        children["pvps"] = pvps;
    }

    if(pvcs != nullptr)
    {
        children["pvcs"] = pvcs;
    }

    if(maximum_cell_packing_timers != nullptr)
    {
        children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
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
    if(name == "pvps" || name == "pvcs" || name == "maximum-cell-packing-timers" || name == "vp-tunnels" || name == "max-vpi-bits" || name == "vc-class")
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
    test_mode{YType::enumeration, "test-mode"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"}
    	,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>())
	,cell_packing(nullptr) // presence node
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
	|| test_mode.is_set
	|| oam_segment_endpoint.is_set
	|| (shape !=  nullptr && shape->has_data())
	|| (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(oam_segment_endpoint.yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
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
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.yfilter)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
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
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
        oam_segment_endpoint.value_namespace = name_space;
        oam_segment_endpoint.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "cell-packing" || name == "vpi" || name == "enable" || name == "test-mode" || name == "oam-segment-endpoint")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::Shape()
    :
    type{YType::enumeration, "type"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    burst_size{YType::uint32, "burst-size"}
{

    yang_name = "shape"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_data() const
{
    return type.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| burst_size.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());

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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "burst-size")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::CellPacking()
    :
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"},
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"}
{

    yang_name = "cell-packing"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_data() const
{
    return maximum_cells_packed.is_set
	|| cell_packing_timer_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter);
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

    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());
    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());

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
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cells-packed" || name == "cell-packing-timer-id")
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
    vc_class{YType::str, "vc-class"},
    encapsulation{YType::enumeration, "encapsulation"},
    enable{YType::empty, "enable"},
    test_mode{YType::enumeration, "test-mode"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"}
    	,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>())
	,oam_emulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>())
	,cell_packing(nullptr) // presence node
{
    shape->parent = this;
    oam_emulation->parent = this;

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
	|| vc_class.is_set
	|| encapsulation.is_set
	|| enable.is_set
	|| test_mode.is_set
	|| oam_segment_endpoint.is_set
	|| (shape !=  nullptr && shape->has_data())
	|| (oam_emulation !=  nullptr && oam_emulation->has_data())
	|| (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(pv_ctype.yfilter)
	|| ydk::is_set(vc_class.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(oam_segment_endpoint.yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (oam_emulation !=  nullptr && oam_emulation->has_operation())
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
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
    if (vc_class.is_set || is_set(vc_class.yfilter)) leaf_name_data.push_back(vc_class.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.yfilter)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "oam-emulation")
    {
        if(oam_emulation == nullptr)
        {
            oam_emulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>();
        }
        return oam_emulation;
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(oam_emulation != nullptr)
    {
        children["oam-emulation"] = oam_emulation;
    }

    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
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
    if(value_path == "vc-class")
    {
        vc_class = value;
        vc_class.value_namespace = name_space;
        vc_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
        oam_segment_endpoint.value_namespace = name_space;
        oam_segment_endpoint.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vc-class")
    {
        vc_class.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "oam-emulation" || name == "cell-packing" || name == "vpi" || name == "vci" || name == "pv-ctype" || name == "vc-class" || name == "encapsulation" || name == "enable" || name == "test-mode" || name == "oam-segment-endpoint")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::Shape()
    :
    type{YType::enumeration, "type"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    burst_size{YType::uint32, "burst-size"}
{

    yang_name = "shape"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_data() const
{
    return type.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| burst_size.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());

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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "burst-size")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::OamEmulation()
    :
    enable{YType::empty, "enable"},
    ais_transmit_rate{YType::uint32, "ais-transmit-rate"}
{

    yang_name = "oam-emulation"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::~OamEmulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_data() const
{
    return enable.is_set
	|| ais_transmit_rate.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ais_transmit_rate.yfilter);
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

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ais_transmit_rate.is_set || is_set(ais_transmit_rate.yfilter)) leaf_name_data.push_back(ais_transmit_rate.get_name_leafdata());

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
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate = value;
        ais_transmit_rate.value_namespace = name_space;
        ais_transmit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "ais-transmit-rate")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::CellPacking()
    :
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"},
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"}
{

    yang_name = "cell-packing"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_data() const
{
    return maximum_cells_packed.is_set
	|| cell_packing_timer_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter);
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

    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());
    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());

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
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cells-packed" || name == "cell-packing-timer-id")
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
    enable_hierarchical_shaping{YType::empty, "enable-hierarchical-shaping"},
    enable{YType::empty, "enable"},
    disable_f4oam{YType::empty, "disable-f4oam"}
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
	|| enable_hierarchical_shaping.is_set
	|| enable.is_set
	|| disable_f4oam.is_set
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(enable_hierarchical_shaping.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable_f4oam.yfilter)
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
    if (enable_hierarchical_shaping.is_set || is_set(enable_hierarchical_shaping.yfilter)) leaf_name_data.push_back(enable_hierarchical_shaping.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable_f4oam.is_set || is_set(disable_f4oam.yfilter)) leaf_name_data.push_back(disable_f4oam.get_name_leafdata());

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
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping = value;
        enable_hierarchical_shaping.value_namespace = name_space;
        enable_hierarchical_shaping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam = value;
        disable_f4oam.value_namespace = name_space;
        disable_f4oam.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "vpi" || name == "enable-hierarchical-shaping" || name == "enable" || name == "disable-f4oam")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::Shape()
    :
    type{YType::enumeration, "type"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    burst_size{YType::uint32, "burst-size"}
{

    yang_name = "shape"; yang_parent_name = "vp-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_data() const
{
    return type.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| burst_size.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());

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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "burst-size")
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
    ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>())
	,ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "address-family"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::~AddressFamily()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_data() const
{
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
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
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
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
    if(name == "ipv6" || name == "ipv4")
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

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Ipv4()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    destination_address{YType::str, "destination-address"},
    fast_detect{YType::empty, "fast-detect"}
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
    return interval.is_set
	|| detection_multiplier.is_set
	|| destination_address.is_set
	|| fast_detect.is_set
	|| (echo !=  nullptr && echo->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
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

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());

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
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "timers" || name == "interval" || name == "detection-multiplier" || name == "destination-address" || name == "fast-detect")
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

InterfaceConfigurations::InterfaceConfiguration::Bundle::Bundle()
    :
    lacp_delay{YType::uint32, "lacp-delay"},
    shutdown{YType::empty, "shutdown"},
    wait_while{YType::uint32, "wait-while"}
    	,
    bundle_load_balancing(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>())
	,minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>())
	,maximum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>())
{
    bundle_load_balancing->parent = this;
    minimum_active->parent = this;
    maximum_active->parent = this;

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
	|| (minimum_active !=  nullptr && minimum_active->has_data())
	|| (maximum_active !=  nullptr && maximum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacp_delay.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(wait_while.yfilter)
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_operation())
	|| (minimum_active !=  nullptr && minimum_active->has_operation())
	|| (maximum_active !=  nullptr && maximum_active->has_operation());
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

    if(child_yang_name == "minimum-active")
    {
        if(minimum_active == nullptr)
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>();
        }
        return minimum_active;
    }

    if(child_yang_name == "maximum-active")
    {
        if(maximum_active == nullptr)
        {
            maximum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>();
        }
        return maximum_active;
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

    if(minimum_active != nullptr)
    {
        children["minimum-active"] = minimum_active;
    }

    if(maximum_active != nullptr)
    {
        children["maximum-active"] = maximum_active;
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
    if(name == "bundle-load-balancing" || name == "minimum-active" || name == "maximum-active" || name == "lacp-delay" || name == "shutdown" || name == "wait-while")
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
    min_bandwidth_range{YType::enumeration, "min-bandwidth-range"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "minimum-active"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_data() const
{
    return min_bandwidth_range.is_set
	|| bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_bandwidth_range.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
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

    if (min_bandwidth_range.is_set || is_set(min_bandwidth_range.yfilter)) leaf_name_data.push_back(min_bandwidth_range.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

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
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range = value;
        min_bandwidth_range.value_namespace = name_space;
        min_bandwidth_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-bandwidth-range" || name == "bandwidth")
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

InterfaceConfigurations::InterfaceConfiguration::Lacp::Lacp()
    :
    system_priority{YType::uint32, "system-priority"},
    period{YType::str, "period"},
    collector_max_delay{YType::uint32, "collector-max-delay"},
    lacp_nonrevertive{YType::empty, "lacp-nonrevertive"},
    mode{YType::enumeration, "mode"},
    fast_switchover{YType::empty, "fast-switchover"},
    suppress_flaps{YType::uint32, "suppress-flaps"},
    system_mac{YType::str, "system-mac"},
    period_short{YType::str, "period-short"},
    churn_logging{YType::enumeration, "churn-logging"}
    	,
    cisco_extensions(nullptr) // presence node
	,timeout(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>())
{
    timeout->parent = this;

    yang_name = "lacp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::~Lacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_data() const
{
    return system_priority.is_set
	|| period.is_set
	|| collector_max_delay.is_set
	|| lacp_nonrevertive.is_set
	|| mode.is_set
	|| fast_switchover.is_set
	|| suppress_flaps.is_set
	|| system_mac.is_set
	|| period_short.is_set
	|| churn_logging.is_set
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(fast_switchover.yfilter)
	|| ydk::is_set(suppress_flaps.yfilter)
	|| ydk::is_set(system_mac.yfilter)
	|| ydk::is_set(period_short.yfilter)
	|| ydk::is_set(churn_logging.yfilter)
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (fast_switchover.is_set || is_set(fast_switchover.yfilter)) leaf_name_data.push_back(fast_switchover.get_name_leafdata());
    if (suppress_flaps.is_set || is_set(suppress_flaps.yfilter)) leaf_name_data.push_back(suppress_flaps.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (period_short.is_set || is_set(period_short.yfilter)) leaf_name_data.push_back(period_short.get_name_leafdata());
    if (churn_logging.is_set || is_set(churn_logging.yfilter)) leaf_name_data.push_back(churn_logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-extensions")
    {
        if(cisco_extensions == nullptr)
        {
            cisco_extensions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions>();
        }
        return cisco_extensions;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_extensions != nullptr)
    {
        children["cisco-extensions"] = cisco_extensions;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover = value;
        fast_switchover.value_namespace = name_space;
        fast_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps = value;
        suppress_flaps.value_namespace = name_space;
        suppress_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-short")
    {
        period_short = value;
        period_short.value_namespace = name_space;
        period_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "churn-logging")
    {
        churn_logging = value;
        churn_logging.value_namespace = name_space;
        churn_logging.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover.yfilter = yfilter;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps.yfilter = yfilter;
    }
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
    if(value_path == "period-short")
    {
        period_short.yfilter = yfilter;
    }
    if(value_path == "churn-logging")
    {
        churn_logging.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-extensions" || name == "timeout" || name == "system-priority" || name == "period" || name == "collector-max-delay" || name == "lacp-nonrevertive" || name == "mode" || name == "fast-switchover" || name == "suppress-flaps" || name == "system-mac" || name == "period-short" || name == "churn-logging")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::CiscoExtensions()
    :
    cisco_ext{YType::empty, "cisco-ext"},
    cisco_ext_type{YType::enumeration, "cisco-ext-type"}
{

    yang_name = "cisco-extensions"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::~CiscoExtensions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_data() const
{
    return cisco_ext.is_set
	|| cisco_ext_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_ext.yfilter)
	|| ydk::is_set(cisco_ext_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extensions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_ext.is_set || is_set(cisco_ext.yfilter)) leaf_name_data.push_back(cisco_ext.get_name_leafdata());
    if (cisco_ext_type.is_set || is_set(cisco_ext_type.yfilter)) leaf_name_data.push_back(cisco_ext_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext = value;
        cisco_ext.value_namespace = name_space;
        cisco_ext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type = value;
        cisco_ext_type.value_namespace = name_space;
        cisco_ext_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext.yfilter = yfilter;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-ext" || name == "cisco-ext-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::Timeout()
    :
    rx_default{YType::uint32, "rx-default"},
    actor_churn{YType::uint32, "actor-churn"},
    partner_churn{YType::uint32, "partner-churn"}
{

    yang_name = "timeout"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::~Timeout()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_data() const
{
    return rx_default.is_set
	|| actor_churn.is_set
	|| partner_churn.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_default.yfilter)
	|| ydk::is_set(actor_churn.yfilter)
	|| ydk::is_set(partner_churn.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_default.is_set || is_set(rx_default.yfilter)) leaf_name_data.push_back(rx_default.get_name_leafdata());
    if (actor_churn.is_set || is_set(actor_churn.yfilter)) leaf_name_data.push_back(actor_churn.get_name_leafdata());
    if (partner_churn.is_set || is_set(partner_churn.yfilter)) leaf_name_data.push_back(partner_churn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-default")
    {
        rx_default = value;
        rx_default.value_namespace = name_space;
        rx_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn")
    {
        actor_churn = value;
        actor_churn.value_namespace = name_space;
        actor_churn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn")
    {
        partner_churn = value;
        partner_churn.value_namespace = name_space;
        partner_churn.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-default")
    {
        rx_default.yfilter = yfilter;
    }
    if(value_path == "actor-churn")
    {
        actor_churn.yfilter = yfilter;
    }
    if(value_path == "partner-churn")
    {
        partner_churn.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-default" || name == "actor-churn" || name == "partner-churn")
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

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Mlacp()
    :
    port_priority{YType::uint16, "port-priority"},
    recovery_delay{YType::uint32, "recovery-delay"},
    switchover_type{YType::enumeration, "switchover-type"},
    iccp_group{YType::uint32, "iccp-group"}
    	,
    maximize(nullptr) // presence node
{

    yang_name = "mlacp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::~Mlacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_data() const
{
    return port_priority.is_set
	|| recovery_delay.is_set
	|| switchover_type.is_set
	|| iccp_group.is_set
	|| (maximize !=  nullptr && maximize->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (maximize !=  nullptr && maximize->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:mlacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximize")
    {
        if(maximize == nullptr)
        {
            maximize = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize>();
        }
        return maximize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximize != nullptr)
    {
        children["maximize"] = maximize;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximize" || name == "port-priority" || name == "recovery-delay" || name == "switchover-type" || name == "iccp-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::Maximize()
    :
    maximize_by{YType::enumeration, "maximize-by"},
    link_threshold{YType::uint32, "link-threshold"},
    bandwidth_threshold{YType::uint32, "bandwidth-threshold"}
{

    yang_name = "maximize"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::~Maximize()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_data() const
{
    return maximize_by.is_set
	|| link_threshold.is_set
	|| bandwidth_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximize_by.yfilter)
	|| ydk::is_set(link_threshold.yfilter)
	|| ydk::is_set(bandwidth_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximize_by.is_set || is_set(maximize_by.yfilter)) leaf_name_data.push_back(maximize_by.get_name_leafdata());
    if (link_threshold.is_set || is_set(link_threshold.yfilter)) leaf_name_data.push_back(link_threshold.get_name_leafdata());
    if (bandwidth_threshold.is_set || is_set(bandwidth_threshold.yfilter)) leaf_name_data.push_back(bandwidth_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximize-by")
    {
        maximize_by = value;
        maximize_by.value_namespace = name_space;
        maximize_by.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-threshold")
    {
        link_threshold = value;
        link_threshold.value_namespace = name_space;
        link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold = value;
        bandwidth_threshold.value_namespace = name_space;
        bandwidth_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximize-by")
    {
        maximize_by.yfilter = yfilter;
    }
    if(value_path == "link-threshold")
    {
        link_threshold.yfilter = yfilter;
    }
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximize-by" || name == "link-threshold" || name == "bandwidth-threshold")
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

InterfaceConfigurations::InterfaceConfiguration::Optics::Optics()
    :
    optics_transmit_power{YType::int32, "optics-transmit-power"},
    optics_ots_channel_power_max_delta{YType::int32, "optics-ots-channel-power-max-delta"},
    optics_loopback{YType::enumeration, "optics-loopback"},
    optics_ots_osri{YType::boolean, "optics-ots-osri"},
    optics_ots_amplifier_gain_degrade_high_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-high-threshold"},
    optics_ots_rx_voa_attenuation{YType::int32, "optics-ots-rx-voa-attenuation"},
    optics_fec{YType::enumeration, "optics-fec"},
    optics_dgd_high_threshold{YType::int32, "optics-dgd-high-threshold"},
    optics_ots_amplifier_channel_power{YType::int32, "optics-ots-amplifier-channel-power"},
    optics_ots_amplifier_control_mode{YType::enumeration, "optics-ots-amplifier-control-mode"},
    optics_ots_amplifier_gain{YType::int32, "optics-ots-amplifier-gain"},
    optics_ots_amplifier_gain_range{YType::enumeration, "optics-ots-amplifier-gain-range"},
    optics_ots_safety_control_mode{YType::enumeration, "optics-ots-safety-control-mode"},
    optics_cd_min{YType::int32, "optics-cd-min"},
    optics_ots_tx_voa_attenuation{YType::int32, "optics-ots-tx-voa-attenuation"},
    optics_ots_amplifier_tilt{YType::int32, "optics-ots-amplifier-tilt"},
    optics_transmit_shutdown{YType::boolean, "optics-transmit-shutdown"},
    optics_description{YType::str, "optics-description"},
    optics_performance_monitoring{YType::boolean, "optics-performance-monitoring"},
    optics_cd_max{YType::int32, "optics-cd-max"},
    optics_lbc_high_threshold{YType::int32, "optics-lbc-high-threshold"},
    optics_cd_high_threshold{YType::int32, "optics-cd-high-threshold"},
    optics_osnr_low_threshold{YType::int32, "optics-osnr-low-threshold"},
    optics_ots_amplifier_gain_degrade_low_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-low-threshold"},
    optics_cd_low_threshold{YType::int32, "optics-cd-low-threshold"},
    breakout{YType::str, "Cisco-IOS-XR-optics-driver-cfg:breakout"}
    	,
    rx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>())
	,optics_network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>())
	,optics_dwdm_carrier(nullptr) // presence node
	,optics_lanes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>())
	,tx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>())
{
    rx_thresholds->parent = this;
    optics_network_srlgs->parent = this;
    optics_lanes->parent = this;
    tx_thresholds->parent = this;

    yang_name = "optics"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::~Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_data() const
{
    return optics_transmit_power.is_set
	|| optics_ots_channel_power_max_delta.is_set
	|| optics_loopback.is_set
	|| optics_ots_osri.is_set
	|| optics_ots_amplifier_gain_degrade_high_threshold.is_set
	|| optics_ots_rx_voa_attenuation.is_set
	|| optics_fec.is_set
	|| optics_dgd_high_threshold.is_set
	|| optics_ots_amplifier_channel_power.is_set
	|| optics_ots_amplifier_control_mode.is_set
	|| optics_ots_amplifier_gain.is_set
	|| optics_ots_amplifier_gain_range.is_set
	|| optics_ots_safety_control_mode.is_set
	|| optics_cd_min.is_set
	|| optics_ots_tx_voa_attenuation.is_set
	|| optics_ots_amplifier_tilt.is_set
	|| optics_transmit_shutdown.is_set
	|| optics_description.is_set
	|| optics_performance_monitoring.is_set
	|| optics_cd_max.is_set
	|| optics_lbc_high_threshold.is_set
	|| optics_cd_high_threshold.is_set
	|| optics_osnr_low_threshold.is_set
	|| optics_ots_amplifier_gain_degrade_low_threshold.is_set
	|| optics_cd_low_threshold.is_set
	|| breakout.is_set
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_data())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_data())
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optics_transmit_power.yfilter)
	|| ydk::is_set(optics_ots_channel_power_max_delta.yfilter)
	|| ydk::is_set(optics_loopback.yfilter)
	|| ydk::is_set(optics_ots_osri.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_degrade_high_threshold.yfilter)
	|| ydk::is_set(optics_ots_rx_voa_attenuation.yfilter)
	|| ydk::is_set(optics_fec.yfilter)
	|| ydk::is_set(optics_dgd_high_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_channel_power.yfilter)
	|| ydk::is_set(optics_ots_amplifier_control_mode.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_range.yfilter)
	|| ydk::is_set(optics_ots_safety_control_mode.yfilter)
	|| ydk::is_set(optics_cd_min.yfilter)
	|| ydk::is_set(optics_ots_tx_voa_attenuation.yfilter)
	|| ydk::is_set(optics_ots_amplifier_tilt.yfilter)
	|| ydk::is_set(optics_transmit_shutdown.yfilter)
	|| ydk::is_set(optics_description.yfilter)
	|| ydk::is_set(optics_performance_monitoring.yfilter)
	|| ydk::is_set(optics_cd_max.yfilter)
	|| ydk::is_set(optics_lbc_high_threshold.yfilter)
	|| ydk::is_set(optics_cd_high_threshold.yfilter)
	|| ydk::is_set(optics_osnr_low_threshold.yfilter)
	|| ydk::is_set(optics_ots_amplifier_gain_degrade_low_threshold.yfilter)
	|| ydk::is_set(optics_cd_low_threshold.yfilter)
	|| ydk::is_set(breakout.yfilter)
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_operation())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_operation())
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-cfg:optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_transmit_power.is_set || is_set(optics_transmit_power.yfilter)) leaf_name_data.push_back(optics_transmit_power.get_name_leafdata());
    if (optics_ots_channel_power_max_delta.is_set || is_set(optics_ots_channel_power_max_delta.yfilter)) leaf_name_data.push_back(optics_ots_channel_power_max_delta.get_name_leafdata());
    if (optics_loopback.is_set || is_set(optics_loopback.yfilter)) leaf_name_data.push_back(optics_loopback.get_name_leafdata());
    if (optics_ots_osri.is_set || is_set(optics_ots_osri.yfilter)) leaf_name_data.push_back(optics_ots_osri.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_high_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_high_threshold.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_high_threshold.get_name_leafdata());
    if (optics_ots_rx_voa_attenuation.is_set || is_set(optics_ots_rx_voa_attenuation.yfilter)) leaf_name_data.push_back(optics_ots_rx_voa_attenuation.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.yfilter)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (optics_dgd_high_threshold.is_set || is_set(optics_dgd_high_threshold.yfilter)) leaf_name_data.push_back(optics_dgd_high_threshold.get_name_leafdata());
    if (optics_ots_amplifier_channel_power.is_set || is_set(optics_ots_amplifier_channel_power.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_channel_power.get_name_leafdata());
    if (optics_ots_amplifier_control_mode.is_set || is_set(optics_ots_amplifier_control_mode.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_control_mode.get_name_leafdata());
    if (optics_ots_amplifier_gain.is_set || is_set(optics_ots_amplifier_gain.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain.get_name_leafdata());
    if (optics_ots_amplifier_gain_range.is_set || is_set(optics_ots_amplifier_gain_range.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_range.get_name_leafdata());
    if (optics_ots_safety_control_mode.is_set || is_set(optics_ots_safety_control_mode.yfilter)) leaf_name_data.push_back(optics_ots_safety_control_mode.get_name_leafdata());
    if (optics_cd_min.is_set || is_set(optics_cd_min.yfilter)) leaf_name_data.push_back(optics_cd_min.get_name_leafdata());
    if (optics_ots_tx_voa_attenuation.is_set || is_set(optics_ots_tx_voa_attenuation.yfilter)) leaf_name_data.push_back(optics_ots_tx_voa_attenuation.get_name_leafdata());
    if (optics_ots_amplifier_tilt.is_set || is_set(optics_ots_amplifier_tilt.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_tilt.get_name_leafdata());
    if (optics_transmit_shutdown.is_set || is_set(optics_transmit_shutdown.yfilter)) leaf_name_data.push_back(optics_transmit_shutdown.get_name_leafdata());
    if (optics_description.is_set || is_set(optics_description.yfilter)) leaf_name_data.push_back(optics_description.get_name_leafdata());
    if (optics_performance_monitoring.is_set || is_set(optics_performance_monitoring.yfilter)) leaf_name_data.push_back(optics_performance_monitoring.get_name_leafdata());
    if (optics_cd_max.is_set || is_set(optics_cd_max.yfilter)) leaf_name_data.push_back(optics_cd_max.get_name_leafdata());
    if (optics_lbc_high_threshold.is_set || is_set(optics_lbc_high_threshold.yfilter)) leaf_name_data.push_back(optics_lbc_high_threshold.get_name_leafdata());
    if (optics_cd_high_threshold.is_set || is_set(optics_cd_high_threshold.yfilter)) leaf_name_data.push_back(optics_cd_high_threshold.get_name_leafdata());
    if (optics_osnr_low_threshold.is_set || is_set(optics_osnr_low_threshold.yfilter)) leaf_name_data.push_back(optics_osnr_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_low_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_low_threshold.yfilter)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_low_threshold.get_name_leafdata());
    if (optics_cd_low_threshold.is_set || is_set(optics_cd_low_threshold.yfilter)) leaf_name_data.push_back(optics_cd_low_threshold.get_name_leafdata());
    if (breakout.is_set || is_set(breakout.yfilter)) leaf_name_data.push_back(breakout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-thresholds")
    {
        if(rx_thresholds == nullptr)
        {
            rx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>();
        }
        return rx_thresholds;
    }

    if(child_yang_name == "optics-network-srlgs")
    {
        if(optics_network_srlgs == nullptr)
        {
            optics_network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>();
        }
        return optics_network_srlgs;
    }

    if(child_yang_name == "optics-dwdm-carrier")
    {
        if(optics_dwdm_carrier == nullptr)
        {
            optics_dwdm_carrier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier>();
        }
        return optics_dwdm_carrier;
    }

    if(child_yang_name == "optics-lanes")
    {
        if(optics_lanes == nullptr)
        {
            optics_lanes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>();
        }
        return optics_lanes;
    }

    if(child_yang_name == "tx-thresholds")
    {
        if(tx_thresholds == nullptr)
        {
            tx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>();
        }
        return tx_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx_thresholds != nullptr)
    {
        children["rx-thresholds"] = rx_thresholds;
    }

    if(optics_network_srlgs != nullptr)
    {
        children["optics-network-srlgs"] = optics_network_srlgs;
    }

    if(optics_dwdm_carrier != nullptr)
    {
        children["optics-dwdm-carrier"] = optics_dwdm_carrier;
    }

    if(optics_lanes != nullptr)
    {
        children["optics-lanes"] = optics_lanes;
    }

    if(tx_thresholds != nullptr)
    {
        children["tx-thresholds"] = tx_thresholds;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power = value;
        optics_transmit_power.value_namespace = name_space;
        optics_transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta = value;
        optics_ots_channel_power_max_delta.value_namespace = name_space;
        optics_ots_channel_power_max_delta.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback = value;
        optics_loopback.value_namespace = name_space;
        optics_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri = value;
        optics_ots_osri.value_namespace = name_space;
        optics_ots_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold = value;
        optics_ots_amplifier_gain_degrade_high_threshold.value_namespace = name_space;
        optics_ots_amplifier_gain_degrade_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation = value;
        optics_ots_rx_voa_attenuation.value_namespace = name_space;
        optics_ots_rx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
        optics_fec.value_namespace = name_space;
        optics_fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold = value;
        optics_dgd_high_threshold.value_namespace = name_space;
        optics_dgd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power = value;
        optics_ots_amplifier_channel_power.value_namespace = name_space;
        optics_ots_amplifier_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode = value;
        optics_ots_amplifier_control_mode.value_namespace = name_space;
        optics_ots_amplifier_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain = value;
        optics_ots_amplifier_gain.value_namespace = name_space;
        optics_ots_amplifier_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range = value;
        optics_ots_amplifier_gain_range.value_namespace = name_space;
        optics_ots_amplifier_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode = value;
        optics_ots_safety_control_mode.value_namespace = name_space;
        optics_ots_safety_control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min = value;
        optics_cd_min.value_namespace = name_space;
        optics_cd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation = value;
        optics_ots_tx_voa_attenuation.value_namespace = name_space;
        optics_ots_tx_voa_attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt = value;
        optics_ots_amplifier_tilt.value_namespace = name_space;
        optics_ots_amplifier_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown = value;
        optics_transmit_shutdown.value_namespace = name_space;
        optics_transmit_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-description")
    {
        optics_description = value;
        optics_description.value_namespace = name_space;
        optics_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring = value;
        optics_performance_monitoring.value_namespace = name_space;
        optics_performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max = value;
        optics_cd_max.value_namespace = name_space;
        optics_cd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold = value;
        optics_lbc_high_threshold.value_namespace = name_space;
        optics_lbc_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold = value;
        optics_cd_high_threshold.value_namespace = name_space;
        optics_cd_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold = value;
        optics_osnr_low_threshold.value_namespace = name_space;
        optics_osnr_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold = value;
        optics_ots_amplifier_gain_degrade_low_threshold.value_namespace = name_space;
        optics_ots_amplifier_gain_degrade_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold = value;
        optics_cd_low_threshold.value_namespace = name_space;
        optics_cd_low_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-optics-driver-cfg:breakout")
    {
        breakout = value;
        breakout.value_namespace = name_space;
        breakout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power.yfilter = yfilter;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta.yfilter = yfilter;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback.yfilter = yfilter;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "optics-fec")
    {
        optics_fec.yfilter = yfilter;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range.yfilter = yfilter;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode.yfilter = yfilter;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min.yfilter = yfilter;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt.yfilter = yfilter;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown.yfilter = yfilter;
    }
    if(value_path == "optics-description")
    {
        optics_description.yfilter = yfilter;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max.yfilter = yfilter;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold.yfilter = yfilter;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold.yfilter = yfilter;
    }
    if(value_path == "breakout")
    {
        breakout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-thresholds" || name == "optics-network-srlgs" || name == "optics-dwdm-carrier" || name == "optics-lanes" || name == "tx-thresholds" || name == "optics-transmit-power" || name == "optics-ots-channel-power-max-delta" || name == "optics-loopback" || name == "optics-ots-osri" || name == "optics-ots-amplifier-gain-degrade-high-threshold" || name == "optics-ots-rx-voa-attenuation" || name == "optics-fec" || name == "optics-dgd-high-threshold" || name == "optics-ots-amplifier-channel-power" || name == "optics-ots-amplifier-control-mode" || name == "optics-ots-amplifier-gain" || name == "optics-ots-amplifier-gain-range" || name == "optics-ots-safety-control-mode" || name == "optics-cd-min" || name == "optics-ots-tx-voa-attenuation" || name == "optics-ots-amplifier-tilt" || name == "optics-transmit-shutdown" || name == "optics-description" || name == "optics-performance-monitoring" || name == "optics-cd-max" || name == "optics-lbc-high-threshold" || name == "optics-cd-high-threshold" || name == "optics-osnr-low-threshold" || name == "optics-ots-amplifier-gain-degrade-low-threshold" || name == "optics-cd-low-threshold" || name == "breakout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThresholds()
{

    yang_name = "rx-thresholds"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::~RxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_data() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_operation() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-threshold")
    {
        for(auto const & c : rx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold>();
        c->parent = this;
        rx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::RxThreshold()
    :
    rx_threshold_type{YType::enumeration, "rx-threshold-type"},
    rx_threshold{YType::int32, "rx-threshold"}
{

    yang_name = "rx-threshold"; yang_parent_name = "rx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::~RxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_data() const
{
    return rx_threshold_type.is_set
	|| rx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_threshold_type.yfilter)
	|| ydk::is_set(rx_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-threshold" <<"[rx-threshold-type='" <<rx_threshold_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_threshold_type.is_set || is_set(rx_threshold_type.yfilter)) leaf_name_data.push_back(rx_threshold_type.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type = value;
        rx_threshold_type.value_namespace = name_space;
        rx_threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-threshold-type" || name == "rx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlgs()
{

    yang_name = "optics-network-srlgs"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::~OpticsNetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-network-srlg")
    {
        for(auto const & c : optics_network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg>();
        c->parent = this;
        optics_network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::OpticsNetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "optics-network-srlg"; yang_parent_name = "optics-network-srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::~OpticsNetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_operation() const
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

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlg" <<"[set-id='" <<set_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_name_leaf_data() const
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::OpticsDwdmCarrier()
    :
    grid_type{YType::enumeration, "grid-type"},
    param_type{YType::enumeration, "param-type"},
    param_value{YType::uint32, "param-value"}
{

    yang_name = "optics-dwdm-carrier"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::~OpticsDwdmCarrier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_data() const
{
    return grid_type.is_set
	|| param_type.is_set
	|| param_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grid_type.yfilter)
	|| ydk::is_set(param_type.yfilter)
	|| ydk::is_set(param_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grid_type.is_set || is_set(grid_type.yfilter)) leaf_name_data.push_back(grid_type.get_name_leafdata());
    if (param_type.is_set || is_set(param_type.yfilter)) leaf_name_data.push_back(param_type.get_name_leafdata());
    if (param_value.is_set || is_set(param_value.yfilter)) leaf_name_data.push_back(param_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grid-type")
    {
        grid_type = value;
        grid_type.value_namespace = name_space;
        grid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-type")
    {
        param_type = value;
        param_type.value_namespace = name_space;
        param_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-value")
    {
        param_value = value;
        param_value.value_namespace = name_space;
        param_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grid-type")
    {
        grid_type.yfilter = yfilter;
    }
    if(value_path == "param-type")
    {
        param_type.yfilter = yfilter;
    }
    if(value_path == "param-value")
    {
        param_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grid-type" || name == "param-type" || name == "param-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLanes()
{

    yang_name = "optics-lanes"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::~OpticsLanes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_data() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_operation() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-lane")
    {
        for(auto const & c : optics_lane)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane>();
        c->parent = this;
        optics_lane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : optics_lane)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-lane")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::OpticsLane()
    :
    index_{YType::int32, "index"},
    description{YType::str, "description"}
{

    yang_name = "optics-lane"; yang_parent_name = "optics-lanes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_data() const
{
    return index_.is_set
	|| description.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "description")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThresholds()
{

    yang_name = "tx-thresholds"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::~TxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_data() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_operation() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tx-threshold")
    {
        for(auto const & c : tx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold>();
        c->parent = this;
        tx_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tx_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::TxThreshold()
    :
    tx_threshold_type{YType::enumeration, "tx-threshold-type"},
    tx_threshold{YType::int32, "tx-threshold"}
{

    yang_name = "tx-threshold"; yang_parent_name = "tx-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::~TxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_data() const
{
    return tx_threshold_type.is_set
	|| tx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_threshold_type.yfilter)
	|| ydk::is_set(tx_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-threshold" <<"[tx-threshold-type='" <<tx_threshold_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_threshold_type.is_set || is_set(tx_threshold_type.yfilter)) leaf_name_data.push_back(tx_threshold_type.get_name_leafdata());
    if (tx_threshold.is_set || is_set(tx_threshold.yfilter)) leaf_name_data.push_back(tx_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type = value;
        tx_threshold_type.value_namespace = name_space;
        tx_threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold = value;
        tx_threshold.value_namespace = name_space;
        tx_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type.yfilter = yfilter;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-threshold-type" || name == "tx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Otu()
    :
    gcc{YType::empty, "gcc"},
    sf{YType::uint32, "sf"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    sd{YType::uint32, "sd"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    loopback{YType::enumeration, "loopback"},
    fec{YType::enumeration, "fec"}
    	,
    otn_send_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>())
	,otn_send_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>())
	,otn_expected_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>())
	,proactive_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>())
	,network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>())
	,otn_send_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>())
	,otn_expected_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>())
	,otn_send_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>())
	,prbs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>())
	,otn_expected_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>())
	,otn_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>())
{
    otn_send_ttitcmos->parent = this;
    otn_send_ttitcmdapi->parent = this;
    otn_expected_ttisapi->parent = this;
    proactive_protection->parent = this;
    network_srlgs->parent = this;
    otn_send_tti->parent = this;
    otn_expected_ttitcmdapi->parent = this;
    otn_send_ttisapi->parent = this;
    prbs->parent = this;
    otn_expected_ttitcmos->parent = this;
    otn_expected_tti->parent = this;

    yang_name = "otu"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_data() const
{
    return gcc.is_set
	|| sf.is_set
	|| secondary_admin_state.is_set
	|| sd.is_set
	|| performance_monitoring.is_set
	|| loopback.is_set
	|| fec.is_set
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_data())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_data())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_data())
	|| (proactive_protection !=  nullptr && proactive_protection->has_data())
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_data())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_data())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_data())
	|| (prbs !=  nullptr && prbs->has_data())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_data())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcc.yfilter)
	|| ydk::is_set(sf.yfilter)
	|| ydk::is_set(secondary_admin_state.yfilter)
	|| ydk::is_set(sd.yfilter)
	|| ydk::is_set(performance_monitoring.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(fec.yfilter)
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_operation())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_operation())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_operation())
	|| (proactive_protection !=  nullptr && proactive_protection->has_operation())
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_operation())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_operation())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_operation())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-cfg:otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcc.is_set || is_set(gcc.yfilter)) leaf_name_data.push_back(gcc.get_name_leafdata());
    if (sf.is_set || is_set(sf.yfilter)) leaf_name_data.push_back(sf.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.yfilter)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (sd.is_set || is_set(sd.yfilter)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.yfilter)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-send-ttitcmos")
    {
        if(otn_send_ttitcmos == nullptr)
        {
            otn_send_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>();
        }
        return otn_send_ttitcmos;
    }

    if(child_yang_name == "otn-send-ttitcmdapi")
    {
        if(otn_send_ttitcmdapi == nullptr)
        {
            otn_send_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>();
        }
        return otn_send_ttitcmdapi;
    }

    if(child_yang_name == "otn-expected-ttisapi")
    {
        if(otn_expected_ttisapi == nullptr)
        {
            otn_expected_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>();
        }
        return otn_expected_ttisapi;
    }

    if(child_yang_name == "proactive-protection")
    {
        if(proactive_protection == nullptr)
        {
            proactive_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>();
        }
        return proactive_protection;
    }

    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "otn-send-tti")
    {
        if(otn_send_tti == nullptr)
        {
            otn_send_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>();
        }
        return otn_send_tti;
    }

    if(child_yang_name == "otn-expected-ttitcmdapi")
    {
        if(otn_expected_ttitcmdapi == nullptr)
        {
            otn_expected_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>();
        }
        return otn_expected_ttitcmdapi;
    }

    if(child_yang_name == "otn-send-ttisapi")
    {
        if(otn_send_ttisapi == nullptr)
        {
            otn_send_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>();
        }
        return otn_send_ttisapi;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "otn-expected-ttitcmos")
    {
        if(otn_expected_ttitcmos == nullptr)
        {
            otn_expected_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>();
        }
        return otn_expected_ttitcmos;
    }

    if(child_yang_name == "otn-expected-tti")
    {
        if(otn_expected_tti == nullptr)
        {
            otn_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>();
        }
        return otn_expected_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn_send_ttitcmos != nullptr)
    {
        children["otn-send-ttitcmos"] = otn_send_ttitcmos;
    }

    if(otn_send_ttitcmdapi != nullptr)
    {
        children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
    }

    if(otn_expected_ttisapi != nullptr)
    {
        children["otn-expected-ttisapi"] = otn_expected_ttisapi;
    }

    if(proactive_protection != nullptr)
    {
        children["proactive-protection"] = proactive_protection;
    }

    if(network_srlgs != nullptr)
    {
        children["network-srlgs"] = network_srlgs;
    }

    if(otn_send_tti != nullptr)
    {
        children["otn-send-tti"] = otn_send_tti;
    }

    if(otn_expected_ttitcmdapi != nullptr)
    {
        children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
    }

    if(otn_send_ttisapi != nullptr)
    {
        children["otn-send-ttisapi"] = otn_send_ttisapi;
    }

    if(prbs != nullptr)
    {
        children["prbs"] = prbs;
    }

    if(otn_expected_ttitcmos != nullptr)
    {
        children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
    }

    if(otn_expected_tti != nullptr)
    {
        children["otn-expected-tti"] = otn_expected_tti;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcc")
    {
        gcc = value;
        gcc.value_namespace = name_space;
        gcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf")
    {
        sf = value;
        sf.value_namespace = name_space;
        sf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
        secondary_admin_state.value_namespace = name_space;
        secondary_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd")
    {
        sd = value;
        sd.value_namespace = name_space;
        sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
        performance_monitoring.value_namespace = name_space;
        performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcc")
    {
        gcc.yfilter = yfilter;
    }
    if(value_path == "sf")
    {
        sf.yfilter = yfilter;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state.yfilter = yfilter;
    }
    if(value_path == "sd")
    {
        sd.yfilter = yfilter;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-send-ttitcmos" || name == "otn-send-ttitcmdapi" || name == "otn-expected-ttisapi" || name == "proactive-protection" || name == "network-srlgs" || name == "otn-send-tti" || name == "otn-expected-ttitcmdapi" || name == "otn-send-ttisapi" || name == "prbs" || name == "otn-expected-ttitcmos" || name == "otn-expected-tti" || name == "gcc" || name == "sf" || name == "secondary-admin-state" || name == "sd" || name == "performance-monitoring" || name == "loopback" || name == "fec")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::OtnSendTtitcmos()
    :
    string_type{YType::enumeration, "string-type"},
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"}
{

    yang_name = "otn-send-ttitcmos"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::~OtnSendTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_data() const
{
    return string_type.is_set
	|| osascii_string.is_set
	|| oshex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(osascii_string.yfilter)
	|| ydk::is_set(oshex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (osascii_string.is_set || is_set(osascii_string.yfilter)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.yfilter)) leaf_name_data.push_back(oshex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osascii-string")
    {
        osascii_string = value;
        osascii_string.value_namespace = name_space;
        osascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
        oshex_string.value_namespace = name_space;
        oshex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "osascii-string")
    {
        osascii_string.yfilter = yfilter;
    }
    if(value_path == "oshex-string")
    {
        oshex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "osascii-string" || name == "oshex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::OtnSendTtitcmdapi()
    :
    string_type{YType::enumeration, "string-type"},
    dapi_ascii_string{YType::str, "dapi-ascii-string"}
{

    yang_name = "otn-send-ttitcmdapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::~OtnSendTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_data() const
{
    return string_type.is_set
	|| dapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(dapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmdapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.yfilter)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
        dapi_ascii_string.value_namespace = name_space;
        dapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "dapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::OtnExpectedTtisapi()
    :
    string_type{YType::enumeration, "string-type"},
    sapi_ascii_string{YType::str, "sapi-ascii-string"}
{

    yang_name = "otn-expected-ttisapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::~OtnExpectedTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_data() const
{
    return string_type.is_set
	|| sapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(sapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttisapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.yfilter)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
        sapi_ascii_string.value_namespace = name_space;
        sapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "sapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::ProactiveProtection()
    :
    status{YType::empty, "status"}
    	,
    trigger_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>())
	,revert_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>())
	,trigger_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>())
	,revert_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>())
{
    trigger_threshold->parent = this;
    revert_window->parent = this;
    trigger_window->parent = this;
    revert_threshold->parent = this;

    yang_name = "proactive-protection"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::~ProactiveProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_data() const
{
    return status.is_set
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data())
	|| (revert_threshold !=  nullptr && revert_threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation())
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>();
        }
        return revert_window;
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>();
        }
        return trigger_window;
    }

    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>();
        }
        return revert_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger_threshold != nullptr)
    {
        children["trigger-threshold"] = trigger_threshold;
    }

    if(revert_window != nullptr)
    {
        children["revert-window"] = revert_window;
    }

    if(trigger_window != nullptr)
    {
        children["trigger-window"] = trigger_window;
    }

    if(revert_threshold != nullptr)
    {
        children["revert-threshold"] = revert_threshold;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-threshold" || name == "revert-window" || name == "trigger-window" || name == "revert-threshold" || name == "status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::TriggerThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    power{YType::uint32, "power"},
    enable{YType::empty, "enable"}
{

    yang_name = "trigger-threshold"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_data() const
{
    return coefficient.is_set
	|| power.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coefficient.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.yfilter)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
        coefficient.value_namespace = name_space;
        coefficient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coefficient")
    {
        coefficient.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coefficient" || name == "power" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::RevertWindow()
    :
    value_{YType::uint32, "value"},
    enable{YType::empty, "enable"}
{

    yang_name = "revert-window"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_data() const
{
    return value_.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::TriggerWindow()
    :
    value_{YType::uint32, "value"},
    enable{YType::empty, "enable"}
{

    yang_name = "trigger-window"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_data() const
{
    return value_.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::RevertThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    power{YType::uint32, "power"},
    enable{YType::empty, "enable"}
{

    yang_name = "revert-threshold"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_data() const
{
    return coefficient.is_set
	|| power.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coefficient.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.yfilter)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
        coefficient.value_namespace = name_space;
        coefficient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coefficient")
    {
        coefficient.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coefficient" || name == "power" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlgs()
{

    yang_name = "network-srlgs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
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

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_operation() const
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

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_name_leaf_data() const
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::OtnSendTti()
    :
    string_type{YType::enumeration, "string-type"},
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otn-send-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::~OtnSendTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_data() const
{
    return string_type.is_set
	|| full_ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(full_ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (full_ascii_string.is_set || is_set(full_ascii_string.yfilter)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
        full_ascii_string.value_namespace = name_space;
        full_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "full-ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::OtnExpectedTtitcmdapi()
    :
    string_type{YType::enumeration, "string-type"},
    dapi_ascii_string{YType::str, "dapi-ascii-string"}
{

    yang_name = "otn-expected-ttitcmdapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::~OtnExpectedTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_data() const
{
    return string_type.is_set
	|| dapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(dapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmdapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.yfilter)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
        dapi_ascii_string.value_namespace = name_space;
        dapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "dapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::OtnSendTtisapi()
    :
    string_type{YType::enumeration, "string-type"},
    sapi_ascii_string{YType::str, "sapi-ascii-string"}
{

    yang_name = "otn-send-ttisapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::~OtnSendTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_data() const
{
    return string_type.is_set
	|| sapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(sapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttisapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.yfilter)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
        sapi_ascii_string.value_namespace = name_space;
        sapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "sapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::Prbs()
    :
    mode_value{YType::enumeration, "mode-value"},
    patternvalue{YType::enumeration, "patternvalue"}
{

    yang_name = "prbs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_data() const
{
    return mode_value.is_set
	|| patternvalue.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_value.yfilter)
	|| ydk::is_set(patternvalue.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_value.is_set || is_set(mode_value.yfilter)) leaf_name_data.push_back(mode_value.get_name_leafdata());
    if (patternvalue.is_set || is_set(patternvalue.yfilter)) leaf_name_data.push_back(patternvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-value")
    {
        mode_value = value;
        mode_value.value_namespace = name_space;
        mode_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "patternvalue")
    {
        patternvalue = value;
        patternvalue.value_namespace = name_space;
        patternvalue.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-value")
    {
        mode_value.yfilter = yfilter;
    }
    if(value_path == "patternvalue")
    {
        patternvalue.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-value" || name == "patternvalue")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::OtnExpectedTtitcmos()
    :
    string_type{YType::enumeration, "string-type"},
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"}
{

    yang_name = "otn-expected-ttitcmos"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::~OtnExpectedTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_data() const
{
    return string_type.is_set
	|| osascii_string.is_set
	|| oshex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(osascii_string.yfilter)
	|| ydk::is_set(oshex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (osascii_string.is_set || is_set(osascii_string.yfilter)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.yfilter)) leaf_name_data.push_back(oshex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osascii-string")
    {
        osascii_string = value;
        osascii_string.value_namespace = name_space;
        osascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
        oshex_string.value_namespace = name_space;
        oshex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "osascii-string")
    {
        osascii_string.yfilter = yfilter;
    }
    if(value_path == "oshex-string")
    {
        oshex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "osascii-string" || name == "oshex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::OtnExpectedTti()
    :
    string_type{YType::enumeration, "string-type"},
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otn-expected-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::~OtnExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_data() const
{
    return string_type.is_set
	|| full_ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(full_ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (full_ascii_string.is_set || is_set(full_ascii_string.yfilter)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
        full_ascii_string.value_namespace = name_space;
        full_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "full-ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Macsec()
    :
    macsec_service(nullptr) // presence node
	,eap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap>())
	,psk_key_chain(nullptr) // presence node
{
    eap->parent = this;

    yang_name = "macsec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::~Macsec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_data() const
{
    return (macsec_service !=  nullptr && macsec_service->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_service !=  nullptr && macsec_service->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-service")
    {
        if(macsec_service == nullptr)
        {
            macsec_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService>();
        }
        return macsec_service;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk-key-chain")
    {
        if(psk_key_chain == nullptr)
        {
            psk_key_chain = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain>();
        }
        return psk_key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_service != nullptr)
    {
        children["macsec-service"] = macsec_service;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(psk_key_chain != nullptr)
    {
        children["psk-key-chain"] = psk_key_chain;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-service" || name == "eap" || name == "psk-key-chain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::MacsecService()
    :
    decrypt_port{YType::str, "decrypt-port"},
    key_chain{YType::str, "key-chain"},
    policy{YType::str, "policy"}
{

    yang_name = "macsec-service"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::~MacsecService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_data() const
{
    return decrypt_port.is_set
	|| key_chain.is_set
	|| policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decrypt_port.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decrypt_port.is_set || is_set(decrypt_port.yfilter)) leaf_name_data.push_back(decrypt_port.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port = value;
        decrypt_port.value_namespace = name_space;
        decrypt_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decrypt-port" || name == "key-chain" || name == "policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::Eap()
    :
    eap_config{YType::str, "eap-config"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "eap"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::~Eap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_data() const
{
    return eap_config.is_set
	|| policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap_config.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap_config.is_set || is_set(eap_config.yfilter)) leaf_name_data.push_back(eap_config.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap-config")
    {
        eap_config = value;
        eap_config.value_namespace = name_space;
        eap_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap-config")
    {
        eap_config.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap-config" || name == "policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::PskKeyChain()
    :
    key_chain_name{YType::str, "key-chain-name"},
    policy_name{YType::str, "policy-name"},
    fallback_key_chain{YType::str, "fallback-key-chain"}
{

    yang_name = "psk-key-chain"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::~PskKeyChain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_data() const
{
    return key_chain_name.is_set
	|| policy_name.is_set
	|| fallback_key_chain.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(fallback_key_chain.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk-key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain_name.is_set || is_set(key_chain_name.yfilter)) leaf_name_data.push_back(key_chain_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (fallback_key_chain.is_set || is_set(fallback_key_chain.yfilter)) leaf_name_data.push_back(fallback_key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain-name")
    {
        key_chain_name = value;
        key_chain_name.value_namespace = name_space;
        key_chain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain = value;
        fallback_key_chain.value_namespace = name_space;
        fallback_key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain-name")
    {
        key_chain_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-name" || name == "policy-name" || name == "fallback-key-chain")
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

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopbacks()
{

    yang_name = "loopbacks"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::~Loopbacks()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_data() const
{
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_operation() const
{
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loopback")
    {
        for(auto const & c : loopback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback>();
        c->parent = this;
        loopback.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loopback)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::Loopback()
    :
    level{YType::uint32, "level"},
    loopback{YType::enumeration, "loopback"}
{

    yang_name = "loopback"; yang_parent_name = "loopbacks"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::~Loopback()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_data() const
{
    return level.is_set
	|| loopback.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::Ethernet()
    :
    duplex{YType::enumeration, "duplex"},
    auto_negotiation{YType::enumeration, "auto-negotiation"},
    flow_control{YType::enumeration, "flow-control"},
    forward_error_correction{YType::enumeration, "forward-error-correction"},
    priority_flow_control{YType::enumeration, "priority-flow-control"},
    loopback{YType::enumeration, "loopback"},
    speed{YType::enumeration, "speed"},
    inter_packet_gap{YType::enumeration, "inter-packet-gap"}
    	,
    signal_fail_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>())
	,optical_power_degrade(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::OpticalPowerDegrade>())
	,signal_degrade_bit_error_rate(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate>())
	,carrier_delay(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>())
{
    signal_fail_bit_error_rate->parent = this;
    optical_power_degrade->parent = this;
    signal_degrade_bit_error_rate->parent = this;
    carrier_delay->parent = this;

    yang_name = "ethernet"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::~Ethernet()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_data() const
{
    return duplex.is_set
	|| auto_negotiation.is_set
	|| flow_control.is_set
	|| forward_error_correction.is_set
	|| priority_flow_control.is_set
	|| loopback.is_set
	|| speed.is_set
	|| inter_packet_gap.is_set
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_data())
	|| (optical_power_degrade !=  nullptr && optical_power_degrade->has_data())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(auto_negotiation.yfilter)
	|| ydk::is_set(flow_control.yfilter)
	|| ydk::is_set(forward_error_correction.yfilter)
	|| ydk::is_set(priority_flow_control.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(inter_packet_gap.yfilter)
	|| (signal_fail_bit_error_rate !=  nullptr && signal_fail_bit_error_rate->has_operation())
	|| (optical_power_degrade !=  nullptr && optical_power_degrade->has_operation())
	|| (signal_degrade_bit_error_rate !=  nullptr && signal_degrade_bit_error_rate->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation());
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

    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (auto_negotiation.is_set || is_set(auto_negotiation.yfilter)) leaf_name_data.push_back(auto_negotiation.get_name_leafdata());
    if (flow_control.is_set || is_set(flow_control.yfilter)) leaf_name_data.push_back(flow_control.get_name_leafdata());
    if (forward_error_correction.is_set || is_set(forward_error_correction.yfilter)) leaf_name_data.push_back(forward_error_correction.get_name_leafdata());
    if (priority_flow_control.is_set || is_set(priority_flow_control.yfilter)) leaf_name_data.push_back(priority_flow_control.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (inter_packet_gap.is_set || is_set(inter_packet_gap.yfilter)) leaf_name_data.push_back(inter_packet_gap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signal-fail-bit-error-rate")
    {
        if(signal_fail_bit_error_rate == nullptr)
        {
            signal_fail_bit_error_rate = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate>();
        }
        return signal_fail_bit_error_rate;
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

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signal_fail_bit_error_rate != nullptr)
    {
        children["signal-fail-bit-error-rate"] = signal_fail_bit_error_rate;
    }

    if(optical_power_degrade != nullptr)
    {
        children["optical-power-degrade"] = optical_power_degrade;
    }

    if(signal_degrade_bit_error_rate != nullptr)
    {
        children["signal-degrade-bit-error-rate"] = signal_degrade_bit_error_rate;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-negotiation")
    {
        auto_negotiation = value;
        auto_negotiation.value_namespace = name_space;
        auto_negotiation.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "priority-flow-control")
    {
        priority_flow_control = value;
        priority_flow_control.value_namespace = name_space;
        priority_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-packet-gap")
    {
        inter_packet_gap = value;
        inter_packet_gap.value_namespace = name_space;
        inter_packet_gap.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "auto-negotiation")
    {
        auto_negotiation.yfilter = yfilter;
    }
    if(value_path == "flow-control")
    {
        flow_control.yfilter = yfilter;
    }
    if(value_path == "forward-error-correction")
    {
        forward_error_correction.yfilter = yfilter;
    }
    if(value_path == "priority-flow-control")
    {
        priority_flow_control.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "inter-packet-gap")
    {
        inter_packet_gap.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-fail-bit-error-rate" || name == "optical-power-degrade" || name == "signal-degrade-bit-error-rate" || name == "carrier-delay" || name == "duplex" || name == "auto-negotiation" || name == "flow-control" || name == "forward-error-correction" || name == "priority-flow-control" || name == "loopback" || name == "speed" || name == "inter-packet-gap")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::SignalFailBitErrorRate()
    :
    signal_remote_fault{YType::empty, "signal-remote-fault"},
    signal_fail_threshold{YType::uint32, "signal-fail-threshold"},
    signal_fail_report_disable{YType::empty, "signal-fail-report-disable"}
{

    yang_name = "signal-fail-bit-error-rate"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::~SignalFailBitErrorRate()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_data() const
{
    return signal_remote_fault.is_set
	|| signal_fail_threshold.is_set
	|| signal_fail_report_disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_remote_fault.yfilter)
	|| ydk::is_set(signal_fail_threshold.yfilter)
	|| ydk::is_set(signal_fail_report_disable.yfilter);
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

    if (signal_remote_fault.is_set || is_set(signal_remote_fault.yfilter)) leaf_name_data.push_back(signal_remote_fault.get_name_leafdata());
    if (signal_fail_threshold.is_set || is_set(signal_fail_threshold.yfilter)) leaf_name_data.push_back(signal_fail_threshold.get_name_leafdata());
    if (signal_fail_report_disable.is_set || is_set(signal_fail_report_disable.yfilter)) leaf_name_data.push_back(signal_fail_report_disable.get_name_leafdata());

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
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault = value;
        signal_remote_fault.value_namespace = name_space;
        signal_remote_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold = value;
        signal_fail_threshold.value_namespace = name_space;
        signal_fail_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail-report-disable")
    {
        signal_fail_report_disable = value;
        signal_fail_report_disable.value_namespace = name_space;
        signal_fail_report_disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault.yfilter = yfilter;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-fail-report-disable")
    {
        signal_fail_report_disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-remote-fault" || name == "signal-fail-threshold" || name == "signal-fail-report-disable")
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
    signal_degrade_threshold{YType::uint32, "signal-degrade-threshold"},
    signal_degrade_report{YType::empty, "signal-degrade-report"}
{

    yang_name = "signal-degrade-bit-error-rate"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::~SignalDegradeBitErrorRate()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_data() const
{
    return signal_degrade_threshold.is_set
	|| signal_degrade_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_degrade_threshold.yfilter)
	|| ydk::is_set(signal_degrade_report.yfilter);
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

    if (signal_degrade_threshold.is_set || is_set(signal_degrade_threshold.yfilter)) leaf_name_data.push_back(signal_degrade_threshold.get_name_leafdata());
    if (signal_degrade_report.is_set || is_set(signal_degrade_report.yfilter)) leaf_name_data.push_back(signal_degrade_report.get_name_leafdata());

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
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold = value;
        signal_degrade_threshold.value_namespace = name_space;
        signal_degrade_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-degrade-report")
    {
        signal_degrade_report = value;
        signal_degrade_report.value_namespace = name_space;
        signal_degrade_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-degrade-report")
    {
        signal_degrade_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-degrade-threshold" || name == "signal-degrade-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::CarrierDelay()
    :
    carrier_delay_up{YType::uint32, "carrier-delay-up"},
    carrier_delay_down{YType::uint32, "carrier-delay-down"}
{

    yang_name = "carrier-delay"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_data() const
{
    return carrier_delay_up.is_set
	|| carrier_delay_down.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(carrier_delay_up.yfilter)
	|| ydk::is_set(carrier_delay_down.yfilter);
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

    if (carrier_delay_up.is_set || is_set(carrier_delay_up.yfilter)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());
    if (carrier_delay_down.is_set || is_set(carrier_delay_down.yfilter)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());

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
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
        carrier_delay_up.value_namespace = name_space;
        carrier_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
        carrier_delay_down.value_namespace = name_space;
        carrier_delay_down.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up.yfilter = yfilter;
    }
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay-up" || name == "carrier-delay-down")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Dwdm()
    :
    enable_vtxp{YType::boolean, "enable-vtxp"},
    network_port_id{YType::str, "network-port-id"},
    transport_admin_state{YType::enumeration, "transport-admin-state"},
    laser{YType::empty, "laser"},
    transmit_power{YType::int32, "transmit-power"},
    rx_threshold{YType::int32, "rx-threshold"},
    network_connection_id{YType::str, "network-connection-id"},
    loopback{YType::enumeration, "loopback"}
    	,
    network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>())
	,g709(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>())
	,wavelength(nullptr) // presence node
{
    network_srlgs->parent = this;
    g709->parent = this;

    yang_name = "dwdm"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::~Dwdm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_data() const
{
    return enable_vtxp.is_set
	|| network_port_id.is_set
	|| transport_admin_state.is_set
	|| laser.is_set
	|| transmit_power.is_set
	|| rx_threshold.is_set
	|| network_connection_id.is_set
	|| loopback.is_set
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (g709 !=  nullptr && g709->has_data())
	|| (wavelength !=  nullptr && wavelength->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_vtxp.yfilter)
	|| ydk::is_set(network_port_id.yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
	|| ydk::is_set(laser.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(rx_threshold.yfilter)
	|| ydk::is_set(network_connection_id.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (g709 !=  nullptr && g709->has_operation())
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
    if (network_port_id.is_set || is_set(network_port_id.yfilter)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());
    if (laser.is_set || is_set(laser.yfilter)) leaf_name_data.push_back(laser.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());
    if (network_connection_id.is_set || is_set(network_connection_id.yfilter)) leaf_name_data.push_back(network_connection_id.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "g709")
    {
        if(g709 == nullptr)
        {
            g709 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>();
        }
        return g709;
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
    if(network_srlgs != nullptr)
    {
        children["network-srlgs"] = network_srlgs;
    }

    if(g709 != nullptr)
    {
        children["g709"] = g709;
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
    if(value_path == "network-port-id")
    {
        network_port_id = value;
        network_port_id.value_namespace = name_space;
        network_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser")
    {
        laser = value;
        laser.value_namespace = name_space;
        laser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id = value;
        network_connection_id.value_namespace = name_space;
        network_connection_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp.yfilter = yfilter;
    }
    if(value_path == "network-port-id")
    {
        network_port_id.yfilter = yfilter;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
    if(value_path == "laser")
    {
        laser.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlgs" || name == "g709" || name == "wavelength" || name == "enable-vtxp" || name == "network-port-id" || name == "transport-admin-state" || name == "laser" || name == "transmit-power" || name == "rx-threshold" || name == "network-connection-id" || name == "loopback")
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

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::G709()
    :
    proactive{YType::enumeration, "proactive"},
    bdi_to_gais{YType::empty, "bdi-to-gais"},
    tim_to_gais{YType::empty, "tim-to-gais"},
    proactive_logging_file{YType::str, "proactive-logging-file"},
    tti_processing{YType::empty, "tti-processing"},
    enable{YType::boolean, "enable"},
    framing{YType::enumeration, "framing"}
    	,
    odu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>())
	,otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>())
	,prbs(nullptr) // presence node
	,fec(nullptr) // presence node
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
    return proactive.is_set
	|| bdi_to_gais.is_set
	|| tim_to_gais.is_set
	|| proactive_logging_file.is_set
	|| tti_processing.is_set
	|| enable.is_set
	|| framing.is_set
	|| (odu !=  nullptr && odu->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (prbs !=  nullptr && prbs->has_data())
	|| (fec !=  nullptr && fec->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proactive.yfilter)
	|| ydk::is_set(bdi_to_gais.yfilter)
	|| ydk::is_set(tim_to_gais.yfilter)
	|| ydk::is_set(proactive_logging_file.yfilter)
	|| ydk::is_set(tti_processing.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (odu !=  nullptr && odu->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (fec !=  nullptr && fec->has_operation());
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

    if (proactive.is_set || is_set(proactive.yfilter)) leaf_name_data.push_back(proactive.get_name_leafdata());
    if (bdi_to_gais.is_set || is_set(bdi_to_gais.yfilter)) leaf_name_data.push_back(bdi_to_gais.get_name_leafdata());
    if (tim_to_gais.is_set || is_set(tim_to_gais.yfilter)) leaf_name_data.push_back(tim_to_gais.get_name_leafdata());
    if (proactive_logging_file.is_set || is_set(proactive_logging_file.yfilter)) leaf_name_data.push_back(proactive_logging_file.get_name_leafdata());
    if (tti_processing.is_set || is_set(tti_processing.yfilter)) leaf_name_data.push_back(tti_processing.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proactive")
    {
        proactive = value;
        proactive.value_namespace = name_space;
        proactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais = value;
        bdi_to_gais.value_namespace = name_space;
        bdi_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais = value;
        tim_to_gais.value_namespace = name_space;
        tim_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file = value;
        proactive_logging_file.value_namespace = name_space;
        proactive_logging_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-processing")
    {
        tti_processing = value;
        tti_processing.value_namespace = name_space;
        tti_processing.value_namespace_prefix = name_space_prefix;
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
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proactive")
    {
        proactive.yfilter = yfilter;
    }
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais.yfilter = yfilter;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais.yfilter = yfilter;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file.yfilter = yfilter;
    }
    if(value_path == "tti-processing")
    {
        tti_processing.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu" || name == "otu" || name == "prbs" || name == "fec" || name == "proactive" || name == "bdi-to-gais" || name == "tim-to-gais" || name == "proactive-logging-file" || name == "tti-processing" || name == "enable" || name == "framing")
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

